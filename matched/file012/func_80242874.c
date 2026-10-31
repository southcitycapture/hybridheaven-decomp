#include "common.h"
extern u8 D_801BC3D8[];
extern s32 func_800058DC(s32, void *);
extern void func_80242364(void);


struct func_80242874_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 padA1[0xA8 - 0xA1];
    u8 unkA8;
    u8 padA9[3];
    void *unkAC;
    void *unkB0;
};
struct func_80242874_StructInfo {
    s16 unk0;
    s16 unk2;
};
struct func_80242874_StructInfo2 {
    u8 pad0[0x30];
    u32 unk30;
};
struct func_80242874_StructInfo3 {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x38 - 8];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
};
extern u8 D_801BCC21;
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_80242874[];
extern f64 D_802491E0;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58(void *, void *);
extern s32 func_8012C6B4(s32);

void func_80242874(arg0, arg1)
struct func_80242874_Struct *arg0;
u8 arg1;
{
    struct func_80242874_StructInfo3 *a1;
    struct func_80242874_StructInfo2 *a3;
    u32 t38;
    u32 bits;
    s32 v;
    s32 cur;
    s32 c;
    s32 x;
    s32 k;

    k = 6;
    cur = arg0->unkC;
    v = *(s32 *)((u8 *)&D_801BBBF0 + 0xDC);
    a1 = (v == cur) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    if (v == cur) {
        a3 = (void *)D_801BC3D8;
    } else {
        a3 = (void *)D_801BC03C;
    }
    c = ((u8 *)&D_801BBBF0)[0x1031];
    if (k != c &&(x = arg0->unkA8) != 0) {
        arg0->unkA8 = 0;
        c = D_801BCC21;
    }
    if (k == c) {
        arg0->unkA8 = 1;
        return;
    }
    if (c == 7) {
        arg0->unkAC = D_80242874;
        arg0->unkB0 = (void *)func_80242364;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((f64)((struct func_80242874_StructInfo *)a1)->unk2 <= (f64)((struct func_80242874_StructInfo *)a1)->unk0 * D_802491E0 && !(arg0->unk9A & 0x20) && arg0->unkA0 != 0) {
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    if (func_8022AB58(arg0, a1) != 0) {
        arg0->unk91 = 0;
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    v = a1->unk38;
    bits = (u32)v >> 31;
    if (bits != 0 && !(arg0->unk9A & 2)) {
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    if (bits != 0 && (((u32)v << 3) >> 31) &&!(arg0->unk9A & 4)) {
        func_800058DC((s32)arg0, (void *)func_80242364);
        return;
    }
    {
        u32 f = (a3->unk30 << 11) >> 30;
        if (f != 0) {
            func_800058DC((s32)arg0, (void *)func_80242364);
            return;
        }
        if (bits == 0 && f == 0 && arg0->unk9A != 0) {
            arg0->unk9A = 0;
            arg0->unk92 = arg0->unk93;
            func_800058DC((s32)arg0, (void *)func_80242364);
            return;
        }
    }
    if (arg0->unk9A == 0) {
        if (a1->unk6 == a1->unk4) {
            if (a1->unk2D8 != 0xA) {
                func_800058DC((s32)arg0, (void *)func_80242364);
                return;
            }
        }
        if (a1->unk6 == 0xC8 && func_8012C6B4(4) <= 0) {
            func_800058DC((s32)arg0, (void *)func_80242364);
        }
    }
}
