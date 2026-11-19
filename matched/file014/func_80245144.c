#include "common.h"
extern void func_800058DC(void *, void *);
void func_80245244(struct func_80245244_Obj *arg0, s32 arg1);

extern u8 D_801BBFAC[];
extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 func_8011AAF4(void *, s32, void *, u8, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern u8 D_8024A6E4[];

struct func_80245144_StructObj {
    u8 pad0[0x5C];
    void *unk5C;
    u8 pad1[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};

void func_80245144(struct func_80245144_StructObj *arg0, s32 arg1) {
    u64 effect_flags = 2;
    f32 sp5C[3];
    void *temp;

    temp = arg0->unk5C;
    func_8013A334(sp5C, arg1, temp, 6);
    if (!(func_8011AAF4(&D_8024A6E4, 0x43B, arg0, 0, effect_flags, 8.0f, (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0, 4294967296.0f, sp5C[0], sp5C[1], sp5C[2], 0.0f, 35.0f, -1, -1) & 0xFF)) {
        D_801BBFAC[0x78] = 1;
        func_800058DC(arg0, (void *) func_80245244);
    }
}
