#ifndef xz_defs_h_
#define xz_defs_h_

#include <cstddef>
#include <cstdint>

const uint8_t xz_header_magic[6] = {0xFD, 0x37, 0x7A, 0x58, 0x5A, 0x00};
const uint8_t xz_footer_magic[2] = {0x59, 0x5A};

struct lzma2_stream
{

};

struct crc32_checksum
{
	uint8_t data[4];
};

struct xz_header
{
	uint8_t flags[2];
	crc32_checksum checksum;
};

struct xz_footer
{
	crc32_checksum checksum;
	uint32_t backward_size;
	uint8_t flags[2];
};

struct xz_block
{
	xz_block_header header;
	
	
}

struct xz_stream
{
	xz_header header;
	xz_block *blocks;
	xz_index *index;
	xz_footer footer;
};

struct xz_file
{
	xz_stream *streams;
	uint64_t num_streams;
};

#define xz_stream_flag_reserved_mask	0xF0
#define xz_stream_flag_check_mask		0x0F
#define xz_stream_flag_crc32			0x01
#define xz_stream_flag_crc64			0x04
#define xz_stream_flag_sha256			0x0A



#endif
