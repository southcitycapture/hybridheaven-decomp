#include "common.h"

struct func_801E5188_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E5188_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5188_Struct4 *unk2C;
};
struct func_801E5188_Struct2 {
    u8 pad0[0x24];
    struct func_801E5188_Struct3 *unk24;
};
struct func_801E5188_Struct1 {
    u8 pad0[8];
    struct func_801E5188_Struct2 *unk8;
};
struct func_801E5188_Struct0 {
    u8 pad0[8];
    struct func_801E5188_Struct1 *unk8;
};
extern struct func_801E5188_Struct0 *D_801DAB14;
s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CE2D0(s32, s32);
struct func_801E48EC_StructC { u8 pad[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E48EC_StructB { u8 pad[0x2C]; struct func_801E48EC_StructC *p2C; };
struct func_801E48EC_StructA { u8 pad[0x24]; struct func_801E48EC_StructB *p24; };
struct func_801E48EC_StructR { u8 pad[8]; struct func_801E48EC_StructA *p8; };
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
s32 func_801E48EC(s32 arg0, s32 arg1) {
    u32 t;
    f32 q;
    t = func_801C1134(4, 0);
    q = (f32)t / 15.0f;
    (*(struct func_801E48EC_StructR **)&D_801DAB14)->p8->p24->p2C->fC = (-19.4000244f) * q + (-434.799988f);
    if (func_801C1088(4, 0, 0xF) != 0) {
        func_801C10D8(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x14;
    }
    if (func_801CE2D0(0x0168003F, 0xA) != 0 || func_801CE2D0(0x0168003F, 0x16) != 0) {
        struct func_801E48EC_StructC *c = (*(struct func_801E48EC_StructR **)&D_801DAB14)->p8->p24->p2C;
        func_8038D33C(c->f4, c->f8, *(s32 *)&c->fC, 0x67B, 1.20000005f, 1.0f);
    }
    return 0x13;
}
