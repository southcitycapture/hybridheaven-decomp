#include "common.h"
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_80216EE8;
extern f32 D_8021B028;
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void (*D_80216D10[])(void *, s32);
void func_800058DC(void *, s32);                    /* extern */
extern s32 func_80010550();
extern void func_8013A334(f32 *, s32, void *, s32);
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;
void func_801F467C(s16 arg0, func_801F467C_Struct *arg1);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);
extern s32 func_801FA2E0();


typedef struct func_801F97E0_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F97E0_Pos;

typedef struct func_801F97E0_Mid {
    u8 pad0[0x2C];
    func_801F97E0_Pos *unk2C;
} func_801F97E0_Mid;

typedef struct func_801F97E0_Obj {
    u8 pad0[0x24];
    func_801F97E0_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_801F97E0_Obj;

typedef struct func_801F97E0_Sub {
    u8 pad0[0x78];
    u16 unk78;
} func_801F97E0_Sub;

extern s32 B_8012CE9C(s32, s32, func_801F4AA0_Struct, s32);
extern s32 B_801F3C90(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_80218D2C;
extern f32 D_80218D30;

void func_801F97E0(func_801F97E0_Obj *arg0, s32 arg1, s32 arg2, s32 arg3, f32 k) {
    func_801F97E0_Sub *temp_s0;
    f32 sp50[3];
    func_801F467C_Struct sp44;
    s8 sp43;

    if (arg2) {
    }
    if (arg3) {
    }
    temp_s0 = arg0->unk5C;
    func_8013A334(sp50, arg1, temp_s0, 6);
    func_801F467C(arg0->unk24->unk2C->unk12, &sp44);
    func_80147768((f32 *)&sp44, 22.0f);
    k = D_80218D2C;
    sp43 = B_801F3C90(arg0, 0x3C23D70A, k,
                      arg0->unk24->unk2C->unk4 + sp44.unk0 + VEC->unk0,
                      arg0->unk24->unk2C->unk8 + 5.0f + sp44.unk4 + VEC->unk4,
                      arg0->unk24->unk2C->unkC + sp44.unk8 + VEC->unk8,
                      D_80218D30, sp50[0], sp50[1], sp50[2], k, 35.0f);
    if (B_8012CE9C(arg1, (s32)temp_s0, D_80216EE8, 0x14) == 0) {
        func_801FA2E0();
        if ((func_80010550(arg1, temp_s0) != 0) && (sp43 == 1)) {
            temp_s0->unk78 = 1;
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
