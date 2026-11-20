#include "common.h"
struct func_802466A4_Vec {
    s32 x;
    s32 y;
    s32 z;
};
extern struct func_802466A4_Vec D_8025294C;
extern s32 func_800058DC(void *, void *);
extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);
extern void func_801339D0(s32);
extern s32 func_80133A24(s32);
struct func_802466A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};
struct func_802466A4_Obj {
    u8 pad[0x2C];
    struct func_802466A4_Sub *unk2C;
};
struct func_80246D34_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};
void func_80246F44(struct func_80246D34_Struct *arg0, struct func_802466A4_Obj **arg1);


typedef struct { u8 pad[0x5C]; s32 f5C; u8 pad2[0x30]; s16 f90; } func_80246EB8_Struct;

void func_80246EB8(func_80246EB8_Struct *arg0, s32 arg1) {
    s32 a = arg0->f5C;
    func_80011140(arg1, a, D_8025294C, 0xF);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        arg0->f90 = 0;
        func_800058DC(arg0, func_80246F44);
    }
}
