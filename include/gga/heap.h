#ifndef GGA_HEAP_H
#define GGA_HEAP_H

/* The heap (GGA src/heap.c): a first-fit allocator over one region, each allocation followed by
 * a 16-byte header on a doubly linked list between two sentinel headers (the region's first and
 * last 16 bytes). Allocations are 8-aligned, or 4 KB-aligned for the TLB pool.
 * From the Goemon's Great Adventure decomp, CC0-1.0,
 * https://github.com/PandaPandel/Goemons-Great-Adventure-Decomp (same studio, KCE Osaka, and engine).
 * Confirmed in HH by main/func_8001F204 (= GGA heapInit, matched from GGA's C).
 * HH addresses: gHeap = D_80091BC0, gHeapAlignMask = D_80047940; heapMemClear = func_8001F160,
 * heapMemCopy = func_8001F1D4, heapInit = func_8001F204, heapMalloc = func_8001F290,
 * heapMallocPage = func_8001F334, heapMallocTop = func_8001F364, heapRepair = func_8001F498,
 * heapFree = func_8001F540 (queue/gga_names.tsv). Types only: HH code still names symbols by address. */

#include "common.h"

typedef struct HeapBlock {
    /* 0x0 */ u32 addr; /* the allocation's start */
    /* 0x4 */ s32 size; /* its size, header included */
    /* 0x8 */ struct HeapBlock *prev;
    /* 0xC */ struct HeapBlock *next;
} HeapBlock; /* size 0x10 */

typedef struct Heap {
    /* 0x0 */ u32 base;
    /* 0x4 */ s32 size;
    /* 0x8 */ HeapBlock *head; /* the sentinel at base */
    /* 0xC */ HeapBlock *tail; /* the sentinel at base + size - 0x10 */
} Heap;

#endif
