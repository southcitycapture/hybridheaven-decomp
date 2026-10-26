#include "common.h"

extern s8 D_801BCC21;

typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;

extern func_8021B150_Struct D_8017DD7C;

void func_8021B150(s32 arg0, s32 arg1) {
    if ((D_8017DD7C.unk16 != 0 || (u8) D_801BCC21 == 5 || (u8) D_801BCC21 == 6 || (u8) D_801BCC21 == 7) && D_8017DD7C.unk24 < 0xFFFFFFFFU) {
        D_8017DD7C.unk24 = D_8017DD7C.unk24 + 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B1A8.s")

#define func_8021B240 func_8021B240__func_8021B200

extern void func_800172F4();
extern void func_80016E40(s32);
extern void func_800058DC(void *obj, void *fn);
extern void func_8021B240(s32 arg0, s32 arg1);

void func_8021B200(s32 arg0, s32 arg1) {
    func_800172F4();
    func_80016E40(0x36FC0);
    func_800058DC((void *)arg0, func_8021B240);
}
#undef func_8021B240


extern s32 func_80126A0C(s32, s32, s32);
extern void func_8021B280();

void func_8021B240(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x39, 1) != 0) {
        func_800058DC((void *)arg0, func_8021B280);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021B280.s")

extern u8 D_801BBBF0[];

typedef struct func_8021B560_StructC { u8 pad[0x63]; u8 unk63; } func_8021B560_StructC;
typedef struct func_8021B560_StructG {
    u8 pad0[0x2C]; u16 unk2C;
    u8 pad1[0xDC - 0x2E]; func_8021B560_StructC *unkDC;
    u8 pad1b[0xEC - 0xE0]; func_8021B560_StructC *unkEC;
    u8 pad1c[0x450 - 0xF0]; s16 unk450; s16 unk452;
    u8 pad2[0x4A2 - 0x454]; s16 unk4A2;
    u8 pad3[0x7EC - 0x4A4]; s16 unk7EC; s16 unk7EE;
    u8 pad4[0x83E - 0x7F0]; s16 unk83E;
    u8 pad5[0x1031 - 0x840]; u8 unk1031; u8 pad6[2]; u8 unk1034;
} func_8021B560_StructG;
typedef struct func_8021B560_StructO { u8 pad[0x90]; u8 unk90; u8 pad2[0x9C-0x91]; s32 unk9C; } func_8021B560_StructO;

extern s32 func_80005670(void *, void *);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s8 D_8023C264;
extern u8 D_8023C924[];
#define func_8021B870 func_8021B870__decl67
extern u8 func_8021B870[];
extern void func_8022C7A4(void *);
extern void func_8022CABC();
extern void func_8022CAFC(void *);
extern s16 func_8022D954(void *);
extern void func_80232820();
extern void func_80232FEC(void *);
extern s32 func_80236C9C();
extern void func_80244410(void *);

#define G ((func_8021B560_StructG *)D_801BBBF0)

void func_8021B560(func_8021B560_StructO *arg0, s32 arg1) {
    s32 v;

    if (arg0->unk90 == 0) {
        if ((G->unk2C == 0xA) || (G->unk2C == 0xB)) {
            arg0->unk90 = func_80126A0C((s32)arg0, 0x111, 0);
            return;
        }
        arg0->unk90 = func_80126A0C((s32)arg0, 0x10F, 0);
        return;
    }
    v = arg0->unk90;
    if (v == 1) {
        if ((func_80236C9C() != 0) || (G->unk2C == 0xA) || (G->unk2C == 0xB)) {
            if (func_80126A0C((s32)arg0, 0x110, 0) != 0) {
                arg0->unk90 = 3;
            }
        } else {
            arg0->unk90 = 3;
        }
    } else if ((G->unkDC->unk63 != 0) && (G->unkEC->unk63 != 0) && (v == 3)) {
        arg0->unk9C = func_80005670(arg0, D_8023C924);
        if ((G->unk2C == 0xA) || (G->unk2C == 0xB)) {
            func_8022C7A4(D_801BC3D8);
            func_80244410(D_801BC03C);
            func_80244410(D_801BC3D8);
            func_80232FEC(G->unkDC);
            func_80232FEC(G->unkEC);
        } else {
            func_80232FEC(G->unkDC);
            func_8022CABC();
            func_8022CAFC(G->unkEC);
            func_80232820();
        }
        G->unk4A2 = func_8022D954(D_801BC03C);
        G->unk83E = func_8022D954(D_801BC3D8);
        v = G->unk1034;
        if (v == 1) {
            G->unk7EE = G->unk7EC;
        }
        if ((v == 2) || (func_80151BC4() == 2)) {
            G->unk452 = G->unk450;
        }
        arg0->unk90 = 0;
        D_8023C264 = 0;
        func_800058DC(arg0, func_8021B870);
        G->unk1031 = 2;
    }
}
#undef func_8021B870


s16 func_8001EF38(f32, f32);                        /* extern */
f32 func_8002FC20(f32);                             /* extern */

typedef struct func_8021B790_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8021B790_Vec;

typedef struct func_8021B790_Node2 {
    u8 pad0[0x2C];
    func_8021B790_Vec *unk2C;
} func_8021B790_Node2;

typedef struct func_8021B790_Node1 {
    u8 pad0[0x24];
    func_8021B790_Node2 *unk24;
} func_8021B790_Node1;

typedef struct func_8021B790_Node0 {
    func_8021B790_Node1 *unk0;
} func_8021B790_Node0;

typedef struct func_8021B790_Glob {
    u8 pad0[0xE0];
    func_8021B790_Node2 *unkE0;
    u8 pad1[0x448 - 0xE4];
    func_8021B790_Node0 *unk448;
    u8 pad2[0xB84 - 0x44C];
    f32 unkB84;
    f32 unkB88;
    f32 unkB8C;
    f32 unkB90;
    f32 unkB94;
    s16 unkB98;
} func_8021B790_Glob;

#define P ((func_8021B790_Glob *)D_801BBBF0)

void func_8021B790(void) {
    P->unkB84 = P->unk448->unk0->unk24->unk2C->unk4 - P->unkE0->unk2C->unk4;
    P->unkB88 = P->unk448->unk0->unk24->unk2C->unk8 - P->unkE0->unk2C->unk8;
    P->unkB8C = P->unk448->unk0->unk24->unk2C->unkC - P->unkE0->unk2C->unkC;
    P->unkB90 = P->unkB84 * P->unkB84 + P->unkB8C * P->unkB8C;
    P->unkB94 = func_8002FC20(P->unkB90);
    P->unkB90 = P->unkB90 + P->unkB88 * P->unkB88;
    P->unkB90 = func_8002FC20(P->unkB90);
    P->unkB98 = func_8001EF38(P->unkB84, P->unkB8C);
}

#define D_8008D558 D_8008D558__func_8021B870
#define func_8021B790 func_8021B790__func_8021B870
#define func_8021BD00 func_8021BD00__func_8021B870
#define func_8022AF94 func_8022AF94__func_8021B870
extern u8 D_8008D558[];
void func_8021B790(void);


typedef struct func_8021B870_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xEC - 0x2E];
    void *unkEC;
    u8 pad2[0x181 - 0xF0];
    u8 unk181;
    u8 pad3[0x188 - 0x182];
    s32 unk188;
    u8 pad4[0x1031 - 0x18C];
    u8 unk1031;
} func_8021B870_Struct;
extern void func_8022AF94(void *);
extern void func_8021BD00();

#define S (*(u8 *)&D_8023C264)
#define GG ((func_8021B870_Struct *)D_801BBBF0)

void func_8021B870(s32 arg0, s32 arg1) {
    if (S == 0) {
        if (func_80126A0C(arg0, 0x1AA, 0) != 1) return;
        S++;
    }
    if (S == 1) {
        if (func_80126A0C(arg0, 0x1AB, 0) != 1) return;
        S++;
    }
    if (S == 2) {
        if (func_80126A0C(arg0, 0x1AC, 0) != 1) return;
        S++;
    }
    if (S == 3) {
        if (func_80126A0C(arg0, 0x1AD, 0) != 1) return;
        S++;
    }
    if (S == 4) {
        if (func_80126A0C(arg0, 0x1AF, 0) != 1) return;
        S++;
    }
    if (S == 5) {
        if (func_80126A0C(arg0, 0x1B0, 0) != 1) return;
        S++;
    }
    if (S == 6) {
        if (func_80126A0C(arg0, 0x1B1, 0) != 1) return;
        S++;
    }
    if (S == 7) {
        if (func_80126A0C(arg0, 0x1B2, 0) != 1) return;
        S++;
    }
    if (S == 8) {
        if (func_80126A0C(arg0, 0x1B3, 0) != 1) return;
        S++;
    }
    if (S == 9) {
        if (func_80126A0C(arg0, 0x1B4, 0) != 1) return;
        S++;
    }
    if (S == 10) {
        if (func_80126A0C(arg0, 0x1B5, 0) != 1) return;
        S++;
    }
    if (S == 11) {
        if (func_80126A0C(arg0, 0x1B6, 0) != 1) return;
        S++;
    }
    if (S == 12) {
        if (func_80126A0C(arg0, 0x1B7, 0) != 1) return;
        S++;
    }
    if (S == 13) {
        if (func_80126A0C(arg0, 0x1B8, 0) != 1) return;
        S++;
    }
    if (S == 14) {
        if (func_80126A0C(arg0, 0x125, 0) == 0) return;
        S++;
    }
    if (S == 15) {
        if (func_80126A0C(arg0, 0x127, 0) == 0) return;
        S++;
    }
    if (S == 16) {
        if (GG->unk2C == 4 || GG->unk2C == 5 || GG->unk2C == 0xF) {
            if (GG->unk188 != 0) return;
            if (GG->unk181 != 0) return;
            if (*(u32 *)(D_8008D558 + 0x28) > 0x2000) {
                GG->unk181 = 1;
                return;
            }
            GG->unk181 = 1;
            func_8022AF94(GG->unkEC);
        }
        S++;
    }
    func_800058DC((void *)arg0, func_8021BD00);
    GG->unk1031 = 3;
    func_8021B790();
}
#undef S
#undef GG
#undef D_8008D558
#undef func_8021B790
#undef func_8021BD00
#undef func_8022AF94

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/D_8023E940.s")

#define func_8021B790 func_8021B790__func_8021BD00
#define func_8021BDE0 func_8021BDE0__func_8021BD00
extern void func_8021B790();
void func_8021BDE0(u8 *arg0, s32 arg1);

extern u64 func_80031190(void);
extern u64 func_80026F58(u64, u64);
extern u64 func_80026E58(u64, u64);
extern f64 func_80034C24();
extern u64 func_80034AB8(f64);
extern s32 func_80151BC4(void);
extern void func_802332D8(void);

extern u64 D_80240758;

void func_8021BD00(s32 arg0, s32 arg1) {
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;

    func_8021B790();
    temp_ret = func_80031190();
    temp_ret_2 = func_80026F58(temp_ret - D_80240758, 0x40);
    temp_ret_3 = func_80026E58(temp_ret_2, 0xBB8);
    temp_ret_4 = func_80034AB8(func_80034C24(temp_ret_3) / 16666.666);
    if (temp_ret_4 >= 0x1F) {
        if ((D_801BBBF0[0x181] == 0) && (D_801BBBF0[0x182] == 0)) {
            if (func_80151BC4() != 2) {
                func_802332D8();
            }
            func_800058DC((void *) arg0, (void *) func_8021BDE0);
        }
    }
}
#undef func_8021B790
#undef func_8021BDE0

#define func_8021B790 func_8021B790__func_8021BDE0
#define func_8021BE30 func_8021BE30__func_8021BDE0

extern void func_8021B790();
extern void func_8021BE30();

void func_8021BDE0(u8 *arg0, s32 arg1) {
    func_8021B790();
    if (D_801BBBF0[0x299] != 0) {
        arg0[0x90] = 0;
        D_801BBBF0[0x1031] = 4;
        func_800058DC(arg0, func_8021BE30);
    }
}
#undef func_8021B790
#undef func_8021BE30

#define func_8021BF74 func_8021BF74__func_8021BE30

typedef struct func_8021BE30_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_8021BE30_Struct;
typedef struct func_8021BE30_StructA {
    u8 pad[0x9C];
    func_8021BE30_Struct *unk9C;
} func_8021BE30_StructA;
typedef struct func_8021BE30_StructB {
    u8 pad[0x94];
    void *unk94;
    u8 pad2[0xA8 - 0x98];
    u8 unkA8;
} func_8021BE30_StructB;

extern void func_80229524();
extern u16 D_801BBC1C;
extern void func_8021BF74();
extern u8 D_803896B4[];
extern u8 D_80389704[];
extern u8 D_80389718[];

void func_8021BE30(func_8021BE30_StructA *arg0, s32 arg1) {
    if (arg0->unk9C->unk90 != 0) {
        if ((D_801BBC1C != 0xA) && (D_801BBC1C != 0xB)) {
            func_80229524(*(s32 *)(D_801BBBF0 + 0xEC));
            if (*(u16 *)(D_801BBBF0 + 0x2C) == 0xF) {
                func_80229524(*(s32 *)(D_801BBBF0 + 0xDC));
            }
        }
        ((func_8021BE30_StructB *)func_80005670(arg0, D_80389704))->unkA8 = 0;
        if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
            ((func_8021BE30_StructB *)func_80005670(arg0, D_80389704))->unkA8 = 1;
        }
        ((func_8021BE30_StructB *)func_80005670(arg0, D_803896B4))->unk94 = D_801BC03C;
        ((func_8021BE30_StructB *)func_80005670(arg0, D_803896B4))->unk94 = D_801BC3D8;
        ((func_8021BE30_StructB *)func_80005670(arg0, D_80389718))->unkA8 = 0;
        ((func_8021BE30_StructB *)func_80005670(arg0, D_80389718))->unkA8 = 1;
        func_800058DC(arg0, func_8021BF74);
        D_801BCC21 = 5;
    }
}
#undef func_8021BF74

#define func_8021CC30 func_8021CC30__func_8021BF74
#define func_8021D8B8 func_8021D8B8__func_8021BF74

extern void func_8022BD28();
extern void func_8022BECC();
extern void func_8022C010();
extern void func_8022D9EC();
extern void func_8022F850();
extern void func_8022F99C();
extern void func_8022FC38();
extern void func_8022FFFC();
extern void func_802300F0();
extern u8 D_80089474[];
extern u8 D_80389AE8[];
extern u8 func_8021C198[];

struct func_8021CC30_Struct;
void func_8021CC30(struct func_8021CC30_Struct *arg0, s32 arg1);
void func_8021D8B8(s32 arg0, s32 arg1);

typedef struct func_8021BF74_Struct {
    u8 pad[0x94];
    u8 unk94;
    u8 pad2[0xA4 - 0x95];
    s32 unkA4;
} func_8021BF74_Struct;

void func_8021BF74(u8 *arg0, s32 arg1) {
    func_8021BF74_Struct *temp_v0;

    if (D_801BBBF0[0x1031] == 0xF) {
        D_801BBBF0[0x1031] = 5;
    }
    func_8021B790();
    func_8022C010(D_801BC03C);
    func_8022C010(D_801BC3D8);
    func_8022F850(D_801BC03C);
    func_8022F850(D_801BC3D8);
    func_8022FC38(D_801BC03C);
    func_8022FC38(D_801BC3D8);
    func_8022F99C(D_801BC03C);
    func_8022F99C(D_801BC3D8);
    func_8022D9EC(D_801BC03C);
    func_8022D9EC(D_801BC3D8);
    func_8022BD28(D_801BC03C);
    func_8022BD28(D_801BC3D8);
    func_8022BECC(D_801BC03C);
    func_8022BECC(D_801BC3D8);
    func_8022FFFC(D_801BC03C);
    func_8022FFFC(D_801BC3D8);
    func_802300F0(D_801BC03C);
    func_802300F0(D_801BC3D8);
    if (*(s16 *)&D_801BBBF0[0x44E] <= 0 || *(s16 *)&D_801BBBF0[0x7EA] <= 0) {
        if (*(s16 *)&D_801BBBF0[0x44E] <= 0) {
            D_801BBBF0[0x744] = 5;
            *(u16 *)&D_801BBBF0[0x4EA] = 0xFFFF;
        } else {
            D_801BBBF0[0xAE0] = 5;
            *(u16 *)&D_801BBBF0[0x886] = 0xFFFF;
        }
        arg0[0xAE] = 1;
        D_801BBBF0[0x1031] = 8;
        func_800058DC(arg0, func_8021CC30);
        return;
    }
    if (D_801BBBF0[0x1031] == 6) {
        func_800058DC(arg0, func_8021C198);
        return;
    }
    if ((*(u16 *)&D_80089474[4] & 0x1000) && *(u16 *)&D_801BBBF0[0x2C] != 0xA && *(u16 *)&D_801BBBF0[0x2C] != 0xB && *(u16 *)&D_801BBBF0[0x2C] != 0xF && func_80236C9C() == 0) {
        temp_v0 = (func_8021BF74_Struct *)func_80005670(arg0, D_80389AE8);
        temp_v0->unkA4 = (s32)arg0;
        temp_v0->unk94 = 0;
        D_801BBBF0[0x1031] = 0xF;
        func_800058DC(arg0, func_8021D8B8);
    }
}
#undef func_8021CC30
#undef func_8021D8B8

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C4C0.s")


void func_8021C928(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021B150/func_8021C934.s")

#define func_8021CE7C func_8021CE7C__func_8021CC30
#define func_8021D034 func_8021D034__func_8021CC30
#define func_8021D72C func_8021D72C__func_8021CC30

typedef struct func_8021CC30_Struct {
    u8 pad[0xA0];
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    s16 unkAC;
    u8 padAE[2];
    s16 unkB0;
} func_8021CC30_Struct;

typedef struct func_8021CC30_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8021CC30_Struct2;
typedef struct func_8021CC30_Struct3 {
    u8 pad[0x2C];
    func_8021CC30_Struct2 *unk2C;
} func_8021CC30_Struct3;
typedef struct func_8021CC30_Struct4 {
    u8 pad[0x24];
    func_8021CC30_Struct3 *unk24;
} func_8021CC30_Struct4;
typedef struct func_8021CC30_Struct5 {
    func_8021CC30_Struct4 *unk0;
} func_8021CC30_Struct5;

struct func_8021CDE8_Struct;
void func_8021CE7C(struct func_8021CDE8_Struct *arg0, s32 arg1);
void func_8021D034(s32 arg0, s32 arg1);
void func_8021D72C(s32 arg0, s32 arg1);
extern void func_80146B04();
extern void func_802329F8();
extern u8 D_802176D0[];
#define func_8021D040 func_8021D040__decl536
extern u8 func_8021D040[];

void func_8021CC30(func_8021CC30_Struct *arg0, s32 arg1) {
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB) {
        if (*(s16 *)(D_801BBBF0 + 0x44E) <= 0) {
            func_80146B04();
            func_802329F8();
            D_801BBBF0[0x1031] = 0xB;
            if (((u8 *)&D_8017DD7C)[0x16] == 2 && ((u8 *)&D_8017DD7C)[0x17] != 0) {
                func_800058DC(arg0, func_8021D72C);
                return;
            }
            func_80005670(arg0, D_802176D0);
            func_800058DC(arg0, func_8021D034);
            return;
        }
        if (*(s16 *)(D_801BBBF0 + 0x7EA) <= 0) {
#define P (**(func_8021CC30_Struct5 **)(D_801BBBF0 + 0x448)).unk0->unk24->unk2C
            arg0->unkA0 = P->unk4;
            arg0->unkA4 = P->unk8;
            arg0->unkA8 = P->unkC;
            arg0->unkAC = P->unk12;
            arg0->unkB0 = 5;
            D_801BBBF0[0x1031] = 0xA;
            func_800058DC(arg0, func_8021CE7C);
        }
    } else {
        D_801BBBF0[0x1031] = 0xC;
        func_800058DC(arg0, func_8021D040);
    }
}
#undef func_8021D040
#undef func_8021CE7C
#undef func_8021D034
#undef func_8021D72C

#define func_8021BF74 func_8021BF74__func_8021CD9C

extern void func_8021BF74();

typedef struct func_8021CD9C_Struct {
    u8 pad[0xB0];
    s16 unkB0;
} func_8021CD9C_Struct;

void func_8021CD9C(func_8021CD9C_Struct *arg0, void *arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        D_801BCC21 = 5;
        func_800058DC(arg0, func_8021BF74);
    }
}
#undef func_8021BF74

#define func_8021D264 func_8021D264__func_8021CDE8

typedef struct func_8021CDE8_Struct {
    u8 pad0[0x9B];
    u8 unk9B;
    u8 pad1[0xAE - 0x9C];
    u8 unkAE;
    u8 unkAF;
    s16 unkB0;
} func_8021CDE8_Struct;

extern void func_80020744(s32);
extern void func_80126E88(s32);
extern void func_8021D264();

void func_8021CDE8(func_8021CDE8_Struct *arg0, s32 arg1) {
    func_8021CDE8_Struct *temp = arg0;

    if (arg0->unkAE != 0 && arg0->unkAF == 0 && arg0->unk9B == 0) {
        arg0->unkB0 = arg0->unkB0 - 1;
        if (arg0->unkB0 < 0) {
            arg0->unkB0 = 0x1E;
            func_80020744(7);
            func_80126E88(0x125);
            D_801BCC21 = 0xE;
            func_800058DC(temp, func_8021D264);
        }
    }
}
#undef func_8021D264

#define func_8021CEF4 func_8021CEF4__func_8021CE7C

extern void func_8021CEF4();

void func_8021CE7C(func_8021CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unkAE != 0 && arg0->unkAF == 0 && arg0->unk9B == 0) {
        arg0->unkB0 = arg0->unkB0 - 1;
        if (arg0->unkB0 < 0) {
            func_80126E88(0x125);
            func_800058DC(arg0, func_8021CEF4);
        }
    }
}
#undef func_8021CEF4

#define func_8021CF50 func_8021CF50__func_8021CEF4

extern u8 D_80389B00[];
extern void func_8021CF50();

typedef struct func_8021CEF4_Struct {
    u8 pad0[0x9C];
    s32 unk9C;
    u8 pad1[0xB3 - 0xA0];
    u8 unkB3;
} func_8021CEF4_Struct;

void func_8021CEF4(func_8021CEF4_Struct *arg0, s32 arg1) {
    if (func_80126A0C((s32)arg0, 0x129, 0) != 0) {
        arg0->unk9C = func_80005670(arg0, D_80389B00);
        arg0->unkB3 = 0;
        func_800058DC(arg0, func_8021CF50);
    }
}
#undef func_8021CF50

#define func_8021D264 func_8021D264__func_8021CF50

typedef struct func_8021CF50_StructArg {
    u8 pad0[0xA0];
    f32 unkA0;
    f32 unkA4;
    s32 unkA8;
    s16 unkAC;
    u8 padAE[0xB0 - 0xAE];
    s16 unkB0;
    u8 padB2[0xB3 - 0xB2];
    u8 unkB3;
} func_8021CF50_StructArg;

typedef struct func_8021CF50_StructGlobal {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0x818 - 0x2E];
    s32 unk818;
    u8 pad2[0xEF0 - 0x81C];
    u16 unkEF0;
} func_8021CF50_StructGlobal;

extern void func_8021D264();

void func_801FA1C4();
void func_80231D84(f32, f32, s32, s16, s32);
void func_80232278();
void func_802322E8();
void func_8037865C();

void func_8021CF50(func_8021CF50_StructArg *arg0, s32 arg1) {
    ((func_8021CF50_StructGlobal *) D_801BBBF0)->unkEF0 = ((func_8021CF50_StructGlobal *) D_801BBBF0)->unkEF0 | 0x10;
    if ((((u32) (((func_8021CF50_StructGlobal *) D_801BBBF0)->unk818 * 2) >> 0x1E) == 3) && (arg0->unkB3 != 0)) {
        if ((((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C != 5) && (((((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C != 0xA) != ((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C) != 0xB)) {
            func_80231D84(arg0->unkA0, arg0->unkA4, arg0->unkA8, arg0->unkAC, 1);
        }
        func_8037865C();
        func_80232278();
        func_802322E8();
        func_80020744(7);
        D_801BCC21 = 0xE;
        arg0->unkB0 = 0x1E;
        func_801FA1C4();
        func_800058DC(arg0, func_8021D264);
    }
}
#undef func_8021D264


void func_8021D034(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define D_80089356 D_80089356__func_8021D040
#define D_8017DD7C D_8017DD7C__func_8021D040
#define D_801BCAE0 D_801BCAE0__func_8021D040
#define D_80389740 D_80389740__func_8021D040
#define D_80389BA0 D_80389BA0__func_8021D040
#define func_800023EC func_800023EC__func_8021D040
#define func_8021B150_Struct func_8021B150_Struct__func_8021D040
#define func_8021D1A8 func_8021D1A8__func_8021D040
extern s16 D_80089356;
typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;
extern func_8021B150_Struct D_8017DD7C;
extern void func_800023EC();


typedef struct func_8021D040_Struct {
    u8 pad[0xA4];
    s16 unkA4;
    u8 pad2[2];
    u8 unkA8;
    u8 pad3[5];
    u8 unkAE;
    u8 pad4;
    s16 unkB0;
    u8 unkB2;
} func_8021D040_Struct;
typedef struct func_8021D040_StructGlobal {
    u8 unk0;
    u8 unk1;
    u8 pad[12];
    s8 unkE;
    s8 unkF;
} func_8021D040_StructGlobal;
extern u16 D_801BCAE0;
extern u16 B_801BCAE0;
extern void func_8021D1A8();
extern u8 D_80389740[];
extern u8 D_80389BA0[];
#define STATE ((func_8021D040_StructGlobal *)&D_8017DD7C)

void func_8021D040(func_8021D040_Struct *arg0, s32 arg1) {
    s32 temp;
    func_8021D040_Struct *obj;

    D_801BCAE0 = B_801BCAE0 | 0x10;
    if (arg0->unkAE != 0) {
        if (arg0->unkB2 == 0) {
            obj = (func_8021D040_Struct *)func_80005670(arg0, D_80389740);
            if (*(s16 *)(D_801BC3D8 + 2) <= 0) {
                obj->unkA8 = 0;
                STATE->unk0++;
                if (STATE->unk0 >= 100) {
                    STATE->unk0 = 99;
                }
            } else {
                obj->unkA8 = 1;
                STATE->unk1++;
                if (STATE->unk1 >= 100) {
                    STATE->unk1 = 99;
                }
            }
            func_80005670(arg0, D_80389BA0);
            arg0->unkA4 = 0;
            arg0->unkB2++;
        }
        if (arg0->unkA4 & 0x80) {
            arg0->unkB0 = 0;
            D_80089356 = 0;
            func_800023EC();
            func_80020744(7);
            temp = arg0->unkA4 & 0x7F;
            if (temp != 0) {
                if (temp == 1) {
                    STATE->unkF = 0;
                    STATE->unkE = STATE->unkF;
                } else {
                    STATE->unk0 = STATE->unk1 = 0;
                }
            }
            D_801BCC21 = 14;
            func_800058DC(arg0, func_8021D1A8);
        }
    }
}
#undef STATE
#undef D_80089356
#undef D_8017DD7C
#undef D_801BCAE0
#undef D_80389740
#undef D_80389BA0
#undef func_800023EC
#undef func_8021B150_Struct
#undef func_8021D1A8


struct func_8021D1A8_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    u8 pad1[0xA];
    s16 unkB0;
};

extern s32 func_80005700(void *);
extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern u16 D_801BBBF4;

void func_8021D1A8(struct func_8021D1A8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x1F) {
        temp_v0 = arg0->unkA4 & 0x7F;
        if (temp_v0 == 0) {
            func_8012FE50(0xB, D_801BBBF4, 5, 5, 0);
        } else if (temp_v0 == 1) {
            func_8012FE50(0xE, 0xC0, 1, 1, 0);
        } else {
            func_8012FE50(0xE, 0x73, 1, 1, 0);
        }
        func_80005700(arg0);
    }
}

#define func_8021D36C func_8021D36C__func_8021D264
void func_8021D36C(void *arg0, s32 arg1);

extern void func_800023EC();
extern void func_801271E4(void *);
extern s16 D_80089356;
extern u32 D_8023C268[];

typedef struct func_8021D264_Struct {
    u8 pad[0xB0];
    s16 unkB0;
} func_8021D264_Struct;

typedef struct func_8021D264_Args {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
} func_8021D264_Args;

func_8021D264_Struct *func_8012C4D0(void *, func_8021D264_Args, s32);

void func_8021D264(func_8021D264_Struct *arg0, s32 arg1) {
    D_801BBBF0[0x1031] = 0xE;
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        if (*(u16 *)(D_801BBBF0 + 0x2C) == 5 || *(u16 *)(D_801BBBF0 + 0x2C) == 0xA ||
            *(u16 *)(D_801BBBF0 + 0x2C) == 0xB || *(u16 *)(D_801BBBF0 + 0x2C) == 0xF) {
            func_80146B04();
            D_80089356 = 0;
            func_800023EC();
            arg0->unkB0 = 0;
            func_800058DC(arg0, func_8021D36C);
            return;
        }
        func_801271E4(arg0);
        func_80005700(arg0);
        func_8012C4D0(arg0, *(func_8021D264_Args *)D_8023C268, 3)->unkB0 = 0;
    }
}
#undef func_8021D36C


typedef struct func_8021D36C_Struct {
    u8 pad0[0x12];
    u16 unk12;
    u16 unk14;
    u8 unk16;
    u8 unk17;
    u8 pad1[0x22 - 0x18];
    u8 unk22;
} func_8021D36C_Struct;
typedef struct func_8021D36C_Struct2 {
    u8 pad[0x36];
    u16 unk36;
} func_8021D36C_Struct2;
extern func_8021D36C_Struct2 *D_801BBCDC;
#define s ((func_8021D36C_Struct *)&D_8017DD7C)
extern void func_80152F7C();
extern s32 func_80153008();

void func_8021D36C(void *arg0, s32 arg1) {
    u16 t;
    s32 k =s->unk16;

    if (k == 0) {
        t = D_801BBCDC->unk36;
        if (t == 0x31) {
            func_8012FE50(0x20, 0xF1, 4, 4, 0);
        } else if (t == 0x148) {
            func_8012FE50(0x20, 0x103, 4, 4, 0);
        } else if (t == 0x11D) {
            func_8012FE50(0x20, 0xF6, 4, 4, 0);
        } else if (t == 0x11E) {
            func_8012FE50(0x20, 0xF7, 4, 4, 0);
        } else if (t == 0x11B) {
            func_8012FE50(0x20, 0xFE, 4, 4, 0);
        } else {
            func_8012FE50(0xE, 0x73, 1, 1, 0);
        }
    } else {
        s->unk22 += 1;
        if (s->unk22 < s->unk14) {
            func_80152F7C();
            func_8012FE50(0x20, func_80153008(), 5, 5, 0);
        } else if (s->unk17 != 0 && k == 2 && s->unk12 == 0x11B) {
            func_8012FE50(0x20, 0xC2, 1, 1, 0);
        } else {
            func_8012FE50(0x20, 0xC3, 1, 1, 0);
        }
    }
    func_80005700(arg0);
}

#define func_8021D624 func_8021D624__func_8021D53C
extern void func_8021D624(s32 arg0, s32 arg1);

void func_8021D53C(func_8021CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unkB0++ >= 6) {
        func_80126E88(0x110);
        func_80126E88(0x127);
        func_80126E88(0x129);
        func_80126E88(0x10F);
        func_80126E88(0x111);
        func_80126E88(0x1AA);
        func_80126E88(0x1AB);
        func_80126E88(0x1AC);
        func_80126E88(0x1AD);
        func_80126E88(0x1AF);
        func_80126E88(0x1B0);
        func_80126E88(0x1B1);
        func_80126E88(0x1B2);
        func_80126E88(0x1B3);
        func_80126E88(0x1B4);
        func_80126E88(0x1B5);
        func_80126E88(0x1B6);
        func_80126E88(0x1B7);
        func_80126E88(0x1B8);
        func_800058DC(arg0, func_8021D624);
    }
}
#undef func_8021D624

#define func_8021D664 func_8021D664__func_8021D624

extern void func_8021D664();

void func_8021D624(s32 arg0, s32 arg1) {
    func_800172F4();
    func_80016E40(0x1A000);
    func_800058DC((void *)arg0, (void *)func_8021D664);
}
#undef func_8021D664

#define func_8021D6A4 func_8021D6A4__func_8021D664

extern void func_8021D6A4();

void func_8021D664(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x38, 1) != 0) {
        func_800058DC((void *)arg0, func_8021D6A4);
    }
}
#undef func_8021D6A4

extern u8 D_8008D558[];
extern void func_801269C0();
extern void func_80126930(s32);
extern void func_801F3B5C(s32);

void func_8021D6A4(s32 arg0, s32 arg1) {
    if (*(s32 *)(D_801BBBF0 + 0x188) == 0) {
        if (D_801BBBF0[0x181] == 0) {
            if (*(u32 *)(D_8008D558 + 0x28) > 0x2000) {
                D_801BBBF0[0x181] = 1;
                return;
            }
            D_801BBBF0[0x181] = 1;
            func_801269C0();
            func_80126930(0);
            func_80146B04();
            func_801F3B5C(0);
            func_80005700((void *)arg0);
        }
    }
}

#define func_80005670 func_80005670__func_8021D72C
#define func_8021D768 func_8021D768__func_8021D72C

extern s32 func_80005670();
extern u8 D_80044090[];
extern void func_8021D768(s32 arg0, s32 arg1);

void func_8021D72C(s32 arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_8021D768);
}
#undef func_80005670
#undef func_8021D768

#define func_8021D808 func_8021D808__func_8021D768
extern void func_80142570(void);
void func_8021D808(s32 arg0, s32 arg1);

extern void func_8013EA94(void);
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8023E8E0[];

void func_8021D768(s32 arg0, s32 arg1) {
    func_80142570();
    func_8013EA94();
    func_8001A804(8, D_8023E8E0, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0x80, 0, 0, 0, 0x80);
    D_801BBBF0[0] = 1;
    func_800058DC(arg0, func_8021D808);
}
#undef func_8021D808

#define func_8021D84C func_8021D84C__func_8021D808

extern s32 func_8013EB2C(void);
extern void func_8021D84C();

void func_8021D808(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_800058DC(arg0, func_8021D84C);
    }
}
#undef func_8021D84C

#define D_8017DD7C D_8017DD7C__func_8021D84C
#define func_80005700 func_80005700__func_8021D84C
#define func_8012FE50 func_8012FE50__func_8021D84C

extern void func_80005700(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern u8 D_8017DD7C[];

void func_8021D84C(s32 arg0, s32 arg1)
{
  u32 var_v0;
  u8 *var_v1;
 var_v0 = 0; var_v1 = D_8017DD7C;
  do
  {
    var_v0 = (var_v0 + 1) & 0xFF;
    *var_v1 = 0;
    var_v1 += 1;
  }
  while (var_v0 < 0x28U);
  func_8012FE50(0xE, 0x73, 1, 1, 0);
  func_80020744(1);
  func_80005700(arg0);
}
#undef D_8017DD7C
#undef func_80005700
#undef func_8012FE50


void func_8021D8B8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

