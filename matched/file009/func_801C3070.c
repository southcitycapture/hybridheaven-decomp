#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *a, void *b);
struct func_801C3174_Sub {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801C3174_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C3174_Sub *unk5C;
};
void func_801C3174(struct func_801C3174_Obj *arg0, s32 arg1);
struct func_801C32EC_Sub {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801C32EC_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C32EC_Sub *unk5C;
};
void func_801C32EC(struct func_801C32EC_Obj *arg0, s32 arg1);
void func_801C3468(struct func_801C3174_Obj *arg0, s32 arg1);
void func_801C35B8(struct func_801C3174_Obj *arg0, s32 arg1);
void func_801C3698(struct func_801C3174_Obj *arg0, s32 arg1);
void func_801C3828(struct func_801C3174_Obj *arg0, s32 arg1);
void func_801C3A1C(void *arg0, s32 arg1);


struct func_801C3070_StructGlobal {
    u8 pad[0x1D8];
    u16 state;
    u16 timer;
    u16 mode;
};

void func_801C3070(struct func_801C3174_Obj *arg0, s32 arg1)
{
    struct func_801C3070_StructGlobal *g;
    void *fn;
    u32 t;

    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    g = (struct func_801C3070_StructGlobal *)D_801BBBF0;
    g->timer = 0;
    g->mode = 2;
    switch (g->state) {
    case 1: func_800058DC(arg0, func_801C3174); break;
    case 2: func_800058DC(arg0, func_801C3698); break;
    case 3: func_800058DC(arg0, func_801C3468); break;
    case 4: func_800058DC(arg0, func_801C35B8); break;
    case 5: func_800058DC(arg0, func_801C3828); break;
    case 6: func_800058DC(arg0, func_801C3A1C); break;
    case 7: func_800058DC(arg0, func_801C32EC); break;
    }
}
