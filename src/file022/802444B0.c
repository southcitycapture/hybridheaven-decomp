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
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + 70.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-770.0) + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 245.0), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xDC, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 2.0), 0xA, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + 50.0f), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-775.0) + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 200.0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) ((f64) (sp88 - 0x1F4) / 10.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-770.0) + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 250.0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0, 0);
    }
    if ((temp_a0 < 0x3C0) && (temp_a0 >= 0x385) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + 125.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-900.0) + ((f64) (temp_a0 - 0x348) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 230.0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
    }
    if ((temp_a0 >= 0x371) && !(temp_a0 & 1)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + 125.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-770.0) + ((f64) (temp_a0 - 0x2E4) / 20.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 230.0), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
    }
    if ((temp_a0 >= 0x213) && !(temp_a0 & 1)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 5.0) + (-245.0)), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-730.0)), (f32) (((f64) (sp90 - 0x1F4) / 5.0) + 84.0), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 8, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 5.0) + (-245.0)), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-720.0)), (f32) (((f64) (sp90 - 0x1F4) / 5.0) + 84.0), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.3), 0xA, 0);
    }
    if ((temp_a0 >= 0x97) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + (-105.0)), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-730.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + (-186.0)), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 8, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + -32.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + (-740.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + (-225.0)), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.3), 0xA, 0);
    }
    if ((temp_a0 >= 0x213) && (temp_a0 < 0x33E)) {
        if (!((temp_a0 + 0x28) & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8((-151.5f), (-750.0f), 98.0f, -6.0f, 1.0f, 1.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
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
            func_80129FB8(-185.0f, (-750.0f), -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + (0.8)), 3, 0);
        }
    } else if ((temp_a0 >= 0x97) && (temp_a0 < 0xF0)) {
        if (!(temp_a0 & 3)) {
            func_80129FB8(-185.0f, (-7.3e+02f), -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
            sp80 = func_8012C6B4(0x3E8);
            temp_s0 = func_8012C6B4(0x3E8);
            sp88 = func_8012C6B4(0x3E8);
            sp8C = func_8012C6B4(0x14);
            sp90 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp80 - 0x1F4) / 50.0) + -52.0), (f32) (((f64) (temp_s0 - 0x1F4) / 50.0) + (-740.0)), (f32) (((f64) (sp88 - 0x1F4) / 50.0) + (-245.0)), 0.0f, 0.0f, 0.0f, 0.0f, sp8C + 0xEB, sp90 + 0xC8, 0, 0xFF, 0, 0, 0xC8, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.3), 9, 0);
        }
        if (!(temp_a0 & 1)) {
            func_80129FB8(-185.0f, (-7.5e+02f), -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + (0.8)), 3, 0);
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

#define D_801BBBF0 D_801BBBF0__func_80245B04
#define D_801BCAE0 D_801BCAE0__func_80245B04
#define D_801BCB0E D_801BCB0E__func_80245B04
#define D_801BCB0F D_801BCB0F__func_80245B04
#define D_801BCB10 D_801BCB10__func_80245B04
#define D_801BCB11 D_801BCB11__func_80245B04
#define D_801BCB12 D_801BCB12__func_80245B04
#define D_8025272C D_8025272C__func_80245B04
#define D_80252870 D_80252870__func_80245B04
#define D_80252874 D_80252874__func_80245B04
#define D_80252878 D_80252878__func_80245B04
#define D_8025287C D_8025287C__func_80245B04
#define D_80252880 D_80252880__func_80245B04
#define D_80252884 D_80252884__func_80245B04
#define D_80252888 D_80252888__func_80245B04
#define D_8025288C D_8025288C__func_80245B04
#define D_80252890 D_80252890__func_80245B04
#define D_80252894 D_80252894__func_80245B04
#define D_80252898 D_80252898__func_80245B04
#define D_802528D0 D_802528D0__func_80245B04
#define D_802528E8 D_802528E8__func_80245B04
#define D_80252914 D_80252914__func_80245B04
#define D_80252915 D_80252915__func_80245B04
#define D_80252916 D_80252916__func_80245B04
#define func_80020718 func_80020718__func_80245B04
#define func_8011AAF4 func_8011AAF4__func_80245B04
#define func_8012FE50 func_8012FE50__func_80245B04
#define func_80130264 func_80130264__func_80245B04
#define func_80130290 func_80130290__func_80245B04
#define func_801518D4 func_801518D4__func_80245B04
#define func_801C3B10 func_801C3B10__func_80245B04
#define func_801C3B2C func_801C3B2C__func_80245B04
#define func_801FBB30 func_801FBB30__func_80245B04
#define func_80242A20 func_80242A20__func_80245B04
#define func_80242A68 func_80242A68__func_80245B04
#define func_80242AB8 func_80242AB8__func_80245B04
#define func_80242B3C func_80242B3C__func_80245B04
extern func_8024569C_StructGlobal D_801BBBF0;
extern s16 D_802528D0[];
extern f32 D_802528E8[];
extern u8 D_80252914;
extern u8 D_80252915;
extern u8 D_80252916;

typedef struct func_80245B04_StructInner {
    u8 pad0[0x22];
    u8 b22;
} func_80245B04_StructInner;

typedef struct func_80245B04_StructMid {
    u8 pad0[0x24];
    func_80245B04_StructInner *p24;
} func_80245B04_StructMid;

typedef struct func_80245B04_StructG {
    u8 pad0[2];
    s16 h2;
    u8 pad4[0xD8];
    func_80245B04_StructMid *pDC;
    u8 padE0[0x15];
    u8 bF5;
} func_80245B04_StructG;

extern u16 D_801BCAE0;
extern char D_8025272C[];
extern f32 D_80252870;
extern f32 D_80252874;
extern f32 D_80252878;
extern f32 D_8025287C;
extern f32 D_80252880;
extern f32 D_80252884;
extern f32 D_80252888;
extern f32 D_8025288C;
extern f32 D_80252890;
extern f32 D_80252894;
extern f32 D_80252898;
extern u8 D_801BCB10;
extern u8 D_801BCB11;
extern u8 D_801BCB12;
extern u8 D_801BCB0E[];
extern u8 D_801BCB0F[];

#define D_802528E6 (((u16 *)D_802528D0)[11])
extern void func_80020718(s32);
extern void func_8011AAF4(const char *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s32 func_80130264();
extern s32 func_80130290();
extern void func_801518D4(s32, s32, s32);
extern s32 func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30();
extern f32 func_80242A20(f32);
extern f32 func_80242A68(f32, u16, f32, u16);
extern s32 func_80242AB8(u16);
extern s32 func_80242B3C(u16);

#undef D_801BBBF0
#undef D_801BCAE0
#undef D_801BCB0E
#undef D_801BCB0F
#undef D_801BCB10
#undef D_801BCB11
#undef D_801BCB12
#undef D_8025272C
#undef D_802528D0
#undef D_802528E6
#undef D_802528E8
#undef D_80252914
#undef D_80252915
#undef D_80252916
#undef func_80020718
#undef func_8011AAF4
#undef func_8012FE50
#undef func_80130264
#undef func_80130290
#undef func_801518D4
#undef func_801C3B10
#undef func_801C3B2C
#undef func_801FBB30
#undef func_80242A20
#undef func_80242A68
#undef func_80242AB8
#undef func_80242B3C
#define D_801BBBF0 D_801BBBF0__func_80245B04_4e33b63d
#define D_801BCAE0 D_801BCAE0__func_80245B04_4e33b63d
#define D_801BCB0E D_801BCB0E__func_80245B04_4e33b63d
#define D_801BCB0F D_801BCB0F__func_80245B04_4e33b63d
#define D_801BCB10 D_801BCB10__func_80245B04_4e33b63d
#define D_801BCB11 D_801BCB11__func_80245B04_4e33b63d
#define D_801BCB12 D_801BCB12__func_80245B04_4e33b63d
#define D_8025272C D_8025272C__func_80245B04_4e33b63d
#define D_802528D0 D_802528D0__func_80245B04_4e33b63d
#define D_802528E8 D_802528E8__func_80245B04_4e33b63d
#define D_80252914 D_80252914__func_80245B04_4e33b63d
#define D_80252915 D_80252915__func_80245B04_4e33b63d
#define D_80252916 D_80252916__func_80245B04_4e33b63d
#define func_80020718 func_80020718__func_80245B04_4e33b63d
#define func_8011AAF4 func_8011AAF4__func_80245B04_4e33b63d
#define func_8012FE50 func_8012FE50__func_80245B04_4e33b63d
#define func_80130264 func_80130264__func_80245B04_4e33b63d
#define func_80130290 func_80130290__func_80245B04_4e33b63d
#define func_801518D4 func_801518D4__func_80245B04_4e33b63d
#define func_801C3B10 func_801C3B10__func_80245B04_4e33b63d
#define func_801C3B2C func_801C3B2C__func_80245B04_4e33b63d
#define func_801FBB30 func_801FBB30__func_80245B04_4e33b63d
#define func_80242A20 func_80242A20__func_80245B04_4e33b63d
#define func_80242A68 func_80242A68__func_80245B04_4e33b63d
#define func_80242AB8 func_80242AB8__func_80245B04_4e33b63d
#define func_80242B3C func_80242B3C__func_80245B04_4e33b63d
#define func_80245B04_StructG func_80245B04_StructG__func_80245B04_4e33b63d
#define func_80245B04_StructInner func_80245B04_StructInner__func_80245B04_4e33b63d
#define func_80245B04_StructMid func_80245B04_StructMid__func_80245B04_4e33b63d
extern func_8024569C_StructGlobal D_801BBBF0;
extern s16 D_802528D0[];
extern f32 D_802528E8[];
extern u8 D_80252914;
extern u8 D_80252915;
extern u8 D_80252916;

typedef struct func_80245B04_StructInner {
    u8 pad0[0x22];
    u8 b22;
} func_80245B04_StructInner;

typedef struct func_80245B04_StructMid {
    u8 pad0[0x24];
    func_80245B04_StructInner *p24;
} func_80245B04_StructMid;

typedef struct func_80245B04_StructG {
    u8 pad0[2];
    s16 h2;
    u8 pad4[0xD8];
    func_80245B04_StructMid *pDC;
    u8 padE0[0x15];
    u8 bF5;
} func_80245B04_StructG;

extern u16 D_801BCAE0;
extern char D_8025272C[];
extern u8 D_801BCB10;
extern u8 D_801BCB11;
extern u8 D_801BCB12;
extern u8 D_801BCB0E[];
extern u8 D_801BCB0F[];

#define D_802528E6 (((u16 *)D_802528D0)[11])
extern void func_80020718(s32);
extern void func_8011AAF4(const char *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s32 func_80130264();
extern s32 func_80130290();
extern void func_801518D4(s32, s32, s32);
extern s32 func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30();
extern f32 func_80242A20(f32);
extern f32 func_80242A68(f32, u16, f32, u16);
extern s32 func_80242AB8(u16);
extern s32 func_80242B3C(u16);

void func_80245B04(s32 arg0, func_8024569C_StructNode **arg1) {
    s32 v;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 fv1;
    f32 sp6C;
    u16 sp6A;

    if (((func_80245B04_StructG *)&D_801BBBF0)->pDC != NULL) {
        if (((func_80245B04_StructG *)&D_801BBBF0)->pDC->p24 != NULL) {
            if (((func_80245B04_StructG *)&D_801BBBF0)->bF5 != 0) {
                u8 i;
                ((func_80245B04_StructG *)&D_801BBBF0)->pDC->p24->b22 = 0;
                func_801FBB30();
                D_801BCAE0 = 0x10;
                func_801C3B2C(0);
                func_801C3B10(0);
                switch ((s32)D_802528E6) {
                case 0x5A:
                    func_80020718(0x271);
                    break;
                case 0x96:
                    func_80020718(0x272);
                    break;
                case 0xBE:
                    D_802528D0[2] = 1;
                    break;
                case 0x12C:
                    D_802528D0[3] = 1;
                    break;
                case 0x136:
                    D_802528D0[9] = 1;
                    break;
                case 0x140:
                    func_80020718(0x272);
                    break;
                case 0x154:
                    D_802528D0[0] = 1;
                    D_802528D0[7] = 1;
                    break;
                case 0x1C0:
                    func_80020718(0x272);
                    break;
                case 0x212:
                    D_802528D0[1] = 1;
                    D_802528D0[8] = 1;
                    break;
                case 0x23A:
                    D_802528D0[4] = 1;
                    break;
                case 0x28A:
                    D_802528D0[10] = 1;
                    break;
                case 0x348:
                    D_802528D0[6] = 1;
                    break;
                case 0x370:
                    D_802528D0[5] = 1;
                    break;
                case 0x398:
                    func_80020718(0x273);
                    break;
                case 0x3C0:
                    func_80020718(0x273);
                    break;
                }
                if (D_802528E6 < 0x1F4) {
                    if ((D_802528E6 >= 0x12D && (D_802528E6 & 0x40)) || (D_802528E6 >= 0x97 && D_802528E6 < 0xF0)) {
                        D_801BCB0E[2] = 0xFF;
                        D_801BCB11 = 0x64;
                        D_801BCB12 = 0x64;
                    } else {
                        D_801BCB0E[2] = D_80252914;
                        D_801BCB11 = D_80252915;
                        D_801BCB12 = D_80252916;
                    }
                } else if (D_802528E6 > 0x1F4) {
                    if (func_80242AB8(D_802528E6) != 0) {
                        D_801BBBF0.color0 = (u32)D_801BBBF0.color0 + (0xFF - D_801BBBF0.color0) * 0.25;
                        D_801BBBF0.color1 = (u32)D_801BBBF0.color1 + (0x64 - D_801BBBF0.color1) * 0.25;
                        D_801BBBF0.color2 = (u32)D_801BBBF0.color2 + (0x64 - D_801BBBF0.color2) * 0.25;
                    } else {
                        D_801BBBF0.color0 = (u32)D_801BBBF0.color0 + (D_80252914 - D_801BBBF0.color0) * 0.25;
                        D_801BBBF0.color1 = (u32)D_801BBBF0.color1 + (D_80252915 - D_801BBBF0.color1) * 0.25;
                        D_801BBBF0.color2 = (u32)D_801BBBF0.color2 + (D_80252916 - D_801BBBF0.color2) * 0.25;
                    }
                }
                i = 0;
                do {
                    if ((v = ((u16 *)D_802528D0)[i]) >= 0x51) {
                        D_802528E8[i] = func_80242A20(D_802528E8[i]);
                        arg1[i]->object->y += D_802528E8[i];
                        ((u16 *)D_802528D0)[i] += 1;
                    } else if (v >= 0x15) {
                        arg1[i]->object->y = func_80242A68(arg1[i]->object->y, v - 0x14, 1.0f, 0x800);
                        ((u16 *)D_802528D0)[i] += 1;
                    } else if (v > 0) {
                        ((u16 *)D_802528D0)[i] = ((u16 *)D_802528D0)[i] + 1;
                    }
                    i++;
                } while (i < 11);
                func_802444B0(D_802528E6);
                if (D_802528E6 == 0x5A) {
                    func_801518D4(0, 0, 0x3C);
                }
                if (D_802528E6 == 0x96) {
                    func_801518D4(0, 3, 0x5A);
                }
                if (D_802528E6 == 0xFA) {
                    func_801518D4(0, 1, 0x32);
                }
                if (D_802528E6 == 0x12C) {
                    func_801518D4(0, 3, 0xC8);
                }
                if (D_802528E6 == 0x1F4) {
                    func_801518D4(0, 1, 0x1E);
                }
                if (D_802528E6 >= 0x212 && D_802528E6 < 0x33E) {
                    if (func_80242B3C(D_802528E6) != 0) {
                        func_801518D4(0, 7, 0xA);
                    } else {
                        func_801518D4(0, 0, 0xA);
                    }
                }
                if (D_802528E6 == 0x33E) {
                    func_801518D4(0, 0, 0x32);
                }
                if (D_802528E6 == 0x370) {
                    func_801518D4(0, 1, 0x14);
                }
                if (D_802528E6 == 0x384) {
                    func_801518D4(0, 2, 0x3C);
                }
                if (D_802528E6 >= 0x3C0) {
                    if (func_80242B3C(D_802528E6) != 0) {
                        func_801518D4(0, 7, 0xA);
                    } else {
                        func_801518D4(0, 0, 0xA);
                    }
                }
                if (func_80130264() != 0) {
                    if (func_80130290() != 0) {
                        sp6A = 0x900;
                    } else {
                        sp6A = 0x700;
                    }
                } else {
                    sp6A = 0x800;
                }
                if (D_802528E6 >= 0x33F) {
                    sp7C = func_80242A68((-534.0f), D_802528E6, 3.0f, sp6A);
                    fv1 = func_80242A68((-6.3e+02f), D_802528E6, 3.0f, sp6A);
                    sp80 = -78.0f;
                    sp78 = (267.0f);
                    sp74 = -24.0f;
                    sp6C = 262.0f;
                } else if (D_802528E6 >= 0x1F5) {
                    sp7C = func_80242A68((-686.0f), D_802528E6, 3.0f, sp6A);
                    fv1 = func_80242A68((-766.0f), D_802528E6, 3.0f, sp6A);
                    sp80 = (-437.0f);
                    sp78 = 320.0f;
                    sp74 = -160.0f;
                    sp6C = -124.0f;
                } else {
                    sp80 = (-287.0f);
                    sp78 = -106.0f;
                    sp74 = -141.0f;
                    sp6C = -196.0f;
                    if (D_802528E6 >= 0x12D) {
                        sp7C = func_80242A68(-736.0f, D_802528E6, 3.0f, sp6A);
                        fv1 = func_80242A68((-758.0f), D_802528E6, 3.0f, sp6A);
                    } else if (D_802528E6 >= 0x97) {
                        sp7C = func_80242A68(-736.0f, D_802528E6, 2.0f, sp6A);
                        fv1 = func_80242A68((-758.0f), D_802528E6, 2.0f, sp6A);
                    } else if (D_802528E6 >= 0x5B) {
                        sp7C = func_80242A68(-736.0f, D_802528E6, (D_802528E6 - 0x5A) / 60.0, sp6A);
                        fv1 = func_80242A68((-758.0f), D_802528E6, (D_802528E6 - 0x5A) / 60.0, sp6A);
                    } else {
                        sp7C = -736.0f;
                        fv1 = (-758.0f);
                    }
                }
                func_8011AAF4(D_8025272C, 0x243, arg0, 0, 1, 10.0f, sp80, sp7C, sp78, 10.0f, sp74, fv1, sp6C, 0.0f, 35.0f, -1, -1);
                if (D_802528E6++ == 0x3FC) {
                    func_80020718(0x6BF);
                    ((func_80245B04_StructG *)&D_801BBBF0)->h2 = 4;
                    func_8012FE50(0xF, 0x5D, 2, 2, 2);
                }
            }
        }
    }
}
#undef D_802528E6
#undef D_801BBBF0
#undef D_801BCAE0
#undef D_801BCB0E
#undef D_801BCB0F
#undef D_801BCB10
#undef D_801BCB11
#undef D_801BCB12
#undef D_8025272C
#undef D_802528D0
#undef D_802528E8
#undef D_80252914
#undef D_80252915
#undef D_80252916
#undef func_80020718
#undef func_8011AAF4
#undef func_8012FE50
#undef func_80130264
#undef func_80130290
#undef func_801518D4
#undef func_801C3B10
#undef func_801C3B2C
#undef func_801FBB30
#undef func_80242A20
#undef func_80242A68
#undef func_80242AB8
#undef func_80242B3C
#undef func_80245B04_StructG
#undef func_80245B04_StructInner
#undef func_80245B04_StructMid
#define D_801BBBF0 D_801BBBF0__func_80245B04
#define D_801BCAE0 D_801BCAE0__func_80245B04
#define D_801BCB0E D_801BCB0E__func_80245B04
#define D_801BCB0F D_801BCB0F__func_80245B04
#define D_801BCB10 D_801BCB10__func_80245B04
#define D_801BCB11 D_801BCB11__func_80245B04
#define D_801BCB12 D_801BCB12__func_80245B04
#define D_8025272C D_8025272C__func_80245B04
#define D_802528D0 D_802528D0__func_80245B04
#define D_802528E6 (((u16 *)D_802528D0)[11])
#define D_802528E8 D_802528E8__func_80245B04
#define D_80252914 D_80252914__func_80245B04
#define D_80252915 D_80252915__func_80245B04
#define D_80252916 D_80252916__func_80245B04
#define func_80020718 func_80020718__func_80245B04
#define func_8011AAF4 func_8011AAF4__func_80245B04
#define func_8012FE50 func_8012FE50__func_80245B04
#define func_80130264 func_80130264__func_80245B04
#define func_80130290 func_80130290__func_80245B04
#define func_801518D4 func_801518D4__func_80245B04
#define func_801C3B10 func_801C3B10__func_80245B04
#define func_801C3B2C func_801C3B2C__func_80245B04
#define func_801FBB30 func_801FBB30__func_80245B04
#define func_80242A20 func_80242A20__func_80245B04
#define func_80242A68 func_80242A68__func_80245B04
#define func_80242AB8 func_80242AB8__func_80245B04
#define func_80242B3C func_80242B3C__func_80245B04
#undef D_802528E6
#undef D_801BBBF0
#undef D_801BCAE0
#undef D_801BCB0E
#undef D_801BCB0F
#undef D_801BCB10
#undef D_801BCB11
#undef D_801BCB12
#undef D_8025272C
#undef D_80252870
#undef D_80252874
#undef D_80252878
#undef D_8025287C
#undef D_80252880
#undef D_80252884
#undef D_80252888
#undef D_8025288C
#undef D_80252890
#undef D_80252894
#undef D_80252898
#undef D_802528D0
#undef D_802528E8
#undef D_80252914
#undef D_80252915
#undef D_80252916
#undef func_80020718
#undef func_8011AAF4
#undef func_8012FE50
#undef func_80130264
#undef func_80130290
#undef func_801518D4
#undef func_801C3B10
#undef func_801C3B2C
#undef func_801FBB30
#undef func_80242A20
#undef func_80242A68
#undef func_80242AB8
#undef func_80242B3C


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
};
/* hh-owned-pool func_802444B0 80252770 80252870 */
/* hh-owned-pool func_80245B04 80252870 8025289C */
