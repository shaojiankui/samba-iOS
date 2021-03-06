/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_copychunk
#define _PIDL_HEADER_copychunk

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#ifndef _HEADER_copychunk
#define _HEADER_copychunk

#define STORAGE_OFFLOAD_TOKEN_TYPE_ZERO_DATA	( 0x00000001 )
#define OFFLOAD_READ_FLAG_FILE_TOO_SMALL	( 0x00000001 )
#define OFFLOAD_READ_FLAG_ALL_ZERO_BEYOND_RANGE	( 0x00000002 )
#define OFFLOAD_READ_FLAG_CANNOT_OFFLOAD_BEYOND_RANGE	( 0x00000004 )
struct req_resume_key_rsp {
	uint8_t resume_key[24];
	uint32_t context_len;
	uint8_t context[4];
}/* [public] */;

struct srv_copychunk {
	uint64_t source_off;
	uint64_t target_off;
	uint32_t length;
	uint32_t reserved;
};

struct srv_copychunk_copy {
	uint8_t source_key[24];
	uint32_t chunk_count;
	uint32_t reserved;
	struct srv_copychunk *chunks;
}/* [public] */;

struct srv_copychunk_rsp {
	uint32_t chunks_written;
	uint32_t chunk_bytes_written;
	uint32_t total_bytes_written;
}/* [public] */;

struct device_copy_offload_descriptor {
	uint32_t version;
	uint32_t size;
	uint32_t maximum_token_lifetime;
	uint32_t default_token_lifetime;
	uint64_t maximum_xfer_size;
	uint64_t optimal_xfer_count;
	uint32_t maximum_data_descriptors;
	uint32_t maximum_xfer_length_per_descriptor;
	uint32_t optimal_xfer_length_per_descriptor;
	uint16_t optimal_xfer_length_granularity;
	uint8_t reserved[2];
}/* [public] */;

struct storage_offload_token {
	uint32_t token_type;
	uint8_t reserved[2];
	uint16_t token_id_len;
	uint8_t *token;/* [size_is(token_id_len)] */
}/* [public] */;

struct fsctl_offload_read_input {
	uint32_t size;
	uint32_t flags;
	uint32_t token_time_to_live;
	uint32_t reserved;
	uint64_t file_offset;
	uint64_t length;
}/* [public] */;

struct fsctl_offload_read_output {
	uint32_t size;
	uint32_t flags;
	uint64_t xfer_length;
	uint8_t token[512];
}/* [public] */;

struct fsctl_offload_write_input {
	uint32_t size;
	uint32_t flags;
	uint64_t file_offset;
	uint64_t copy_length;
	uint64_t xfer_offset;
	uint8_t token[512];
}/* [public] */;

struct fsctl_offload_write_output {
	uint32_t size;
	uint32_t flags;
	uint64_t length_written;
}/* [public] */;

#endif /* _HEADER_copychunk */
#endif /* _PIDL_HEADER_copychunk */
