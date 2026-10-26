#include "common.h"
typedef struct func_80360EF8_Struct { int unk0; int unk4; int unk8; } func_80360EF8_Struct;
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, s32);
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);
typedef struct func_8035CDA8_Obj { u8 pad[0x5C]; s32 unk5C; } func_8035CDA8_Obj;
typedef struct func_8035CDA8_Words { s32 unk0; s32 unk4; s32 unk8; } func_8035CDA8_Words;


typedef struct func_8035FCF8_StructV {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 f30a : 1;
    u32 f30b : 2;
    u32 f30c : 6;
    u32 f30d : 2;
    u32 f30e1 : 5;
    u32 f32 : 3;
    u32 f30e2 : 13;
    u8 pad34[2];
    u8 unk36;
    u8 unk37;
    u32 f38a : 1;
    u32 f38b : 2;
    u32 f38c : 1;
    u32 f38d : 2;
    u32 f38e : 26;
    u8 pad3C[0x328 - 0x3C];
    u8 unk328;
} func_8035FCF8_StructV;

typedef struct func_8035FCF8_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035FCF8_Copy;

typedef struct func_8035FCF8_Sub {
    u8 pad0[0x1C];
    func_8035FCF8_Copy unk1C;
} func_8035FCF8_Sub;

typedef struct func_8035FCF8_Glob {
    u8 pad0[0xDC];
    func_8035CDA8_Obj *unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8035FCF8_Glob;

typedef struct func_8035FCF8_S12 {
    u8 pad0[0x12];
    s16 unk12;
} func_8035FCF8_S12;

typedef struct func_8035FCF8_Mid {
    u8 pad0[0x2C];
    func_8035FCF8_S12 *unk2C;
} func_8035FCF8_Mid;

extern u8 D_80385650[];
extern u8 func_8035DF80[];

void func_8035FCF8(func_8035CDA8_Obj *arg0, s32 *arg1) {
    func_8035FCF8_Sub *sp1C;
    func_8035FCF8_StructV *v;
    func_8035FCF8_Copy *t0;

    sp1C = (func_8035FCF8_Sub *)arg0->unk5C;
    if (arg0 == ((func_8035FCF8_Glob *)D_801BBBF0)->unkDC) {
        v = (func_8035FCF8_StructV *)D_801BC03C;
    } else {
        v = (func_8035FCF8_StructV *)D_801BC3D8;
    }
    if (v->unk2 <= 0 || v->f30b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (((func_8035FCF8_Glob *)D_801BBBF0)->unk1031 != 0xF) {
        v->f38b = 1;
        func_802237B0(arg0, 1);
        if (func_80010550((s32)arg1, (s32)sp1C) != 0) {
            v->unk328 = 0;
            v->f32 = 0;
            v->f38c = 1;
            *(func_8035CDA8_Words *)&sp1C->unk1C = *(func_8035CDA8_Words *)D_80385650;
            t0 = &sp1C->unk1C;
            if (v->f38d == 1) {
                t0->unk0 = 0x19000C9;
                (*(func_8035FCF8_Mid **)arg1)->unk2C->unk12 += 0x1000;
                (*(func_8035FCF8_Mid **)arg1)->unk2C->unk12 &= 0x1FFF;
            } else {
                t0->unk0 = 0x19000CA;
            }
            t0->unk8 = 1.0f;
            if (v->f30d == 3) {
                t0->unk6 ^= 0x10;
            }
            func_8013A28C((s32)arg1, *(func_80360EF8_Struct *)t0);
            func_80010550((s32)arg1, (s32)sp1C);
            func_800058DC(arg0, func_8035DF80);
        }
    }
}
