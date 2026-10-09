#include "context.h"
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern void func_800058DC(void *arg0, void *arg1);

struct func_802473E0_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    struct func_802473E0_Cfg *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
};

struct func_802473E0_Cfg {
    u8 pad0[0x18];
    u32 unk18;
};

struct func_802473E0_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
    u8 pad2[0x24 - 0x14];
    s32 unk24;
    u8 pad3[0x30 - 0x28];
    s32 unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802473E0_Node {
    u8 pad0[0x30];
    struct func_802473E0_Data *unk30;
};

struct func_802473E0_Sub {
    u8 pad0[0x8];
    s32 unk8;
};

struct func_802473E0_Ent {
    u16 *unk0;
    struct func_802473E0_Sub *unk4;
};

extern void func_80005E44(void *arg0, void *arg1);
extern void func_80006214(void *arg0);
extern void func_8012636C(void *arg0, s32 arg1);
extern void func_800062F8(void *arg0, u32 arg1);
extern s32 func_8000C3B0(void *arg0);
extern void func_8012C89C(void *arg0, s32 arg1, u32 arg2, s32 arg3);
extern s32 func_8000522C(u16 arg0, s32 arg1);
extern u8 D_80164F40[];
extern struct func_802473E0_Ent *D_80171CEC[];
extern void func_80247634(void);

void func_802473E0(struct func_802473E0_Obj *arg0, struct func_802473E0_Node **arg1) {
    struct func_802473E0_Node **temp_s1;
    struct func_802473E0_Ent *temp_v0;
    s32 var_v0;
    s8 var_s0;

    if (*(s32 *)((u8 *)&D_801BBBF0 + 0xE0) != 0) {
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_80005E44(arg0, D_80164F40);
        }
        func_80006214(arg0);
        arg0->unk2C = arg0->unk2C | 0xC00;
        func_8012636C(arg0, 0);
        arg1[1]->unk30->unk4 = (f32) ((f64) arg1[0]->unk30->unk4 + 60.0);
        arg1[1]->unk30->unk8 = arg1[0]->unk30->unk8;
        arg1[1]->unk30->unkC = arg1[0]->unk30->unkC;
        arg1[1]->unk30->unk12 = arg1[0]->unk30->unk12;
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_8012C89C(arg0, var_s0, arg0->unk38->unk18 >> 16, var_s0);
        }
        temp_v0 = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*temp_v0->unk0, temp_v0->unk4->unk8);
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_800062F8(arg1[var_s0], 0x80000C00);
        }
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            arg1[var_s0]->unk30->unk24 = 0x13;
            var_v0 = func_8000C3B0(arg1[0]);
            arg1[var_s0]->unk30->unk30 = var_v0;
            arg1[var_s0]->unk30->unk4C = *((u8 *)&D_801BBBF0 + 0xF32);
            arg1[var_s0]->unk30->unk4D = *((u8 *)&D_801BBBF0 + 0xF33);
            arg1[var_s0]->unk30->unk4E = *((u8 *)&D_801BBBF0 + 0xF34);
            arg1[var_s0]->unk30->unk4F = *((u8 *)&D_801BBBF0 + 0xF35);
        }
        func_800058DC(arg0, func_80247634);
    }
}
