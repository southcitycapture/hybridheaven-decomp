#include "context.h"

typedef struct func_801353C0_StructInner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_801353C0_StructInner;

typedef struct func_801353C0_StructMid {
    u8 pad[0x2C];
    func_801353C0_StructInner *unk2C;
} func_801353C0_StructMid;

typedef struct func_801353C0_StructData {
    u8 pad[0x14];
    s32 unk14;
} func_801353C0_StructData;

typedef struct func_801353C0_StructObj {
    u8 pad[0x24];
    func_801353C0_StructMid *unk24;
    u8 pad28[0x10];
    func_801353C0_StructData *unk38;
    u8 pad3C[0x20];
    s32 unk5C;
} func_801353C0_StructObj;

extern void func_80010550(s32, s32, func_801353C0_StructObj *, s32);

void func_801353C0(func_801353C0_StructObj *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;
    func_80010550(arg1, temp, arg0, arg1);
    arg0->unk24->unk2C->unk10 = (s16)((u32)arg0->unk38->unk14 >> 16);
    arg0->unk24->unk2C->unk14 = (s16)(arg0->unk38->unk14 & 0xFFFF);
}
