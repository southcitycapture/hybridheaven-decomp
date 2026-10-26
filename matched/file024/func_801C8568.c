#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
extern u8 D_80089474[];
extern u8 D_801CCC40[];
extern u8 D_801CCCA8[];
extern f32 D_801CCF68[][3];
typedef struct func_801C659C_Arg20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801C659C_Arg20;
extern func_801C659C_Arg20 D_801CD114;
extern s8 D_801CFDA6[];
extern u8 D_801CFDA8[];
extern u16 D_801CFDAC[];
extern u8 D_801CFDB0[];
extern void (*D_801CCB04)(void *, s32, u8);
extern void *func_80005670(s32, void *);
extern void func_80005700(void *);
extern void func_80020744(s32);
typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;
extern func_801C659C_Ret *func_8012C4D0(s32, func_801C659C_Arg20, s32);
extern void func_80147370(void *, s32, s32, s32, s32);
extern void func_8014753C(void *, s32);
s32 func_801C5AB0(void);
s32 func_801C5AD4(u8 arg0);
s32 func_801C5B38(void);


extern u8 D_801CF340[];
extern u8 D_801CF348[];
extern u8 D_801CD128[];
extern s32 D_801BBC2C;
extern u8 func_80127014[];
extern s32 func_80152C04(u16);
extern void func_8001B204(u8, s16, s32, void *, s32, s32);
extern void func_800058DC(void *, void *);

typedef struct func_801C8568_Obj {
    u8 pad0[8];
    void *unk8;
    u8 pad0C[0x18];
    u8 *unk24;
    u8 pad28[0x14];
    u16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8568_Obj;

typedef struct func_801C8568_I { u8 pad[0x4B]; u8 unk4B; } func_801C8568_I;
typedef struct func_801C8568_M { u8 pad[0x2C]; func_801C8568_I *unk2C; } func_801C8568_M;

void func_801C8568(func_801C8568_Obj *arg0, func_801C8568_M **arg1) {
    u16 sp46;
    u8 sp45;
    u8 pad[12];
    s16 v;
    s16 w;
    s32 t;
    s32 n;
    s32 f;
    u8 *p;
    func_801C659C_Ret *r;
    void *q;

    sp46 = *(u16 *)(D_80089474 + arg0->unk90 * 32 + 0xC);
    sp45 = 0;
    if (func_801C5B38() == 0) {
        t = func_80152C04(D_801CFDAC[arg0->unk90]);
        if (D_801CFDA6[arg0->unk90] == 1) {
            func_8001B204(arg0->unk90 + 2, (s16)D_801CCF68[arg0->unk90][0] + 0x3E8, 0x91, D_801CF340, 0xDD, t);
        } else {
            func_8001B204(arg0->unk90 + 2, (s16)D_801CCF68[arg0->unk90][0] + 0x3E8, 0x91, D_801CF348, 0x78, t);
        }
    }
    if (D_801CFDA6[arg0->unk90] == 1 && func_801C5AB0() == 0) {
        if (sp46 & 0x200) {
            p = D_801CFDA8 + arg0->unk90;
            if (*p == 0) {
                *p = D_801CFDB0[arg0->unk90] - 1;
            } else {
                (*p)--;
            }
            sp45 = 1;
        }
        if (sp46 & 0x100) {
            p = D_801CFDA8 + arg0->unk90;
            if (*p + 1 == D_801CFDB0[arg0->unk90]) {
                sp45 = 1;
                *p = 0;
            } else {
                sp45 = 1;
                (*p)++;
            }
        }
    }
    if (sp45 != 0) {
        func_80020744(0x300);
        r = func_8012C4D0(D_801BBC2C, D_801CD114, 3);
        if (r != NULL) {
            r->unk90 = arg0->unk90;
        }
        if (arg0->unk8 != 0) {
            arg0->unk24[0x22] = 0;
            func_80005700(arg0->unk8);
        }
        func_800058DC(arg0, func_80127014);
        return;
    }
    if (func_801C5AD4(arg0->unk90) != 0) {
        v = (*arg1)->unk2C->unk4B;
        if (v == 0xFF) {
            func_8014753C(arg0, (s32)D_801CCC40 | 0x40000000);
        }
        v = (s16)(v - 8);
        if (v < 0) {
            v = 0;
        }
        func_80147370(arg0, 0, 0, 0, v);
        arg0->unk94 += 0x32;
        arg0->unk96 += 0x64;
        arg0->unk98 += 0x96;
        if (arg0->unk3C++ % 10 == 0) {
            q = func_80005670((s32)arg0, D_801CD128);
            if (q != NULL) {
                ((func_801C8568_Obj *)q)->unk94 = arg0->unk94;
                ((func_801C8568_Obj *)q)->unk96 = arg0->unk96;
                ((func_801C8568_Obj *)q)->unk98 = arg0->unk98;
                ((func_801C8568_Obj *)q)->unk90 = arg0->unk90;
                ((func_801C8568_Obj *)q)->unk5C = arg0->unk5C;
            }
        }
    } else {
        w = (*arg1)->unk2C->unk4B;
        if (w == 0xFF) {
            func_8014753C(arg0, (s32)D_801CCCA8 | 0x40000000);
        } else {
            w = w + 8;
        }
        if (w >= 0x100) {
            w = 0xFF;
        }
        func_80147370(arg0, 0, 0, 0, w);
    }
}
