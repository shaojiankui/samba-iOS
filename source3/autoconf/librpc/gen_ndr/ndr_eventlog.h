/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/eventlog.h"

#ifndef _HEADER_NDR_eventlog
#define _HEADER_NDR_eventlog

#define NDR_EVENTLOG_UUID "82273fdc-e32a-18c3-3f78-827929dc23ea"
#define NDR_EVENTLOG_VERSION 0.0
#define NDR_EVENTLOG_NAME "eventlog"
#define NDR_EVENTLOG_HELPSTRING "Event Logger"
extern const struct ndr_interface_table ndr_table_eventlog;
#define NDR_EVENTLOG_CLEAREVENTLOGW (0x00)

#define NDR_EVENTLOG_BACKUPEVENTLOGW (0x01)

#define NDR_EVENTLOG_CLOSEEVENTLOG (0x02)

#define NDR_EVENTLOG_DEREGISTEREVENTSOURCE (0x03)

#define NDR_EVENTLOG_GETNUMRECORDS (0x04)

#define NDR_EVENTLOG_GETOLDESTRECORD (0x05)

#define NDR_EVENTLOG_CHANGENOTIFY (0x06)

#define NDR_EVENTLOG_OPENEVENTLOGW (0x07)

#define NDR_EVENTLOG_REGISTEREVENTSOURCEW (0x08)

#define NDR_EVENTLOG_OPENBACKUPEVENTLOGW (0x09)

#define NDR_EVENTLOG_READEVENTLOGW (0x0a)

#define NDR_EVENTLOG_REPORTEVENTW (0x0b)

#define NDR_EVENTLOG_CLEAREVENTLOGA (0x0c)

#define NDR_EVENTLOG_BACKUPEVENTLOGA (0x0d)

#define NDR_EVENTLOG_OPENEVENTLOGA (0x0e)

#define NDR_EVENTLOG_REGISTEREVENTSOURCEA (0x0f)

#define NDR_EVENTLOG_OPENBACKUPEVENTLOGA (0x10)

#define NDR_EVENTLOG_READEVENTLOGA (0x11)

#define NDR_EVENTLOG_REPORTEVENTA (0x12)

#define NDR_EVENTLOG_REGISTERCLUSTERSVC (0x13)

#define NDR_EVENTLOG_DEREGISTERCLUSTERSVC (0x14)

#define NDR_EVENTLOG_WRITECLUSTEREVENTS (0x15)

#define NDR_EVENTLOG_GETLOGINFORMATION (0x16)

#define NDR_EVENTLOG_FLUSHEVENTLOG (0x17)

#define NDR_EVENTLOG_REPORTEVENTANDSOURCEW (0x18)

#define NDR_EVENTLOG_CALL_COUNT (25)
void ndr_print_eventlogReadFlags(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_eventlogEventTypes(struct ndr_push *ndr, int ndr_flags, enum eventlogEventTypes r);
enum ndr_err_code ndr_pull_eventlogEventTypes(struct ndr_pull *ndr, int ndr_flags, enum eventlogEventTypes *r);
void ndr_print_eventlogEventTypes(struct ndr_print *ndr, const char *name, enum eventlogEventTypes r);
void ndr_print_eventlog_OpenUnknown0(struct ndr_print *ndr, const char *name, const struct eventlog_OpenUnknown0 *r);
enum ndr_err_code ndr_push_eventlog_Record_tdb(struct ndr_push *ndr, int ndr_flags, const struct eventlog_Record_tdb *r);
enum ndr_err_code ndr_pull_eventlog_Record_tdb(struct ndr_pull *ndr, int ndr_flags, struct eventlog_Record_tdb *r);
void ndr_print_eventlog_Record_tdb(struct ndr_print *ndr, const char *name, const struct eventlog_Record_tdb *r);
void ndr_print_EVENTLOG_HEADER_FLAGS(struct ndr_print *ndr, const char *name, enum EVENTLOG_HEADER_FLAGS r);
enum ndr_err_code ndr_push_EVENTLOGHEADER(struct ndr_push *ndr, int ndr_flags, const struct EVENTLOGHEADER *r);
enum ndr_err_code ndr_pull_EVENTLOGHEADER(struct ndr_pull *ndr, int ndr_flags, struct EVENTLOGHEADER *r);
void ndr_print_EVENTLOGHEADER(struct ndr_print *ndr, const char *name, const struct EVENTLOGHEADER *r);
enum ndr_err_code ndr_push_EVENTLOGRECORD(struct ndr_push *ndr, int ndr_flags, const struct EVENTLOGRECORD *r);
enum ndr_err_code ndr_pull_EVENTLOGRECORD(struct ndr_pull *ndr, int ndr_flags, struct EVENTLOGRECORD *r);
void ndr_print_EVENTLOGRECORD(struct ndr_print *ndr, const char *name, const struct EVENTLOGRECORD *r);
size_t ndr_size_EVENTLOGRECORD(const struct EVENTLOGRECORD *r, int flags);
enum ndr_err_code ndr_push_EVENTLOGEOF(struct ndr_push *ndr, int ndr_flags, const struct EVENTLOGEOF *r);
enum ndr_err_code ndr_pull_EVENTLOGEOF(struct ndr_pull *ndr, int ndr_flags, struct EVENTLOGEOF *r);
void ndr_print_EVENTLOGEOF(struct ndr_print *ndr, const char *name, const struct EVENTLOGEOF *r);
enum ndr_err_code ndr_push_EVENTLOG_EVT_FILE(struct ndr_push *ndr, int ndr_flags, const struct EVENTLOG_EVT_FILE *r);
enum ndr_err_code ndr_pull_EVENTLOG_EVT_FILE(struct ndr_pull *ndr, int ndr_flags, struct EVENTLOG_EVT_FILE *r);
void ndr_print_EVENTLOG_EVT_FILE(struct ndr_print *ndr, const char *name, const struct EVENTLOG_EVT_FILE *r);
enum ndr_err_code ndr_push_EVENTLOG_FULL_INFORMATION(struct ndr_push *ndr, int ndr_flags, const struct EVENTLOG_FULL_INFORMATION *r);
enum ndr_err_code ndr_pull_EVENTLOG_FULL_INFORMATION(struct ndr_pull *ndr, int ndr_flags, struct EVENTLOG_FULL_INFORMATION *r);
void ndr_print_EVENTLOG_FULL_INFORMATION(struct ndr_print *ndr, const char *name, const struct EVENTLOG_FULL_INFORMATION *r);
void ndr_print_eventlog_ClearEventLogW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ClearEventLogW *r);
void ndr_print_eventlog_BackupEventLogW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_BackupEventLogW *r);
void ndr_print_eventlog_CloseEventLog(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_CloseEventLog *r);
void ndr_print_eventlog_DeregisterEventSource(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_DeregisterEventSource *r);
void ndr_print_eventlog_GetNumRecords(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_GetNumRecords *r);
void ndr_print_eventlog_GetOldestRecord(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_GetOldestRecord *r);
void ndr_print_eventlog_ChangeNotify(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ChangeNotify *r);
void ndr_print_eventlog_OpenEventLogW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_OpenEventLogW *r);
void ndr_print_eventlog_RegisterEventSourceW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_RegisterEventSourceW *r);
void ndr_print_eventlog_OpenBackupEventLogW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_OpenBackupEventLogW *r);
void ndr_print_eventlog_ReadEventLogW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ReadEventLogW *r);
void ndr_print_eventlog_ReportEventW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ReportEventW *r);
void ndr_print_eventlog_ClearEventLogA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ClearEventLogA *r);
void ndr_print_eventlog_BackupEventLogA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_BackupEventLogA *r);
void ndr_print_eventlog_OpenEventLogA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_OpenEventLogA *r);
void ndr_print_eventlog_RegisterEventSourceA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_RegisterEventSourceA *r);
void ndr_print_eventlog_OpenBackupEventLogA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_OpenBackupEventLogA *r);
void ndr_print_eventlog_ReadEventLogA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ReadEventLogA *r);
void ndr_print_eventlog_ReportEventA(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ReportEventA *r);
void ndr_print_eventlog_RegisterClusterSvc(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_RegisterClusterSvc *r);
void ndr_print_eventlog_DeregisterClusterSvc(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_DeregisterClusterSvc *r);
void ndr_print_eventlog_WriteClusterEvents(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_WriteClusterEvents *r);
void ndr_print_eventlog_GetLogInformation(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_GetLogInformation *r);
void ndr_print_eventlog_FlushEventLog(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_FlushEventLog *r);
void ndr_print_eventlog_ReportEventAndSourceW(struct ndr_print *ndr, const char *name, int flags, const struct eventlog_ReportEventAndSourceW *r);
#endif /* _HEADER_NDR_eventlog */