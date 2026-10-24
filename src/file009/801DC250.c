#include "common.h"

extern f32 D_801E3F2C;
extern f32 D_801E3F30;
extern f32 D_801E3FAC;
extern s32 D_801BBCCC;
extern s32 D_801DC250();
extern s32 func_80020DAC(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern s32 func_801DC250();                                /* extern */
extern s32 func_801DC700(s32, void *);
extern s32 func_801DCC50(u16, u8, u16 *);                  /* extern */
extern u16 D_801BBBF4;
extern u16 D_801E2010[][2];
extern u16 D_801E202C[][2];
extern u16 D_801E2048[][2];
extern u16 func_80011590();
extern u8 D_801E15E0[];
extern u8 D_801E16A0[];
extern u8 D_801E177C[];
extern u8 D_801E179E[];
extern u8 D_801E1FD0[];
extern void func_801DCCB0(s32, s32, s32);
extern void func_801DE464(s32, s32, s32);
extern void func_801DFCAC(s32, u8 *, u8 *);


typedef struct func_801DC250_Struct {
    u32 key;
    u8 b[4];
} func_801DC250_Struct;
typedef struct func_801DC250_Arg {
    u32 key;
    u16 unk4;
    u8 pad[2];
    f32 unk8;
} func_801DC250_Arg;

extern func_801DC250_Struct D_801E17C0[];

s32 func_801DC250(arg0)
    func_801DC250_Arg *arg0;
{
    func_801DC250_Struct *p = D_801E17C0;
    u32 k = arg0->key;
    u16 a = arg0->unk4;
    f32 f = arg0->unk8;

    if (p->key != 0) {
        do {
            if (k == p->key) {
                if (a == func_80011590((u32)(p->b[0] * f) & 0xFFFF)) goto ret;
                if (a == func_80011590((u32)(p->b[1] * f) & 0xFFFF)) goto ret;
                if (a == func_80011590((u32)(p->b[2] * f) & 0xFFFF)) {
ret:
                    return p->b[3];
                }
                return 0;
            }
            p++;
        } while (p->key != 0);
    }
    return 0;
}


typedef struct func_801DC510_StructA { s32 id; u16 k; u8 pad6[2]; f32 scale; } func_801DC510_StructA;
typedef struct func_801DC510_StructB { s32 id; u16 a; u16 b; u16 c; u8 pad[2]; } func_801DC510_StructB;

u16 func_801DC510(func_801DC510_StructA *arg0, func_801DC510_StructB *arg1) {
    s32 id = arg0->id;
    u16 k = arg0->k;
    f32 s = arg0->scale;

    while (arg1->id != 0) {
        if (id == arg1->id) {
            if (k == func_80011590((u16)(u32)(arg1->a * s), arg1) ||
                k == func_80011590((u16)(u32)(arg1->b * s), arg1)) {
                return arg1->c;
            }
            return 0;
        }
        arg1++;
    }
    return 0;
}



typedef struct func_801DC700_Struct0 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_801DC700_Struct0;

typedef struct func_801DC700_Struct1 {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 pad7;
} func_801DC700_Struct1;

#define arg0 ((func_801DC700_Struct0 *)a0)
#define E ((func_801DC700_Struct1 *)a1)

s32 func_801DC700(s32 a0, void *a1) {
    s32 key = arg0->unk0;
    u16 id = arg0->unk4;
    f32 scale = arg0->unk8;

    if (E->unk0 != 0) {
        do {
            if (key == E->unk0) {
                if (id == func_80011590((u16)(u32)(E->unk4 * scale))) {
                    return 1;
                }
                if (id == func_80011590((u16)(u32)(E->unk5 * scale))) {
                    return 2;
                }
                if (id == func_80011590((u16)(u32)(E->unk6 * scale))) {
                    return 3;
                }
                return 0;
            }
            a1 = E + 1;
        } while (E->unk0 != 0);
    }
    return 0;
}

#undef arg0
#undef E

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DC9C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DCC50.s")

#define D_801BBBF0 D_801BBBF0__func_801DCCB0
#define D_801DC250 D_801DC250__func_801DCCB0
extern u8 D_801BBBF0[];

typedef struct func_801DCCB0_Struct {
    u16 v;
} func_801DCCB0_Struct;

typedef struct func_801DCCB0_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DCCB0_StructG;

#define G801DCCB0 ((func_801DCCB0_StructG *)&D_801BBBF0)

extern f32 D_801E3DCC;
extern s32 D_801DC250(s32);
extern s32 D_801DCC50(u16, s32, u16 *, f32 *);

void func_801DCCB0(s32 a0, s32 a1, s32 arg2) {
    func_801DCCB0_Struct tmp;
    s32 v;
    s32 r;
    f32 *a2;
    s32 *pp;

    pp = &arg2;
    v = D_801DC250(a0);
    a2 = (f32 *)arg2;
    tmp.v = *(u16 *)(D_801E15E0 + (D_801E16A0[G801DCCB0->unk4] * 16 + G801DCCB0->unk35B * 2));
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v != 3) goto def;
    goto c3;
c1:
    *(u16 *)a1 = tmp.v;
    v = *(s32 *)a0;
    if (v == 0x1900220 || v == 0x19001E6) {
        *a2 = D_801E3DCC;
    }
    goto end;
c2:
    *a2 = 0.75f;
c3:
    r = D_801DCC50(tmp.v, a1, (u16 *)&D_801BBBF0, a2);
    if (r >= 4) {
        *(u16 *)a1 = tmp.v;
    } else {
        *(u16 *)a1 = *(u16 *)(D_801E177C + r * 2);
    }
    goto end;
def:
    *(u16 *)a1 = 0;
end:;
}
#undef G801DCCB0
#undef D_801BBBF0
#undef D_801DC250

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DCDBC.s")



typedef struct func_801DE464_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DE464_Struct;

extern func_801DE464_Struct D_801BBBF0;

void func_801DE464(s32 arg0, s32 arg1, s32 arg2) {
    u8 temp_a1;
    u8 var_a1;
    u16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    func_801DE464_Struct *var_v0;

    temp_v0 = func_801DC250();
    temp_a1 = temp_v0;
    if (temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        var_v0 = &D_801BBBF0;
        temp_a0 = *(u16 *)(D_801E15E0 + ((D_801E16A0[var_v0->unk4] * 0x10) + (var_v0->unk35B * 2)));
        var_a1 = temp_a1;
        temp_v0_2 = func_801DCC50(temp_a0, temp_a1, (u16 *)arg1);
        if (temp_a1 == 2) {
            *(f32 *)arg2 = 0.75f;
        }
        if (var_a1 == 3) {
            temp_a1--;
        }
        if (temp_v0_2 >= 4) {
            *(u16 *)arg1 = temp_a0;
        } else {
            *(u16 *)arg1 = *(u16 *)(D_801E177C + ((temp_a1 * 0xC) + (temp_v0_2 * 2)));
        }
        if (*(s32 *)arg0 == 0x01900220 || *(s32 *)arg0 == 0x019001E6) {
            *(f32 *)arg2 = D_801E3F2C;
        }
        return;
    }
    *(u16 *)arg1 = 0;
}



void func_801DE590(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == D_801BBCCC) {
        func_801DCCB0(arg1, arg2, arg3);
        return;
    }
    func_801DE464(arg1, arg2, arg3);
}



void func_801DE5E4(s32 arg0, s32 *arg1, u16 *arg2, f32 *arg3, u8 arg4) {
    s32 temp_v0;
    s32 sw;
    u8 var_a0;
    s32 var_a1;

    var_a0 = temp_v0 = D_801DC250(arg1);
    var_a1 = 1;
    if (arg0 == D_801BBCCC) {
        var_a1 = 0;
    }
    if (temp_v0 != 0) {
        sw = temp_v0;
        if (temp_v0 == 2) {
            *arg3 = 0.75f;
            sw = sw | 0;
        }
        if (3 == sw * 1) {
            var_a0 = temp_v0 - 1;
        }
        arg4 = arg4 % 3;
        *arg2 = *(u16 *)(D_801E179E + (var_a1 << 4) + (arg4 << 2) + (var_a0 << 1));
        if ((*arg1 == 0x01900220) || (*arg1 == 0x019001E6)) {
            *arg3 = D_801E3F30;
        }
    } else {
        *arg2 = 0;
    }
}


typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;
typedef struct func_801DE6F4_StructTable {
    u16 values[2][2];
} func_801DE6F4_StructTable;

extern void func_801DC9C4(func_801DE6F4_StructVec, u16, f32);
extern func_801DE6F4_StructTable D_801E2008;

u16 func_801DE6F4(s32 arg0, func_801DE6F4_StructVec arg1, f32 *arg4, u8 arg5) {
    func_801DE6F4_StructTable table = D_801E2008;
    u8 result;

    result = func_801DC700(arg0, D_801E1FD0);
    if (result == 0) {
        return 0;
    }
    arg5 &= 1;
    if (result == 3) {
        func_801DC9C4(arg1, table.values[arg5][0], *arg4);
    }
    *arg4 = (f64)*arg4 * 1.5;
    return table.values[arg5][result - 1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DE7EC.s")


typedef struct func_801DFAA4_StructB {
    u8 pad0[0x2C];
    f32 *unk2C;
} func_801DFAA4_StructB;
typedef struct func_801DFAA4_StructA {
    u8 pad0[0x24];
    func_801DFAA4_StructB *unk24;
} func_801DFAA4_StructA;
typedef struct func_801DFAA4_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xE0 - 6];
    func_801DFAA4_StructB *unkE0;
    u8 padE4[0x35B - 0xE4];
    u8 unk35B;
} func_801DFAA4_StructG;
#define G801DFAA4 ((func_801DFAA4_StructG *)&D_801BBBF0)

s32 func_801DFAA4(func_801DFAA4_StructA *arg0, u8 arg1) {
    f32 *p;
    u16 t;
    u16 id;
    func_801DE6F4_StructVec v;

    v.x = arg0->unk24->unk2C[1];
    v.y = arg0->unk24->unk2C[2];
    v.z = arg0->unk24->unk2C[3];
    if (arg1 == 2) {
        func_801DC9C4(v, 0x30F, 1.0f);
        return 0;
    }
    p = G801DFAA4->unkE0->unk2C;
    if (func_801C5A1C(p[1], p[2], p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        id = *(u16 *)&D_801E15E0[D_801E16A0[G801DFAA4->unk4] * 16 + G801DFAA4->unk35B * 2];
        t = id;
        if (id == 0x677 || id == 0x679 || id == 0x676 || id == 0x678 || id == 0x66E || id == 0x670 || id == 0x66F || id == 0x671 || id == 0x661) {
            if (arg1 == 0) id = 0x308; else id = 0x30C;
        } else if (t == 0x672 || t == 0x674 || t == 0x673 || t == 0x675) {
            if (arg1 == 0) id = 0x30A; else id = 0x30E;
        } else {
            if (arg1 == 0) id = 0x309; else id = 0x30D;
        }
        func_801DC9C4(v, id, 1.0f);
        return 1;
    }
    return 0;
}



void func_801DFCAC(s32 arg0, u8 *arg1, u8 *arg2) {
    f32 *p;
    u16 v;

    p = *(f32 **)(*(s32 *)(arg0 + 0x24) + 0x2C);
    *arg1 = 0;
    *arg2 = 0;
    if (func_801C5A1C(p[1], p[2] + 2.0, p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        v = *(u16 *)(D_801E15E0 + D_801E16A0[D_801BBBF0.unk4] * 16 + D_801BBBF0.unk35B * 2);
        if (v == 0x677 || v == 0x67B || v == 0x676 || v == 0x67A || v == 0x66E || v == 0x672 || v == 0x66F || v == 0x673 || v == 0x661 || v == 0x67F) {
            *arg1 = 1;
        }
        if (v == 0x67B || v == 0x67A || v == 0x67D || v == 0x67C || v == 0x67F || v == 0x67E) {
            *arg2 = 1;
        }
    }
}



u8 func_801DFE00(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1F;
}



u8 func_801DFE28(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1E;
}


typedef struct func_801DFE50_StructInfo {
    u8 pad[0xE];
    u16 id;
} func_801DFE50_StructInfo;
typedef struct func_801DFE50_StructArg {
    u8 pad[0x24];
    func_801DFAA4_StructB *unk24;
    u8 pad28[0x34];
    func_801DFE50_StructInfo *unk5C;
} func_801DFE50_StructArg;

void func_801DFE50(func_801DFE50_StructArg *arg0, u8 arg1) {
    func_801DFE50_StructInfo *info;
    u32 pad40;
    f32 scale;
    func_801DE6F4_StructVec pos;
    u8 variant;
    u16 id;
    u32 pad24;

    info = arg0->unk5C;
    scale = D_801E3FAC;
    variant = 0;
    pos.x = arg0->unk24->unk2C[1];
    pos.y = arg0->unk24->unk2C[2];
    pos.z = arg0->unk24->unk2C[3];
    if (arg1 != 6) {
        variant = func_801DFE00((s32)arg0);
    } else {
        scale = 1.5f;
        if (D_801BBBF4 == 0x29) {
            variant = 1;
        } else if (D_801BBBF4 == 0x38) {
            if (func_80020DAC(0x238)) {
                variant = 1;
            }
        }
    }
    if (info->id == 0x29) goto a;
    if (info->id == 0x2C) goto a;
    if (info->id == 0x50) goto b;
    if (info->id == 0x11B) goto c;
    if (info->id != 0x11C) goto c;
    goto c;
a:
    func_801DC9C4(pos, D_801E202C[arg1][variant], scale);
    return;
b:
    func_801DC9C4(pos, D_801E2048[arg1][variant], scale);
    return;
c:
    func_801DC9C4(pos, D_801E2010[arg1][variant], scale);
}

