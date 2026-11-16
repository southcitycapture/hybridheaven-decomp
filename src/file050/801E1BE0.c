#include "common.h"

extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038BE98(33.2999992f);
        func_8038BD50((-128.899994f), (-158.800003f), 45.4f);
        D_8038BD88(-143.0f, 14.5f, 0.0f);
        return 1;
    }
    func_8038BE98(33.2999992f);
    func_8038BD50(385.0f, 19.3999996f, 0.0f);
    D_8038BD88(182.0f, 20.0f, 0.0f);
    return 0;
}


extern void D_8038C158();

s32 func_801E1CA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x90F560) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}

#define D_8038C17C D_8038C17C__func_801E1CF4
#define func_8038D28C func_8038D28C__func_801E1CF4
extern void func_8038D28C(s32 arg0);


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E1CF4(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    d = 33.0f;
    c = 70.5f;
    a = 11.6000004f;

    b = 64.1999969f;

    if (D_8038C17C(0.0f, 3.0f, a, c, b, a, c, b, 93.0999985f, (-46.5999985f), 26.7000008f, 145.0f, 6.69999981f, 1.29999995f, d, d) != 0) {
        func_8038D28C(0x635);
        return 3;
    }
    return 2;
}
#undef D_8038C17C
#undef func_8038D28C


s32 func_801E1DC8(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E1DD8(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E1E14(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}


s32 func_801E1EA0(s32 arg0, s32 arg1) {
    return 2;
}

extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern s32 func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF70[];

s32 func_801E1EB0(s32 arg0, s32 arg1) {
    func_801C2420(0x463, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x464, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x46E, D_8038DDC0);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x2800;
    if (func_801C2570(0x46F, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#define D_801D96C8 D_801D96C8__func_801E1F44
#define D_801D9768 D_801D9768__func_801E1F44
#define D_801D9FE8 D_801D9FE8__func_801E1F44
#define D_801DA088 D_801DA088__func_801E1F44
#define D_801DA0B8 D_801DA0B8__func_801E1F44
#define D_801E39F4 D_801E39F4__func_801E1F44
#define D_801E3A04 D_801E3A04__func_801E1F44
#define D_801E3A14 D_801E3A14__func_801E1F44
#define D_801E3A24 D_801E3A24__func_801E1F44
#define D_801E3A34 D_801E3A34__func_801E1F44
#define D_801E3A44 D_801E3A44__func_801E1F44
#define D_801E3A54 D_801E3A54__func_801E1F44
#define D_801E3A64 D_801E3A64__func_801E1F44
#define D_8038D8CC D_8038D8CC__func_801E1F44
#define D_8038D8D0 D_8038D8D0__func_801E1F44
#define func_80005E44 func_80005E44__func_801E1F44
#define func_80006214 func_80006214__func_801E1F44
#define func_8012C89C func_8012C89C__func_801E1F44
#define func_8012CF8C func_8012CF8C__func_801E1F44
#define func_801D9F00 func_801D9F00__func_801E1F44
extern s32 D_8038D8CC;
extern u32 D_8038D8D0;


typedef struct func_801E1F44_StructData { s32 x[4]; } func_801E1F44_StructData;
typedef struct func_801E1F44_StructNode {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2]; s16 unk12;
    u8 pad14[4]; f32 unk18, unk1C, unk20;
    s32 unk24; u8 pad28[8]; s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801E1F44_StructNode;
typedef struct func_801E1F44_StructItem {
    u8 pad0[0x22]; u8 unk22; u8 pad23[0xD];
    func_801E1F44_StructNode *unk30;
} func_801E1F44_StructItem;
typedef struct func_801E1F44_StructRoot {
    func_801E1F44_StructItem *items[22];
} func_801E1F44_StructRoot;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012CF8C(s32, s32, s32, s32);
extern u8 D_801D96C8[];
extern u8 D_801D9768[];
extern u8 D_801D9FE8[];
extern u8 D_801DA088[];
extern u8 D_801DA0B8[];
extern void func_801D9F00(void);
extern func_801E1F44_StructData D_801E39F4;
extern func_801E1F44_StructData D_801E3A04;
extern func_801E1F44_StructData D_801E3A14;
extern func_801E1F44_StructData D_801E3A24;
extern func_801E1F44_StructData D_801E3A34;
extern func_801E1F44_StructData D_801E3A44;
extern func_801E1F44_StructData D_801E3A54;
extern func_801E1F44_StructData D_801E3A64;
#define ROOT (*(func_801E1F44_StructRoot **)&D_8038D8D0)
#define NODE(n) (ROOT->items[n]->unk30)
typedef struct func_801E1F44_StructLoopRoot {
    func_801E1F44_StructItem *first[8];
    func_801E1F44_StructItem *loopitems[14];
} func_801E1F44_StructLoopRoot;
#define LOOPITEM (ROOT->items[i + 8])

s32 func_801E1F44(s32 arg0, s32 arg1) {
    func_801E1F44_StructData spB0 = D_801E39F4;
    func_801E1F44_StructData spA0 = D_801E3A04;
    func_801E1F44_StructData sp90 = D_801E3A14;
    func_801E1F44_StructData sp80 = D_801E3A24;
    func_801E1F44_StructData sp70 = D_801E3A34;
    func_801E1F44_StructData sp60 = D_801E3A44;
    func_801E1F44_StructData sp50 = D_801E3A54;
    func_801E1F44_StructData sp40 = D_801E3A64;
#define i arg0
    s32 offset;
    s32 addr;
    s32 shared;
    func_801E1F44_StructItem *item;

    func_80005E44(D_8038D8CC, &spA0);
    func_80005E44(D_8038D8CC, &spA0);
    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, &sp60);
    }
    func_80005E44(D_8038D8CC, &sp60);
    func_80005E44(D_8038D8CC, &spB0);
    func_80005E44(D_8038D8CC, &sp70);
    func_80005E44(D_8038D8CC, &sp60);
    for (i = 0; i < 14; i++) {
        func_80005E44(D_8038D8CC, &sp70);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x463, 0);
    func_8012C89C(D_8038D8CC, 1, 0x463, 2);
    func_8012C89C(D_8038D8CC, 2, 0x463, 3);
    func_8012C89C(D_8038D8CC, 3, 0x463, 4);
    func_8012C89C(D_8038D8CC, 4, 0x463, 5);
    func_8012C89C(D_8038D8CC, 5, 0x464, 2);
    func_8012C89C(D_8038D8CC, 6, 0x464, 3);
    func_8012C89C(D_8038D8CC, 7, 0x464, 4);
    for (i = 0; i < 14; i++) {
        func_8012C89C(D_8038D8CC, i + 8, 0x46E, 0);
    }
    NODE(0)->unk4 = 0.0f;
    NODE(0)->unk8 = 0.0f;
    NODE(0)->unkC = 0.0f;
    NODE(0)->unk12 = 0;
    NODE(0)->unk18 = 1.0f;
    NODE(0)->unk1C = 1.0f;
    NODE(0)->unk20 = 1.0f;
    NODE(1)->unk4 = 0.0f;
    NODE(1)->unk8 = 0.0f;
    NODE(1)->unkC = 0.0f;
    NODE(1)->unk30 = (s32)D_801D9768 | 0x40000000;
    NODE(1)->unk24 = 0x100;
    NODE(1)->unk48 = 0xFF;
    NODE(1)->unk49 = 0xFF;
    NODE(1)->unk4A = 0xFF;
    NODE(1)->unk4B = 0xFF;
    NODE(1)->unk12 = 0;
    NODE(1)->unk18 = 1.0f;
    NODE(1)->unk1C = 1.0f;
    NODE(1)->unk20 = 1.0f;
    NODE(2)->unk4 = 0.0f;
    NODE(2)->unk8 = 0.0f;
    shared = (s32)D_801D9FE8 | 0x40000000;
    NODE(2)->unkC = 0.0f;
    NODE(2)->unk12 = 0;
    NODE(2)->unk30 = shared;
    NODE(2)->unk24 = 0x300;
    NODE(2)->unk48 = 0;
    NODE(2)->unk49 = 0xFF;
    NODE(2)->unk4A = 0xFF;
    NODE(2)->unk4B = 0x7F;
    NODE(2)->unk4C = 0xFF;
    NODE(2)->unk4D = 0xFF;
    NODE(2)->unk4E = 0xFF;
    NODE(2)->unk4F = 0x7F;
    NODE(3)->unk4 = 0.0f;
    NODE(3)->unk8 = 0.0f;
    NODE(3)->unkC = 0.0f;
    NODE(3)->unk12 = 0;
    NODE(3)->unk30 = shared;
    NODE(3)->unk24 = 0x300;
    NODE(3)->unk48 = 0xFF;
    NODE(3)->unk49 = 0;
    NODE(3)->unk4A = 0;
    NODE(3)->unk4B = 0x7F;
    NODE(3)->unk4C = 0xFF;
    NODE(3)->unk4D = 0xFF;
    NODE(3)->unk4E = 0xFF;
    NODE(3)->unk4F = 0x7F;
    NODE(4)->unk4 = 0.0f;
    NODE(4)->unk8 = 0.0f;
    NODE(4)->unkC = 0.0f;
    NODE(4)->unk12 = 0;
    NODE(4)->unk30 = (s32)D_801DA088 | 0x40000000;
    NODE(4)->unk24 = 0x100;
    NODE(4)->unk48 = 0xFF;
    NODE(4)->unk49 = 0xFF;
    NODE(4)->unk4A = 0xFF;
    NODE(4)->unk4B = 0x7F;
    NODE(5)->unk4 = 0.0f;
    NODE(5)->unk8 = 0.0f;
    NODE(5)->unkC = 0.0f;
    NODE(5)->unk12 = 0;
    NODE(5)->unk18 = 1.0f;
    NODE(5)->unk1C = 1.0f;
    NODE(5)->unk20 = 1.0f;
    NODE(6)->unk4 = 0.0f;
    NODE(6)->unk8 = 0.0f;
    NODE(6)->unkC = 0.0f;
    NODE(6)->unk12 = 0;
    NODE(6)->unk30 = (s32)D_801D96C8 | 0x40000000;
    NODE(6)->unk24 = 0x100;
    NODE(6)->unk48 = 0xFF;
    NODE(6)->unk49 = 0xFF;
    NODE(6)->unk4A = 0xFF;
    NODE(6)->unk4B = 0xFF;
    NODE(7)->unk4 = 0.0f;
    NODE(7)->unk8 = 0.0f;
    NODE(7)->unkC = 0.0f;
    NODE(7)->unk12 = 0;
    NODE(7)->unk30 = (s32)D_801DA0B8 | 0x40000000;
    NODE(7)->unk24 = 0x300;
    NODE(7)->unk48 = 0;
    NODE(7)->unk49 = 0;
    NODE(7)->unk4A = 0;
    NODE(7)->unk4B = 0x7F;
    NODE(7)->unk4C = 0x3F;
    NODE(7)->unk4D = 0x5D;
    addr = (s32)func_801D9F00 | 0x40000000;
    NODE(7)->unk4E = 0x29;
    NODE(7)->unk4F = 0x7F;
    for (i = 0; i < 14; i++) {
    func_8012CF8C(D_8038D8CC, (s32)LOOPITEM->unk30 + 0x40, 0x46F, 0);
    LOOPITEM->unk30->unk30 = addr;
    LOOPITEM->unk30->unk24 = 0x300;
    LOOPITEM->unk30->unk48 = 0xFF;
    LOOPITEM->unk30->unk49 = 0xFF;
    LOOPITEM->unk30->unk4A = 0xFF;
    LOOPITEM->unk30->unk4B = 0x7F;
    LOOPITEM->unk30->unk4C = 0xFF;
    LOOPITEM->unk30->unk4D = 0xFF;
    LOOPITEM->unk30->unk4E = 0xFF;
    LOOPITEM->unk30->unk4F = 0x7F;
    LOOPITEM->unk22 = 0;
    }
    if (i) {} if (i) {} if (i) {} if (i) {}
    return 2;
}
#undef ROOT
#undef NODE
#undef LOOPITEM
#undef i
#undef D_801D96C8
#undef D_801D9768
#undef D_801D9FE8
#undef D_801DA088
#undef D_801DA0B8
#undef D_801E39F4
#undef D_801E3A04
#undef D_801E3A14
#undef D_801E3A24
#undef D_801E3A34
#undef D_801E3A44
#undef D_801E3A54
#undef D_801E3A64
#undef D_8038D8CC
#undef D_8038D8D0
#undef func_80005E44
#undef func_80006214
#undef func_8012C89C
#undef func_8012CF8C
#undef func_801D9F00


extern u32 D_8038D8D0;
extern s32 D_801E3A74;
extern s32 D_801E3A78;

s32 func_801E2970(s32 arg0, s32 arg1) {
    *(u8 *)(*(u32 *)(*(u32 *)(D_8038D8D0 + 0x18) + 0x30) + 0x4B) = 0xFF;
    D_801E3A74 = 0;
    D_801E3A78 = 0;
    return 3;
}


typedef struct { u8 pad[0x4B]; u8 unk4B; } func_801E29A8_S3;
typedef struct { u8 pad[0x30]; func_801E29A8_S3 *unk30; } func_801E29A8_S2;
typedef struct { u8 pad[0x18]; func_801E29A8_S2 *unk18; } func_801E29A8_S1;

s32 func_801E29A8(s32 arg0, s32 arg1) {
    f32 t;
    f32 a;
    f32 b;
    f32 d;
    f32 c;

    t = (f32)D_801E3A74 / 30.0f;
    if (D_801E3A78 != 0) {
        a = 255.0f * t;
        b = 215.0f * t + 40.0f;
        d = -40.0f * t + 40.0f;
        c = d;
    } else {
        a = -255.0f * t + 255.0f;
        b = -100.0f * t + 140.0f;
        d = 40.0f * t;
        c = d;
    }
    ((func_801E29A8_S1 *)*(u32 *)&D_8038D8D0)->unk18->unk30->unk4B = (u32)a;
    func_801CCE50((u8)(u32)b, (u8)(u32)d, (u8)(u32)c);
    D_801E3A74++;
    if (D_801E3A74 >= 30) {
        if (D_801E3A78 != 0) {
            D_801E3A78 = 0;
        } else {
            D_801E3A78 = 1;
        }
        D_801E3A74 = 0;
    }
    return 3;
}


extern void func_801BF628(s32 arg0, void *arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E2CF0(s32 arg0, s32 arg1) {
    u8 sp18[0x1F8];

    func_801BF628(3, sp18);
    if (*(s32 *)(sp18 + 0xC) >= 2) {
        func_8038D28C(0x502);
        return 1;
    }
    return 0;
}

extern s32 D_801E3D90[];

typedef struct func_801E2D40_Struct1 {
    u8 pad[0x22];
    u8 flag;
} func_801E2D40_Struct1;
typedef struct func_801E2D40_Struct0 {
    u8 pad[0x20];
    func_801E2D40_Struct1 *items[14];
} func_801E2D40_Struct0;
extern s32 D_801E3D94;
extern s32 D_801E3D98[];
extern s32 D_801E3DC8[];
extern s32 D_801E3DCC;
extern s32 D_801E3DD0[];
extern s32 D_801E3E00;

void func_801E2D40(void) {
    s32 i;

    for (i = 0; i < 14; i++) {
        D_801E3D90[i] = 0;
        D_801E3DC8[i] = 0;
        ((func_801E2D40_Struct0 *)D_8038D8D0)->items[i]->flag = 0;
    }
}

#define D_8038D8D0 D_8038D8D0__func_801E2E14

extern u8 *D_8038D8D0;

void func_801E2E14(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    D_801E3D90[arg0] = arg1;
    if (arg1 != 0) {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 1;
    } else {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 0;
    }
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 4) = arg2;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 8) = arg3;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 0xC) = arg4;
}
#undef D_8038D8D0

extern s32 D_8038D8CC;
extern s32 D_801E3A8C;
extern s32 D_801E3B00[];
extern void func_8012CF8C(s32, s32, s32, s32);

s32 func_801E2EAC(s32 arg0) {
    if (D_801E3D90[arg0] != 0) {
        func_8012CF8C(D_8038D8CC, *(s32 *)(((s32 *)D_8038D8D0)[arg0 + 8] + 0x30) + 0x40, 0x46F, D_801E3B00[D_801E3DC8[arg0]]);
        D_801E3DC8[arg0] += 1;
        D_801E3DC8[arg0] %= D_801E3A8C;
    }
}

#define func_801E2D40 func_801E2D40__func_801E2F70

typedef struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E2F70_Struct2;

typedef struct {
    u8 pad0[0x30];
    func_801E2F70_Struct2 *unk30;
} func_801E2F70_Struct1;

typedef struct {
    u8 pad0[0x20];
    func_801E2F70_Struct1 *unk20[14];
} func_801E2F70_Struct0;

extern void func_801E2D40();

s32 func_801E2F70(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 6; i++) {
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk10 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk14 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk18 = 1.0f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk1C = 1.0f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk20 = 1.0f;
    }
    for (i = 6; i < 14; i++) {
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk10 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk14 = 0x1800;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk18 = 0.5f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk1C = 0.5f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk20 = 1.0f;
    }
    func_801E2D40();
    return 2;
}
#undef func_801E2D40

extern void func_801C1000(s32 a0, s32 a1);

s32 func_801E3420(s32 arg0, s32 arg1) {
    func_801C1000(3, 1);
    return 3;
}

#define func_801C10D8 func_801C10D8__func_801E3450
#define func_801C1134 func_801C1134__func_801E3450
#define func_801E2E14 func_801E2E14__func_801E3450
#define func_801E2EAC func_801E2EAC__func_801E3450
#define func_8038D28C func_8038D28C__func_801E3450
extern u32 func_801C1134(s32, s32);
extern void func_801C10D8(s32, s32);
extern void func_801E2E14(s32, s32, f32, f32, f32);
extern s32 func_801E2EAC(s32);
extern void func_8038D28C(s32);

s32 func_801E3450(s32 arg0, s32 arg1) {
    u32 var_v0;
    s32 var_s0;

    var_v0 = func_801C1134(3, 1);
    switch (var_v0) {
    case 0x1E:
        func_801E2E14(0, 1, 230.0f, 20.0f, 5.0f);
        func_8038D28C(0x503);
        break;
    case 0x3C:
        func_801E2E14(1, 1, 170.0f, 20.0f, 10.0f);
        func_8038D28C(0x504);
        break;
    case 0x46:
        func_801E2E14(2, 1, 210.0f, 20.0f, -14.0f);
        func_8038D28C(0x504);
        break;
    case 0x5A:
        func_801E2E14(3, 1, 250.0f, 20.0f, -9.0f);
        func_8038D28C(0x504);
        break;
    case 0x5F:
        func_801E2E14(4, 1, 260.0f, 20.0f, -9.0f);
        func_8038D28C(0x504);
        break;
    case 0x6E:
        func_801E2E14(5, 1, 187.0f, 20.0f, -3.0f);
        func_8038D28C(0x504);
        break;
    case 0x79:
        func_801E2E14(6, 1, -130.0f, -59.0f, 33.0f);
        func_8038D28C(0x504);
        break;
    case 0x82:
        func_801E2E14(7, 1, -130.0f, -55.0f, -16.0f);
        func_8038D28C(0x504);
        break;
    case 0x87:
        func_801E2E14(8, 1, -130.0f, -14.0f, -22.0f);
        func_8038D28C(0x504);
        break;
    case 0xAA:
        func_801E2E14(9, 1, -130.0f, -35.0f, 4.0f);
        func_8038D28C(0x504);
        break;
    case 0xBE:
        func_801E2E14(0xA, 1, -130.0f, -101.0f, 32.0f);
        func_8038D28C(0x504);
        break;
    case 0xC3:
        func_801E2E14(0xB, 1, -130.0f, -36.0f, 25.0f);
        func_8038D28C(0x504);
        break;
    case 0xD2:
        func_801E2E14(0xC, 1, -130.0f, -72.0f, 47.0f);
        func_8038D28C(0x504);
        break;
    case 0xE6:
        func_801E2E14(0xD, 1, -130.0f, -70.0f, 11.0f);
        func_8038D28C(0x504);
        break;
    case 0xEB:
        func_801C10D8(3, 1);
        return 4;
    }
    var_s0 = 0;
    do {
        func_801E2EAC(var_s0);
        var_s0++;
    } while (var_s0 != 0xE);
    return 3;
}
#undef func_801C10D8
#undef func_801C1134
#undef func_801E2E14
#undef func_801E2EAC
#undef func_8038D28C

#define func_801E2EAC func_801E2EAC__func_801E37B8

extern s32 func_801E2EAC(s32);

s32 func_801E37B8(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 0xE; i++) {
        func_801E2EAC(i);
    }
    return 4;
}
#undef func_801E2EAC

s32 func_801C0B8C(u64 time);

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E3804(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x7A120) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E388C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E38BC(s32 arg0, s32 arg1) {
    return 3;
}

#define D_8038C97C D_8038C97C__func_801E38CC

extern void D_8038C97C();

s32 func_801E38CC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    if (func_801C0B8C(0xCDFE60) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}
#undef D_8038C97C



s32 func_801E3954(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    return 5;
}


s32 func_801E397C(s32 arg0, s32 arg1) {
    return 5;
}
