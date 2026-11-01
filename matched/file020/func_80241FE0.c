#include "common.h"
#define func_80241420 func_80241420_early
typedef struct func_802430FC_Struct_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802430FC_Struct_Quad;
typedef union func_802430FC_Union_Quad {
    s64 align;
    func_802430FC_Struct_Quad w;
} func_802430FC_Union_Quad;
extern func_802430FC_Union_Quad D_80164F40;
#define POS(f) ((f32)arg0->unk38->f / 10.0)
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8001F74C(s32);
extern s32 func_80126CC0(void *, void *);
extern u8 func_80126EAC[];
extern s16 func_8012C6B4(s32);
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80241420(void *arg0, s32 arg1);
typedef struct func_80242BE0_Struct_Obj {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 pad1[0x4];
    u32 unk10;
} func_80242BE0_Struct_Obj;
typedef struct func_80242BE0_Struct {
    u8 pad0[0x38];
    func_80242BE0_Struct_Obj *unk38;
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    u8 unk94;
} func_80242BE0_Struct;
void func_80242BE0(func_80242BE0_Struct *arg0, s32 arg1);


typedef struct func_80241FE0_Struct_Inner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80241FE0_Struct_Inner;
typedef struct func_80241FE0_Struct_Outer {
    u8 pad0[0x30];
    func_80241FE0_Struct_Inner *unk30;
} func_80241FE0_Struct_Outer;
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);
extern u8 D_802442D8[];

#define CAM(i) arg1[i]->unk30
#define GETR r = func_8012C6B4(0x2000)
#define ARG1 r

void func_80241FE0(func_80242BE0_Struct *arg0, func_80241FE0_Struct_Outer **arg1) {
    func_802430FC_Union_Quad sp88;
    s32 i;
    s16 t;
    u16 r;
    f32 v;
    f32 m;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_8001F74C((s32)arg0);
        sp88 = D_80164F40;
        sp88.w.unk4 = 0x80000300;
        for (i = 0; i < 0xE; i++) {
            func_80005E44((s32)arg0, &sp88);
        }
        func_80006214((s32)arg0);
        for (i = 0; i < 0xE; i++) {
            func_8012C89C(arg0, i, 0x4B2, 0);
            func_8012D8C8(arg0, 0x4B2, 1, 1.0f, 1, i);
            CAM(i)->unk24 = 0x80300;
            CAM(i)->unk30 = (u32)D_802442D8 | 0x40000000;
            CAM(i)->unk48 = 0xFF;
            CAM(i)->unk49 = 0xE6;
            CAM(i)->unk4A = 0;
            CAM(i)->unk4B = 0xC8;
            CAM(i)->unk4C = 0xFF;
            CAM(i)->unk4D = 0;
            CAM(i)->unk4E = 0;
        }
        switch (arg0->unk38->unk10 >> 24) {
        case 0:
            CAM(0)->unk18 = 0.3f;
            CAM(0)->unk1C = 0.4f;
            CAM(0)->unk20 = 0.3f;
            CAM(0)->unk4 = POS(unk6);
            CAM(0)->unk8 = POS(unk8) + 17.0;
            CAM(0)->unkC = POS(unkA);
            for (i = 1; i < 6; i++) {
                v = func_8012C6B4(0x32) / 1000.0 + 0.2;
                CAM(i)->unk20 = v;
                CAM(i)->unk1C = v;
                CAM(i)->unk18 = v;
                GETR;
                CAM(i)->unk4 = func_8001EAD0(ARG1) * 10.0f + POS(unk6);
                CAM(i)->unk8 = POS(unk8) + 8.0;
                CAM(i)->unkC = func_8001EB64(r) * 10.0f + POS(unkA);
            }
            for (i = 6; i != 0xE; i++) {
                v = func_8012C6B4(0x32) / 1000.0 + 0.1;
                CAM(i)->unk20 = v;
                CAM(i)->unk1C = v;
                CAM(i)->unk18 = v;
                GETR;
                CAM(i)->unk4 = func_8001EAD0(ARG1) * 15.0f + POS(unk6);
                CAM(i)->unk8 = POS(unk8) + 3.0;
                CAM(i)->unkC = func_8001EB64(r) * 15.0f + POS(unkA);
            }
            arg0->unk3C = 0;
            arg0->unk90 = 14.0f;
            break;
        case 1:
            CAM(0)->unk18 = 0.15f;
            CAM(0)->unk1C = 0.2f;
            CAM(0)->unk20 = 0.15f;
            CAM(0)->unk4 = POS(unk6);
            CAM(0)->unk8 = POS(unk8) + 8.0;
            CAM(0)->unkC = POS(unkA);
            for (i = 1; i < 6; i++) {
                v = func_8012C6B4(0x1E) / 1000.0 + 0.12;
                CAM(i)->unk20 = v;
                CAM(i)->unk1C = v;
                CAM(i)->unk18 = v;
                GETR;
                CAM(i)->unk4 = func_8001EAD0(ARG1) * 7.0f + POS(unk6);
                CAM(i)->unk8 = POS(unk8) + 4.0;
                CAM(i)->unkC = func_8001EB64(r) * 7.0f + POS(unkA);
            }
            for (i = 6; i != 0xE; i++) {
                v = func_8012C6B4(0x1E) / 1000.0 + 0.06;
                CAM(i)->unk20 = v;
                CAM(i)->unk1C = v;
                CAM(i)->unk18 = v;
                GETR;
                CAM(i)->unk4 = func_8001EAD0(ARG1) * 12.0f + POS(unk6);
                CAM(i)->unk8 = POS(unk8) + 1.5;
                CAM(i)->unkC = func_8001EB64(r) * 12.0f + POS(unkA);
            }
            arg0->unk3C = 0;
            arg0->unk90 = 10.0f;
            break;
        case 2:
            CAM(0)->unk18 = 0.07f;
            CAM(0)->unk1C = 0.07f;
            CAM(0)->unk20 = 0.07f;
            CAM(0)->unk4 = POS(unk6);
            CAM(0)->unk8 = POS(unk8);
            CAM(0)->unkC = POS(unkA);
            for (i = 1; i < 6; i++) {
                v = func_8012C6B4(0x14) / 1000.0 + 0.05;
                CAM(i)->unk20 = v;
                CAM(i)->unk1C = v;
                CAM(i)->unk18 = v;
                GETR;
                CAM(i)->unk4 = func_8001EAD0(ARG1) * 6.0f + POS(unk6);
                CAM(i)->unk8 = POS(unk8);
                CAM(i)->unkC = func_8001EB64(r) * 6.0f + POS(unkA);
            }
            for (i = 6; i != 0xE; i++) {
                v = func_8012C6B4(0x14) / 1000.0 + 0.03;
                CAM(i)->unk20 = v;
                CAM(i)->unk1C = v;
                CAM(i)->unk18 = v;
                r = func_8012C6B4(0x2000);
                m = func_8012C6B4(0x3C) / 10.0 + 10.0;
                t = r;
                CAM(i)->unk4 = func_8001EAD0(t) * m + POS(unk6);
                CAM(i)->unk8 = POS(unk8);
                CAM(i)->unkC = func_8001EB64(t) * m + POS(unkA);
            }
            arg0->unk3C = 0;
            arg0->unk90 = 8.0f;
            break;
        }
        arg0->unk94 = 0;
        func_800058DC(arg0, func_80242BE0);
    }
}
