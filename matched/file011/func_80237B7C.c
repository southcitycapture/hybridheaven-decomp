#include "common.h"
extern void func_80020744(s32);
extern void func_800058DC();
#define func_80234724 func_80234724__ctxdef
extern s8 D_8023E3A4;
extern u8 D_80240828[];
extern void (*D_80216D10[])(void *, s32);
extern void func_8001B204(s32, s16, s16, void *, s32, s32, s32);
extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);
typedef struct func_802380EC_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_802380EC_Part;
typedef struct func_802380EC_Struct {
    u8 pad0[0x94];
    func_802380EC_Part *unk94;
    u8 pad1[0xA];
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    u8 pad2[6];
    u16 unkAC;
} func_802380EC_Struct;
void func_80235394(struct func_802380EC_Struct *arg0, s32 arg1, s32 arg2);
typedef struct func_80235EB4_Inner { u8 pad[0xC]; u16 unkC; } func_80235EB4_Inner;
typedef struct func_80235EB4_Struct {
    u8 pad[0x94];
    func_80235EB4_Inner *unk94;
    u8 pad2[0xA4 - 0x98];
    s8 unkA4;
    s8 unkA5;
} func_80235EB4_Struct;
s32 func_80235EB4(func_80235EB4_Struct *arg0);
u8 func_802362B8(void *arg0);
typedef struct func_8023648C_Struct {
    u8 pad[0xA3];
    s8 unkA3;
} func_8023648C_Struct;
void func_8023648C(func_8023648C_Struct *arg0, s32 arg1);
void func_802364E8(void *arg0, s32 arg1);
struct func_802378DC_Struct1 {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
typedef struct func_802378DC_Struct {
    u8 pad0[0x94];
    struct func_802378DC_Struct1 *unk94;
    u8 pad98[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_802378DC_Struct;
void func_802378DC(func_802378DC_Struct *arg0, s32 arg1);
typedef struct func_80238254_StructP {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80238254_StructP;
typedef struct func_80238254_Struct {
    u8 pad0[0x94];
    func_80238254_StructP *unk94;
    u8 pad1[8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_80238254_Struct;
void func_80238254(func_80238254_Struct *arg0, s32 arg1);
typedef struct func_80239BD0_StructData {
    u8 pad[0xA];
    u8 unkA;
} func_80239BD0_StructData;
typedef struct func_80239BD0_StructEntry {
    func_80239BD0_StructData *data;
    u32 pad;
} func_80239BD0_StructEntry;
struct func_80239DFC_Inner {
    u8 pad[0x74];
    u8 unk74;
};
typedef struct func_80239BD0_StructArg {
    u8 pad0[0x90];
    struct func_80239DFC_Inner *unk90;
    u8 pad1[0xD];
    s8 unkA1;
    u8 pad2[3];
    s8 unkA5;
    u8 pad3[6];
    u16 unkAC;
    u8 pad4[2];
    func_80239BD0_StructEntry *unkB0;
} func_80239BD0_StructArg;
void func_80239BD0(func_80239BD0_StructArg *arg0, s32 arg1);
typedef struct func_80239CF4_B {
    u8 pad[0x74];
    u8 unk74;
} func_80239CF4_B;
typedef struct func_80239CF4_E {
    u8 pad[0xA];
    u8 unkA;
} func_80239CF4_E;
typedef struct func_80239CF4_F {
    func_80239CF4_E *unk0;
    s32 unk4;
} func_80239CF4_F;
typedef struct func_80239CF4_D {
    s32 unk0;
    s32 unk4;
    func_80239CF4_F arr[1];
} func_80239CF4_D;
typedef struct func_80239CF4_A {
    u8 pad0[0x90];
    func_80239CF4_B *unk90;
    u8 pad1[0xA1 - 0x94];
    s8 unkA1;
    u8 pad2[3];
    s8 unkA5;
    u8 pad3[0xAC - 0xA6];
    u16 unkAC;
    u8 pad4[2];
    func_80239CF4_D *unkB0;
} func_80239CF4_A;
void func_80239CF4(func_80239CF4_A *arg0, s32 arg1);

#undef func_80234724
extern void func_80234724();
extern u8 D_80240570[];
extern void func_80020744(s32);
extern void func_800058DC();

typedef struct func_80237B7C_Struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
} func_80237B7C_Struct;

typedef struct func_80237B7C_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80237B7C_Part;

typedef struct func_80237B7C_Obj {
    u8 pad0[0x94];
    func_80237B7C_Part *unk94;
    u8 pad1[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 pad2[5];
    u16 unkAC;
} func_80237B7C_Obj;

extern u8 D_80237B7C[];

void func_80237B7C(func_80237B7C_Obj *arg0, s32 arg1) {
    func_80237B7C_Part *p;
    func_80237B7C_Struct *e;
    s32 v;
    extern void func_80020744(s32);
    extern void func_800058DC();

    p = arg0->unk94;
    if (arg0->unkA2 == 0) {
        if (func_80235EB4((void *)arg0) == 0) {
            if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                arg0->unkA1 = arg0->unkA1 - 1;
                if (arg0->unkA1 == 0) {
                    if (*(u8 *)(&D_8023E3A4) == 0) {
                        func_802364E8(arg0, arg1);
                    } else {
                        func_8023648C((void *)arg0, arg1);
                    }
                } else {
                    arg0->unkA3 = func_802362B8(arg0);
                    func_80234ED4(arg0, arg1, 0, 1, 2);
                }
            } else if (p->unkC & 0x100) {
                if (arg0->unkA0 != arg0->unkA1) {
                    func_80020744(0x300);
                    arg0->unkA2 = -1;
                    arg0->unkA1 = arg0->unkA1 + 1;
                    arg0->unkA3 = func_802362B8(arg0);
                    func_80234ED4(arg0, arg1, 0, 1, 2);
                }
            } else if ((p->unk4 & 0x8000) && (arg0->unkA5 < arg0->unkA4)) {
                func_80020744(0x104);
                v = arg0->unkA5;
                arg0->unkAC = 0;
                e = (func_80237B7C_Struct *)(D_80240828 + v * 12);
                func_8001B204(v & 0xFF, e->unk0 + 0x3E8, e->unk2, D_80240570, 8, 4, e->unk4);
                if (*(u8 *)(&D_8023E3A4) == 0) {
                    func_800058DC(arg0, func_80239BD0);
                    return;
                }
                func_800058DC(arg0, func_80239CF4);
                return;
            }
            func_80234724((void *)arg0, arg1, 1);
        }
    }
    if (arg0->unkA2 == 1) {
        if (arg0->unkA1 == 0) {
            func_80235394((void *)arg0, arg1, 1);
        } else {
            func_80235394((void *)arg0, arg1, 3);
        }
        if (arg0->unkA2 == 0) {
            if (arg0->unkA1 == 0) {
                arg0->unkA5 = arg0->unkA6;
                if (*(u8 *)(&D_8023E3A4) == 0) {
                    func_800058DC(arg0, func_802378DC);
                    return;
                }
                func_800058DC(arg0, func_80238254);
                return;
            }
            arg0->unkA5 = arg0->unkA3 / 2;
            func_800058DC(arg0, D_80237B7C);
        }
    } else if (arg0->unkA2 == -1) {
        func_80235394((void *)arg0, arg1, 3);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = arg0->unkA3 / 2;
            func_800058DC(arg0, D_80237B7C);
        }
    }
}
