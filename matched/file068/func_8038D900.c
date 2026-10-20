#include "context.h"
struct func_8038D900_StructA { u8 pad[0x30]; u32 pre:11; u32 f:2; u32 rest:19; };
struct func_8038D900_StructB { u8 pad[0x9A]; s16 unk9A; u8 pad2[5]; u8 unkA1; u8 unkA2; };
struct func_8038D900_StructC { u8 pad[0x2D8]; u8 unk2D8; u8 unk2D9; };
extern void func_802294BC();
extern void func_80229CE0();
extern s32 func_8022B640();

void func_8038D900(void *a0, void *a1, void *a2) {
    struct func_8038D900_StructB *arg0 = a0;
    struct func_8038D900_StructC *arg1 = a1;
    struct func_8038D900_StructA *arg2 = a2;
    if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A |= 8;
    } else if (*(f32 *)(&D_801BC3D8 + 0x3A8) > 35.0f) {
        arg1->unk2D8 = 0xC;
        arg1->unk2D9 = 0x18;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
