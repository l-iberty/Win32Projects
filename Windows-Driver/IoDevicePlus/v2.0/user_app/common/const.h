#ifndef CONST_H
#define CONST_H

#include <Windows.h>

#define DEVICE_NAME		L"\\\\.\\symlink_iodevice_plus"

#define MEM_NAME_LEN	16

#define MAX_BUFFER_LEN	512
#define MEM_TAG			'MYTG'

// @param `Function` 0~0x7ff are reserved by Microsoft
#define DEVICE_SEND_DATA \
	(ULONG)CTL_CODE(FILE_DEVICE_UNKNOWN, \
					0x900, \
					METHOD_BUFFERED, \
					FILE_WRITE_DATA)

#define DEVICE_RECV_DATA \
	(ULONG)CTL_CODE(FILE_DEVICE_UNKNOWN, \
					0x901, \
					METHOD_BUFFERED, \
					FILE_READ_DATA | FILE_WRITE_DATA)

#define DEVICE_MEM_ALLOC \
	(ULONG)CTL_CODE(FILE_DEVICE_UNKNOWN, \
					0x902, \
					METHOD_BUFFERED, \
					FILE_WRITE_DATA)

#define DEVICE_MEM_FREE \
	(ULONG)CTL_CODE(FILE_DEVICE_UNKNOWN, \
					0x903, \
					METHOD_BUFFERED, \
					FILE_WRITE_DATA)

#define DEVICE_OPEN_MEM \
	(ULONG)CTL_CODE(FILE_DEVICE_UNKNOWN, \
					0x904, \
					METHOD_BUFFERED, \
					FILE_WRITE_DATA)

#endif // CONST_H
