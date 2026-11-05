#include "common.h"


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
extern void func_80245B04();
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
