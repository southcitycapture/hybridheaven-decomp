#include "context.h"
extern s8 D_8025C704;
typedef struct func_80247420_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80247420_StructInner;
typedef struct func_80247420_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80247420_StructInner *unk5C;
} func_80247420_Struct;
void func_80247420(func_80247420_Struct *arg0, s32 arg1);
typedef struct func_802472C8_StructB {
    u8 pad0[0x30];
    f32 f[6];
} func_802472C8_StructB;
typedef struct func_802472C8_StructA {
    u8 pad0[0x2C];
    func_802472C8_StructB *unk2C;
} func_802472C8_StructA;
typedef struct func_802472C8_StructO {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    void *unk5C;
} func_802472C8_StructO;
typedef struct func_802472C8_StructT {
    u8 pad0[0x78];
    s16 unk78;
} func_802472C8_StructT;
extern func_802472C8_StructA *D_801BBCD8;
extern func_80246E60_StructGlobal D_80258F6C;
extern u8 D_8025C22C[];

void func_802472C8(func_802472C8_StructO *arg0, s32 arg1) {
    func_802472C8_StructT *sp5C;
    func_802472C8_StructB *v;

    sp5C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        func_8011AAF4(D_8025C22C, 0x47F, arg0, 0, 1, 4.0f, D_801BBCD8->unk2C->f[0], D_801BBCD8->unk2C->f[1], D_801BBCD8->unk2C->f[2], 4294967296.0f, D_801BBCD8->unk2C->f[3], D_801BBCD8->unk2C->f[4], D_801BBCD8->unk2C->f[5], 0.0f, 35.0f, -1, -1);
        D_8025C704 = 0;
        if ((func_8012CE9C(arg1, sp5C, D_80258F6C, 0xA) == 0) && (func_80010550(arg1, sp5C) != 0)) {
            sp5C->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80247420);
        }
    }
}
