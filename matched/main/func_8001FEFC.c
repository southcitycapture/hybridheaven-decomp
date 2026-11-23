#include "common.h"
extern u32 D_80047950;
extern u32 D_80047954;
struct func_80020078_Struct {
    u8 unk0;
    u8 pad[3];
    s32 unk4;
    void *unk8;
};
extern struct func_80020078_Struct D_80096020;
extern u8 D_80096950[];
extern void func_80026890(void *a0);
extern void func_800268C0(void *a0, void *a1);
extern s32 func_80028A10(s32);


typedef struct func_8001FEFC_Buf {
    struct func_8001FEFC_Buf *next;
    struct func_8001FEFC_Buf *prev;
    u32 startAddr;
    u32 lastFrame;
    char *ptr;
} func_8001FEFC_Buf;
extern void func_8002BFA0(void *, s32, s32, u32, void *, s32, void *);
extern u8 D_80096350[];

/* GGA: __amDma */
s32 func_8001FEFC(s32 addr, s32 len, void *state) {
    void *foundBuffer;
    s32 delta;
    s32 addrEnd;
    s32 buffEnd;
    func_8001FEFC_Buf *dmaPtr;
    func_8001FEFC_Buf *lastDmaPtr;

    lastDmaPtr = 0;
    dmaPtr = (func_8001FEFC_Buf *)D_80096020.unk4;
    addrEnd = addr + len;

    while (dmaPtr) {
        buffEnd = dmaPtr->startAddr + 0xA00;
        if (dmaPtr->startAddr > addr) {
            break;
        } else if (addrEnd <= buffEnd) {
            dmaPtr->lastFrame = D_80047950;
            foundBuffer = dmaPtr->ptr + addr - dmaPtr->startAddr;
            return func_80028A10((s32)foundBuffer);
        }
        lastDmaPtr = dmaPtr;
        dmaPtr = dmaPtr->next;
    }

    dmaPtr = D_80096020.unk8;
    D_80096020.unk8 = dmaPtr->next;
    func_80026890(dmaPtr);

    if (lastDmaPtr) {
        func_800268C0(dmaPtr, lastDmaPtr);
    } else if (D_80096020.unk4) {
        lastDmaPtr = (func_8001FEFC_Buf *)D_80096020.unk4;
        D_80096020.unk4 = (s32)dmaPtr;
        dmaPtr->next = lastDmaPtr;
        dmaPtr->prev = 0;
        lastDmaPtr->prev = dmaPtr;
    } else {
        D_80096020.unk4 = (s32)dmaPtr;
        dmaPtr->next = 0;
        dmaPtr->prev = 0;
    }

    foundBuffer = dmaPtr->ptr;
    delta = addr & 0x1;
    addr -= delta;
    dmaPtr->startAddr = addr;
    dmaPtr->lastFrame = D_80047950;
    func_8002BFA0(D_80096350 + D_80047954++ * 0x18, 0, 0, (u32)addr, foundBuffer, 0xA00, D_80096950);

    return func_80028A10((s32)foundBuffer) + delta;
}
