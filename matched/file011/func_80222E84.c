#include "common.h"
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8013B808();
extern void func_8013C6FC(s32, s32, s32);
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
typedef struct {
    u8 pad0[0x30];
    u8 a : 1;
    u8 b : 2;
    u8 pad30 : 4;
    u8 c : 1;
    u8 b31;
    u8 d : 3;
    u8 pad32 : 5;
} func_80222B08_Struct;
extern void func_802237B0(s32, s32);


void func_80222FCC(s32 arg0, s32 arg1);
void func_80222FD8(struct func_8021F9C8_Actor *arg0, s32 arg1);

typedef struct func_80222E84_StructDev {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    s32 unkDC;
    u8 padE0[0xB9A - 0xE0];
    s16 unkB9A;
    u8 padB9C[0x1031 - 0xB9C];
    u8 unk1031;
} func_80222E84_StructDev;

typedef struct func_80222E84_StructSub {
    u8 pad0[0x74];
    u8 unk74;
} func_80222E84_StructSub;

typedef struct func_80222E84_StructActor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80222E84_StructSub *unk5C;
} func_80222E84_StructActor;

#define DV ((func_80222E84_StructDev *)&D_801BBBF0)

void func_80222E84(func_80222E84_StructActor *arg0, s32 arg1) {
    s32 firstActor;
    func_80222E84_StructSub *sub;
    func_80222B08_Struct *p;

    sub = arg0->unk5C;
    firstActor = DV->unkDC;
    if ((s32)arg0 == firstActor) {
        p = (func_80222B08_Struct *)&D_801BC03C;
    } else {
        p = (func_80222B08_Struct *)&D_801BC3D8;
    }
    p->b = 1;
    p->c = 0;
    p->a = 1;
    if (DV->unk1031 == 0xF || DV->unk1031 < 0xA) {
        return;
    }
    func_802237B0((s32)arg0, 0);
    func_8013C6FC((s32)arg0, arg1, 0);
    func_8013B808((s32)arg0, arg1, 3);
    if (DV->unk2C != 0xA) {
        if (sub->unk74 == 3) {
            if (arg0->unk36 == 0x148 || arg0->unk36 == 0x11D || arg0->unk36 == 0x11E) {
                p->b = 3;
                func_800058DC((s32)arg0, func_80222FCC);
                return;
            }
            DV->unkB9A = 0;
            func_800058DC((s32)arg0, func_80222FD8);
            return;
        }
    }
    p->b = 3;
    func_800058DC((s32)arg0, func_80222FCC);
}
