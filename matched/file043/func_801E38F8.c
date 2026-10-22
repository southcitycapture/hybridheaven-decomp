#include "context.h"

typedef struct func_801E38F8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E38F8_StructB;
typedef struct func_801E38F8_StructA {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_801E38F8_StructB *unk30;
} func_801E38F8_StructA;

extern s32 D_8038D8CC;
extern struct func_801E3CCC_Struct3 *D_8038D8D0;
extern u8 D_801E96C0[];
extern void func_80005E44(s32, u8 *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

#define OBJ(i) ((*(func_801E38F8_StructA ***)&D_8038D8D0)[i])
#define SETUP(i, x, y, z) \
    OBJ(i)->unk30->unk4 = x; \
    OBJ(i)->unk30->unk8 = y; \
    OBJ(i)->unk30->unkC = z; \
    OBJ(i)->unk30->unk12 = 0x1000; \
    OBJ(i)->unk30->unk18 = 1.0f; \
    OBJ(i)->unk30->unk1C = 1.0f; \
    OBJ(i)->unk30->unk20 = 1.0f; \
    OBJ(i)->unk22 = 0;

s32 func_801E38F8(s32 arg0, s32 arg1) {
    s32 i;
    f32 a, b;

    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_801E96C0);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x449, 0);
    for (i = 1; i < 5; i++) {
        func_8012C89C(D_8038D8CC, i, 0xA6, 0);
    }
    OBJ(0)->unk30->unk4 = 0.0f;
    OBJ(0)->unk30->unk8 = 0.0f;
    OBJ(0)->unk30->unkC = 0.0f;
    OBJ(0)->unk30->unk12 = 0;
    OBJ(0)->unk30->unk18 = 1.0f;
    OBJ(0)->unk30->unk1C = 1.0f;
    OBJ(0)->unk30->unk20 = 1.0f;
    a = 374.0f;
    for (i = 1; i < 5; i++) {
        SETUP(i, a, 5.0f, -51.0f)
        a -= 187.0f;
    }
    return 2;
}
