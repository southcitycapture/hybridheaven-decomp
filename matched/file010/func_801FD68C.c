#include "context.h"

extern f32 func_8001EB64(s16);
extern f32 D_8001EAD0(s16);
void *func_801FDB90(f32 arg0, f32 arg1, f32 arg2, f32 arg3);

struct func_801FD68C_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
};

void *func_801FD68C(struct func_801FCE0C_Struct *arg0) {
    u16 t;
    void *r;
    struct func_801FD68C_Struct *s1;

    t = *(u16 *)((u8 *)arg0 + 0xA2);
    s1 = ((struct func_801FD68C_Struct **)D_80217434)[arg0->unk91];
    r = func_801FDB90(s1->unkC * D_8001EAD0((s16)t) + func_8001EB64((s16)t) * s1->unk4 + arg0->unk94, arg0->unk98 + s1->unk8, s1->unkC * func_8001EB64((s16)t) - D_8001EAD0((s16)t) * s1->unk4 + arg0->unk9C, s1->unk10);
    if (r != 0) {
        return r;
    }
    return 0;
}
