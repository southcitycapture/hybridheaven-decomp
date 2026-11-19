#include "common.h"
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_80376ADC LP(fA, __LINE__)
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;
extern func_80377140_Struct D_801BBBF0;
extern u8 D_803887E4[];
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
extern void *func_80005670(s32, void *);
extern void func_800058DC(void *, void *);
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern s32 func_8014C0A8(u16);
extern u8 func_80376ADC[];
struct func_803770A8_StructInner {
    u8 pad[0x1C];
    s32 unk1C;
};
struct func_803770A8_Struct {
    u8 pad[0x5C];
    struct func_803770A8_StructInner *unk5C;
};


typedef struct func_80376F84_Vec {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
    s32 unk10;
} func_80376F84_Vec;

typedef struct func_80376F84_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80376F84_Obj;

typedef struct func_80376F84_Arg0 {
    u8 pad0[0x5C];
    func_80376F84_Obj *unk5C;
} func_80376F84_Arg0;

typedef struct func_80376F84_D {
    u16 unk0;
    u16 unk2;
} func_80376F84_D;

typedef struct func_80376F84_Sub2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80376F84_Sub2;

typedef struct func_80376F84_Sub {
    u8 pad0[0x2C];
    func_80376F84_Sub2 *unk2C;
} func_80376F84_Sub;

typedef struct func_80376F84_Glob {
    u8 pad0[0xE0];
    func_80376F84_Sub *unkE0;
} func_80376F84_Glob;

#define GL ((func_80376F84_Glob *)&D_801BBBF0)

struct func_803770A8_Struct;
void func_803770A8(struct func_803770A8_Struct *arg0, s32 arg1);
extern s32 D_8014B4A0(u16, f32 *);
extern u8 D_80388790[];
extern func_8037769C_Glob D_80388784;
extern func_80376F84_D D_8017DC40;

void func_80376F84(func_80376F84_Arg0 *arg0, s32 arg1) {
    func_80376F84_Obj *sp34;
    func_80376F84_Vec vec;

    sp34 = arg0->unk5C;
    D_8014B4A0(D_801BBBF0.unk8, (f32 *)&vec);
    GL->unkE0->unk2C->unk4 = vec.unk0;
    GL->unkE0->unk2C->unk8 = vec.unk4;
    GL->unkE0->unk2C->unkC = vec.unk8;
    GL->unkE0->unk2C->unk12 = vec.unkC + 0x1000;
    if (sp34->unk1C != 0x01680059) {
        func_80011140(arg1, sp34, D_80388784, 0xA);
    }
    if (func_8014C0A8(D_801BBBF0.unk8) == 0) {
        D_803887E4[0] = 1;
        D_8017DC40.unk2 = D_8017DC40.unk0;
        func_80005670((s32)arg0, D_80388790);
        func_800058DC(arg0, (void *)func_803770A8);
    }
}
