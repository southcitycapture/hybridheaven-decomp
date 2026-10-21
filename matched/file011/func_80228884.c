#include "context.h"

struct func_80228884_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[3];
    u16 unk94;
};
struct func_80228884_Obj {
    u8 pad[0x2A];
    u16 unk2A;
    u8 pad2C[4];
    void *unk30;
};
struct func_80228884_F {
    s16 s0;
    s16 s2;
    f32 f4;
};
extern s16 D_80240760[];
extern s8 D_801BCC25;
extern u8 func_80228ABC[];
extern void func_800058DC(void *a, void *b);

void func_80228884(struct func_80228884_Struct *arg0, struct func_80228884_Obj **arg1) {
    s8 i;
    f32 v;
    f32 a;
    struct func_80228884_F *fp;
    s16 *sp;
    s16 s;

    arg0->unk94 = arg0->unk94 + 1;
    for (i = 0; i < ((u8 *)&D_801BEC60)[0x27]; i++) {
        if (arg1[i]->unk2A == 0xC) {
            fp = arg1[i]->unk30;
            a = fp->f4;
            v = (f32)(D_80240760[i] - (s16)(s32)a) / 12.0f;
            if (v != 0.0f) {
                if ((v < 0.0f ? -v : v) < 1.0f) {
                    v /= (v < 0.0f ? -v : v);
                }
            }
            fp->f4 = a * 1.0f + (f32)(s16)(s32)v;
        } else if (arg1[i]->unk2A == 0xD) {
            sp = (s16 *)arg1[i]->unk30;
            s = *sp;
            v = (f32)(D_80240760[i] - s) / 12.0f;
            if (v != 0.0f) {
                if ((v < 0.0f ? -v : v) < 1.0f) {
                    v /= (v < 0.0f ? -v : v);
                }
            }
            *sp = s + (s16)(s32)v;
        }
    }
    if (arg0->unk94 >= 0x3D) {
        arg0->unk90 = 1;
        func_800058DC(arg0, func_80228ABC);
    }
    D_801BCC25 = 0;
}
