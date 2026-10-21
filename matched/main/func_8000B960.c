#include "context.h"

extern void *func_8000C3B0();

struct func_8000B960_C {
    s32 a, b, c;
};
struct func_8000B960_E {
    u8 a, b;
};
struct func_8000B960_A {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[9];
    struct func_8000B960_D *unk2C;
};
struct func_8000B960_D {
    u16 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    u16 unk2C;
    u8 pad2E[2];
    void *unk30;
    s32 unk34;
    u8 pad38[2];
    u8 unk3A;
    u8 pad3B[5];
    s32 unk40;
    s32 unk44;
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 pad4C[4];
    f32 unk50;
    s32 unk54;
    s16 unk58;
    u8 pad5A[2];
    struct func_8000B960_C unk5C;
    struct func_8000B960_E unk68;
    u8 pad6A[2];
    s16 unk6C;
    u8 pad6E[2];
    f32 unk70;
    s16 unk74;
    u8 pad76[0x22];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
};
struct func_8000B960_B {
    f32 unk0, unk4, unk8;
    s16 unkC, unkE, unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[2];
    struct func_8000B960_C unk24;
    f32 unk30, unk34, unk38;
    struct func_8000B960_E unk3C;
};

void func_8000B960(struct func_8000B960_A *arg0, struct func_8000B960_B *arg1) {
    struct func_8000B960_D *v;
    f32 t;

    t = 0.0f;
    arg0->unk22 = 1;
    v = arg0->unk2C;
    v->unk4 = arg1->unk0;
    v->unk8 = arg1->unk4;
    v->unkC = arg1->unk8;
    v->unk10 = arg1->unkC;
    v->unk12 = arg1->unkE;
    v->unk14 = arg1->unk10;
    v->unk24 = arg1->unk14;
    v->unk0 = arg1->unk18;
    v->unk28 = arg1->unk1C;
    v->unk30 = func_8000C3B0((void *)arg0);
    v->unk34 = 0;
    v->unk3A = 0;
    v->unk2C = arg1->unk20;
    if (arg1->unk34 != 0.0f) {
        v->unk18 = arg1->unk30;
        v->unk1C = arg1->unk34;
        v->unk20 = arg1->unk38;
    } else {
        if (arg1->unk30 != 0.0f) {
            v->unk18 = v->unk1C = v->unk20 = arg1->unk30;
        } else {
            v->unk18 = v->unk1C = v->unk20 = 1.0f;
        }
    }
    v->unk50 = 0.0f;
    v->unk54 = 0;
    v->unk58 = 0;
    v->unk40 = 0;
    v->unk44 = 0;
    v->unk5C = arg1->unk24;
    v->unk68.a = arg1->unk3C.a;
    v->unk68.b = arg1->unk3C.b;
    v->unk6C = 0;
    v->unk70 = 0.0f;
    v->unk74 = 0;
    v->unk98 = 0.0f;
    v->unk9C = 0.0f;
    v->unkA0 = 0.0f;
    v->unkA4 = 0.0f;
    v->unkA8 = 0.0f;
    v->unkAC = 0.0f;
    v->unk48 = 0;
    v->unk49 = 0;
    v->unk4A = 0;
    v->unk4B = 0xFF;
}
