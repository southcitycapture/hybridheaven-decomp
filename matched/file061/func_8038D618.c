#include "context.h"

typedef struct func_8038D618_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D618_StructA;
typedef struct func_8038D618_StructB {
    u8 pad0[0x38];
    u32 f31 : 1;
    u32 rest : 31;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D618_StructB;
typedef struct func_8038D618_StructC {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 hi : 11;
    u32 f : 2;
    u32 rest : 19;
} func_8038D618_StructC;
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D618(arg0, arg1, arg2)
    func_8038D618_StructA *arg0;
    func_8038D618_StructB *arg1;
    func_8038D618_StructC *arg2;
{
    if (arg2->f != 0) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 5;
        arg0->unk9A |= 8;
    } else if (arg1->f31 != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        if (arg2->unk2 < 0x28) {
            func_80229CE0(arg0, arg1, 2);
        } else {
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
