#include "context.h"

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

typedef struct func_80242BE0_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x30 - 0x10];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_80242BE0_Struct_Cam;

typedef struct func_80242BE0_Struct_Holder {
    u8 pad0[0x2C];
    func_80242BE0_Struct_Cam *unk2C;
} func_80242BE0_Struct_Holder;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s16 func_8012C6B4(s32);
extern f32 func_8012FFDC(f32, f32, f32, f32, f32, f32);
extern s32 func_80150584(void);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_801BBC0D;
extern func_80242BE0_Struct_Holder *D_801BBCD0;
extern func_80242BE0_Struct_Holder *D_801BBCD8;
extern u16 D_802443D8[];
extern f32 D_80246AE8;
extern f64 D_80246AF0;
extern f64 D_80246AF8;

#define POS(f) ((f32)arg0->unk38->f / 10.0)

void func_80242BE0(func_80242BE0_Struct *arg0, s32 arg1) {
    f32 sp7C;
    f32 dist;
    s16 sp76;
    u16 sp74;
    s32 r;
    f32 sc[2];

    if ((arg0->unk38->unk10 >> 0x18) != 2 && arg0->unk94 == 0 && func_80150584() == 0) {
        func_80020718(0x1A0);
        arg0->unk94 = 1;
    }
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        dist = func_8012FFDC(POS(unk6), POS(unk8), POS(unkA), D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38);
        if (dist < D_80246C60) {
            D_80246C60 = dist;
            func_801FCA4C(POS(unk6), POS(unk8), POS(unkA), 500.0f, 0x1A0);
            func_801FCAE0(POS(unk6), POS(unk8), POS(unkA), 0x1A0);
        }
    }
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        if (!(arg0->unk3C++ & 1)) {
            sp76 = func_8012C6B4(0x2000);
            sp7C = func_8012C6B4(0x3E8) / 100.0;
            sc[0] = func_8001EAD0((s32)sp76);
            sc[1] = func_8001EB64((s32)sp76);
            r = func_8012C6B4(0x46);
            func_80129FB8(sc[0] * sp7C + POS(unk6), arg0->unk90 + POS(unk8) + 4.0, sc[1] * sp7C + POS(unkA), 0.0f, D_80246AE8, 0.0f, 0.0f, 0x38, 0x26, 0, 0x32, 0x32, 0x32, 0xB4, -4, r / D_80246AF0 + D_80246AF8, 0xB, 0);
        }
    }
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        sp74 = D_802443D8[D_801BBC0D];
        if (func_801FD644(POS(unk6), POS(unk8), POS(unkA), arg0->unk90,
                          func_8001EF38(POS(unk6) - D_801BBCD0->unk2C->unk4, POS(unkA) - D_801BBCD0->unk2C->unkC), 1.0f, 1.0f, sp74) != 0) {
            func_80380F94(POS(unk6), POS(unk8), POS(unkA), 0.0f, 0.0f, 0.0f, 2);
        }
    }
}
