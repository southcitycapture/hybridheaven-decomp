#include "context.h"

struct func_80242868_Inner {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80242868_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80242868_Inner *unk5C;
};

struct func_80242868_Elem {
    u8 a;
    u8 pad1[0x13];
    u8 b;
    u8 pad2[0x13];
    u8 c;
    u8 pad3[0x13];
    u8 d;
    u8 pad4[0x13];
};

extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C(void *);
extern s32 func_8013B570(void *, s32, s32, s32, void *);
extern void func_802429C0(void);
extern void func_80243F08(void);
extern u8 D_801BBC0D;
extern s32 D_8025C6E0;
extern s32 D_8025C6E4;
extern void *D_8025C6EC;
extern s8 D_8025C6F8;
extern s8 D_8025C6F9;
extern s8 D_8025C6FA;
extern s8 D_8025C6FB;
extern s8 D_8025C6FC;
extern s8 D_8025C6FD;
extern s32 D_8025C700;
extern s8 D_8025C704;
extern s32 D_8025C708;
extern struct func_80242868_Elem D_8025C728[];

s32 func_80242868(struct func_80242868_Struct *arg0, s32 arg1) {
    s32 ret;
    struct func_80242868_Inner *p;
    s32 i;

    ret = func_80126CC0(arg0, func_80243F08);
    if (ret != 0) {
        func_8001F74C(arg0);
        if (D_801BBC0D == 0) {
            D_8025C6E0 = 0x28;
            D_8025C6E4 = 3;
        } else if (D_801BBC0D == 1) {
            D_8025C6E0 = 0x50;
            D_8025C6E4 = 6;
        } else {
            D_8025C6E0 = 0xA0;
            D_8025C6E4 = 0xC;
        }
        D_8025C6F8 = 0;
        D_8025C6F9 = 0;
        D_8025C6FA = 0;
        D_8025C6FB = 0;
        D_8025C6FC = 0;
        D_8025C6FD = 0;
        D_8025C700 = 0;
        D_8025C708 = 0;
        D_8025C704 = 0;
        for (i = 0; i < 2; i++) {
            D_8025C728[i].b = 0;
            D_8025C728[i].c = 0;
            D_8025C728[i].d = 0;
            D_8025C728[i].a = 0;
        }
        D_8025C6EC = arg0;
        arg0->unk2C |= 0x80;
        ret = func_8013B570(arg0, 0xF8, 2, 4, func_802429C0);
        p = arg0->unk5C;
        p->unk78 = 1;
    }
}
