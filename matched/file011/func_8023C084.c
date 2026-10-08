#include "common.h"

typedef struct func_8023C084_Struct_Sub {
    u8 pad0[0x28];
    s16 unk28;
} func_8023C084_Struct_Sub;

typedef struct func_8023C084_Struct {
    u8 pad0[0x24];
    func_8023C084_Struct_Sub *unk24;
    u8 pad1[0x14];
    s16 unk3C;
} func_8023C084_Struct;

extern void func_80116E80(s32);
extern void func_80145348(void *, s32, s32);
extern void func_80146208(void *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_8023C134(void);

void func_8023C084(void *arg0, s32 arg1) {
    u8 sp47;

    func_80116E80(4);
    func_80146208(arg0, &sp47, 0x66, 0x80, 0x68, 0x40, 0x20, 0, 0, 0xFF, 0x20B, 4);
    func_80145348(arg0, 1, 0x21);
    ((func_8023C084_Struct *)arg0)->unk24->unk28 = 4;
    ((func_8023C084_Struct *)arg0)->unk3C = 0xF;
    func_800058DC(arg0, (void *)func_8023C134);
}
