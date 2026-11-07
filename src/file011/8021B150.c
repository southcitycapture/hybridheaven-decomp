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
#define func_8021C198 func_8021C198__decl415
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
#undef func_8021C198
#undef func_8021CC30
#undef func_8021D8B8

#define B_801BBBF0 B_801BBBF0__func_8021C198
#define D_800058DC D_800058DC__func_8021C198
#define D_801842A0 D_801842A0__func_8021C198
#define func_8021BF74 func_8021BF74__func_8021C198
#define func_8021C4C0 func_8021C4C0__func_8021C198
#define func_8021D8B8 func_8021D8B8__func_8021C198
#define func_8022C0A0 func_8022C0A0__func_8021C198
#define func_80231B28 func_80231B28__func_8021C198
#define func_80231CEC func_80231CEC__func_8021C198
#define func_802321FC func_802321FC__func_8021C198
#define func_80236788 func_80236788__func_8021C198
#define func_8037C50C func_8037C50C__func_8021C198
void func_8021BF74(u8 *arg0, s32 arg1);
void func_8021D8B8(s32 arg0, s32 arg1);


typedef struct func_8021C198_StructActor {
    u8 pad0[0x30]; u32 unk30;
    u8 pad1[0x9A-0x34]; s16 unk9A;
    u8 pad2[0x2D4-0x9C]; void *unk2D4;
    u8 unk2D8, unk2D9; s8 unk2DA; u8 unk2DB, unk2DC, unk2DD, unk2DE, unk2DF;
    u8 unk2E0[8]; u8 unk2E8;
    u8 pad3[7]; u8 unk2F0;
    u8 pad4[7]; u8 unk2F8, unk2F9, unk2FA;
    u8 pad5[9]; u8 unk304;
    u8 pad6[0x375-0x305]; u8 unk375;
} func_8021C198_StructActor;
typedef struct func_8021C198_StructObj {
    u8 pad0[0x94]; u8 unk94, unk95; u8 pad1[2]; u8 unk98;
    u8 pad2[3]; s32 unk9C; u8 pad3[4]; void *unkA4;
    u8 pad4[0xB3-0xA8]; u8 unkB3;
} func_8021C198_StructObj;
typedef struct func_8021C198_StructFlags {
    u8 hi:1;
    u8 pad:6;
    u8 lo:1;
    u8 secondhi:1;
    u8 rest:7;
    u8 pad2[2];
} func_8021C198_StructFlags;
typedef struct func_8021C198_StructW { u32 b:1; } func_8021C198_StructW;
typedef struct func_8021C198_StructGlobal {
    u8 pad0[0x2C]; u16 mode;
    u8 pad1[0x47C-0x2E]; func_8021C198_StructFlags f1;
    u8 pad2[0x818-0x480]; func_8021C198_StructFlags f2;
    u8 pad3[0x1030-0x81C]; u8 side, state, active;
} func_8021C198_StructGlobal;
extern func_8021C198_StructGlobal B_801BBBF0;
#define H (&B_801BBBF0)
extern u8 D_801842A0[];
extern void func_8021C4C0();
extern void func_8037C50C();
extern void func_802321FC();
extern void func_80231CEC();
extern void func_80231B28();
extern void func_8022C0A0();
extern s32 func_80236788();
extern void D_800058DC();
typedef struct func_8021C198_StructS1 { u8 pad[0x47D]; s8 f:1; } func_8021C198_StructS1;
typedef struct func_8021C198_StructS2 { u8 pad[0x819]; s8 f:1; } func_8021C198_StructS2;
#define F1 (&H->f1)
#define F2 (&H->f2)

void func_8021C198(func_8021C198_StructObj *arg0, s32 arg1) {
    s32 pad;
    func_8021C198_StructActor *a;
    func_8021C198_StructActor *b;
    s32 i;
    u8 *p;
    func_8021C198_StructObj *obj;

    a = (H->side == 0) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    b = (H->side == 0) ? (void *)D_801BC3D8 : (void *)D_801BC03C;
    H->active = 1;
    if (((func_8021C198_StructS1 *)H)->f && ((func_8021C198_StructS2 *)H)->f) {
        arg0->unk98 = (u32)(b->unk30 << 11) >> 30;
        if (a->unk2D4 == NULL) a->unk2D4 = D_801842A0;
        if (b->unk2D4 == NULL) b->unk2D4 = D_801842A0;
        if (a->unk2D8 == 11) {
            func_8037C50C(a, b);
            b->unk2D9 = b->unk2D8;
            b->unk2D8 = 20;
        }
        F1->lo = F2->lo = 1;
        F1->secondhi = F2->secondhi = 0;
        F1->hi = F2->hi = 1;
        b->unk2DB = 1;
        a->unk2DB = b->unk2DB;
        b->unk2DE = 0; a->unk2DE = 0;
        b->unk2E8 = 0; a->unk2E8 = 0;
        b->unk2F8 = 0; a->unk2F8 = 0;
        b->unk9A = 0; a->unk9A = 0;
        b->unk2F0 = 0; a->unk2F0 = 0;
        b->unk2DD = 0; a->unk2DD = 0;
        b->unk304 = 0; a->unk304 = 0;
        b->unk2FA = 0; a->unk2FA = 0;
        b->unk375 = 0; a->unk375 = 0;
        func_802321FC(a, b);
        for (i = 0; i < 8; i = (i + 1) & 0xFF) {
            p = b->unk2E0 + i;
            *p = 0;
            a->unk2E0[i] = 0;
            if (p) {}
        }
        func_80231CEC(a, b);
        func_80231B28();
        func_8022C0A0();
        arg0->unkB3 = 0;
        arg0->unk9C = 0;
        arg0->unk95 = 0;
        if (a->unk2D8 == 12 && a->unk2D9 >= 30) {
            a->unk2DA = 1;
            a->unk2FA = 1;
        }
        H->state = 7;
        D_800058DC(arg0, func_8021C4C0, H);
    }
    if (H->state == 5) {
        D_800058DC(arg0, func_8021BF74, H);
        return;
    }
    if ((*(u16 *)(D_80089474+4) & 0x1000) && func_80236788() &&
        H->mode != 10 && H->mode != 11 &&
        H->mode != 15 && !func_80236C9C()) {
        obj = (void *)func_80005670(arg0, D_80389AE8);
        obj->unkA4 = arg0;
        obj->unk94 = 1;
        H->state = 15;
        D_800058DC(arg0, func_8021D8B8, H);
    }
}
#undef H
#undef F1
#undef F2
#undef B_801BBBF0
#undef D_800058DC
#undef D_801842A0
#undef func_8021BF74
#undef func_8021C4C0
#undef func_8021D8B8
#undef func_8022C0A0
#undef func_80231B28
#undef func_80231CEC
#undef func_802321FC
#undef func_80236788
#undef func_8037C50C

#define D_803896A0 D_803896A0__func_8021C4C0
#define D_803896C8 D_803896C8__func_8021C4C0
#define func_8021B790 func_8021B790__func_8021C4C0
#define func_8021C928 func_8021C928__func_8021C4C0
#define func_8021C934 func_8021C934__func_8021C4C0
#define func_8021CC30_Struct2 func_8021CC30_Struct2__func_8021C4C0
#define func_8021CC30_Struct3 func_8021CC30_Struct3__func_8021C4C0
#define func_8021CC30_Struct4 func_8021CC30_Struct4__func_8021C4C0
#define func_8021CC30_Struct5 func_8021CC30_Struct5__func_8021C4C0
#define func_8022B66C func_8022B66C__func_8021C4C0
#define func_8022BA44 func_8022BA44__func_8021C4C0
#define func_8022BB28 func_8022BB28__func_8021C4C0
#define func_8022BBB0 func_8022BBB0__func_8021C4C0
#define func_8022C1B4 func_8022C1B4__func_8021C4C0
#define func_8022F424 func_8022F424__func_8021C4C0
#define func_8022F558 func_8022F558__func_8021C4C0
#define func_8022F680 func_8022F680__func_8021C4C0
#define func_8037797C func_8037797C__func_8021C4C0
#define func_80378020 func_80378020__func_8021C4C0
#define func_80378764 func_80378764__func_8021C4C0
#define func_80378B48 func_80378B48__func_8021C4C0
#define func_80379054 func_80379054__func_8021C4C0
#define func_8037F410 func_8037F410__func_8021C4C0
void func_8021B790(void);
void func_8021C928(s32 arg0, s32 arg1);
void func_8021C934(u8 *arg0, s32 arg1);
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


typedef struct func_8021C4C0_Actor {
    u8 pad0[0x9A]; u16 unk9A;
    u8 pad1[0x2D8 - 0x9C]; u8 unk2D8; u8 unk2D9; u8 unk2DA; u8 unk2DB;
    u8 pad2[0x2E0 - 0x2DC]; u8 unk2E0[8];
    u8 pad3[0x2FD - 0x2E8]; u8 unk2FD;
    u8 pad4[0x312 - 0x2FE]; s16 unk312;
    u8 pad5[0x375 - 0x314]; u8 unk375;
} func_8021C4C0_Actor;
typedef struct func_8021C4C0_Obj {
    u8 pad0[0x9C]; s32 unk9C; f32 unkA0; f32 unkA4; f32 unkA8; s16 unkAC;
    u8 pad1[0xB3 - 0xAE]; u8 unkB3;
} func_8021C4C0_Obj;
typedef struct func_8021C4C0_Ret {
    u8 pad0[0x96]; u8 unk96;
} func_8021C4C0_Ret;
typedef struct func_8021C4C0_Ret2 {
    u8 pad0[0xAC]; u8 unkAC;
} func_8021C4C0_Ret2;
typedef struct func_8021C4C0_Glob {
    u8 pad0[0x448]; func_8021CC30_Struct5 *unk448;
    u8 pad1[0x47C - 0x44C]; u8 unk47C;
    u8 pad2[0x72A - 0x47D]; u8 unk72A;
    u8 pad3[0x734 - 0x72B]; u8 unk734;
    u8 pad4[0x818 - 0x735]; u8 unk818;
    u8 pad5[0xAC6 - 0x819]; u8 unkAC6;
    u8 pad6[0xAD0 - 0xAC7]; u8 unkAD0;
    u8 pad7[0x1030 - 0xAD1]; u8 unk1030; u8 unk1031;
} func_8021C4C0_Glob;
#define GL ((func_8021C4C0_Glob *)D_801BBBF0)
extern void func_8022F558();
extern void func_80379054();
extern s32 func_80378B48();
extern void func_8037F410();
extern s32 func_8022B66C();
extern void func_8022BBB0();
extern s32 func_8022BA44();
extern s32 func_8022BB28();
extern s32 func_8022C1B4();
extern u8 func_80378764();
extern void func_8022F680();
extern u8 func_8037797C();
extern u8 func_80378020();
extern void func_8022F424();
extern u8 D_803896A0[];
extern u8 D_803896C8[];

void func_8021C4C0(func_8021C4C0_Obj *arg0, s32 arg1) {
    func_8021C4C0_Ret *ret;
    s32 pad;
    func_8021C4C0_Actor *b;
    u8 val;
    func_8021C4C0_Actor *a;
    u8 v;
    u8 i;

    ret = NULL;
    if (GL->unk1030 == 0) {
        a = (func_8021C4C0_Actor *)D_801BC03C;
    } else {
        a = (func_8021C4C0_Actor *)D_801BC3D8;
    }
    if ((u32)GL >= 0 && GL->unk1030 == 0) {
        b = (func_8021C4C0_Actor *)D_801BC3D8;
    } else {
        b = (func_8021C4C0_Actor *)D_801BC03C;
    }
    val = 0;
    func_8021B790();
    if (!(GL->unk47C & 1) && !(GL->unk818 & 1)) {
        GL->unkAD0 = 0;
        GL->unkAC6 = GL->unkAD0;
        GL->unk734 = GL->unkAC6;
        GL->unk72A = GL->unk734;
        if (arg0->unk9C != 0) {
            func_8022F558(b);
            v = a->unk2FD;
            if (v < 0xFF) {
                a->unk2FD = v + 1;
            }
            if (a->unk2D8 == 0xC || a->unk2D8 == 0x13) {
                func_80379054(a);
            }
        } else {
            b->unk312 = 0;
            b->unk2DB = 1;
            func_80005670(arg0, D_803896C8);
        }
        if (a->unk2D8 >= 2 && a->unk2D8 < 8 && a->unk2DA == 0) {
            b->unk312 = 0;
            func_80378B48();
        }
        arg0->unkA0 = GL->unk448->unk0->unk24->unk2C->unk4;
        arg0->unkA4 = GL->unk448->unk0->unk24->unk2C->unk8;
        arg0->unkA8 = GL->unk448->unk0->unk24->unk2C->unkC;
        arg0->unkAC = GL->unk448->unk0->unk24->unk2C->unk12;
        if (a->unk2D8 == 9 && a->unk375 > 0) {
            func_8037F410();
            func_800058DC(arg0, func_8021C928);
            return;
        }
        func_800058DC(arg0, func_8021C934);
        GL->unk1031 = 8;
        return;
    }
    if (a->unk2D8 < 2 || a->unk2D8 == 8 || a->unk2D8 == 9 || a->unk2D8 == 0xA) {
        ret = (func_8021C4C0_Ret *)func_8022B66C(arg0);
        func_8022BBB0(arg0);
    } else if (a->unk2D8 == 2 || (a->unk2D8 >= 4 && a->unk2D8 < 8)) {
        ret = (func_8021C4C0_Ret *)func_8022BA44(arg0);
    } else if (a->unk2D8 == 0xC || a->unk2D8 == 0x13) {
        ret = (func_8021C4C0_Ret *)func_8022BB28(arg0);
    } else if (a->unk2D8 == 0xF) {
        ret = (func_8021C4C0_Ret *)func_8022C1B4(arg0);
    }
    if (ret != NULL) {
        arg0->unk9C = (s32)ret;
        if (arg0->unkB3 == 0) {
            ret = (func_8021C4C0_Ret *)func_80005670(arg0, D_803896C8);
        }
        if (GL->unk1030 != 0 && arg0->unkB3 == 0 && a->unk2D8 < 9) {
            ret->unk96 = func_80378764(arg0, ret);
        }
        if (a->unk2D8 < 9 || a->unk2D8 >= 0xB) {
            arg0->unkB3++;
        }
        if (a->unk2D8 < 0xB || a->unk2D8 == 0xF) {
            func_8022F680(arg0, a);
            func_8022F680(arg0, b);
            if (GL->unk1030 == 0) {
                val = func_8037797C(a);
            } else {
                func_8037797C(a);
                if (b->unk9A != 0) {
                    val = func_80378020();
                }
            }
            if (val != 0) {
                ((func_8021C4C0_Ret2 *)func_80005670(arg0, D_803896A0))->unkAC = val;
            }
            func_8022F424();
            func_80378B48();
            for (i = 0; i < 8; i++) {
                b->unk2E0[i] = 0;
                a->unk2E0[i] = b->unk2E0[i];
            }
        }
    }
}
#undef GL
#undef D_803896A0
#undef D_803896C8
#undef func_8021B790
#undef func_8021C928
#undef func_8021C934
#undef func_8021CC30_Struct2
#undef func_8021CC30_Struct3
#undef func_8021CC30_Struct4
#undef func_8021CC30_Struct5
#undef func_8022B66C
#undef func_8022BA44
#undef func_8022BB28
#undef func_8022BBB0
#undef func_8022C1B4
#undef func_8022F424
#undef func_8022F558
#undef func_8022F680
#undef func_8037797C
#undef func_80378020
#undef func_80378764
#undef func_80378B48
#undef func_80379054
#undef func_8037F410


void func_8021C928(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define D_8017DC40 D_8017DC40__func_8021C934
#define D_8017DD7C D_8017DD7C__func_8021C934
#define D_802176D0 D_802176D0__func_8021C934
#define func_800208C4 func_800208C4__func_8021C934
#define func_80146B04 func_80146B04__func_8021C934
#define func_8021B150_Struct func_8021B150_Struct__func_8021C934
#define func_8021BF74 func_8021BF74__func_8021C934
#define func_8021CD9C func_8021CD9C__func_8021C934
#define func_8021CDE8 func_8021CDE8__func_8021C934
#define func_8021CE7C func_8021CE7C__func_8021C934
#define func_8021D034 func_8021D034__func_8021C934
#define func_8021D040 func_8021D040__func_8021C934
#define func_8021D040_Struct func_8021D040_Struct__func_8021C934
#define func_8021D1A8 func_8021D1A8__func_8021C934
#define func_8021D72C func_8021D72C__func_8021C934
#define func_802322E8 func_802322E8__func_8021C934
#define func_802329F8 func_802329F8__func_8021C934
#define func_80379904 func_80379904__func_8021C934
#define func_8037C530 func_8037C530__func_8021C934
typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;
extern func_8021B150_Struct D_8017DD7C;
extern u8 D_802176D0[];
extern void func_80146B04();
void func_8021BF74(u8 *arg0, s32 arg1);
void func_8021D034(s32 arg0, s32 arg1);
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
void func_8021D040(func_8021D040_Struct *arg0, s32 arg1);
void func_8021D72C(s32 arg0, s32 arg1);
void func_802322E8();
extern void func_802329F8();
extern s32 func_8037C530();
extern void func_80379904(void *, u8 *);
extern void func_800208C4(s32);
extern u8 D_8017DC40[];
extern void func_8021CDE8();
extern void func_8021CE7C();
extern void func_8021CD9C();
extern void func_8021D1A8();

typedef struct func_8021C934_Bits { u32 b : 1; u32 rest : 31; } func_8021C934_Bits;
typedef struct func_8021C934_Global {
    u8 pad0[0x2C]; u16 unk2C;
    u8 pad1[0x44E - 0x2E]; s16 unk44E;
    u8 pad2[0x47C - 0x450]; func_8021C934_Bits unk47C;
    u8 pad3[0x7EA - 0x480]; s16 unk7EA;
    u8 pad4[0x818 - 0x7EC]; func_8021C934_Bits unk818;
    u8 pad5[0x1030 - 0x81C]; u8 unk1030; u8 unk1031; u8 unk1032;
} func_8021C934_Global;
#define GLOBAL934 ((func_8021C934_Global *)D_801BBBF0)

void func_8021C934(u8 *arg0, s32 arg1) {
    s32 mode;
    u8 *a1;

    a1 = (GLOBAL934->unk1030 == 0) ? D_801BC03C : D_801BC3D8;
    GLOBAL934->unk1032 = 0;
    if (a1[0x2D8] == 0xB) {
        func_8037C530();
        func_80379904(arg0, a1);
        if ((a1[0x2D9] == 0x13) && (a1[0x2DA] != 0)) {
            func_802322E8();
            if (*(u16 *)&D_8017DC40[0x9A] < 0xFFFF) {
                *(u16 *)&D_8017DC40[0x9A] = *(u16 *)&D_8017DC40[0x9A] + 1;
            }
            *(s16 *)&arg0[0xB0] = 5;
            GLOBAL934->unk1031 = 0xD;
            func_800058DC(arg0, func_8021CDE8);
            return;
        }
        GLOBAL934->unk1031 = 5;
        func_800058DC(arg0, func_8021BF74);
        return;
    }
    if (GLOBAL934->unk2C != 0xA && GLOBAL934->unk2C != 0xB && GLOBAL934->unk2C != 0xF) {
        if (GLOBAL934->unk7EA <= 0) {
            GLOBAL934->unk1031 = 0xA;
            *(s16 *)&arg0[0xB0] = 5;
            func_800058DC(arg0, func_8021CE7C);
            return;
        }
        if (GLOBAL934->unk44E <= 0) {
            func_80146B04();
            func_802329F8();
            GLOBAL934->unk1031 = 0xB;
            if (D_8017DD7C.unk16 == 2 && ((u8 *)&D_8017DD7C)[0x17] != 0) {
                func_800058DC(arg0, func_8021D72C);
                return;
            }
            *(s32 *)&arg0[0x9C] = func_80005670(arg0, D_802176D0);
            func_800058DC(arg0, func_8021D034);
            return;
        }
        func_800058DC(arg0, func_8021CD9C);
        GLOBAL934->unk1031 = 9;
        *(s16 *)&arg0[0xB0] = 0;
        arg0[0xAE] = 0;
        GLOBAL934->unk818.b = 0;
        GLOBAL934->unk47C.b = GLOBAL934->unk818.b;
        return;
    }
    if (GLOBAL934->unk7EA <= 0 || GLOBAL934->unk44E <= 0) {
        if (GLOBAL934->unk2C == 0xF) {
            *(s16 *)&arg0[0xA4] = 2;
            func_800058DC(arg0, func_8021D1A8);
            return;
        }
        GLOBAL934->unk1031 = 0xC;
        func_800208C4(0x6C7);
        func_800058DC(arg0, func_8021D040);
        return;
    }
    func_800058DC(arg0, func_8021CD9C);
    GLOBAL934->unk1031 = 9;
    *(s16 *)&arg0[0xB0] = 0;
    arg0[0xAE] = 0;
    GLOBAL934->unk818.b = 0;
    GLOBAL934->unk47C.b = GLOBAL934->unk818.b;
}
#undef GLOBAL934
#undef D_8017DC40
#undef D_8017DD7C
#undef D_802176D0
#undef func_800208C4
#undef func_80146B04
#undef func_8021B150_Struct
#undef func_8021BF74
#undef func_8021CD9C
#undef func_8021CDE8
#undef func_8021CE7C
#undef func_8021D034
#undef func_8021D040
#undef func_8021D040_Struct
#undef func_8021D1A8
#undef func_8021D72C
#undef func_802322E8
#undef func_802329F8
#undef func_80379904
#undef func_8037C530

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

