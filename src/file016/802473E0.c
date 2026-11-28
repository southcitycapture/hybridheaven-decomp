#include "common.h"

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
extern void func_80247634();

#define D_80171CEC D_80171CEC__func_802473E0
#define D_801BBBF0 D_801BBBF0__func_802473E0
#define func_802473E0_Cfg func_802473E0_Cfg__func_802473E0
#define func_802473E0_Data func_802473E0_Data__func_802473E0
#define func_802473E0_Ent func_802473E0_Ent__func_802473E0
#define func_802473E0_Node func_802473E0_Node__func_802473E0
#define func_802473E0_Obj func_802473E0_Obj__func_802473E0
#define func_802473E0_Sub func_802473E0_Sub__func_802473E0
#define func_80247634 func_80247634__func_802473E0
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_802473E0
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;

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
extern struct func_802473E0_Ent *D_80171CEC[];
extern void func_80247634();

void func_802473E0(struct func_802473E0_Obj *arg0, struct func_802473E0_Node **arg1) {
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
#undef D_80171CEC
#undef D_801BBBF0
#undef func_802473E0_Cfg
#undef func_802473E0_Data
#undef func_802473E0_Ent
#undef func_802473E0_Node
#undef func_802473E0_Obj
#undef func_802473E0_Sub
#undef func_80247634
#undef func_802488E8_StructBBBF0

struct func_802488E8_StructArg {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x54 - 0x4C];
    s32 unk54;
};

extern void func_80005700(void *arg0);
extern s32 func_80126944(void);
extern s32 D_8024F518;

void func_80247634(struct func_802488E8_StructArg *arg0, s32 arg1) {
    if (D_8024F518 == 8 && func_80126944() == 1) {
        arg0->unk2C &= ~0xC00;
    } else {
        arg0->unk2C |= 0xC00;
    }
    if (D_8024F518 >= 0xB) {
        func_80005700(arg0);
    }
}


struct func_802476B0_StructObj {
    u8 pad0[0x18];
    u32 unk18;
};
struct func_802476B0_StructArg2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_802476B0_StructArg1 {
    u8 pad0[0x30];
    struct func_802476B0_StructArg2 *unk30;
};
struct func_802476B0_StructArg0 {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x38 - 0x30];
    struct func_802476B0_StructObj *unk38;
};

extern void func_802477BC();
extern s32 D_801BBCD0;

void func_802476B0(void *arg0, void **arg1) {
    struct func_802476B0_StructArg0 *a0 = (struct func_802476B0_StructArg0 *) arg0;
    u32 temp_v0;
    u8 *b;

    if (D_801BBCD0 != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        a0->unk2C = a0->unk2C | 0x20;
        func_8012636C(arg0, 0);
        temp_v0 = a0->unk38->unk18;
        func_8012C89C(arg0, 0, temp_v0 >> 0x10, temp_v0 & 0xFFFF);
        func_800062F8(*arg1, 0x80000C00);
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk24 = 0x13;
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        b = (u8 *) &D_801BBBF0;
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4C = b[0xF32];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4D = b[0xF33];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4E = b[0xF34];
        ((struct func_802476B0_StructArg1 *) *arg1)->unk30->unk4F = b[0xF35];
        func_800058DC(arg0, func_802477BC);
    }
}


void func_802477BC(void *arg0, struct func_802473E0_Node **arg1)
{
    u8 *b = (u8 *)&D_801BBBF0;

    (*arg1)->unk30->unk4C = b[0xF32];
    (*arg1)->unk30->unk4D = b[0xF33];
    (*arg1)->unk30->unk4E = b[0xF34];
    (*arg1)->unk30->unk4F = b[0xF35];
    if (D_8024F518 >= 8) {
        if ((*arg1)->unk30->unk8 >= 160.0) {
            (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 - 200.0;
            (*arg1)->unk30->unkC = (*arg1)->unk30->unkC + 200.0;
        }
        (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 + 1.0;
        (*arg1)->unk30->unkC = (*arg1)->unk30->unkC - 1.0;
    }
    if (D_8024F518 >= 0xB) {
        func_80005700(arg0);
    }
}

/* starting point: func_802473E0 (file016), whose assembly is 96% the same as this function's */

struct func_802478F4_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    struct func_802478F4_Cfg *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
};

struct func_802478F4_Cfg {
    u8 pad0[0x18];
    u32 unk18;
};

struct func_802478F4_Data {
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

struct func_802478F4_Node {
    u8 pad0[0x30];
    struct func_802478F4_Data *unk30;
};

struct func_802478F4_Sub {
    u8 pad0[0x8];
    s32 unk8;
};

struct func_802478F4_Ent {
    u16 *unk0;
    struct func_802478F4_Sub *unk4;
};

extern void func_80247B6C();
extern void func_80249250();

#define D_801BBBF0 D_801BBBF0__func_802478F4
#define func_802478F4_Cfg func_802478F4_Cfg__func_802478F4
#define func_802478F4_Data func_802478F4_Data__func_802478F4
#define func_802478F4_Ent func_802478F4_Ent__func_802478F4
#define func_802478F4_Node func_802478F4_Node__func_802478F4
#define func_802478F4_Obj func_802478F4_Obj__func_802478F4
#define func_802478F4_Sub func_802478F4_Sub__func_802478F4
#define func_80247B6C func_80247B6C__func_802478F4
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_802478F4
#define func_80249250 func_80249250__func_802478F4
/* starting point: func_802473E0 (file016), whose assembly is 96% the same as this function's */
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;

struct func_802478F4_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    struct func_802478F4_Cfg *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
};

struct func_802478F4_Cfg {
    u8 pad0[0x18];
    u32 unk18;
};

struct func_802478F4_Data {
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

struct func_802478F4_Node {
    u8 pad0[0x30];
    struct func_802478F4_Data *unk30;
};

struct func_802478F4_Sub {
    u8 pad0[0x8];
    s32 unk8;
};

struct func_802478F4_Ent {
    u16 *unk0;
    struct func_802478F4_Sub *unk4;
};
extern void func_80247B6C();
extern void func_80249250();

void func_802478F4(struct func_802478F4_Obj *arg0, struct func_802478F4_Node **arg1) {
    struct func_802478F4_Ent *temp_v0;
    s32 var_v0;
    s8 var_s0;

    if (*(s32 *)((u8 *)&D_801BBBF0 + 0xE0) != 0) {
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_80005E44(arg0, D_80164F40);
        }
        func_80006214(arg0);
        arg0->unk2C = arg0->unk2C | 0xC20;
        func_8012636C(arg0, 0);
        arg1[1]->unk30->unk4 = (f32) ((f64) arg1[0]->unk30->unk4 + 60.0);
        arg1[1]->unk30->unk8 = arg1[0]->unk30->unk8;
        arg1[1]->unk30->unkC = (f32) ((f64) arg1[0]->unk30->unkC + 30.0);
        arg1[1]->unk30->unk12 = arg1[0]->unk30->unk12;
        for (var_s0 = 0; var_s0 < 2; var_s0++) {
            func_8012C89C(arg0, var_s0, arg0->unk38->unk18 >> 16, var_s0);
        }
        temp_v0 = (struct func_802478F4_Ent *) D_80171CEC[arg0->unk36];
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
        D_8024F518 = 0;
        func_80249250();
        func_800058DC(arg0, func_80247B6C);
    }
}
#undef D_801BBBF0
#undef func_802478F4_Cfg
#undef func_802478F4_Data
#undef func_802478F4_Ent
#undef func_802478F4_Node
#undef func_802478F4_Obj
#undef func_802478F4_Sub
#undef func_80247B6C
#undef func_802488E8_StructBBBF0
#undef func_80249250

#define D_801BBBF0 D_801BBBF0__func_80247B6C
#define D_8024F510 D_8024F510__func_80247B6C
#define D_8024F51C D_8024F51C__func_80247B6C
#define func_80020718 func_80020718__func_80247B6C
#define func_8002FC20 func_8002FC20__func_80247B6C
#define func_8011AAF4 func_8011AAF4__func_80247B6C
#define func_801518D4 func_801518D4__func_80247B6C
#define func_801FA2E0 func_801FA2E0__func_80247B6C
#define func_801FBB20 func_801FBB20__func_80247B6C
#define func_801FBB30 func_801FBB30__func_80247B6C
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80247B6C
#define func_80248C04_StrData func_80248C04_StrData__func_80247B6C
#define func_80248C04_StrGlob func_80248C04_StrGlob__func_80247B6C
#define func_80248C04_StrNode func_80248C04_StrNode__func_80247B6C
#define func_80249284 func_80249284__func_80247B6C
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern s32 D_8024F510;
struct func_80248C04_StrData {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80248C04_StrNode {
    u8 pad0[0x2C];
    struct func_80248C04_StrData *unk2C;
};
struct func_80248C04_StrGlob {
    u8 pad0[0xE0];
    struct func_80248C04_StrNode *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xEF0 - 0x1A4];
    u16 unkEF0;
    u8 pad4[0xF0C - 0xEF2];
    u16 unkF0C;
};
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);


typedef struct func_80247B6C_StructData {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80247B6C_StructData;
typedef struct func_80247B6C_StructNode {
    u8 pad[0x30];
    func_80247B6C_StructData *unk30;
} func_80247B6C_StructNode;
typedef struct func_80247B6C_StructEnt {
    u8 pad[0x2C];
    func_80247B6C_StructData *unk2C;
} func_80247B6C_StructEnt;
typedef struct func_80247B6C_StructAnim {
    u8 pad[0x1C];
    s32 unk1C;
} func_80247B6C_StructAnim;
typedef struct func_80247B6C_StructGfx {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    func_80247B6C_StructAnim *unk5C;
} func_80247B6C_StructGfx;
typedef struct func_80247B6C_StructGlobal {
    u8 pad[0xDC];
    func_80247B6C_StructGfx *unkDC;
    func_80247B6C_StructEnt *unkE0;
    u8 padE4[4];
    func_80247B6C_StructEnt *unkE8;
    u8 padEC[0xA2];
    u16 unk18E;
    s16 unk190;
} func_80247B6C_StructGlobal;
typedef struct func_80247B6C_StructObj {
    u8 pad[0xA0];
    f32 unkA0;
} func_80247B6C_StructObj;
typedef struct func_80247B6C_StructOwner {
    u8 pad[0x24];
    func_80247B6C_StructEnt *unk24;
} func_80247B6C_StructOwner;
#undef G
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
#define OWNER ((func_80247B6C_StructOwner *)D_8024F510)
#define NODES ((func_80247B6C_StructNode **)arg1)
#define FILEPATH "/hdisk1/u/nu64/rz011_usa/main/game/source/a04_s04elevatordemo.c"
extern f32 func_8002FC20(f32);
extern void func_8011AAF4(char *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FA2E0(void);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_80249284(void);
extern s16 D_8024F51C;

#undef D_801BBBF0
#undef D_8024F510
#undef D_8024F51C
#undef FILEPATH
#undef G
#undef NODES
#undef OWNER
#undef func_80020718
#undef func_8002FC20
#undef func_8011AAF4
#undef func_801518D4
#undef func_801FA2E0
#undef func_801FBB20
#undef func_801FBB30
#undef func_802488E8_StructBBBF0
#undef func_80248C04_StrData
#undef func_80248C04_StrGlob
#undef func_80248C04_StrNode
#undef func_80249284
#define D_801BBBF0 D_801BBBF0__func_80247B6C_01ad169c
#define D_8024F510 D_8024F510__func_80247B6C_01ad169c
#define D_8024F51C D_8024F51C__func_80247B6C_01ad169c
#define func_80020718 func_80020718__func_80247B6C_01ad169c
#define func_8002FC20 func_8002FC20__func_80247B6C_01ad169c
#define func_8011AAF4 func_8011AAF4__func_80247B6C_01ad169c
#define func_801518D4 func_801518D4__func_80247B6C_01ad169c
#define func_801FA2E0 func_801FA2E0__func_80247B6C_01ad169c
#define func_801FBB20 func_801FBB20__func_80247B6C_01ad169c
#define func_801FBB30 func_801FBB30__func_80247B6C_01ad169c
#define func_80247B6C_StructAnim func_80247B6C_StructAnim__func_80247B6C_01ad169c
#define func_80247B6C_StructData func_80247B6C_StructData__func_80247B6C_01ad169c
#define func_80247B6C_StructEnt func_80247B6C_StructEnt__func_80247B6C_01ad169c
#define func_80247B6C_StructGfx func_80247B6C_StructGfx__func_80247B6C_01ad169c
#define func_80247B6C_StructGlobal func_80247B6C_StructGlobal__func_80247B6C_01ad169c
#define func_80247B6C_StructNode func_80247B6C_StructNode__func_80247B6C_01ad169c
#define func_80247B6C_StructObj func_80247B6C_StructObj__func_80247B6C_01ad169c
#define func_80247B6C_StructOwner func_80247B6C_StructOwner__func_80247B6C_01ad169c
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80247B6C_01ad169c
#define func_80248C04_StrData func_80248C04_StrData__func_80247B6C_01ad169c
#define func_80248C04_StrGlob func_80248C04_StrGlob__func_80247B6C_01ad169c
#define func_80248C04_StrNode func_80248C04_StrNode__func_80247B6C_01ad169c
#define func_80249284 func_80249284__func_80247B6C_01ad169c
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern s32 D_8024F510;
struct func_80248C04_StrData {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80248C04_StrNode {
    u8 pad0[0x2C];
    struct func_80248C04_StrData *unk2C;
};
struct func_80248C04_StrGlob {
    u8 pad0[0xE0];
    struct func_80248C04_StrNode *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xEF0 - 0x1A4];
    u16 unkEF0;
    u8 pad4[0xF0C - 0xEF2];
    u16 unkF0C;
};
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);


typedef struct func_80247B6C_StructData {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80247B6C_StructData;
typedef struct func_80247B6C_StructNode {
    u8 pad[0x30];
    func_80247B6C_StructData *unk30;
} func_80247B6C_StructNode;
typedef struct func_80247B6C_StructEnt {
    u8 pad[0x2C];
    func_80247B6C_StructData *unk2C;
} func_80247B6C_StructEnt;
typedef struct func_80247B6C_StructAnim {
    u8 pad[0x1C];
    s32 unk1C;
} func_80247B6C_StructAnim;
typedef struct func_80247B6C_StructGfx {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    func_80247B6C_StructAnim *unk5C;
} func_80247B6C_StructGfx;
typedef struct func_80247B6C_StructGlobal {
    u8 pad[0xDC];
    func_80247B6C_StructGfx *unkDC;
    func_80247B6C_StructEnt *unkE0;
    u8 padE4[4];
    func_80247B6C_StructEnt *unkE8;
    u8 padEC[0xA2];
    u16 unk18E;
    s16 unk190;
} func_80247B6C_StructGlobal;
typedef struct func_80247B6C_StructObj {
    u8 pad[0xA0];
    f32 unkA0;
} func_80247B6C_StructObj;
typedef struct func_80247B6C_StructOwner {
    u8 pad[0x24];
    func_80247B6C_StructEnt *unk24;
} func_80247B6C_StructOwner;
#undef G
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
#define OWNER ((func_80247B6C_StructOwner *)D_8024F510)
#define NODES ((func_80247B6C_StructNode **)arg1)
#define FILEPATH "/hdisk1/u/nu64/rz011_usa/main/game/source/a04_s04elevatordemo.c"
extern f32 func_8002FC20(f32);
extern void func_8011AAF4(char *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FA2E0(void);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_80249284(void);
extern s16 D_8024F51C;

void func_80247B6C(func_80247B6C_StructObj *arg0, void *arg1) {
    func_80247B6C_StructAnim *anim;
    s32 i;
    f32 camera0, camera1, camera2, camera3, camera4, camera5;
    func_80247B6C_StructData *position;
    f32 vec[3];
    f32 dx, dy, dz;

    anim = G.unkDC->unk5C;
    switch (D_8024F518) {
    case 0: {
        if ((f64)G.unkE0->unk2C->unk8 < -400.0) {
            NODES[0]->unk30->unk8 = -520.0f;
            NODES[0]->unk30->unkC = 490.0f;
            func_80005700((void *)D_8024F510);
            D_8024F518 = 14;
            return;
        }
        vec[0] = 10.0f;
        vec[2] = 10.0f;
        vec[1] = -40.0f;
        position = G.unkE0->unk2C;
        dz = position->unkC - vec[2];
        dx = position->unk4 - vec[0];
        dy = position->unk8 - vec[1];
        if ((f64)func_8002FC20(dz * dz + (dx * dx + dy * dy)) < 35.0 && (f64)G.unkE0->unk2C->unk4 <= 40.0) {
            G.unk18E = 1;
            G.unk190 = 0;
            D_8024F518 = 1;
            func_801FBB30();
            D_8024F51C = 0;
        }
        return;
    }
    case 1:
        func_8011AAF4(FILEPATH, 0x1C1, arg0, 0, 1, 10.0f, -100.0f, 10.0f, -55.0f, 10.0f, -33.0f, -12.2f, -18.6f, 0.0f, 35.0f, -1, -1);
        return;
    case 2:
        func_80249284();
        if (anim->unk1C == 0x03480042) {
            func_80020718(0x1FA);
            D_8024F518 = 3;
        }
        break;
    case 3: {
        func_80249284();
        NODES[1]->unk30->unkC -= 0.5;
        if ((f64)NODES[1]->unk30->unkC <= 10.0) {
            func_80020718(0x1FC);
            arg0->unkA0 = 0.0f;
            D_8024F518 = 4;
        }
        break;
    }
    case 4:
    case 5:
        func_80249284();
        return;
    case 6: {
        func_80249284();
        G.unkDC->unk2C &= ~0xE0;
        G.unkDC->unk54 = 0;
        if ((f64)NODES[0]->unk30->unk8 <= -239.0) {
            camera0 = (f64)G.unkE8->unk2C->unk30 + 1020.0;
            camera1 = (f64)(G.unkE8->unk2C->unk34 - NODES[0]->unk30->unk8) - 180.0;
            camera2 = (f64)(G.unkE8->unk2C->unk38 - NODES[0]->unk30->unkC) + 120.0;
            camera3 = (f64)G.unkE8->unk2C->unk3C + 1020.0;
            camera4 = (f64)(G.unkE8->unk2C->unk40 - NODES[0]->unk30->unk8) - 180.0;
            camera5 = (f64)(G.unkE8->unk2C->unk44 - NODES[0]->unk30->unkC) + 120.0;
            func_8011AAF4(FILEPATH, 0x1E8, arg0, 0, 1, 10.0f, camera0, camera1, camera2, 10.0f, camera3, camera4, camera5, 0.0f, 35.0f, -1, -1);
            func_801FA2E0();
            D_8024F518 = 7;
        }
        if ((f64)arg0->unkA0 < 1.0) arg0->unkA0 = (f64)arg0->unkA0 + 0.01;
        else arg0->unkA0 = 1.0f;
        i = 0;
loop6:
        NODES[i]->unk30->unk8 -= arg0->unkA0;
        NODES[i]->unk30->unkC += arg0->unkA0;
        i = (i + 1) & 0xFF;
        if (i < 2) goto loop6;
        G.unkE0->unk2C->unk8 -= arg0->unkA0;
        G.unkE0->unk2C->unkC += arg0->unkA0;
        OWNER->unk24->unk2C->unk8 -= arg0->unkA0;
        OWNER->unk24->unk2C->unkC += arg0->unkA0;
        return;
    }
    case 7: {
        G.unkE0->unk2C->unk4 = (f64)G.unkE0->unk2C->unk4 + 1020.0;
        G.unkE0->unk2C->unk8 = -180.0f;
        G.unkE0->unk2C->unkC = (f64)(G.unkE0->unk2C->unkC - NODES[0]->unk30->unkC) + 120.0;
        OWNER->unk24->unk2C->unk4 = (f64)OWNER->unk24->unk2C->unk4 + 1020.0;
        OWNER->unk24->unk2C->unk8 = -180.0f;
        OWNER->unk24->unk2C->unkC = (f64)(OWNER->unk24->unk2C->unkC - NODES[0]->unk30->unkC) + 120.0;
        D_8024F518 = 8;
        return;
    }
    case 9: {
        func_80020718(0x176);
        for (i = 0; i < 2; i = (i + 1) & 0xFF) {
            NODES[i]->unk30->unk8 = -340.5f;
            NODES[i]->unk30->unkC = 310.5f;
        }
        camera0 = (f64)G.unkE8->unk2C->unk30 - 1020.0;
        camera1 = ((f64)G.unkE8->unk2C->unk34 - -180.0) - 340.5;
        camera2 = ((f64)G.unkE8->unk2C->unk38 - 120.0) + 310.5;
        camera3 = (f64)G.unkE8->unk2C->unk3C - 1020.0;
        camera4 = ((f64)G.unkE8->unk2C->unk40 - -180.0) - 340.5;
        camera5 = ((f64)G.unkE8->unk2C->unk44 - 120.0) + 310.5;
        func_8011AAF4(FILEPATH "\0EVSPEED %f \n", 0x21B, arg0, 0, 1, 10.0f, camera0, camera1, camera2, 10.0f, camera3, camera4, camera5, 0.0f, 35.0f, -1, -1);
        func_801FBB30();
        D_8024F518 = 10;
        return;
    }
    case 10: {
        G.unkE0->unk2C->unk4 = (f64)G.unkE0->unk2C->unk4 - 1020.0;
        G.unkE0->unk2C->unk8 = -340.3f;
        G.unkE0->unk2C->unkC = ((f64)G.unkE0->unk2C->unkC - 120.0) + 310.5;
        D_8024F518 = 11;
        arg0->unkA0 = 1.0f;
        return;
    }
    case 11: {
        if ((f64)arg0->unkA0 < 0.01) {
            func_80020718(0x175);
            func_80020718(0x1FA);
            func_801518D4(0, 7, 6);
            i = 0;
loop11a:
            NODES[i]->unk30->unk8 = -520.0f;
            NODES[i]->unk30->unkC = 490.0f;
            i = (i + 1) & 0xFF;
            if (i < 2) goto loop11a;
            D_8024F518 = 12;
        } else {
            if ((f64)NODES[0]->unk30->unk8 <= -470.0) arg0->unkA0 = (f64)arg0->unkA0 - 0.01;
            i = 0;
            while (i < 2) {
                NODES[i]->unk30->unk8 -= arg0->unkA0;
                NODES[i]->unk30->unkC += arg0->unkA0;
                i = (i + 1) & 0xFF;
            }
            G.unkE0->unk2C->unk8 -= arg0->unkA0;
            G.unkE0->unk2C->unkC += arg0->unkA0;
        }
        if ((f64)NODES[0]->unk30->unk8 <= -400.0) {
            func_8011AAF4(FILEPATH, 0x244, arg0, 0, 1, 10.0f, 54.7f, -498.7f, 663.7f, 10.0f, 22.4f, -490.2f, 595.8f, 0.0f, 35.0f, -1, -1);
        } else {
            func_8011AAF4(FILEPATH, 0x249, arg0, 0, 1, 10.0f, G.unkE8->unk2C->unk30, G.unkE8->unk2C->unk34 -= arg0->unkA0, G.unkE8->unk2C->unk38 += arg0->unkA0, 10.0f, G.unkE8->unk2C->unk3C, G.unkE8->unk2C->unk40 -= arg0->unkA0, G.unkE8->unk2C->unk44 += arg0->unkA0, 0.0f, 35.0f, -1, -1);
        }
        return;
    }
    case 12: {
        if ((f64)(NODES[1]->unk30->unkC += 0.5) >= (f64)NODES[0]->unk30->unkC + 30.0) {
            func_80020718(0x1FC);
            func_801FBB20();
            D_8024F518 = 13;
            func_8011AAF4(FILEPATH, 0x254, arg0, 2, 1, 10.0f, 84.7f, -499.7f, 522.5f, 10.0f, 39.5f, -505.9f, 499.7f, 0.0f, 35.0f, -1, -1);
            return;
        }
        func_8011AAF4(FILEPATH "\0ok!\n", 0x259, arg0, 0, 1, 10.0f, 84.7f, -499.7f, 522.5f, 10.0f, 39.5f, -505.9f, 499.7f, 0.0f, 35.0f, -1, -1);
        break;
    }
    }
}
#undef OWNER
#undef NODES
#undef FILEPATH
#undef D_801BBBF0
#undef D_8024F510
#undef D_8024F51C
#undef func_80020718
#undef func_8002FC20
#undef func_8011AAF4
#undef func_801518D4
#undef func_801FA2E0
#undef func_801FBB20
#undef func_801FBB30
#undef func_80247B6C_StructAnim
#undef func_80247B6C_StructData
#undef func_80247B6C_StructEnt
#undef func_80247B6C_StructGfx
#undef func_80247B6C_StructGlobal
#undef func_80247B6C_StructNode
#undef func_80247B6C_StructObj
#undef func_80247B6C_StructOwner
#undef func_802488E8_StructBBBF0
#undef func_80248C04_StrData
#undef func_80248C04_StrGlob
#undef func_80248C04_StrNode
#undef func_80249284
#define D_801BBBF0 D_801BBBF0__func_80247B6C
#define D_8024F510 D_8024F510__func_80247B6C
#define D_8024F51C D_8024F51C__func_80247B6C
#define FILEPATH "/hdisk1/u/nu64/rz011_usa/main/game/source/a04_s04elevatordemo.c"
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
#define NODES ((func_80247B6C_StructNode **)arg1)
#define OWNER ((func_80247B6C_StructOwner *)D_8024F510)
#define func_80020718 func_80020718__func_80247B6C
#define func_8002FC20 func_8002FC20__func_80247B6C
#define func_8011AAF4 func_8011AAF4__func_80247B6C
#define func_801518D4 func_801518D4__func_80247B6C
#define func_801FA2E0 func_801FA2E0__func_80247B6C
#define func_801FBB20 func_801FBB20__func_80247B6C
#define func_801FBB30 func_801FBB30__func_80247B6C
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80247B6C
#define func_80248C04_StrData func_80248C04_StrData__func_80247B6C
#define func_80248C04_StrGlob func_80248C04_StrGlob__func_80247B6C
#define func_80248C04_StrNode func_80248C04_StrNode__func_80247B6C
#define func_80249284 func_80249284__func_80247B6C
#undef OWNER
#undef NODES
#undef FILEPATH
#undef D_801BBBF0
#undef D_8024F510
#undef D_8024F51C
#undef func_80020718
#undef func_8002FC20
#undef func_8011AAF4
#undef func_801518D4
#undef func_801FA2E0
#undef func_801FBB20
#undef func_801FBB30
#undef func_802488E8_StructBBBF0
#undef func_80248C04_StrData
#undef func_80248C04_StrGlob
#undef func_80248C04_StrNode
#undef func_80249284



struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};

extern u8 D_80249CB8;
extern void func_80248C04();

void func_802488E8(struct func_802488E8_StructArg *arg0, s32 arg1) {
    D_801BBBF0.unkF0C = 0;
    D_801BBBF0.unk198 = -10.0f;
    D_801BBBF0.unk1A0 = 10.0f;
    D_80249CB8 = D_801BBBF0.unk39C;
    D_801BBBF0.unk39C = 0;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x60;
    arg0->unk54 = 1;
    arg0->unk48 = 0.0f;
    arg0->unk40 = 0.0f;
    func_800058DC(arg0, func_80248C04);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/func_80248970.s")

#define D_801BBBF0 D_801BBBF0__func_80248C04
#define D_80249CB0 D_80249CB0__func_80248C04
#define D_80249CC8 D_80249CC8__func_80248C04
#define func_80010550 func_80010550__func_80248C04
#define func_80011140 func_80011140__func_80248C04
#define func_8012AE54 func_8012AE54__func_80248C04
#define func_801C4908 func_801C4908__func_80248C04
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80248C04
#define func_80248970 func_80248970__func_80248C04
#define func_80248DE0_StructCBC func_80248DE0_StructCBC__func_80248C04
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern s32 func_80010550();
typedef struct func_80248DE0_StructCBC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80248DE0_StructCBC;
extern void func_80011140(s32, void *, func_80248DE0_StructCBC, s32);


struct func_80248C04_StrData {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80248C04_StrNode {
    u8 pad0[0x2C];
    struct func_80248C04_StrData *unk2C;
};
struct func_80248C04_StrA3 {
    s32 unk0;
    u8 pad4[2];
    u16 unk6;
};
struct func_80248C04_StrArg {
    u8 pad0[0x24];
    struct func_80248C04_StrNode *unk24;
    u8 pad1[0x40 - 0x28];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
    u8 pad3[0x5C - 0x4C];
    void *unk5C;
};
struct func_80248C04_StrGlob {
    u8 pad0[0xE0];
    struct func_80248C04_StrNode *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xEF0 - 0x1A4];
    u16 unkEF0;
    u8 pad4[0xF0C - 0xEF2];
    u16 unkF0C;
};
extern s32 func_801C4908(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, s32);
extern s8 D_80249CB0;
extern func_80248DE0_StructCBC D_80249CC8;
extern void func_80248970(void);

#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)

#undef D_801BBBF0
#undef D_80249CB0
#undef D_80249CC8
#undef G
#undef func_80010550
#undef func_80011140
#undef func_8012AE54
#undef func_801C4908
#undef func_802488E8_StructBBBF0
#undef func_80248970
#undef func_80248DE0_StructCBC
#define D_801BBBF0 D_801BBBF0__func_80248C04_be3be37a
#define D_80249CB0 D_80249CB0__func_80248C04_be3be37a
#define D_80249CC8 D_80249CC8__func_80248C04_be3be37a
#define func_80010550 func_80010550__func_80248C04_be3be37a
#define func_80011140 func_80011140__func_80248C04_be3be37a
#define func_8012AE54 func_8012AE54__func_80248C04_be3be37a
#define func_801C4908 func_801C4908__func_80248C04_be3be37a
#define func_80247B6C_StructAnim func_80247B6C_StructAnim__func_80248C04_be3be37a
#define func_80247B6C_StructData func_80247B6C_StructData__func_80248C04_be3be37a
#define func_80247B6C_StructEnt func_80247B6C_StructEnt__func_80248C04_be3be37a
#define func_80247B6C_StructGfx func_80247B6C_StructGfx__func_80248C04_be3be37a
#define func_80247B6C_StructGlobal func_80247B6C_StructGlobal__func_80248C04_be3be37a
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80248C04_be3be37a
#define func_80248970 func_80248970__func_80248C04_be3be37a
#define func_80248C04_StrA3 func_80248C04_StrA3__func_80248C04_be3be37a
#define func_80248C04_StrArg func_80248C04_StrArg__func_80248C04_be3be37a
#define func_80248C04_StrData func_80248C04_StrData__func_80248C04_be3be37a
#define func_80248C04_StrGlob func_80248C04_StrGlob__func_80248C04_be3be37a
#define func_80248C04_StrNode func_80248C04_StrNode__func_80248C04_be3be37a
#define func_80248DE0_StructCBC func_80248DE0_StructCBC__func_80248C04_be3be37a
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
typedef struct func_80247B6C_StructData {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80247B6C_StructData;
typedef struct func_80247B6C_StructEnt {
    u8 pad[0x2C];
    func_80247B6C_StructData *unk2C;
} func_80247B6C_StructEnt;
typedef struct func_80247B6C_StructAnim {
    u8 pad[0x1C];
    s32 unk1C;
} func_80247B6C_StructAnim;
typedef struct func_80247B6C_StructGfx {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    func_80247B6C_StructAnim *unk5C;
} func_80247B6C_StructGfx;
typedef struct func_80247B6C_StructGlobal {
    u8 pad[0xDC];
    func_80247B6C_StructGfx *unkDC;
    func_80247B6C_StructEnt *unkE0;
    u8 padE4[4];
    func_80247B6C_StructEnt *unkE8;
    u8 padEC[0xA2];
    u16 unk18E;
    s16 unk190;
} func_80247B6C_StructGlobal;
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
extern s32 func_80010550();
typedef struct func_80248DE0_StructCBC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80248DE0_StructCBC;
extern void func_80011140(s32, void *, func_80248DE0_StructCBC, s32);
struct func_80248C04_StrData {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80248C04_StrNode {
    u8 pad0[0x2C];
    struct func_80248C04_StrData *unk2C;
};
struct func_80248C04_StrGlob {
    u8 pad0[0xE0];
    struct func_80248C04_StrNode *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xEF0 - 0x1A4];
    u16 unkEF0;
    u8 pad4[0xF0C - 0xEF2];
    u16 unkF0C;
};


struct func_80248C04_StrA3 {
    s32 unk0;
    u8 pad4[2];
    u16 unk6;
};
struct func_80248C04_StrArg {
    u8 pad0[0x24];
    struct func_80248C04_StrNode *unk24;
    u8 pad1[0x40 - 0x28];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
    u8 pad3[0x5C - 0x4C];
    u8 *unk5C;
};
extern s32 func_801C4908(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, s32);
extern s8 D_80249CB0;
extern func_80248DE0_StructCBC D_80249CC8;
extern void func_80248970();

#undef G
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)

void func_80248C04(struct func_80248C04_StrArg *arg0, s32 arg1) {
    u8 *anim;
    struct func_80248C04_StrA3 *key;

    anim = arg0->unk5C;
    key = (struct func_80248C04_StrA3 *) (anim + 0x1C);
    arg0->unk24->unk2C->unk12 = (s16) (arg0->unk24->unk2C->unk12 + G->unkF0C);
    func_801C4908(arg0, G->unk198, G->unk1A0, 0x80);
    arg0->unk24->unk2C->unk12 = (s16) (arg0->unk24->unk2C->unk12 - G->unkF0C);
    if (func_8012AE54(arg0, G->unk198, G->unk1A0, 0x40400000) == 0) {
        arg0->unk48 = 0.0f;
        arg0->unk40 = 0.0f;
        D_80249CB0 = 0;
        G->unkEF0 = (u16) (G->unkEF0 | 0x10);
        G->unkE0->unk2C->unk12 = 0x1800;
        D_8024F518 = 2;
        func_800058DC(arg0, func_80248970);
        return;
    }
    if ((key->unk0 == 0x0168003E) && (key->unk6 == 0x100)) {
        func_80010550(arg1, anim);
        return;
    }
    func_80011140(arg1, anim, D_80249CC8, 0xA);
}
#undef D_801BBBF0
#undef D_80249CB0
#undef D_80249CC8
#undef func_80010550
#undef func_80011140
#undef func_8012AE54
#undef func_801C4908
#undef func_80247B6C_StructAnim
#undef func_80247B6C_StructData
#undef func_80247B6C_StructEnt
#undef func_80247B6C_StructGfx
#undef func_80247B6C_StructGlobal
#undef func_802488E8_StructBBBF0
#undef func_80248970
#undef func_80248C04_StrA3
#undef func_80248C04_StrArg
#undef func_80248C04_StrData
#undef func_80248C04_StrGlob
#undef func_80248C04_StrNode
#undef func_80248DE0_StructCBC
#define D_801BBBF0 D_801BBBF0__func_80248C04
#define D_80249CB0 D_80249CB0__func_80248C04
#define D_80249CC8 D_80249CC8__func_80248C04
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)
#define func_80010550 func_80010550__func_80248C04
#define func_80011140 func_80011140__func_80248C04
#define func_8012AE54 func_8012AE54__func_80248C04
#define func_801C4908 func_801C4908__func_80248C04
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80248C04
#define func_80248970 func_80248970__func_80248C04
#define func_80248DE0_StructCBC func_80248DE0_StructCBC__func_80248C04
#undef G
#undef D_801BBBF0
#undef D_80249CB0
#undef D_80249CC8
#undef func_80010550
#undef func_80011140
#undef func_8012AE54
#undef func_801C4908
#undef func_802488E8_StructBBBF0
#undef func_80248970
#undef func_80248DE0_StructCBC

extern void func_800111E0();
extern void func_800113D0();
void func_80248DE0(void *arg0, s32 arg1);

typedef struct {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
} func_80248D60_Struct;

void func_80248D60(u8 *arg0, s32 arg1) {
    s32 sp1C[1];
    s32 t;

    t = *(s32 *)(arg0 + 0x5C);
    ((func_80248D60_Struct *)&D_801BBBF0)->unk18E = 2;
    ((func_80248D60_Struct *)&D_801BBBF0)->unk190 = 0;
    D_8024F518 = 9;
    func_800111E0(arg1, (sp1C[0] = t) + 0x22);
    func_800113D0(arg1, sp1C[0] + 0x22);
    func_80010550(arg1, sp1C[0]);
    func_800058DC(arg0, func_80248DE0);
}


typedef struct func_80248DE0_StructCBC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80248DE0_StructCBC;

struct func_80248DE0_StructBBBF0 {
    u8 pad0[0xDC];
    u8 *unkDC;
    u8 pad1[0x18E - 0xE0];
    s16 unk18E;
    s16 unk190;
    u8 pad2[0x39C - 0x192];
    u8 unk39C;
    u8 pad3[0xEF0 - 0x39D];
    s16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
};

extern void func_80011140(s32, void *, func_80248DE0_StructCBC, s32);
extern s32 func_80010550();
extern void func_801C4A5C(void *, s32);
extern void func_801E5010(void);
extern func_80248DE0_StructCBC D_80249CBC;

void func_80248DE0(void *arg0, s32 arg1) {
    u8 *sp24;

    sp24 = *(u8 **)((u8 *)arg0 + 0x5C);
    if (D_8024F518 == 0xD) {
        func_80011140(arg1, sp24, D_80249CBC, 0xA);
        if (*(s32 *)(sp24 + 0x1C) == 0x1680041) {
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unk39C = D_80249CB8;
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unk18E = 4;
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unk190 = 0;
            *(s32 *)(((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkDC + 0x2C) = 0x3E0;
            ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkEF0 = 0x80;
            *(s32 *)(((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkDC + 0x54) = ((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkEFC;
            func_801C4A5C(((struct func_80248DE0_StructBBBF0 *)&D_801BBBF0)->unkDC, 0);
            func_800058DC(arg0, func_801E5010);
        }
    } else {
        func_80010550(arg1, sp24);
    }
}


extern s32 D_8024F510;
extern void func_80248F04();

void func_80248ED4(s32 arg0, s32 arg1) {
    D_8024F510 = arg0;
    func_800058DC((void *) arg0, (void *) func_80248F04);
}

struct func_80248F3C_Struct2 {
    u8 pad[0x78];
    s16 unk78;
};
struct func_80248F3C_Struct1 {
    u8 pad[0x5C];
    struct func_80248F3C_Struct2 *unk5C;
};
void func_80248F3C(struct func_80248F3C_Struct1 *arg0, s32 arg1);

extern void func_8013B570(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_80248F04(void *arg0, s32 arg1) {
    func_8013B570(arg0, 0xF5, 2, 3, func_80248F3C);
}


struct func_80248F3C_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_8013A28C(s32, struct func_80248F3C_Struct3);
extern struct func_80248F3C_Struct3 D_80249D7C;
extern s8 D_80249CB4;
extern void func_80248FBC();

void func_80248F3C(struct func_80248F3C_Struct1 *arg0, s32 arg1) {
    struct func_80248F3C_Struct2 *temp_v0;

    temp_v0 = arg0->unk5C;
    temp_v0->unk78 = 1;
    D_80249CB4 = 0;
    func_8013A28C(arg1, D_80249D7C);
    func_80010550(arg1, temp_v0);
    func_800058DC((void *)arg0, (void *)func_80248FBC);
}


extern u8 D_8024F51E[];
extern u8 D_8024F51F;
#define F1 D_8024F51E[1]
#define F2 D_8024F51F
#define F3 D_8024F51E[1]
#define F4 D_8024F51F
#define F5 D_8024F51E[1]
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
void func_802491C8(s32 arg0, s32 arg1);

typedef struct {
    s32 unk0;
    u8 pad4[2];
    u16 unk6;
} func_80248FBC_StructA3;

typedef struct {
    func_80248DE0_StructCBC *p;
    u8 b;
} func_80248FBC_Ent;

extern func_80248FBC_Ent D_80249DA0[];

void func_80248FBC(s32 arg0, s32 arg1) {
    void *sp2C;
    func_80248FBC_StructA3 *a3;
    func_80248DE0_StructCBC *v;

    sp2C = *(void **)((u8 *)arg0 + 0x5C);
    if (D_8024F518 < 8) {
        a3 = (func_80248FBC_StructA3 *)((u8 *)sp2C + 0x1C);
        if (D_8024F518 >= 5) {
            if (a3->unk6 & 1) {
                a3->unk6 &= 0xFFFE;
            }
            if (*(u8 *)&D_80249CB4 == 0) {
                F1 = 1;
            }
            if (D_80249DA0[*(u8 *)&D_80249CB4].p != NULL) {
                if (F2 != 0 && D_80249DA0[*(u8 *)&D_80249CB4].p->unk0 == a3->unk0) {
                    if (func_80010550(arg1, sp2C, D_80249DA0, a3) != 0) {
                        if (D_80249DA0[*(u8 *)&D_80249CB4 + 1].p == NULL) {
                            if (D_8024F518 == 5) {
                                D_8024F518 = 6;
                                func_80020718(0x174);
                                func_801518D4(0, 7, 6);
                            }
                            func_800111E0(arg1, &a3->unk6);
                            return;
                        }
                        if (D_80249DA0[*(u8 *)&D_80249CB4].p->unk0 == D_80249DA0[*(u8 *)&D_80249CB4 + 1].p->unk0) {
                            F3 = 0;
                        } else {
                            F4 = 1;
                        }
                        (*(u8 *)&D_80249CB4)++;
                    }
                } else {
                    if (D_80249DA0[*(u8 *)&D_80249CB4].b == 0) {
                        F5 = 1;
                        func_8013A28C(arg1, *(struct func_80248F3C_Struct3 *)D_80249DA0[*(u8 *)&D_80249CB4].p);
                        func_80010550(arg1, sp2C);
                        return;
                    }
                    func_80011140(arg1, sp2C, *D_80249DA0[*(u8 *)&D_80249CB4].p,D_80249DA0[*(u8 *)&D_80249CB4].b);
                }
            }
        }
    } else {
        func_800058DC((void *)arg0, func_802491C8);
    }
}


struct func_802491C8_Gfx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x54 - 0x30];
    s32 unk54;
};

struct func_802491C8_Obj {
    u8 pad0[0xDC];
    struct func_802491C8_Gfx *unkDC;
    u8 pad1[0xF8 - 0xE0];
    s32 unkF8;
    u8 pad2[0x3A4 - 0xFC];
    s16 unk3A4;
    u8 pad3[0xEF0 - 0x3A6];
    s16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
    u8 pad5[0x1034 - 0xF00];
    u8 unk1034;
};

extern s32 func_801270C0(s32 arg0);
extern void func_80126968();
extern void func_80020744(s32 arg0);
extern void func_801268CC(s32 arg0);

void func_802491C8(s32 arg0, s32 arg1) {
    ((struct func_802491C8_Obj *) &D_801BBBF0)->unk1034 = 0;
    if (func_801270C0(arg0) != 0) {
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkF8 = (s32) func_80248D60;
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unk3A4 = 0;
        func_80126968();
        func_80020744(0xA);
        func_801268CC(0);
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkDC->unk2C = 0x3E0;
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkEF0 = 0x80;
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkDC->unk54 = ((struct func_802491C8_Obj *) &D_801BBBF0)->unkEFC;
        func_801C4A5C(((struct func_802491C8_Obj *) &D_801BBBF0)->unkDC, 0);
    }
}


extern u8 D_8024F514;
extern u8 D_8024F520;
extern u8 D_8024F521;
extern s16 D_8024F522;

void func_80249250(void) {
    D_8024F522 = D_8024F520 = D_8024F521 = D_8024F514 = 0;
}

/* hh-block asm/nonmatchings/file016/802473E0/_ro_func_80249284.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file016/802473E0/func_80249284.s","D_8024F318"],[".rodata","asm/nonmatchings/file016/802473E0/func_80249284.s","D_8024F330"],[".rodata","asm/nonmatchings/file016/802473E0/func_80249284.s","D_8024F348"],[".rodata","asm/nonmatchings/file016/802473E0/func_80249284.s","D_8024F380"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file016/802473E0/_ro_func_80249284.s")

#define D_801BBBF0 D_801BBBF0__func_80249284
#define D_80249DD0 D_80249DD0__func_80249284
#define D_8024F318 D_8024F318__func_80249284
#define D_8024F330 D_8024F330__func_80249284
#define D_8024F348 D_8024F348__func_80249284
#define D_8024F380 D_8024F380__func_80249284
#define D_8024F522 D_8024F522__func_80249284
#define D_8024F524 D_8024F524__func_80249284
#define D_8024F528 D_8024F528__func_80249284
#define func_8001A804 func_8001A804__func_80249284
#define func_8002FC20 func_8002FC20__func_80249284
#define func_8011AAF4 func_8011AAF4__func_80249284
#define func_80130264 func_80130264__func_80249284
#define func_801302CC func_801302CC__func_80249284
#define func_802488E8_StructBBBF0 func_802488E8_StructBBBF0__func_80249284
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;


typedef struct func_80249284_StructEnt {
    f32 unk0, unk4, unk8, unkC, unk10, unk14;
    u8 unk18, pad19;
    u16 unk1A;
} func_80249284_StructEnt;
typedef struct func_80249284_StructPos {
    u8 pad0[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80249284_StructPos;
typedef struct func_80249284_StructE8 {
    u8 pad0[0x2C];
    func_80249284_StructPos *unk2C;
} func_80249284_StructE8;
extern void func_8001A804();
extern f32 func_8002FC20(f32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80130264(void);
extern s32 func_801302CC(void);
extern u8 D_80249DD0[];
extern u8 D_8024F318[];
extern u8 D_8024F330[];
extern u8 D_8024F348[];
extern u8 D_8024F380[];
extern u16 D_8024F522;
extern f32 D_8024F524;
extern f32 D_8024F528;
#define BB_E8 (*(func_80249284_StructE8 **)((u8 *)&D_801BBBF0 + 0xE8))
#define BB_DC (*(s32 *)((u8 *)&D_801BBBF0 + 0xDC))

void func_80249284(void) {
    f32 x1, y1, z1, x2, y2, fcount, z2, dx, dy, dz, dx2, dy2, dz2;
    func_80249284_StructEnt *e, *e2;
    func_80249284_StructPos *p;
    s32 type, hi, mode;
    s32 lo;
    u16 count;
    while (1) {
        hi = ((func_80249284_StructEnt *)D_80249DD0)[D_8024F520].unk18;
        count = ((func_80249284_StructEnt *)D_80249DD0)[D_8024F520].unk1A;
        lo = (u8)(hi & 0xf);
        hi = hi & 0xF0;
        if (hi == 0x20) func_80020718(0x219);
        if (hi == 0x10) {
            if (D_8024F522 == 0) {
                if (func_80130264() != 0 && func_801302CC() != 0) {
                    func_8001A804(0, D_8024F318, 0x10, 0x2D, 0x120, 0x96, 0, 0x60, 0, 0x60);
                } else {
                    func_8001A804(0, D_8024F330, 0, 0, 0x140, 0xF0, 0, 0x60, 0, 0x60);
                }
            }
        } else if (D_8024F522 == 0) {
            func_8001A804(0, D_8024F348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        if (lo == 0) return;
        mode = lo ^ 0;
        e = &((func_80249284_StructEnt *)D_80249DD0)[D_8024F520];
        x1 = e->unk0;
        y1 = e->unk4;
        z1 = e->unk8;
        x2 = e->unkC;
        y2 = e->unk10;
        z2 = e->unk14;
        if (mode == 3) {
            if (D_8024F522 >= count) {
                D_8024F520++;
                D_8024F522 = 0;
                return;
            }
            D_8024F522++;
            return;
        }
        if (mode == 2) {
            if (D_8024F521 == 0) {
                p = BB_E8->unk2C;
                dx = p->unk30 - x1;
                dy = p->unk34 - y1;
                dz = p->unk38 - z1;
                fcount = (u32)count;
                D_8024F524 = func_8002FC20(dx * dx + dy * dy + dz * dz) / fcount;
                p = BB_E8->unk2C;
                dx2 = p->unk3C - x2;
                dy2 = p->unk40 - y2;
                dz2 = p->unk44 - z2;
                D_8024F528 = func_8002FC20(dx2 * dx2 + dy2 * dy2 + dz2 * dz2) / fcount;
                D_8024F521 = 1;
            }
        } else {
            D_8024F528 = 1.0f;
            D_8024F524 = 1.0f;
        }
        if (func_8011AAF4(D_8024F380, 0x3E9, BB_DC, 0, lo, D_8024F524, x1, y1, z1, D_8024F528, x2, y2, z2, 0.0f, 35.0f, -1, -1) != 0) return;
        D_8024F521 = 0;
        D_8024F520++;
        if (mode != 2) return;
        if (((func_80249284_StructEnt *)D_80249DD0)[D_8024F520].unk18 != 1) return;
    }
}
#undef BB_E8
#undef BB_DC
#undef D_801BBBF0
#undef D_80249DD0
#undef D_8024F318
#undef D_8024F330
#undef D_8024F348
#undef D_8024F380
#undef D_8024F522
#undef D_8024F524
#undef D_8024F528
#undef func_8001A804
#undef func_8002FC20
#undef func_8011AAF4
#undef func_80130264
#undef func_801302CC
#undef func_802488E8_StructBBBF0

