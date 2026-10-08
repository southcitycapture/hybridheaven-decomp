#include "context.h"

typedef struct func_8012899C_StructZ {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x30 - 0x24];
    s32 unk30;
} func_8012899C_StructZ;

typedef struct func_8012899C_StructW {
    u8 pad0[0x30];
    func_8012899C_StructZ *unk30;
} func_8012899C_StructW;

typedef struct func_8012899C_StructY {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x20];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_8012899C_StructY;

typedef struct func_8012899C_StructX {
    u8 pad0[0x30];
    func_8012899C_StructY *unk30;
} func_8012899C_StructX;

typedef struct func_8012899C_Arg0 {
    u8 pad0[0x24];
    func_8012899C_StructX *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x90 - 0x30];
    u8 unk90;
} func_8012899C_Arg0;

extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D844(void *, s32, s32);
extern s32 func_8000C3B0(void *);
extern void func_800058DC(void *, void *);
extern void func_80128A90(void);

void func_8012899C(func_8012899C_Arg0 *arg0, func_8012899C_StructW **arg1) {
    arg0->unk90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D844(arg0, 1, 0);
    arg0->unk24->unk30->unk24 = 0x6000F;
    (*arg1)->unk30->unk30 = func_8000C3B0(arg0->unk24);
    arg0->unk24->unk30->unk4B = 0x80;
    arg0->unk24->unk30->unk48 = 0;
    arg0->unk24->unk30->unk49 = 0;
    arg0->unk24->unk30->unk4A = 0;
    arg0->unk2C = arg0->unk2C | 0x20;
    (*arg1)->unk30->unk18 = 0.0f;
    (*arg1)->unk30->unk1C = 0.0f;
    (*arg1)->unk30->unk20 = 0.0f;
    func_800058DC(arg0, func_80128A90);
}
