#include "common.h"


extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f64 D_80252770;
extern f64 D_80252778;
extern f64 D_80252780;
extern f64 D_80252788;
extern f64 D_80252790;
extern f64 D_80252798;
extern f64 D_802527A0;
extern f64 D_802527A8;
extern f64 D_802527B0;
extern f64 D_802527B8;
extern f64 D_802527C0;
extern f64 D_802527C8;
extern f64 D_802527D0;
extern f64 D_802527D8;
extern f64 D_802527E0;
extern f64 D_802527E8;
extern f64 D_802527F0;
extern f64 D_802527F8;
extern f64 D_80252800;
extern f64 D_80252808;
extern f64 D_80252810;
extern f64 D_80252818;
extern f64 D_80252820;
extern f32 D_80252828;
extern f32 D_8025282C;
extern f32 D_80252830;
extern f64 D_80252838;
extern f32 D_80252840;
extern f64 D_80252848;
extern f64 D_80252850;
extern f64 D_80252858;
extern f32 D_80252860;
extern f64 D_80252868;

void func_802444B0(u16 temp_a0) {
    s32 unused;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 temp_s0;
    s32 sp80;

    if ((temp_a0 >= 0x3C1) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_80252770), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252778 + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252780), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xDC, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 2.0), 0xA, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + 50.0f), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252788 + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 200.0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) ((f64) (sp88 - 0x1F4) / 10.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252790 + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252798), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0, 0);
    }
    if ((temp_a0 < 0x3C0) && (temp_a0 >= 0x385) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_802527A0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527A8 + ((f64) (temp_a0 - 0x348) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_802527B0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
    }
    if ((temp_a0 >= 0x371) && !(temp_a0 & 1)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_802527B8), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527C0 + ((f64) (temp_a0 - 0x2E4) / 20.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_802527C8), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
    }
    if ((temp_a0 >= 0x213) && !(temp_a0 & 1)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 5.0) + D_802527D0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527D8), (f32) (((f64) (sp90 - 0x1F4) / 5.0) + 84.0), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 8, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 5.0) + D_802527E0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527E8), (f32) (((f64) (sp90 - 0x1F4) / 5.0) + 84.0), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_802527F0), 0xA, 0);
    }
    if ((temp_a0 >= 0x97) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_802527F8), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252800), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252808), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 8, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + -32.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252810), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252818), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252820), 0xA, 0);
    }
    if ((temp_a0 >= 0x213) && (temp_a0 < 0x33E)) {
        if (!((temp_a0 + 0x28) & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(D_80252828, D_8025282C, 98.0f, -6.0f, 1.0f, 1.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
        }
        if (!(temp_a0 & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(-181.0f, -700.0f, 0.0f, -6.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
        }
    }
    if (temp_a0 >= 0x1F5) {
        if ((temp_a0 & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(-185.0f, -740.0f, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
        }
    } else if ((temp_a0 >= 0x12D) && (temp_a0 < 0x1F4)) {
        if ((temp_a0 & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(-185.0f, D_80252830, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252838), 3, 0);
        }
    } else if ((temp_a0 >= 0x97) && (temp_a0 < 0xF0)) {
        if (!(temp_a0 & 3)) {
            func_80129FB8(-185.0f, D_80252840, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
            sp80 = func_8012C6B4(0x3E8);
            temp_s0 = func_8012C6B4(0x3E8);
            sp88 = func_8012C6B4(0x3E8);
            sp8C = func_8012C6B4(0x14);
            sp90 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp80 - 0x1F4) / 50.0) + -52.0), (f32) (((f64) (temp_s0 - 0x1F4) / 50.0) + D_80252848), (f32) (((f64) (sp88 - 0x1F4) / 50.0) + D_80252850), 0.0f, 0.0f, 0.0f, 0.0f, sp8C + 0xEB, sp90 + 0xC8, 0, 0xFF, 0, 0, 0xC8, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252858), 9, 0);
        }
        if (!(temp_a0 & 1)) {
            func_80129FB8(-185.0f, D_80252860, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252868), 3, 0);
        }
    }
}

#define D_80164F40 D_80164F40__func_8024569C
#define D_8017AE98 D_8017AE98__func_8024569C
#define D_8017B608 D_8017B608__func_8024569C
#define D_801BBBF0 D_801BBBF0__func_8024569C
#define D_80250454 D_80250454__func_8024569C
#define D_802528D0 D_802528D0__func_8024569C
#define D_802528E8 D_802528E8__func_8024569C
#define D_80252914 D_80252914__func_8024569C
#define D_80252915 D_80252915__func_8024569C
#define D_80252916 D_80252916__func_8024569C
#define D_80252917 D_80252917__func_8024569C
#define D_80252918 D_80252918__func_8024569C
#define D_80252919 D_80252919__func_8024569C
#define D_8025291A D_8025291A__func_8024569C
#define D_8025291B D_8025291B__func_8024569C
#define D_8025291C D_8025291C__func_8024569C
#define func_800058DC func_800058DC__func_8024569C
#define func_80005E44 func_80005E44__func_8024569C
#define func_80006214 func_80006214__func_8024569C
#define func_8000C3B0 func_8000C3B0__func_8024569C
#define func_8012C784 func_8012C784__func_8024569C
#define func_80245B04 func_80245B04__func_8024569C


typedef struct func_8024569C_StructConfig {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
} func_8024569C_StructConfig;

typedef struct func_8024569C_StructEntry {
    u8 type;
    u8 id;
    u8 mode;
    u8 scale;
    u8 color1;
    u8 color2;
    s8 value;
} func_8024569C_StructEntry;

typedef struct func_8024569C_StructObject {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[4];
    f32 sx;
    f32 sy;
    f32 sz;
    u32 flags;
    u8 pad28[8];
    u32 model;
    u8 pad34[0x14];
    u8 color0;
    u8 color1;
    u8 color2;
    u8 color3;
    u8 env0;
    u8 env1;
    u8 env2;
    u8 env3;
} func_8024569C_StructObject;

typedef struct func_8024569C_StructNode {
    u8 pad0[0x30];
    func_8024569C_StructObject *object;
} func_8024569C_StructNode;

typedef struct func_8024569C_StructGlobal {
    u8 pad0[0xF20];
    u8 color0;
    u8 color1;
    u8 color2;
    u8 color3;
    u8 color4;
    u8 color5;
    s8 color6;
    s8 color7;
    s8 color8;
    u8 padF29[9];
    u8 env0;
    u8 env1;
    u8 env2;
    u8 env3;
} func_8024569C_StructGlobal;

extern func_8024569C_StructConfig D_80164F40;
extern func_8024569C_StructEntry D_80250454[];
extern func_8024569C_StructGlobal D_801BBBF0;
extern u8 D_8017B608[];
extern u8 D_8017AE98[];
extern s16 D_802528D0[];
extern f32 D_802528E8[];
extern u8 D_80252914;
extern u8 D_80252915;
extern u8 D_80252916;
extern u8 D_80252917;
extern u8 D_80252918;
extern u8 D_80252919;
extern s8 D_8025291A;
extern s8 D_8025291B;
extern s8 D_8025291C;
extern void func_80005E44(s32, func_8024569C_StructConfig *);
extern s32 func_80006214(s32);
extern u32 func_8000C3B0(func_8024569C_StructNode *);
extern void func_8012C784(s32, s32, u8);
extern void func_80245B04(void);
extern void func_800058DC(s32, void (*)(void));

void func_8024569C(s32 arg0, func_8024569C_StructNode **arg1) {
    func_8024569C_StructConfig configs[11];
    func_8024569C_StructEntry *entry;
    u8 i;

    for (i = 0; i < 11; i++) {
        configs[i] = D_80164F40;
        D_802528D0[i] = 0;
        entry = &D_80250454[i];
        D_802528E8[i] = (f32)entry->value;
        switch (entry->type) {
        case 3:
            configs[i].b = 0x80000400;
            func_80005E44(arg0, &configs[i]);
            func_80006214(arg0);
            arg1[i]->object->x = arg1[i]->object->y = arg1[i]->object->z = 0.0f;
            arg1[i]->object->angle = 0;
            arg1[i]->object->flags |= 0x100;
            arg1[i]->object->model = (u32)D_8017B608 | 0x40000000;
            arg1[i]->object->color3 = entry->mode;
            arg1[i]->object->color0 = entry->scale;
            arg1[i]->object->color1 = entry->color1;
            arg1[i]->object->color2 = entry->color2;
            arg1[i]->object->flags |= 0x400;
            arg1[i]->object->env0 = D_801BBBF0.env0;
            arg1[i]->object->env1 = D_801BBBF0.env1;
            arg1[i]->object->env2 = D_801BBBF0.env2;
            arg1[i]->object->env3 = D_801BBBF0.env3;
            func_8012C784(arg0, i, entry->id);
            break;
        case 7:
            configs[i].b = 0x80000C00;
            func_80005E44(arg0, &configs[i]);
            func_80006214(arg0);
            arg1[i]->object->x = arg1[i]->object->y = arg1[i]->object->z = 0.0f;
            arg1[i]->object->angle = 0;
            arg1[i]->object->model = (u32)D_8017AE98;
            if (entry->mode == 1) {
                arg1[i]->object->flags = 0x13;
                arg1[i]->object->model = func_8000C3B0(*arg1);
                arg1[i]->object->env0 = D_801BBBF0.env0;
                arg1[i]->object->env1 = D_801BBBF0.env1;
                arg1[i]->object->env2 = D_801BBBF0.env2;
                arg1[i]->object->env3 = D_801BBBF0.env3;
            }
            func_8012C784(arg0, i, entry->id);
            if (entry->scale == 0) {
                arg1[i]->object->sx = arg1[i]->object->sy = arg1[i]->object->sz = 1.0f;
            } else {
                arg1[i]->object->sx = arg1[i]->object->sy = arg1[i]->object->sz =
                    (f32)((f64)(f32)(u32)entry->scale / 100.0);
            }
            break;
        }
        do {} while (0);
    }
    D_80252914 = D_801BBBF0.color0;
    D_80252915 = D_801BBBF0.color1;
    D_80252916 = D_801BBBF0.color2;
    D_80252917 = D_801BBBF0.color3;
    D_80252918 = D_801BBBF0.color4;
    D_80252919 = D_801BBBF0.color5;
    D_8025291A = D_801BBBF0.color6;
    D_8025291B = D_801BBBF0.color7;
    D_8025291C = D_801BBBF0.color8;
    func_800058DC(arg0, func_80245B04);
}
#undef D_80164F40
#undef D_8017AE98
#undef D_8017B608
#undef D_801BBBF0
#undef D_80250454
#undef D_802528D0
#undef D_802528E8
#undef D_80252914
#undef D_80252915
#undef D_80252916
#undef D_80252917
#undef D_80252918
#undef D_80252919
#undef D_8025291A
#undef D_8025291B
#undef D_8025291C
#undef func_800058DC
#undef func_80005E44
#undef func_80006214
#undef func_8000C3B0
#undef func_8012C784
#undef func_80245B04

/* hh-block asm/nonmatchings/file022/802444B0/_mrg_keep_text_func_80245B04.s {"functions":["func_80245B04"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file022/802444B0/_mrg_keep_text_func_80245B04.s")


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_802444B0[] = {
    0x25, 0x64, 0x20, 0xB8, 0xC4, 0xCC, 0xDC, 0xA4, 0xCE, 0xA5, 0xAA, 0xA5, 0xD6, 0xA5, 0xB8, 0xA5,
    0xA7, 0xBA, 0xEE, 0xC0, 0xAE, 0x0A, 0x00, 0x00, 0x74, 0x69, 0x6D, 0x65, 0x72, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xCF, 0xA5, 0xA4, 0xA5, 0xEC, 0xA5, 0xBE, 0xA4, 0xC7, 0xA4, 0xB9,
    0xA1, 0xA3, 0x0A, 0x00, 0xA5, 0xB7, 0xA5, 0xCD, 0xA5, 0xB9, 0xA5, 0xB3, 0xA4, 0xCE, 0xA5, 0xCF,
    0xA5, 0xA4, 0xA5, 0xEC, 0xA5, 0xBE, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0x0A, 0x00, 0x00, 0x00,
    0xC9, 0xB8, 0xBD, 0xE0, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0x0A, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x61, 0x31, 0x30, 0x5F, 0x73, 0x30, 0x33, 0x5F, 0x65, 0x78,
    0x70, 0x6C, 0x6F, 0x64, 0x65, 0x64, 0x65, 0x6D, 0x6F, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x88, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x88, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x88, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x6F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x5F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x8C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x6C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x5F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x88, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x6C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x86, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x86, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xC0, 0x5A, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x86, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x67, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x87, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x6C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xC3, 0x17, 0x80, 0x00, 0xC4, 0x3B, 0x80, 0x00,
    0xC4, 0x3B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0xC4, 0x36, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x87, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x6E, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0xC4, 0x3B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0xC4, 0x05, 0x80, 0x00, 0xC4, 0x1D, 0x80, 0x00, 0x43, 0x85, 0x80, 0x00, 0xC4, 0x2B, 0x80, 0x00,
    0xC4, 0x3F, 0x80, 0x00, 0xC3, 0xDA, 0x80, 0x00, 0xC3, 0x8F, 0x80, 0x00, 0xC4, 0x3D, 0x80, 0x00,
    0xC4, 0x3D, 0x80, 0x00, 0xC4, 0x3D, 0x80, 0x00, 0xC4, 0x3D, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
};
