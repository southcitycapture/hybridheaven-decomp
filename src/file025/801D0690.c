#include "common.h"


extern void func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);
extern void func_801D0700();
extern u8 D_801BC3D8[];
extern s32 D_801DAFC0;
extern s32 D_801DAFD8;
extern s32 D_801DAFDC;
extern s32 D_801DAFE4;
extern s32 D_801DAFEC;
extern s32 D_801E1300;

void func_801D0690(s32 arg0, s32 arg1) {
    D_801E1300 = arg0;
    D_801DAFD8 = 0;
    D_801DAFDC = 0;
    D_801DAFE4 = 1;
    D_801DAFEC = 0;
    D_801DAFC0 = 0;
    func_8013B570(arg0, 0x57, 0, 4, func_801D0700);
    *(s16 *)&D_801BC3D8[0x3B2] = 0;
}

extern s32 D_801DAFE8;
struct func_801D0A74_Struct {
    u8 pad0[0x24];
    u8 *unk24;
    u8 pad1[0x30 - 0x28];
    u8 *unk30;
};
extern void func_80006214(s32);
extern struct func_801D0A74_Struct D_8008DA88;

extern u8 D_80171CF0[];
extern void func_801D0818();
extern void func_8012D844(void *a0, s32 a1, s32 a2);
extern void func_800058DC(void *a0, void *a1);

struct func_801D0700_Struct {
    u8 pad[0x24];
    s32 unk24;
};

void func_801D0700(struct func_801D0700_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x57, 0);
        if (D_801DAFE8 != 0) {
            func_80006214(arg0);
            *(s32 *)(*(s32 *)(D_8008DA88.unk30 + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x18);
            *(u16 *)(*(s32 *)(D_8008DA88.unk30 + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(D_8008DA88.unk30 + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
            *(s32 *)(*(s32 *)(D_8008DA88.unk24 + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x1C);
            *(u16 *)(*(s32 *)(D_8008DA88.unk24 + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(D_8008DA88.unk24 + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
        }
        func_800058DC(arg0, func_801D0818);
        return;
    }
    func_800058DC(arg0, func_801D0700);
}

extern u8 D_801E1308;

struct func_801D0818_Struct { s32 a; s32 b; f32 c; };
struct func_801D0818_In { u8 pad[0x76]; u8 f; };
struct func_801D0818_Obj { u8 pad[0x5C]; struct func_801D0818_In *p; };
extern s32 func_801CC540();
extern void func_8013A28C(void *, struct func_801D0818_Struct);
extern s32 func_80011140(s32, void *, struct func_801D0818_Struct, u32);
extern s32 func_80010550(s32, void *);
extern s32 func_80129554(void *, s32, s32);
#define func_801D0B64 func_801D0B64__decl72
extern void func_801D0B64(void *);
extern u8 D_801BC025[];
extern u8 D_801D0818[];

void func_801D0818(struct func_801D0818_Obj *arg0, s32 arg1) {
    struct func_801D0818_Struct *s;
    struct func_801D0818_In *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, D_801D0818);
        return;
    }
    if (D_801DAFD8 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(&D_8008DA88, *(struct func_801D0818_Struct *)D_801DAFD8);
        q = arg0->p;
        q->f = 1;
        D_801DAFD8 = 0;
    }
    s = (struct func_801D0818_Struct *)D_801DAFDC;
    if (s != 0) {
        if (func_80011140(arg1, arg0->p, *s, (u32)s->c) != 0) {
            D_801DAFDC = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p) != 0) {
            D_801DAFE4 = 1;
        } else {
            D_801DAFE4 = 0;
        }
        *(struct func_801D0818_Struct *)&D_801E1308 = *(struct func_801D0818_Struct *)(D_801BC025 + 3);
    }
    if (D_801DAFEC != 0 && func_80129554(arg0, 0xFF, 0x40) != 0) {
        D_801DAFEC = 0;
    }
    if (D_801DAFC0 != 0) {
        func_801D0B64(arg0);
    }
}
#undef func_801D0B64



s32 func_801D0A24(void) {
    return D_801DAFDC != 0;
}


s32 func_801D0A34(void) {
    if (D_801DAFDC != 0) {
        return 0;
    }
    return D_801DAFE4;
}


u8 *func_801D0A5C(void) {
    return &D_801E1308;
}



void func_801D0A68(s32 arg0) {
    D_801DAFE8 = arg0;
}




void func_801D0A74(s32 arg0) {
    if (D_801DAFE8 != 0) {
        func_80006214(D_801E1300);
        if (arg0 != 0) {
            D_8008DA88.unk30[0x22] = 0;
            D_8008DA88.unk24[0x22] = 0;
            return;
        }
        D_8008DA88.unk30[0x22] = 1;
        D_8008DA88.unk24[0x22] = 1;
    }
}



void func_801D0AEC(s32 arg0) {
    D_801DAFEC = arg0;
}



s32 func_801D0AF8(void) {
    return D_801DAFEC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0B04.s")


#define D_801DAFF0 D_801DAFF0__func_801D0B64
#define D_801DD470 D_801DD470__func_801D0B64
#define D_801E1320 D_801E1320__func_801D0B64
#define func_80034C24 func_80034C24__func_801D0B64
#define func_801C0B2C func_801C0B2C__func_801D0B64
u8 func_801D0B64_bss_prefix[8];

struct func_801D0B64_Struct { f32 unk0; s32 unk4; };
extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);
extern struct func_801D0B64_Struct D_801DAFF0[];
extern f64 D_801DD470;
u64 D_801E1318;
extern u32 D_801E1320;

void func_801D0B64(s32 arg0) {
    u64 diff;

    diff = func_801C0B2C() - D_801E1318;
    if ((f64)D_801DAFF0[D_801E1320].unk0 <= func_80034C24(diff) / D_801DD470) {
        if (D_801DAFF0[D_801E1320].unk4 == 0) goto case0;
        if (D_801DAFF0[D_801E1320].unk4 == 1) goto case1;
        if (D_801DAFF0[D_801E1320].unk4 != 2) goto end;
        goto case2;
case0:
        func_8012D844((void *)arg0, 0x57, 0);
        goto end;
case1:
        func_8012D844((void *)arg0, 0x57, 1);
        goto end;
case2:
        func_8012D844((void *)arg0, 0x57, 2);
end:
        D_801E1320 = D_801E1320 + 1;
        if (D_801E1320 >= 0xF) {
            D_801E1318 = func_801C0B2C();
        }
        D_801E1320 = D_801E1320 % 15;
    }
}
#undef D_801DAFF0
#undef D_801DD470
#undef D_801E1320
#undef func_80034C24
#undef func_801C0B2C

/* Readonly constants retained after the last ASM donor became C. */
static const f64 D_801DD470__rodata[] = {1000000.0};
