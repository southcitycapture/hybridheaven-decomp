#include "context.h"
extern void func_8013A334(f32 *, s32, void *, s32);
void func_801F91C0(u8 *arg0, s32 arg1);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_801F8F3C_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F8F3C_Pos;
typedef struct func_801F8F3C_Mid {
    u8 pad0[0x12];
    s16 unk12;
} func_801F8F3C_Mid;
typedef struct func_801F8F3C_Obj {
    u8 pad0[0x24];
    struct { u8 pad[0x2C]; func_801F8F3C_Mid *unk2C; } *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
    u8 pad2[0x90 - 0x60];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad3[5];
    s16 unk98;
} func_801F8F3C_Obj;

extern u8 D_80218AC0[];

void func_801F8F3C(func_801F8F3C_Obj *arg0, s32 arg1) {
    void *t;
    f32 sp60[3];
    func_801F8F3C_Pos *p;

    t = arg0->unk5C;
    func_8013A334(sp60, arg1, t, 6);
    if (arg0->unk91 == 0) {
        if (arg0->unk92 > 0) {
            arg0->unk92 = arg0->unk92 - 1;
            if (arg0->unk90 != 0) {
                arg0->unk24->unk2C->unk12 = arg0->unk24->unk2C->unk12 - arg0->unk98;
            } else {
                arg0->unk24->unk2C->unk12 = arg0->unk24->unk2C->unk12 + arg0->unk98;
            }
        }
    }
#define P ((func_801F8F3C_Pos *)D_801BBCD0->unk2C)
    if (D_8011AAF4(D_80218AC0, 0x856, arg0, 0, 2, 3.0f, P->unk4, P->unk8 + 20.0f, P->unkC, 3.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1) == 0 && arg0->unk92 == 0) {
        func_800058DC(arg0, (s32)func_801F91C0);
    }
}
