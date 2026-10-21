#include "context.h"

typedef struct func_8035F6B4_Flags {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 a30 : 1;
    u32 b30 : 2;
    u32 c30 : 6;
    u32 d30 : 2;
    u32 e30 : 2;
    u32 f30 : 3;
    u8 g32 : 3;
    u8 h32 : 5;
    u8 pad33;
    u8 pad34[4];
    u32 x38 : 3;
    u32 t38 : 1;
    u32 u38 : 2;
    u32 rest38 : 26;
} func_8035F6B4_Flags;

typedef struct func_8035F6B4_Sub {
    s32 a;
    s16 b;
    s16 c;
    f32 d;
} func_8035F6B4_Sub;

typedef struct func_8035F6B4_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F6B4_Arg;

extern void D_8013A28C(s32, func_8035F6B4_Arg);

#define B38 (*((u8 *)p + 0x38))

void func_8035F6B4(void *arg0, void **arg1)
{
    s32 sp1C_[1];
#define sp1C sp1C_[0]
    func_8035F6B4_Flags *p;
    func_8035F6B4_Sub *q;
    s16 t;

    sp1C = *(s32 *)((u8 *)arg0 + 0x5C);
    if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
        p = (func_8035F6B4_Flags *)D_801BC03C;
    } else {
        p = (func_8035F6B4_Flags *)D_801BC3D8;
    }
    ((u8 *)p)[0x392] = 0;
    if (p->unk2 <= 0 || p->b30 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_802237B0(arg0, 1);
        B38 = (B38 & 0xFF9F) | 0x40;
        if (p->f30 == 5) {
            B38 = B38 & 0x9F;
            p->g32 = 0;
            func_8022397C(arg0);
            return;
        }
        if (func_80010550((s32)arg1, (s32)sp1C) != 0) {
            if (*(f32 *)(*(u8 **)((u8 *)*arg1 + 0x2C) + 0x50) == 0.0f) {
                if (p->t38 == 1 && p->u38 == 2) {
                    q = (func_8035F6B4_Sub *)(sp1C + 0x1C);
                    q->a = 0x019000CB;
                    q->b = 0;
                    q->c = 0;
                    q->d = 1.0f;
                    if (p->d30 == 3) {
                        *(u16 *)&q->c ^= 0x10;
                    }
                    D_8013A28C((s32)arg1, *(func_8035F6B4_Arg *)q);
                    func_80010550((s32)arg1, (s32)sp1C);
                    *(s16 *)(*(u8 **)((u8 *)*arg1 + 0x2C) + 0x12) += 0x1000;
                    *(s16 *)(*(u8 **)((u8 *)*arg1 + 0x2C) + 0x12) &= 0x1FFF;
                }
            }
            B38 = B38 & 0xFF9F;
            B38 = B38 & 0x7F;
            B38 = B38 & 0xEF;
            p->g32 = 0;
            func_800058DC(arg0, func_80222708);
        }
    }
}
#undef sp1C
#undef B38
