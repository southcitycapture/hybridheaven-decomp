#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *a, void *b);
struct func_801C1B38_Sub {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801C1B38_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C1B38_Sub *unk5C;
};
void func_801C1B38(struct func_801C1B38_Obj *arg0, s32 arg1);
struct func_801C1D90_Sub {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801C1D90_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C1D90_Sub *unk5C;
};
void func_801C1D90(struct func_801C1D90_Obj *arg0, s32 arg1);
void func_801C1EE0(struct func_801C1B38_Obj *arg0, s32 arg1);
void func_801C2030(struct func_801C1B38_Obj *arg0, s32 arg1);
void func_801C2110(struct func_801C1B38_Obj *arg0, s32 arg1);
void func_801C22A0(struct func_801C1B38_Obj *arg0, s32 arg1);
void func_801C2494(void *arg0, s32 arg1);


struct func_801C1A34_StructGlobal {
    u8 pad[0x192];
    u16 state;
    u16 timer;
    u16 mode;
};

void func_801C1A34(struct func_801C1B38_Obj *arg0, s32 arg1)
{
    struct func_801C1A34_StructGlobal *g;
    void *fn;
    u32 t;

    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    g = (struct func_801C1A34_StructGlobal *)D_801BBBF0;
    g->timer = 0;
    g->mode = 2;
    switch (g->state) {
    case 1: func_800058DC(arg0, func_801C1B38); break;
    case 2: func_800058DC(arg0, func_801C2110); break;
    case 3: func_800058DC(arg0, func_801C1EE0); break;
    case 4: func_800058DC(arg0, func_801C2030); break;
    case 5: func_800058DC(arg0, func_801C22A0); break;
    case 6: func_800058DC(arg0, func_801C2494); break;
    case 7: func_800058DC(arg0, func_801C1D90); break;
    }
}
