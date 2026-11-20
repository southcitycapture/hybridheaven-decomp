#include "common.h"
extern void (*D_80216D10[])(void *, s32);
extern s32 D_8013A334(f32 *, s32, void *, s32);
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void *D_8021AFE4;
extern s32 func_80005670();
void func_800058DC(void *, s32);                    /* extern */
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern void func_80147734(f32 *, f32 *, f32 *);
extern void func_80147AA8(s32, s32, s32, s32);
extern void func_80147AF0(s32, s32, s32, s32);
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
struct func_801F7928_C { u8 pad0[0x50]; f32 unk50; };
struct func_801F7928_D { u8 pad0[0x24]; struct func_801F3FFC_Node *unk24; u8 pad1[0x14]; s16 unk3C; u8 pad2[0x1E]; struct func_801F7928_C *unk5C; };
void func_801F7928(struct func_801F7928_D *arg0, s32 arg1);


typedef struct func_801F7638_StructPos {
    u8 pad0[4];
    union { f32 f; s32 i; } x;
    f32 y;
    f32 z;
    u8 pad10[2];
    u16 angle;
} func_801F7638_StructPos;

typedef struct func_801F7638_StructMid {
    u8 pad0[0x2C];
    func_801F7638_StructPos *pos;
} func_801F7638_StructMid;

typedef struct func_801F7638_StructObj {
    u8 pad0[0x24];
    func_801F7638_StructMid *mid;
    u8 pad28[0x34];
    void *data;
    u8 pad60[0x30];
    s16 timer;
} func_801F7638_StructObj;

extern u8 D_80216E68[];
void func_801F7638(func_801F7638_StructObj *arg0, s32 arg1) {
    void *data;
    func_801F4620_Struct vec;
    func_801F4620_Struct vec2;
    func_801F4620_Struct vec3;
    f32 y;

    data = arg0->data;
    arg0->timer += 10;
    if (arg0->timer >= 80) {
        arg0->timer = 80;
    }
    func_80147AF0(0, arg0->timer & 0xFF, 0, 0);
    func_80147AA8(0, 20, 20, 50);
    D_8013A334(&vec.unk0, arg1, data, 6);
    y = (0.15f);
    if (D_801F3C90(arg0, 0.3f, y,
                   ((func_801F7638_StructPos *)D_801BBCD0->unk2C)->x.i,
                   ((func_801F7638_StructPos *)D_801BBCD0->unk2C)->y + 25.0f,
                   ((func_801F7638_StructPos *)D_801BBCD0->unk2C)->z, y,
                   vec.unk0, vec.unk4, vec.unk8, y, 30.0f) != 0) {
        func_801F4620(&vec2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10.0f);
        func_80130AA0(0, arg0->mid->pos->angle, 0, &vec2.unk0, &vec2.unk4, &vec2.unk8);
        func_80130AA0(0, 0x31C, 0, &vec2.unk0, &vec2.unk4, &vec2.unk8);
        y = arg0->mid->pos->y + 8.0f;
        vec2.unk0 += arg0->mid->pos->x.f;
        vec2.unk4 += y;
        vec2.unk8 += arg0->mid->pos->z;
        func_801F4620(&vec3, vec2.unk0, vec2.unk4, vec2.unk8,
                      arg0->mid->pos->x.f, y, arg0->mid->pos->z);
        func_80130AA0(0, 0x5B, 0, &vec3.unk0, &vec3.unk4, &vec3.unk8);
        func_80147734(&vec2.unk0, &vec3.unk0, &vec3.unk0);
        func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x6CF,
                      arg0, 0, 1, 3.0f, vec2.unk0, vec2.unk4, vec2.unk8, 3.0f,
                      vec3.unk0, vec3.unk4 - 2.0f, vec3.unk8, 0.0f, 35.0f, -1, -1);
        D_8021AFE4 = (void *)func_80005670(arg0, D_80216E68);
        func_800058DC(arg0, (s32)func_801F7928);
    }
}
