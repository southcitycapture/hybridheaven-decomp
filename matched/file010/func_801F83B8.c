#include "common.h"
extern void (*D_80216D10[])(void *, s32);
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
void func_800058DC(void *, s32);                    /* extern */
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
typedef struct func_801F8668_Pos { u8 pad[0x12]; u16 unk12; } func_801F8668_Pos;
typedef struct func_801F8668_Mid { u8 pad[0x2C]; func_801F8668_Pos *unk2C; } func_801F8668_Mid;
typedef struct func_801F8668_Obj {
    u8 pad0[0x24];
    func_801F8668_Mid *unk24;
    u8 pad1[0x10];
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_801F8668_Obj;
void func_801F8668(func_801F8668_Obj *arg0, volatile s32 arg1);


union func_801F83B8_Union { s32 i; f32 f; };
struct func_801F83B8_StructPos {
    u8 pad0[4];
    union func_801F83B8_Union u4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
};
struct func_801F83B8_StructMid {
    u8 pad0[0x2C];
    struct func_801F83B8_StructPos *unk2C;
};
struct func_801F83B8_StructQ {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F83B8_StructObj {
    u8 pad0[0x24];
    struct func_801F83B8_StructMid *unk24;
    u8 pad28[0x34];
    struct func_801F83B8_StructQ *unk5C;
};
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_802189D0[];
extern f32 D_80218D08;

void func_801F83B8(struct func_801F83B8_StructObj *arg0, s32 arg1) {
    struct func_801F83B8_StructQ *sp8C;
    f32 a[3];
    f32 b[3];
    f32 c[3];
    f32 t;
    func_801F9104_StructPos *pos;

    sp8C = arg0->unk5C;
    D_8013A334(a, arg1, sp8C, 6);
    t = D_80218D08;
    pos = POS;
    if (D_801F3C90(arg0, 0.1f, t, pos->unk4, pos->unk8 + 25.0f, pos->unkC, t, a[0], a[1], a[2], t, 50.0f) != 0) {
        sp8C->unk78 = 1;
        func_801F4620((func_801F4620_Struct *)b, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 17.0f);
        func_80130AA0(0, arg0->unk24->unk2C->unk12, 0, &b[0], &b[1], &b[2]);
        func_80130AA0(0, 0xD55, 0, &b[0], &b[1], &b[2]);
        arg1 = (s32)arg0->unk24->unk2C;
        t = ((struct func_801F83B8_StructPos *)arg1)->unk8 + 14.0f;
        b[0] += ((struct func_801F83B8_StructPos *)arg1)->u4.f;
        b[1] += t;
        b[2] += arg0->unk24->unk2C->unkC;
        func_801F4620((func_801F4620_Struct *)c, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f);
        func_80130AA0(0, arg0->unk24->unk2C->unk12, 0, &c[0], &c[1], &c[2]);
        c[0] += arg0->unk24->unk2C->u4.f;
        c[1] += arg0->unk24->unk2C->unk8;
        c[2] += arg0->unk24->unk2C->unkC;
        func_8011AAF4(D_802189D0, 0x780, arg0, 0, 1, 3.0f, b[0], b[1], b[2], 3.0f, c[0], c[1], c[2], 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, (s32)func_801F8668);
    }
}
