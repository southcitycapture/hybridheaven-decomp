#include "context.h"

typedef struct func_8036104C_Node {
    u8 pad0[6];
    s16 unk6;
    struct func_8036104C_Node *unk8;
} func_8036104C_Node;

typedef struct func_8036104C_Tbl {
    func_8036104C_Node *e[5][3];
} func_8036104C_Tbl;

typedef struct func_8036104C_Sub {
    u8 pad0[0x7C];
    func_8036104C_Node *unk7C;
    s16 unk80;
    u16 unk82;
} func_8036104C_Sub;

typedef struct func_8036104C_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8036104C_Sub *unk5C;
} func_8036104C_Arg;

typedef struct func_8036104C_Info {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    u16 unk8;
    u8 padA[6];
    func_8036104C_Node *unk10;
} func_8036104C_Info;

typedef struct func_8036104C_Data {
    u8 pad0[0x12];
    u16 unk12;
} func_8036104C_Data;

typedef struct func_8036104C_State {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30 : 9;
    u32 f : 2;
    u32 pad31 : 21;
    u8 pad34[0x2D4 - 0x34];
    func_8036104C_Data *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
    u8 pad2DD;
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x2F9 - 0x2F0];
    u8 unk2F9;
    u8 pad2FA[0x314 - 0x2FA];
    func_80360588_Struct unk314;
    u8 pad320[0x392 - 0x320];
    u8 unk392;
} func_8036104C_State;

extern func_8036104C_Tbl D_803863FC;
extern s32 func_80360090(void *, u8);
extern void func_803605E4(s32, void *, u8);
extern void func_80361BCC();
extern void func_80363340();

void func_8036104C(func_8036104C_Arg *arg0, s32 arg1) {
    func_8036104C_Sub *sub;
    func_8036104C_State *s;
    func_8036104C_Info *info;
    u16 ok;
    s32 ret;
    func_8036104C_Tbl tbl;
    func_8036104C_Node *old;
    u16 n;
    u8 res;
    func_8035F544_Copy pos;
    extern void func_8013AE20();

    sub = arg0->unk5C;
    if (arg0 == (func_8036104C_Arg *)D_801BBCCC) {
        s = (func_8036104C_State *)D_801BC03C;
    } else {
        s = (func_8036104C_State *)D_801BC3D8;
    }
    if (s->f == 0) {
        func_802256E4((func_80360EF8_Struct *)&pos, (s32)arg0, 0);
        ret = func_80011140(arg1, (s32)sub, pos, 0xA);
        ok = ret;
        if (ret != 0) {
            if (s->f == 0) {
                s->f = s->unk2F9 + 2;
            }
        } else if (arg0->unk36 == 0x11D) {
        } else {
            func_80224AC4(arg0, 0);
        }
    } else {
        ok = 1;
    }
    if (ok != 0) {
        if (arg0->unk36 == 0x11D) {
            res = 0;
        } else {
            res = func_80224F5C((s32)arg0, arg1);
        }
        if (res == 0) {
            if (s->f == 0) {
                s->f = s->unk2F9 + 2;
            }
            info = func_8035FFA8(s);
            func_803605E4(arg1, s, info->unk1);
            sub->unk7C = info->unk10;
            sub->unk80 = info->unk8 != 0 ? 3 : 2;
            sub->unk82 = info->unk8;
            func_80360400(&s->unk314, (s32)arg0, arg1);
            func_8013AE20(arg0, arg1, 0);
            s->unk2DE = 0;
            s->unk2EC = (f32)s->unk2D4->unk12 / 100.0;
            if (s->unk2D9 != 0x24) {
                tbl = D_803863FC;
                ret = func_80360090(arg0, s->unk2D9);
                if (ret == 3) {
                    s->unk2DC = 0;
                    n = 5;
                } else if ((u8)ret == 2) {
                    s->unk2DC = 1;
                    n = 3;
                    if (((u8 *)func_8035FF0C(s->unk2D9))[1] == 0) {
                        n = 4;
                    }
                } else {
                    s->unk2DC = 2;
                    n = 5;
                }
                old = sub->unk7C;
                sub->unk7C = tbl.e[info->unk1 % 5][s->unk2DC];
                sub->unk7C->unk8 = old;
                sub->unk7C->unk6 = 0;
                sub->unk80 = 3;
                if (info->unk1 == 1 || info->unk1 == 0) {
                    sub->unk82 = n * s->unk18;
                } else {
                    sub->unk82 = n * s->unk1C;
                }
            }
            if (s->unk2D8 == 0xA || s->unk2D8 == 9) {
                func_800058DC(arg0, func_80363340);
            } else {
                func_800058DC(arg0, func_80361BCC);
            }
        }
    }
    s->unk392 = 0;
}
