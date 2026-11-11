#include "common.h"
extern void (*D_80216D10[])(void *, s32);
extern void func_800058DC();
void func_80020744(s32);
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
typedef struct func_80235D48_Inner {
    u8 pad[0xC];
    u16 unkC;
} func_80235D48_Inner;
typedef struct func_80235D48_Struct {
    u8 pad[0x94];
    func_80235D48_Inner *unk94;
    u8 pad2[0xA4 - 0x98];
    s8 unkA4;
    s8 unkA5;
} func_80235D48_Struct;
typedef struct func_80236408_Struct {
    u8 pad[0xA3];
    s8 unkA3;
} func_80236408_Struct;
void func_80236408(func_80236408_Struct *arg0, s32 arg1);
void func_80236A3C(void);
void func_80236BC8(s32 arg0);
s32 func_80236BD8(void);
extern void func_80237250();
struct func_80237630_Struct {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad1[0x6];
    s32 unk98;
    s32 unk9C;
    u8 pad2[0xA];
    s8 unkAA;
};
void func_80237630(struct func_80237630_Struct *arg0, s32 arg1);


typedef struct func_8023748C_StructInput {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_8023748C_StructInput;

typedef struct func_8023748C_Struct {
    u8 pad0[8];
    s32 unk8;
    u8 pad1[0x18];
    s32 unk24;
    u8 pad2[0x6C];
    func_8023748C_StructInput *unk94;
    u8 pad3[9];
    s8 unkA1;
    s8 unkA2;
    u8 pad4[2];
    s8 unkA5;
    u8 pad5[4];
    u8 unkAA;
} func_8023748C_Struct;
extern void func_80147148(s32, s32);
extern void func_80148FC4(void *, void (*)(struct func_80237630_Struct *, s32), s32, s32);
extern s32 D_80235D48(func_80235D48_Struct *);
extern void D_80234724(struct func_802380EC_Struct *, s32, s32);

void func_8023748C(func_8023748C_Struct *arg0, s32 arg1) {
    func_8023748C_StructInput *input;
    s8 state;
    s32 two;

    state = arg0->unkA2;
    input = arg0->unk94;
    if (state == 0 && arg0->unk8 == 0) {
        func_80147148(arg0->unk24, 1);
        if (D_80235D48((func_80235D48_Struct *)arg0) == 0) {
            if ((input->unkC & 0x100) || (input->unk4 & 0x4000)) {
                func_80020744(0x300);
                arg0->unkA2 = -1;
                arg0->unkA1 = 0;
                func_80236408((func_80236408_Struct *)arg0, arg1);
            } else if (input->unk4 & 0x8000) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                state = arg0->unkA5;
                two = 2;
                switch (state) {
                    case 0:
                        arg0->unkAA = 0;
                        break;
                    case 1:
                        arg0->unkAA = 1;
                        break;
                    case 2:
                        arg0->unkAA = two;
                        break;
                }
            }
        }
        D_80234724((struct func_802380EC_Struct *)arg0, arg1, -1);
        state = arg0->unkA2;
    }
    if (state == -1) {
        func_80235394((struct func_802380EC_Struct *)arg0, arg1, 0);
        if (arg0->unkA2 == 0) {
            func_800058DC(arg0, func_80237250);
        }
    } else if (state == 1 && arg0->unk8 == 0) {
        func_80147148(arg0->unk24, 0);
        func_80236BC8(0);
        func_80236A3C();
        func_80236BD8();
        func_80148FC4(arg0, func_80237630, 6, 0);
    }
}
