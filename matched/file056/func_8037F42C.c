#include "common.h"
extern u8 D_80006214(void *);
extern s32 D_8038A9A0;
extern void *D_8038A9A8;
extern void func_800058DC(void *a0, void (*a1)());
extern s32 func_80126A0C(void *a0, s32 a1, s32 a2);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8037D9BC(s32 arg0, s32 arg1);
void func_8037DA84(void *a0, void *a1);
struct func_8037FCF8_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
struct func_8037FCF8_Obj {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad92[2];
    s8 unk94;
    u8 pad95[0xF];
    struct func_8037FCF8_Sub *unkA4;
};
void func_8037FCF8(struct func_8037FCF8_Obj *arg0, u8 *arg1);


typedef struct { s16 v[6]; } func_8037F42C_E;
typedef union { func_8037F42C_E e[6]; s32 w[18]; } func_8037F42C_S48;
typedef struct { s16 v[3]; } func_8037F42C_S6;
typedef struct { s16 v[4]; } func_8037F42C_S8;
typedef struct { u16 v[3][2]; } func_8037F42C_S12;
typedef struct { u8 v[4]; } func_8037F42C_B4;
typedef struct { u8 v[6]; } func_8037F42C_B6;
typedef struct { u8 v[3][2]; } func_8037F42C_B32;
typedef struct { u8 v[4][2]; } func_8037F42C_B8;
typedef struct { u8 pad[0x22]; u8 unk22; } func_8037F42C_T;
typedef struct { u8 pad[0x91]; s8 unk91; u8 pad92[2]; s8 unk94; } func_8037F42C_A;

extern func_8037F42C_S48 D_80388CE0;
extern func_8037F42C_S6 D_80388D28;
extern func_8037F42C_S8 D_80388D30;
extern func_8037F42C_S12 D_80388D38;
extern func_8037F42C_B4 D_80388D44;
extern func_8037F42C_B4 D_80388D48;
extern func_8037F42C_B6 D_80388D4C;
extern func_8037F42C_B32 D_80388D54;
extern func_8037F42C_B8 D_80388D5C;
extern u8 D_801BBCDC[];
extern void func_801451C0(void *, s32);
extern void func_8037D82C(void *, void *);
extern void D_80145348(s32, u8, u8);
extern s32 D_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);

void func_8037F42C(func_8037F42C_A *arg0, func_8037F42C_T **arg1) {
    s16 spE6;
    u8 i;
    u8 spE4;
    u8 v;

    func_8037F42C_S48 sp98;
    func_8037F42C_S6 sp90;
    func_8037F42C_S8 sp88;
    func_8037F42C_S12 sp7C;
    func_8037F42C_B4 sp78;
    func_8037F42C_B4 sp74;
    func_8037F42C_B6 sp6C;
    func_8037F42C_B32 sp64;
    func_8037F42C_B8 sp5C;


    sp98 = D_80388CE0;
    sp90 = D_80388D28;
    sp88 = D_80388D30;
    sp7C = D_80388D38;
    sp78 = D_80388D44;
    sp74 = D_80388D48;
    sp6C = D_80388D4C;
    sp64 = D_80388D54;
    sp5C = D_80388D5C;
    if (func_80126A0C(arg0, 0x122, 0) != 0) {
        for (i = 0; i < 6; i++) {

            func_80146208((s32)arg0, &spE6, 0x26, sp98.e[i].v[4], sp98.e[i].v[5] + 0x14, 0x30, 0x1A, 0, 0, 0xFF, 0x21D, 0);
            func_80146208((s32)arg0, &spE6, 0x66, sp98.e[i].v[2], sp98.e[i].v[3] + 0x14, sp98.e[i].v[0], sp98.e[i].v[1], 0, 0, 0xFF, 0x21D, sp6C.v[i]);
            D_80145348((s32)arg0, 0xC, 0);
        }
        if (D_801BBCDC[8] != 0) {
            func_80146208((s32)arg0, &spE6, 4, 0xD0, 0x5D, 0x20, 0x40, 0, 0, 0xFF, 0x21D, 0x1E);
            func_80146208((s32)arg0, &spE6, 4, 0xD0, 0x9D, 0x20, 0x18, 0, 0, 0xFF, 0x21D, 0x1F);
        } else {
            func_80146208((s32)arg0, &spE6, 4, 0xD0, 0x5D, 0x20, 0x40, 0, 0, 0xFF, 0x21D, 0x1C);
            func_80146208((s32)arg0, &spE6, 4, 0xD0, 0x9D, 0x20, 0x18, 0, 0, 0xFF, 0x21D, 0x1D);
        }
        func_80146208((s32)arg0, &spE6, 0x26, 0x29, 0x1E, 0x60, 0x14, 0, 0, 0xFF, 0x20E, 6);
        func_80146208((s32)arg0, &spE6, 0x26, 0x39, 0x21, 0x40, 0x10, 0, 0, 0xFF, 0x21D, 0x16);
        func_80146208((s32)arg0, &spE6, 0x26, 0x1B, 0x3B, 0x20, 0x40, 0, 0, 0xFF, 0x21D, 0x19);
        func_80146208((s32)arg0, &spE6, 0x36, 0x3B, 0x3B, 0x40, 0x40, 0, 0, 0xFF, 0x21D, 0x1A);
        func_80146208((s32)arg0, &spE6, 0x26, 0x7B, 0x3B, 0x20, 0x40, 0, 0, 0xFF, 0x21D, 0x1B);
        for (i = 0; i < 3; i++) {
            D_80146208((s32)arg0, &spE6, 0x66, 0x1F, i * 16 + 0x45, sp90.v[i], 0x10, 0, 0, 0xFF, sp7C.v[i][0], sp7C.v[i][1]);
            func_80145348((s32)arg0, sp64.v[i][0], sp64.v[i][1]);
        }
        for (i = 0; i < 4; i++) {
            func_80146208((s32)arg0, &spE6, 0x26, 0x1C, i * 16 + 0x82, 0x78, 0xE, 0, 0, 0xFF, 0x21D, 0xF);
            func_80146208((s32)arg0, &spE6, 0x66, 0x23, i * 16 + 0x85, sp88.v[i], 8, 0, 0, 0xFF, 0x21D, sp78.v[i]);
            func_80145348((s32)arg0, 5, 0);
        }
        func_80146208((s32)arg0, &spE6, 0x66, 0xDC, 0x14, 8, 8, 0, 0, 0xFF, 0x209, 5);
        func_80145348((s32)arg0, 0x1A, 3);
        func_80146208((s32)arg0, &spE6, 0xE6, 0xDC, 0x30, 8, 8, 0, 8, 0xFF, 0x209, 5);
        func_80145348((s32)arg0, 0x1A, 3);
        spE4 = D_80006214(arg0);
        D_80146208((s32)arg0, &spE6, 0x26, 0xBC, 0x1E, 0x48, 0x10, 0, 0, 0xFF, 0x21D, 0xE);
        func_801451C0(D_8038A9A8 = arg1[spE4], 0);
        spE4 = D_80006214(arg0);
        for (i = 0; i < 4; i++) {
            func_80146208((s32)arg0, &spE6, 0x26, 0xBC, 0x22, 0x48, 8, 0, 0, 0xFF, 0x21D, sp74.v[i]);
            D_80145348((s32)arg0, sp5C.v[i][0], sp5C.v[i][0]);
            v = D_80006214(arg0) - 1;
            if (arg0->unk91 == i) {
                arg1[v]->unk22 = 1;
            } else {
                arg1[v]->unk22 = 0;
            }
        }
        D_8038A9A0 = (s32)arg1[spE4];
        func_8037D82C(arg0, arg1);
        func_8037D9BC((s32)arg0, (s32)arg1);
        func_8037DA84(arg0, arg1);
        arg0->unk91 = 0;
        arg0->unk94 = 0;
        func_800058DC(arg0, func_8037FCF8);
    }
}
