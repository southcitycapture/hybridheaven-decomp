#include "common.h"
struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};
struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};
extern struct func_80246B38_StructA *D_801BBCD8;
struct func_802466A4_Vec {
    s32 x;
    s32 y;
    s32 z;
};
extern struct func_802466A4_Vec D_802529B8;
extern s32 func_800058DC(void *, void *);
extern s32 func_80010550();
extern void func_80020718(s32);
extern void func_801339D0(s32);
extern s32 func_80133A24(s32);
extern s32 func_8013A1B4();
struct func_80247380_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x5C - 0x3E];
    s32 unk5C;
    u8 pad2[0x92 - 0x60];
    u16 unk92;
};
typedef struct { u8 pad[0x3C]; s16 h3C; u8 pad2[0x1C]; s32 f5C; } func_80247498_Struct;
void func_80247498(func_80247498_Struct *arg0, s32 arg1);
extern void func_8024770C();


void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    s32 value = arg0->unk5C;

    if (func_80010550(arg1, value) != 0) {
        if (arg0->unk92++ >= 2) {
            func_800058DC(arg0, func_80247498);
        } else {
            arg0->unk3C = 0;
            func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        }
    }
    if ((arg0->unk3C++ == 0x13) && (D_801BBCD8->unk2C->unk38 < 500.0f)) {
        func_80020718(0x1B6);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_8024770C);
    }
}
