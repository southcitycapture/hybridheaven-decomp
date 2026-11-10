#include "context.h"

struct func_801EBE14_ObjF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801EBE14_ObjI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801EBE14_NodeC {
    u8 pad0[0x2C];
    struct func_801EBE14_ObjF *unk2C;
};

struct func_801EBE14_NodeB {
    u8 pad0[0x24];
    struct func_801EBE14_NodeC *unk24;
};

struct func_801EBE14_NodeA {
    u8 pad0[8];
    struct func_801EBE14_NodeB *unk8;
};

#define OBJF (*(struct func_801EBE14_NodeA **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C

s32 func_801EBE14(s32 arg0, s32 arg1) {
    switch (D_80206298) {
    case 0:
        if (func_801C0DE4(4, 0, 0x3F000000) != 0) {
            func_801C0EB0(4, 0);
            func_801CC470(0, 0x320002B, 0, 0, 1.0f);
            func_8038D28C(0x167);
            D_80206298 = 1;
        } else {
            OBJF->unk8 = (f32)(((f64)((f32)(func_80034C24(func_801C0F18(4, 0)) / 1000000.0) / 0.5f) * -21.0) + 21.0);
        }
        break;
    case 1:
        if (func_801D2C10() != 0) {
            func_801CC4D8(0, 0x320001B, 0, 0, 15.0f);
            D_80206298 = 2;
        }
        break;
    case 2:
        if (func_801D2C00() == 0) {
            func_801CC470(0, 0x320001B, 0, 0x100, 6.0f);
            D_80206298 = 3;
        }
        break;
    case 3:
        if ((f64)OBJF->unkC < 10.0) {
            func_801CC4D8(0, 0x320001A, 0, 0, 6.0f);
            D_80206298 = 4;
        } else if ((func_801D2C5C(0x320001B, 0) != 0) || (func_801D2C5C(0x320001B, 0x24) != 0)) {
            func_8038D33C(((struct func_801EBE14_ObjI *)OBJF)->unk4, ((struct func_801EBE14_ObjI *)OBJF)->unk8, ((struct func_801EBE14_ObjI *)OBJF)->unkC, 0x4A1, 1.2f, 1.0f);
        }
        break;
    case 4:
        if (func_801D2C00() == 0) {
            return 5;
        }
        break;
    }
    return 4;
}
