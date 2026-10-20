#include "context.h"
typedef struct func_8037B9F0_StructB { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_8037B9F0_StructB;
s32 func_8037B9F0(func_8037B9F0_StructB *arg0);
typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;
extern func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037AB08_S { s32 a; s32 b; s32 c; } func_8037AB08_S;
typedef struct func_8037AB08_P { u8 pad[0x1C]; s32 unk1C; } func_8037AB08_P;
typedef struct func_8037AB08_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x24]; s32 unk54; u8 pad3[4]; func_8037AB08_P *unk5C; } func_8037AB08_O;
typedef struct func_8037AB08_B { u8 pad[0x230]; u8 unk230; u8 pad2[0xEF0-0x231]; u16 unkEF0; u8 pad3[0xEFC-0xEF2]; s32 unkEFC; } func_8037AB08_B;
extern func_8037AB08_S D_80216B90;
extern s16 D_80216BF8;
extern u8 D_8038A93E;
extern func_8037AB08_B D_801BBBF0_;
extern void func_80011140(s32, void *, func_8037AB08_S, s32);
extern void func_801C4A5C(void *, s32);
extern u8 func_801E5010[];
void func_8037AB08(func_8037AB08_O *arg0, s32 arg1) {
    func_8037AB08_P *p = arg0->unk5C;
    if (func_8037B9F0(arg0) == 0) {
        func_80011140(arg1, p, D_80216B90, 5);
        if (p->unk1C == 0x01680041) {
            arg0->unk54 = ((func_8037AB08_B *)&D_801BBBF0)->unkEFC;
            func_801C4A5C(arg0, 0);
            arg0->unk2C |= 0x40;
            arg0->unk2C |= 0x20;
            arg0->unk2C |= 0x80;
            ((func_8037AB08_B *)&D_801BBBF0)->unkEF0 = 0x80;
            D_80216BF8 = 0x2D;
            ((func_8037AB08_B *)&D_801BBBF0)->unkEF0 |= 0x2000;
            ((func_8037AB08_B *)&D_801BBBF0)->unk230 = D_8038A93E;
            func_800058DC(arg0, func_801E5010);
        }
    }
}
