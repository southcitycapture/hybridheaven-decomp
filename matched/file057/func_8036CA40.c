#include "common.h"
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } func_8036D30C_Anim;
#define AnimL_1299 func_8036D30C_Anim
#define HQ2(a, b) a##b
#define HQ(a, b) HQ2(a, b)
#define D_801BBBF0 HQ(HQD_, __LINE__)
#define HQD_44 D_801BBBF0__r
#define HQD_224 (*(struct func_80369C7C_Struct__func_80369F54 *)&D_801BBBF0__r)
#define HQD_225 HQD_224
#define HQD_227 HQD_224
#define HQD_230 HQD_224
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u16 D_80011590(u16);
#define func_80011590 D_80011590


typedef struct func_8036CA40_StructA { u8 pad[0x2F4]; f32 unk2F4; } func_8036CA40_StructA;
typedef struct func_8036CA40_StructB { u8 pad[4]; u16 unk4; u16 unk6; } func_8036CA40_StructB;
typedef struct func_8036CA40_StructC { u8 pad[0x4]; u16 unk4; f32 unk8; } func_8036CA40_StructC;
typedef struct func_8036CA40_StructE { u8 pad[0x1C]; func_8036CA40_StructC unk1C; } func_8036CA40_StructE;
typedef struct func_8036CA40_StructD { u8 pad[0x5C]; func_8036CA40_StructE *unk5C; } func_8036CA40_StructD;
extern func_8036CA40_StructB *D_8036BF98(func_8036CA40_StructA *);

f32 func_8036CA40(func_8036CA40_StructD *arg0) {
    func_8036CA40_StructE *a2;
    func_8036CA40_StructC *v1;
    func_8036CA40_StructA *a1;
    func_8036CA40_StructB *v0;

    a2 = arg0->unk5C;
    v1 = &a2->unk1C;
    if ((s32)arg0 == D_801BBCCC) {
        a1 = (func_8036CA40_StructA *)D_801BC03C;
    } else {
        a1 = (func_8036CA40_StructA *)D_801BC3D8;
    }
    v0 = D_8036BF98(a1);
    if (v1->unk4 >= func_80011590(v0->unk4 * v1->unk8) && func_80011590(v0->unk6 * v1->unk8) >= v1->unk4) {
        a1->unk2F4 = 1.0f;
    } else {
        a1->unk2F4 = 0.0f;
    }
    return a1->unk2F4;
}
