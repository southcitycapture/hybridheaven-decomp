#include "common.h"
typedef struct func_801E3A38_StructC {
    u8 pad[0xC];
    f32 unkC;
} func_801E3A38_StructC;
typedef struct func_801E3A38_StructB {
    u8 pad[0x30];
    func_801E3A38_StructC *unk30;
} func_801E3A38_StructB;
typedef struct func_801E3A38_StructA {
    u8 pad[0xC];
    func_801E3A38_StructB *unkC;
} func_801E3A38_StructA;
extern func_801E3A38_StructA *D_8038D8D0;


typedef struct func_801E2968_StructC {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[4];
    f32 scaleX;
    f32 scaleY;
    f32 scaleZ;
    u32 size;
    u8 pad28[8];
    s32 image;
    u8 pad34[0x14];
    u8 color[8];
} func_801E2968_StructC;

typedef struct func_801E2968_StructB {
    u8 pad0[0x22];
    u8 visible;
    u8 pad23[0xD];
    func_801E2968_StructC *data;
} func_801E2968_StructB;

typedef struct func_801E2968_StructA {
    func_801E2968_StructB *items[16];
} func_801E2968_StructA;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern s32 func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];
extern u8 D_8038D89C[];
extern s32 D_8038D8CC;
extern u8 D_801E70CC[];
extern u8 D_801D9768[];
extern u8 D_801D97C0[];
extern u8 D_801D9628[];
extern u8 D_801D96C8[];
extern u8 D_801D9FE8[];
extern const f32 D_801E76DC;

#define OBJ(i) ((*(func_801E2968_StructA **)&D_8038D8D0)->items[(i)])
#define DATA(i) (OBJ(i)->data)
#define SETUP(i, tex, sz) \
    do { } while (0); \
    DATA(i)->image = (s32)(tex) | 0x40000000; \
    DATA(i)->size = (sz); \
    DATA(i)->color[0] = 0xFF; \
    DATA(i)->color[1] = 0xFF; \
    DATA(i)->color[2] = 0xFF; \
    DATA(i)->color[3] = 0xFF
#define INIT(i, vx, vy, vz, rot, sc) \
    DATA(i)->x = (vx); \
    DATA(i)->y = (vy); \
    DATA(i)->z = (vz); \
    DATA(i)->angle = (rot); \
    DATA(i)->scaleX = (sc); \
    DATA(i)->scaleY = (sc); \
    DATA(i)->scaleZ = (sc)

s32 func_801E2968(s32 arg0, f32 arg1)
{
    s32 i;

    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_801E70CC);
    func_80005E44(D_8038D8CC, D_801E70CC);
    func_80005E44(D_8038D8CC, D_801E70CC);
    func_80005E44(D_8038D8CC, D_801E70CC);
    func_80005E44(D_8038D8CC, D_8038D89C);
    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_801E70CC);
    }
    i = 0;
    do {
        func_80005E44(D_8038D8CC, D_8038D89C);
        i++;
    } while (i < 4);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x46A, 0);
    func_8012C89C(D_8038D8CC, 1, 0x46A, 1);
    SETUP(1, D_801D9768, 0x100);
    func_8012C89C(D_8038D8CC, 2, 0x46A, 2);
    SETUP(2, D_801D97C0, 0x100);
    func_8012C89C(D_8038D8CC, 3, 0x46A, 3);
    SETUP(3, D_801D97C0, 0x100);
    func_8012C89C(D_8038D8CC, 4, 0x46A, 4);
    SETUP(4, D_801D9628, 0x100);
    func_8012C89C(D_8038D8CC, 5, 0x4D9, 0);
    SETUP(5, D_801D96C8, 0x100);
    func_8012C89C(D_8038D8CC, 6, 0x46A, 9);
    DATA(6)->image = (s32)D_801D9FE8 | 0x40000000;
    DATA(6)->size = 0x300;
    DATA(6)->color[0] = 0xFF;
    DATA(6)->color[1] = 0xFF;
    DATA(6)->color[2] = 0xFF;
    DATA(6)->color[3] = 0x7F;
    DATA(6)->color[4] = 0xFF;
    DATA(6)->color[5] = 0xFF;
    DATA(6)->color[6] = 0xFF;
    DATA(6)->color[7] = 0x7F;
    func_8012C89C(D_8038D8CC, 7, 0x46A, 0xE);
    SETUP(7, D_801D9628, 0x100);
    func_8012C89C(D_8038D8CC, 8, 0x46A, 0xF);
    SETUP(8, D_801D9628, 0x100);
    func_8012C89C(D_8038D8CC, 9, 0x46A, 0x10);
    SETUP(9, D_801D9628, 0x100);
    func_8012C89C(D_8038D8CC, 0xA, 0x46A, 0x11);
    SETUP(10, D_801D9628, 0x100);
    func_8012C89C(D_8038D8CC, 0xB, 0x46A, 0x12);
    SETUP(11, D_801D9628, 0x100);
    func_8012C89C(D_8038D8CC, 0xC, 0x46A, 0xA);
    SETUP(12, D_801D9628, 0x100);
    OBJ(12)->visible = 0;
    func_8012C89C(D_8038D8CC, 0xD, 0x46A, 0xB);
    SETUP(13, D_801D9628, 0x100);
    OBJ(13)->visible = 0;
    func_8012C89C(D_8038D8CC, 0xE, 0x46A, 0xC);
    SETUP(14, D_801D9628, 0x100);
    OBJ(14)->visible = 0;
    func_8012C89C(D_8038D8CC, 0xF, 0x46A, 0xD);
    do { } while (0);
    DATA(15)->image = (arg1 = D_801E76DC, (s32)D_801D9628 | 0x40000000);
    DATA(15)->size = 0x100;
    DATA(15)->color[0] = 0xFF;
    DATA(15)->color[1] = 0xFF;
    DATA(15)->color[2] = 0xFF;
    DATA(15)->color[3] = 0xFF;
    OBJ(15)->visible = 0;

    INIT(0, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    INIT(1, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    INIT(2, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    INIT(3, -19.0f, 0.0f, 65.0f, 0, 1.0f);
    INIT(4, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    INIT(5, 0.0f, -20.0f, 0.0f, 0x800, arg1);
    INIT(6, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    for (i = 0; i < 5; i++) {
        INIT(i + 7, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    }
    for (i = 0; i < 4; i++) {
        INIT(i + 12, 0.0f, 0.0f, 0.0f, 0, 1.0f);
    }
    return 2;
}
