#!/bin/sh

if [ "$1" = "--full" ]; then
	FULL=1
	shift 1
else
	FULL=0
fi

ARGS="--outputdir $PIDL_OUTPUTDIR --header --ndr-parser --samba3-ndr-server --server --client --python --dcom-proxy --com-header $PIDL_ARGS --"
IDL_FILES="$*"

oldpwd=`pwd`
cd ${srcdir}

[ -d $PIDL_OUTPUTDIR ] || mkdir -p $PIDL_OUTPUTDIR || exit 1

PIDL_DIR=`dirname $PIDL`
PIDL_CMD="$PIDL $ARGS"

if [ $FULL = 1 ]; then
	echo "Rebuilding all idl files"
	$PIDL_CMD $IDL_FILES || exit 1
	exit 0
fi

##
## Find newer files rather than rebuild all of them. Also handle the case
## where the pidl compiler itself is newer.
##
PIDL_NEWEST=`find $PIDL_DIR -type f -print | xargs ls -rt | tail -1`
echo "jfyi: PIDL_NEWEST is $PIDL_NEWEST"

list=""
for f in ${IDL_FILES}; do
        b=`basename $f .idl`
	outfiles="$b.h ndr_${b}_c.c ndr_$b.h ndr_${b}_s.c srv_$b.c"
	outfiles="$outfiles ndr_$b.c ndr_${b}_c.h py_$b.c srv_$b.h"

	for o in $outfiles; do
	    [ -f $PIDL_OUTPUTDIR/$o ] || {
		list="$list $f"
		break
	    }
	    test "`find $f -newer $PIDL_OUTPUTDIR/$o`" != "" && {
		list="$list $f"
		break
	    }
	    test "`find $PIDL_NEWEST -newer $PIDL_OUTPUTDIR/$o`" != "" && {
		list="$list $f"
		break
	    }
	done
done

##
## generate the ndr stubs
##

if [ "x$list" != x ]; then
	# echo "${PIDL_CMD} ${list}"
	$PIDL_CMD $list || exit 1
fi

cd ${oldpwd}

exit 0
