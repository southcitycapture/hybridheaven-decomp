#include "common.h"
extern u8 D_80089474[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80389AE8[];
extern s32 func_80005670(void *, void *);
void func_8021BF74(u8 *arg0, s32 arg1);
void func_8021D8B8(s32 arg0, s32 arg1);
extern s32 func_80236C9C();


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
