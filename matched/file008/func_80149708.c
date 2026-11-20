#include "common.h"
extern void func_80005700(s32);
extern s32 func_80126E88(s32);


typedef struct func_80149708_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    u8 unk90;
} func_80149708_Struct;

extern s32 D_801492C8(u8, void *);

void func_80149708(func_80149708_Struct *arg0, s32 arg1) {
    do {
        if (--arg0->unk3C != 0) {
            break;
        }
        func_80126E88(D_801492C8(arg0->unk90, arg0) & 0xFFFF);
        func_80005700((s32)arg0);
    } while (0);
}
