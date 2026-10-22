#include "context.h"

typedef struct func_80030C60_Struct {
    u8 pad[4];
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u8 padA[2];
    u32 baseAddress;
} func_80030C60_Struct;

extern func_80030C60_Struct *D_8004AB30[];

#define HW_REG(addr) (*(volatile u32 *)((addr) | 0xA0000000))

s32 func_80030C60(func_80030C60_Struct *pihandle, u32 devAddr, u32 *data) {
    s32 status;
    func_80030C60_Struct *curHandle;

    while (status = HW_REG(0x04600010), status & 3) {
        ;
    }

    if (D_8004AB30[pihandle->domain]->type != pihandle->type) {
        curHandle = D_8004AB30[pihandle->domain];
        if (pihandle->domain == 0) {
            if (curHandle->latency != pihandle->latency) {
                HW_REG(0x04600014) = pihandle->latency;
            }
            if (curHandle->pageSize != pihandle->pageSize) {
                HW_REG(0x0460001C) = pihandle->pageSize;
            }
            if (curHandle->relDuration != pihandle->relDuration) {
                HW_REG(0x04600020) = pihandle->relDuration;
            }
            if (curHandle->pulse != pihandle->pulse) {
                HW_REG(0x04600018) = pihandle->pulse;
            }
        } else {
            if (curHandle->latency != pihandle->latency) {
                HW_REG(0x04600024) = pihandle->latency;
            }
            if (curHandle->pageSize != pihandle->pageSize) {
                HW_REG(0x0460002C) = pihandle->pageSize;
            }
            if (curHandle->relDuration != pihandle->relDuration) {
                HW_REG(0x04600030) = pihandle->relDuration;
            }
            if (curHandle->pulse != pihandle->pulse) {
                HW_REG(0x04600028) = pihandle->pulse;
            }
        }
        curHandle->type = pihandle->type;
        curHandle->latency = pihandle->latency;
        curHandle->pageSize = pihandle->pageSize;
        curHandle->relDuration = pihandle->relDuration;
        curHandle->pulse = pihandle->pulse;
    }
    *data = HW_REG(pihandle->baseAddress | devAddr);
    return 0;
}
