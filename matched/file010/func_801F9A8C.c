#include "common.h"
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
extern void (*D_80216D10[])(void *, s32);
void func_800058DC(void *, s32);                    /* extern */
extern s32 func_80010550();
typedef struct func_801F4170_Inner {
    u8 pad0[8];
    f32 unk8;
} func_801F4170_Inner;
typedef struct func_801F4170_Mid {
    u8 pad0[0x2C];
    func_801F4170_Inner *unk2C;
} func_801F4170_Mid;
void func_801F536C(void);
typedef struct func_801F53C4_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_801F53C4_Struct;
s32 func_801F53C4(func_801F53C4_Struct *arg0);
struct func_801F9BC8_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x2C];
    void *unk5C;
    u8 pad3[0x34];
    f32 unk94;
};
void func_801F9BC8(struct func_801F9BC8_Obj *arg0, s32 arg1);

extern s32 func_8013A334(f32 *, s32, void *, s32);
struct func_801F9A8C_Arg { u8 pad0[0x24]; func_801F4170_Mid *u24; u8 pad1[0x1C]; f32 u44; u8 pad2[0x14]; s32 u5C; };
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80218B74[];
void func_801F9A8C(struct func_801F9A8C_Arg *arg0, s32 arg1) {
    s32 a2;
    f32 v[3];
    struct func_801F3FFC_Node *t;
    a2 = arg0->u5C;
    func_80010550(arg1, a2);
    func_8013A334(v, arg1, (void *)a2, 1);
    if (func_8011AAF4(D_80218B74, 0x952, arg0, 0, 2, 3.0f, ((f32 *)(t = D_801BBCD0->unk2C))[1], t->unk8 + 20.0f, ((f32 *)t)[3], 4294967296.0f, v[0], arg0->u24->unk2C->unk8 + 5.0f, v[2], 3.0f, 35.0f, -1, -1) == 0) {
        if (func_801F53C4((void *)arg0) == 0) {
            func_801F536C();
        }
        arg0->u44 = 0.0f;
        func_800058DC(arg0, (s32)func_801F9BC8);
    }
}
