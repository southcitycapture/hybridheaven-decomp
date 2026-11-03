#include "common.h"
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC(s32, void *);
extern void func_80011198(s32 arg0, void *arg1);
extern void func_8013A334(void *, s32, s32, s32);
extern void func_8013B808(void *, s32, s32);
extern void func_8013C6FC(s32, s32, s32);
extern void func_802237B0(s32, s32);
extern void func_803602D4();
typedef struct func_80364F74_Struct2 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_80364F74_Struct2;
typedef struct func_803650AC_Inner {
    u8 pad0[0x1C];
    func_80364F74_Struct2 unk1C;
    u8 pad[0x80 - 0x1C - sizeof(func_80364F74_Struct2)];
    u16 unk80;
} func_803650AC_Inner;
typedef struct func_803650AC_Arg0 {
    u8 pad0[0x5C];
    func_803650AC_Inner *unk5C;
} func_803650AC_Arg0;
void func_803650AC(func_803650AC_Arg0 *arg0, s32 arg1);
void func_80366D28(s32 arg0, s32 arg1, u8 arg2);


typedef struct func_8036445C_StructBank {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0:1, fb:2, fc:4, fd:1, e:1, ff:2, fg:2, fh:3, fi:3, fj:5, k:3, fl:2, m:3;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[4];
    u8 unk2DE;
    u8 pad2DF[0xD];
    f32 unk2EC;
    u8 pad2F0[8];
    u8 unk2F8;
    u8 pad2F9[0x320 - 0x2F9];
    u8 unk320;
    u8 unk321;
    u8 pad322[0x365 - 0x322];
    u8 unk365;
    u8 pad366[2];
    u8 unk368[0x375 - 0x368];
    u8 unk375;
    u8 unk376;
    u8 pad377[0x390 - 0x377];
    u8 unk390;
} func_8036445C_StructBank;

typedef struct func_8036445C_Blob { s32 p[16]; } func_8036445C_Blob;
typedef struct func_8036445C_StructObj {
    u8 padC_[0xC];
    u16 unkC;
    u8 pad0E[0x22 - 0xE];
    u8 unk22;
    u8 pad23[0x1C - 0x23 + 0x100];
} func_8036445C_StructObj;

typedef struct func_8036445C_StructAnim {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad0E[0xE];
    s32 unk1C;
    u8 pad20[2];
    u16 unk22;
    u8 pad24[0x7C - 0x24];
    void *unk7C;
    s16 unk80;
    s16 unk82;
    u8 pad84[0x9C - 0x84];
    u8 unk9C;
} func_8036445C_StructAnim;

typedef struct func_8036445C_StructA0 {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8036445C_StructAnim *unk5C;
} func_8036445C_StructA0;

typedef struct func_8036445C_StructJ {
    u8 pad0[0x12];
    s16 unk12;
} func_8036445C_StructJ;
typedef struct func_8036445C_StructK {
    u8 pad0[0x2C];
    func_8036445C_StructJ *unk2C;
} func_8036445C_StructK;
typedef struct func_8036445C_StructA1 {
    func_8036445C_StructK *unk0;
    u8 pad4[0x4C - 4];
    struct { u8 pad[0x22]; u8 unk22; } *unk4C;
} func_8036445C_StructA1;

extern func_8036445C_Blob D_8038692C;
extern func_8036445C_Blob D_8038696C;
extern func_8036445C_Blob D_803869AC;
extern u8 D_8038691C[];
extern u8 D_80386898[];
extern u8 D_80386660[];
extern void func_800113D0();
extern void func_8013AE20();
extern void D_802254F8(s32, s16, u8, s32);
extern void func_80367518();
extern void func_8036D30C();

#define arg0 ((func_8036445C_StructA0 *)arg0_)
#define arg1 ((func_8036445C_StructA1 *)arg1_)
void func_8036445C(s32 arg0_, s32 arg1_, u8 arg2, u8 arg3) {
    func_8036445C_StructBank *v1;
    func_8036445C_StructBank *t1;
    func_8036445C_StructAnim *a1;
    func_8036445C_Blob spBC;
    func_8036445C_Blob sp7C;
    func_8036445C_Blob sp3C;
    void **tab;
    u16 sp36;
    u8 t0;
    u8 sp34;

    if (arg0_ == D_801BBBF0.unkDC) {
        v1 = (func_8036445C_StructBank *)&D_801BC03C;
    } else {
        v1 = (func_8036445C_StructBank *)&D_801BC3D8;
    }
    if (arg0_ != D_801BBBF0.unkDC) {
        t1 = (func_8036445C_StructBank *)&D_801BC03C;
    } else {
        t1 = (func_8036445C_StructBank *)&D_801BC3D8;
    }
    a1 = arg0->unk5C;
    spBC = D_8038692C;
    sp7C = D_8038696C;
    sp3C = D_803869AC;
    sp36 = 0;
    sp34 = 0;
    if (((u8 *)&D_801BBBF0)[0x1031] == 0xF) return;
    if (a1->unk9C == 1 || a1->unk9C == 2) a1->unk9C = 3;
    if (v1->unk2F8 == 0) return;
    if (v1->unk2F8 == 5) v1->unk2F8 = 4;
    func_80011198((s32)arg1, a1);
    func_800113D0(arg1, &a1->unk22);
    t1->unk2DE = 0;
    t1->unk2EC = 1.0f;
    if (arg0->unk36 == 0x11D) {
        func_80366D28(arg0_, arg1_, arg2);
        return;
    }
    if ((t1->fl == 0 || t1->unk390 != 1) && v1->fg != 0) {
        func_8036D30C(arg0, arg1);
        return;
    }
    if (v1->unk2F8 == 6) {
        if (v1->fc == 4 || v1->fc == 1) {
            v1->unk2F8 = 1;
        } else {
            a1->unk7C = D_8038691C;
            v1->unk320 = 0;
            func_800058DC((s32)arg0, func_803650AC);
            return;
        }
    }
    func_802237B0(arg0_, 1);
    v1->unk320 = arg2;
    v1->unk321 = arg3;
    v1->fd = 1;
    v1->fi = 0;
    func_803602D4(arg0, arg1);
    func_8013AE20(arg0, arg1, 0);
    if (v1->ff - 3 == 0) {
        if (arg2 == 1) {
            arg2 = 3;
        } else if (arg2 == 3) {
            arg2 = 1;
        }
    }

    if (v1->unk2 <= 0) {
        v1->fb = 1;
    }
    if (t1->unk2D8 == 0xA || t1->unk2D8 == 9) {
        if (t1->unk390 != 1 || t1->fl == 0) {
            if (t1->unk375 < t1->unk376) {
                sp34 = 1;
                if (v1->unk2F8 == 3 || v1->unk2F8 == 4) {
                    v1->unk2F8 = 2;
                } else if (v1->fb != 0 && t1->unk2D8 == 9) {
                    sp34 = 0;
                    t1->unk376 = t1->unk375;
                }
            } else {
                v1->unk2F8 = 4;
            }
        }
    }
    if (t1->unk2D9 == 0x24 && v1->unk2F8 < 3) {
        v1->unk2F8 = 3;
    }
    if (v1->unk2F8 == 6) {
        t0 = 4;
    } else {
        t0 = v1->unk2F8 - 1;
    }
    if (t0 >= 2) {
        func_8013C6FC(arg0_, arg1_, 0);
        if (arg3 == 2) {
            if (arg2 == 2 || arg2 == 3) {
                v1->fg = 3;
            } else {
                v1->fg = 1;
            }
        } else if (arg2 == 0 || arg2 == 1) {
            v1->fg = 3;
        } else {
            v1->fg = 1;
        }
        sp36 = 5;
    } else {
        v1->fg = 0;
        if (t0 == 2) {
            sp36 = 2;
        }
    }
    if (v1->fb != 0) {
        D_802254F8(arg0_, 0x1E, 7, arg2);
        sp36 = 5;
    } else if (t1->unk2D8 != 0xC && t1->unk2D8 != 0x13) {
        D_802254F8(arg0_, (s16)(t0 * 7), (t0 + 1) & 0xFF, arg2);
    }
    if (arg3 == 2) {
        tab = (void **)&sp3C;
    } else if (arg3 == 1) {
        tab = (void **)&sp7C;
    } else {
        tab = (void **)&spBC;
    }
    if ((a1->unk1C == 0x03200061 || a1->unk1C == 0x03200062) && sp34 == 0) {
        if (arg2 == 0) {
            arg1->unk0->unk2C->unk12 += 0x1000;
        } else if (arg2 == 1) {
            arg1->unk0->unk2C->unk12 += 0x800;
        } else if (arg2 == 3) {
            arg1->unk0->unk2C->unk12 += 0x1800;
        }
        arg1->unk0->unk2C->unk12 &= 0x1FFF;
        v1->unk320 = 2;
        v1->fg = 1;
        a1->unk7C = D_80386898;
        v1->unk321 = 2;
    } else if (t0 >= 2 && arg2 != 0 &&
               (t1->unk2D9 == 4 || t1->unk2D9 == 5 || t1->unk2D9 == 0xC || t1->unk2D9 == 0xC || t1->unk2D9 == 0x54)) {
        v1->unk320 = 2;
        v1->fg = 1;
        a1->unk7C = D_80386660;
        v1->unk321 = 4;
        if (arg0->unk36 == 0x57 && a1->unkC == 0x14) {
            arg1->unk4C->unk22 = 0;
            a1->unkC = a1->unkC - 1;
            func_80367518(arg0, arg1, a1, arg2);
        }
    } else {
        a1->unk7C = tab[t0 * 4 + arg2];
    }
    a1->unk82 = 3;
    a1->unk80 = 3;
    if (a1->unk22 & 1) {
        func_800113D0(arg1, &a1->unk22);
    }
    if (v1->fl != 0) {
        if (arg0->unk36 == 0x11D && v1->unk390 == 2) {
            v1->fl = 1;
        } else if (v1->unk390 == 1) {
            v1->fl = 2;
        } else {
            v1->unk390 = 0;
            v1->fl = 0;
        }
    }
    if (v1->unk2F8 >= 3 || v1->unk2F8 < 6) {
        v1->unk365 = 0;
        if (arg3 == 2) {
            func_8013A334((u8 *)v1 + 0x368, (s32)arg1, (s32)a1, 0x1C);
        } else {
            func_8013A334((u8 *)v1 + 0x368, (s32)arg1, (s32)a1, 0x20);
        }
    }
    if (sp36) {
        func_8013B808(arg0_, arg1_, sp36);
    }
    func_800058DC((s32)arg0, func_803650AC);
}
