#include "context.h"

struct func_8024EACC_Glob;
struct func_8024EACC_Obj;
extern struct func_8024EACC_Glob D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_8024EACC(struct func_8024EACC_Obj *arg0, s32 arg1);

struct func_8024E9A8_StructA {
    u8 pad[0x4];
    f32 unk4;
};
struct func_8024E9A8_StructB {
    u8 pad[0x2C];
    struct func_8024E9A8_StructA *unk2C;
};
struct func_8024E9A8_StructC {
    u8 pad[0xE0];
    struct func_8024E9A8_StructB *unkE0;
};
struct func_8024E9A8_StructD {
    u8 pad[0x3C];
    u16 unk3C;
};

extern u8 D_80259B7C[];
extern f32 D_8025A060;
extern f32 D_8025A064;
extern f32 D_8025A068;
extern f32 D_8025A06C;
extern f32 D_8025A070;

#define GG(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))

void func_8024E9A8(struct func_8024E9A8_StructD *arg0, s32 arg1) {
    if (((struct func_8024E9A8_StructC *)&D_801BBBF0)->unkE0->unk2C->unk4 < -10.0) {
        GG(0) = -73.5f;
        GG(1) = D_8025A060;
        GG(2) = D_8025A064;
        GG(3) = D_8025A068;
        GG(4) = D_8025A06C;
        GG(5) = D_8025A070;
        func_8011AAF4(D_80259B7C, 0x2DA, arg0, 0, 1, 0.0f, GG(0), GG(1), GG(2), 0.0f, GG(3), GG(4), GG(5), 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024EACC);
    }
}
