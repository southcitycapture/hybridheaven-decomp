#include "context.h"

typedef struct func_801CA874_Struct {
    u8 pad0[0x28];
    s16 unk28;
} func_801CA874_Struct;

extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_801CF64C[];
extern void func_801CAA20();
extern void func_8001A804();
extern void func_800058DC();

void func_801CA874(s32 arg0, func_801CA874_Struct **arg1) {
    u8 sp67;
    u8 i;
    func_801CA874_Struct *p;

    i = 0;
    do {
        func_80146208(arg0, &sp67, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x20, 0x40, 0, 0, 0, 0x228, i);
        func_80145348(arg0, 0xD, 0xD);
        i++;
    } while (i < 8);
    func_80146208(arg0, &sp67, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x10, 0x40, 0, 0, 0, 0x228, i);
    func_80145348(arg0, 0xD, 0xD);
    for (i = 0; i < 9; i++) {
        arg1[i]->unk28 = 0x100;
    }
    func_8001A804(0, D_801CF64C, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CAA20);
}
