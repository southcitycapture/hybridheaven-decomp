#include "context.h"

typedef struct func_8021CF50_StructArg {
    u8 pad0[0xA0];
    f32 unkA0;
    f32 unkA4;
    s32 unkA8;
    s16 unkAC;
    u8 padAE[0xB0 - 0xAE];
    s16 unkB0;
    u8 padB2[0xB3 - 0xB2];
    u8 unkB3;
} func_8021CF50_StructArg;

typedef struct func_8021CF50_StructGlobal {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0x818 - 0x2E];
    s32 unk818;
    u8 pad2[0xEF0 - 0x81C];
    u16 unkEF0;
} func_8021CF50_StructGlobal;

extern void func_8021D264();

void func_80020744(s32);
void func_801FA1C4();
void func_80231D84(f32, f32, s32, s16, s32);
void func_80232278();
void func_802322E8();
void func_8037865C();

void func_8021CF50(func_8021CF50_StructArg *arg0, s32 arg1) {
    ((func_8021CF50_StructGlobal *) D_801BBBF0)->unkEF0 = ((func_8021CF50_StructGlobal *) D_801BBBF0)->unkEF0 | 0x10;
    if ((((u32) (((func_8021CF50_StructGlobal *) D_801BBBF0)->unk818 * 2) >> 0x1E) == 3) && (arg0->unkB3 != 0)) {
        if ((((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C != 5) && (((((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C != 0xA) != ((func_8021CF50_StructGlobal *) D_801BBBF0)->unk2C) != 0xB)) {
            func_80231D84(arg0->unkA0, arg0->unkA4, arg0->unkA8, arg0->unkAC, 1);
        }
        func_8037865C();
        func_80232278();
        func_802322E8();
        func_80020744(7);
        D_801BCC21 = 0xE;
        arg0->unkB0 = 0x1E;
        func_801FA1C4();
        func_800058DC(arg0, func_8021D264);
    }
}
