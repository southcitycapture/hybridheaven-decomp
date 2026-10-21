#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80247A00/func_80247A00.s")


extern void func_800058DC(void *arg0, void *arg1);
extern void *func_801505AC(s32 arg0);
void func_80248334(void);

typedef struct func_802482A0_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_802482A0_StructObj;

typedef struct func_802482A0_StructSub {
    u8 pad[0x91];
    u8 unk91;
} func_802482A0_StructSub;

void func_802482A0(func_802482A0_StructObj *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    func_802482A0_StructSub *temp_v0_2;
    func_802482A0_StructSub *temp_v0_3;

    temp_v0 = arg0->unk3C;
    temp_v1 = arg0->unk3C < 2;
    arg0->unk3C = temp_v0 + 1;
    if (!temp_v1) {
        if (func_80133A24(0x125) != 0) {
            temp_v0_2 = func_801505AC(3);
            temp_v0_2->unk91 = temp_v0_2->unk91 | 0x40;
        }
        if (func_80133A24(0x124) != 0) {
            temp_v0_3 = func_801505AC(2);
            temp_v0_3->unk91 = temp_v0_3->unk91 | 0x40;
        }
        func_800058DC(arg0, &func_80248334);
    }
}


extern void func_80241910(f32 a, f32 b, f32 c);

void func_80248334(void) {
    extern void func_80248538();

    func_80248538();
    func_80241910(0.0f, -200.0f, 0.0f);
}


typedef struct func_8024836C_Struct {
    u8 pad[0x30];
    struct func_8024836C_Struct *unk30;
    u8 pad34[8];
    u16 unk3C;
    u8 pad3E[0x4B - 0x3E];
    u8 unk4B;
    u8 pad4C[0x92 - 0x4C];
    u8 unk92;
} func_8024836C_Struct;

extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
struct func_80248538_Args;
void func_80248538(s32 arg0, struct func_80248538_Args *arg1);
extern u8 D_8025CA84[];
extern f32 D_8025CAC4;
extern u8 D_801BBBF0[];

void func_8024836C(func_8024836C_Struct *arg0, s32 *arg1) {
    func_8024836C_Struct *v;
    s32 sp50;
    s32 i;
    s32 k;

    sp50 = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    func_80248538((s32)arg0, (struct func_80248538_Args *)arg1);
    if (sp50 == 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025CA84, 0x1B5, arg0, 0, 1, 0.0f, -302.0f, -196.0f, 35.0f, 0.0f, D_8025CAC4, -183.0f, 2.0f, 0.0f, 35.0f, -1, -1);
    }
    if (sp50 >= 0x2D) {
        if (sp50 == 0x2D) {
            func_80020718(0x14F);
        }
        i = 3 - arg0->unk92;
        v = ((func_8024836C_Struct **)arg1)[i]->unk30;
        if (v->unk4B >= 5) {
            v->unk4B -= 4;
        }
        if (sp50 == 0x96) {
            if (func_80133A24(0x128) != 0) {
                *(s16 *)(D_801BBBF0 + 6) = 2;
            } else if (func_80133A24(0x129) != 0) {
                *(s16 *)(D_801BBBF0 + 6) = 1;
            } else {
                *(s16 *)(D_801BBBF0 + 6) = 0;
            }
            func_80020718(0x65C);
            D_801BBBF0[0x3A6] = 0;
            *(u16 *)(D_801BBBF0 + 4) = 0x2F;
            func_8012FE50(0x1E, *(u16 *)(D_801BBBF0 + 4), 1, 1, 1);
        }
    }
}


extern void func_8012D918(s32, s32, s32, s32, s32);
extern s32 func_80133A24(s32);

struct func_80248538_Target {
    u8 pad[0x4C];
    u8 unk4C;
};

struct func_80248538_Node {
    u8 pad[0x30];
    struct func_80248538_Target *unk30;
};

struct func_80248538_Args {
    u8 pad[4];
    struct func_80248538_Node *unk4;
    struct func_80248538_Node *unk8;
    struct func_80248538_Node *unkC;
};

void func_80248538(s32 arg0, struct func_80248538_Args *arg1) {
    struct func_80248538_Target *temp_a2;
    struct func_80248538_Target *temp_v0;
    struct func_80248538_Target *temp_v1;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    temp_v1 = arg1->unk8->unk30;
    temp_v1->unk4C = temp_v1->unk4C + 2;
    temp_a2 = arg1->unkC->unk30;
    temp_a2->unk4C = temp_a2->unk4C - 2;
    if (func_80133A24(0x122) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 4, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 4, 0);
    }
    if (func_80133A24(0x123) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 5, 0);
        return;
    }
    func_8012D918(arg0, 0x2F8, 0, 5, 0);
}

