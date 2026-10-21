#include "context.h"
void func_802237B0(struct func_802237B0_Arg *arg0, u8 arg1);
typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;
extern func_80225664_Struct D_801BC03C;
extern func_80225664_Struct D_801BC3D8;
extern s32 D_801BBCCC;
void func_8022696C(void);

struct func_8022397C_Bits {
    u32 a:1;
    u32 b:7;
    u32 c:5;
    u32 d:3;
};
struct func_8022397C_S {
    u8 pad0[0x30];
    u8 a30:1;
    u8 m30:6;
    u8 b30:1;
    u8 m31:5;
    u8 l31:3;
    u8 pad32[0x324 - 0x32];
    s32 unk324;
};
struct func_8022397C_T {
    u8 pad0[0x2C];
    void *unk2C;
    u8 pad30[0x90 - 0x30];
    void *unk90;
    s32 unk94;
    void *unk98;
    void *unk9C;
};
struct func_8022397C_P {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x5C - 0x20];
    struct func_802237B0_Struct *unk5C;
    u8 pad60[0x68 - 0x60];
    s32 unk68;
};
void *func_80005670(void *arg0, void *arg1);
extern void *func_80242E58(void *);
extern void func_800058DC(void *, void *);
extern u8 D_801BCC21;
extern u8 D_8023E3C4[];
extern u8 func_802208B0[];

void func_8022397C(struct func_8022397C_P *arg0) {
    struct func_802237B0_Struct *sp34;
    s32 sp30;
    u8 padB[4];
    void *sp28;
    u8 padA[4];
    struct func_8022397C_T *sp20;
    struct func_8022397C_S *s0;
    struct func_8022397C_T *v;

    sp34 = arg0->unk5C;
    sp30 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        s0 = (struct func_8022397C_S *)&D_801BC03C;
    } else {
        s0 = (struct func_8022397C_S *)&D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        sp28 = &D_801BC03C;
    } else {
        sp28 = &D_801BC3D8;
    }
    sp20 = NULL;
    func_8022696C();
    s0->unk324 = arg0->unk1C;
    func_802237B0((void *)arg0, 0);
    if (sp34->unk74 == 2) {
        sp20 = func_80242E58(arg0);
    }
    v = func_80005670(*(void **)sp34, D_8023E3C4);
    if (v != NULL) {
        if (sp20 != NULL) {
            sp20->unk2C = v;
        }
        D_801BCC21 = 6;
        s0->l31 = 4;
        s0->a30 = 1;
        s0->b30 = 0;
        v->unk90 = sp34;
        v->unk94 = sp30;
        v->unk98 = s0;
        v->unk9C = sp28;
        func_800058DC(arg0, func_802208B0);
    }
}
