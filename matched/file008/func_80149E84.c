#include "context.h"

typedef struct func_80149E84_Struct {
    u8 pad0[0x10];
    struct func_80149E84_Struct *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
} func_80149E84_Struct;

typedef struct func_80149E84_Obj {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad92[2];
    s8 unk94;
    s8 unk95;
    s8 unk96;
    u8 pad97[9];
    s16 unkA0;
} func_80149E84_Obj;

extern s32 func_80148EA4();
extern void func_80145348();
extern void func_80148958();
extern u8 D_8018FB1C[];
extern u8 func_8014A234[];

void func_80149E84(func_80149E84_Obj *arg0, func_80148074_Struct **arg1) {
    s8 sp4F;

    if (func_80148EA4(arg0) != 0) {
        arg0->unk96 = 0;
        arg0->unk90 = 0;
        arg0->unk94 = 0;
        arg0->unk95 = arg0->unk96;
        func_80146208(arg0, &sp4F, 0x76, 0x1B, 0x2C, 0x80, 0xA0, 0, 0, 0xFF, 0x21C, 0);
        func_80145348(arg0, 2, 0);
        D_801BED18 = arg1[func_80006214(arg0) - 1];
        func_80146208(arg0, &sp4F, 0x26, 0x1B, 0x2C, 0x20, 0x20, 0, 0, 0xFF, 0x21C, 1);
        D_801BED20 = (func_80148B2C_Struct *)arg1[func_80006214(arg0) - 1];
        func_80146208(arg0, &sp4F, 0x26, 0x1D, 0x1E, 0x28, 8, 0, 0, 0xFF, 0x21C, 4);
        D_801BED28 = (s32)arg1[func_80006214(arg0) - 1];
        func_80146208(arg0, &sp4F, 0x26, 0x1E, 0x1E, 0x28, 8, 0, 0, 0xFF, 0x21C, 3);
        func_80146208(arg0, &sp4F, 0x26, 0x28, 0x1E, 0x18, 8, 0, 0, 0xFF, 0x21C, 2);
        {
            func_80149E84_Struct *p = (func_80149E84_Struct *)D_801BED28;
            s32 i = 0;
            s32 j = 0;
            do {
                i = (i + 1) & 0xFF;
                if (j == arg0->unk91) {
                    p->unk22 = 1;
                } else {
                    p->unk22 = 0;
                }
                j = i;
                p = p->unk10;
            } while (i < 3);
        }
        func_80146208(arg0, &sp4F, 0x66, 0x4C, 0x1E, 8, 8, 0, 0, 0xFF, 0x209, 6);
        func_80145348(arg0, 0x1A, 3);
        func_80146208(arg0, &sp4F, 0x26, 0x57, 0x1E, 0x10, 8, 0, 0, 0xFF, 0x21C, 7);
        func_8001B204(2, 0x69, 0x19, D_8018FB1C);
        func_80146178(arg0, &sp4F, 0xA0, 0x8F, 0x84, 0x3D, 2, 0, 0, 0, 0x50);
        D_801BBD58 = 2;
        func_80149370();
        func_801482BC(arg0, arg1);
        arg0->unk90 = 0;
        arg0->unkA0 = 0;
        func_80148500((func_80148500_Struct *)arg0);
        func_80148958(arg0);
        func_800058DC(arg0, func_8014A234);
    }
}
