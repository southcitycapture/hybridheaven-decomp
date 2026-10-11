#include "context.h"

typedef struct func_8024D384_Struct {
    f32 v[3];
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
    u8 pad[4];
} func_8024D384_Struct;

s32 func_800178E8();
extern void func_800058DC(void *, void *);
void func_801C2F0C(s32, f32 *);
s32 func_801C2FF8();
extern f32 D_80259A68;
extern f32 D_80259A6C;
extern u8 func_8024D424[];

void func_8024D384(s32 arg0, s32 arg1) {
    func_8024D384_Struct sp18;

    if ((func_801C2FF8() != 0) && (func_800178E8() != 0)) {
        sp18.v[0] = D_80259A68;
        sp18.v[1] = D_80259A6C;
        sp18.v[2] = 0.0f;
        sp18.a = 0x1100;
        sp18.b = 0x0168003F;
        sp18.c = 1.0f;
        sp18.d = 0;
        sp18.e = 0xFA;
        func_801C2F0C(2, (f32 *)&sp18);
        func_800058DC(arg0, func_8024D424);
    }
}
