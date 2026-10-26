#include "common.h"

typedef struct func_802556EC_Inner { u8 pad[0x4B]; u8 unk4B; } func_802556EC_Inner;
typedef struct func_802556EC_Node { u8 pad[0x30]; func_802556EC_Inner *unk30; } func_802556EC_Node;
typedef struct func_802556EC_Args { u8 pad[8]; func_802556EC_Node *unk8; } func_802556EC_Args;
typedef struct func_802556EC_Ctx { u8 pad[0x92]; u16 unk92; } func_802556EC_Ctx;
extern void func_8025799C();

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025DA7C[];
extern f32 D_8025DC1C;
extern u8 func_8025584C[];

typedef struct func_802556EC_Struct {
    s16 a;
    s16 pad;
    s32 b;
    f32 c;
    s32 d[5];
} func_802556EC_Struct;

void func_802556EC(func_802556EC_Ctx *arg0, func_802556EC_Args *arg1) {
    func_802556EC_Struct sp;

    func_8025799C();
    func_8011AAF4(D_8025DA7C, 0x4D8, arg0, 0, 2, D_8025DC1C, -91.0f, 21.0f, -8.0f, 4294967296.0f, 1.0f, 11.0f, 4.0f, 0.0f, 55.0f, -1, -1);
    if (func_801C3044() == 0) {
        sp.a = 0x1100;
        sp.b = 0x04100026;
        sp.c = 3.0f;
        func_801C2F0C(4, &sp);
    }
    arg1->unk8->unk30->unk4B += 2;
    if (arg1->unk8->unk30->unk4B >= 0xFE) {
        func_80133980(0x13A);
        arg1->unk8->unk30->unk4B = 0xFF;
        arg0->unk92 = 0;
        func_800058DC(arg0, func_8025584C);
    }
}
