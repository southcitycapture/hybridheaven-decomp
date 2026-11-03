#ifndef GGA_FILE_H
#define GGA_FILE_H

/* The file loader (GGA src/file.c, src/fileres.c) on the "Nisitenma-Ichigo" file system: a queue
 * of load requests, each a list of (file, RAM) pairs, and a table of the files resident in RAM.
 * From the Goemon's Great Adventure decomp, CC0-1.0,
 * https://github.com/PandaPandel/Goemons-Great-Adventure-Decomp (same studio, KCE Osaka, and engine).
 * HH differences seen so far: 624 files (GGA 2576); fileLoad (main/func_8000469C) clears the busy
 * flag instead of restoring it. HH addresses: gFileRomTable = D_80038FE0, gFileRamRangeTable =
 * D_80037C5C, gFileLoaderBusy = D_8008DC18; romDecode = func_80003824, dmaReadRom = func_80001FE8.
 * Types only: HH code still names symbols by address (queue/gga_names.tsv maps the functions). */

#include "common.h"

#define FILELIST_LAST 0x40000000 /* in FileList.file: the list's last entry */

typedef struct FileList {
    /* 0x0 */ u32 file; /* the file number, | FILELIST_LAST on the last entry */
    /* 0x4 */ void *ram;
} FileList; /* size 0x8 */

typedef struct FileReq {
    /* 0x0 */ FileList *list;
    /* 0x4 */ u8 mode;
} FileReq; /* size 0x8 */

typedef struct FileTableHeader {
    /* 0x00 */ u8 magic[16]; /* "Nisitenma-Ichigo" */
    /* 0x10 */ u32 offsets[1]; /* the ROM start of file N is [N-1] (bit 31: compressed); one more than the files */
} FileTableHeader;

/* A resident file (fileres.c's table of 256). */
typedef struct ResEntry {
    /* 0x0 */ u16 file;
    /* 0x4 */ u32 addr;
    /* 0x8 */ u8 mode;
} ResEntry; /* size 0xC */

#define RES_TLB 0x40000000

#endif
