#include "context.h"

struct func_8037DAE0_Ent { s16 unk0; s16 unk2; };
struct func_8037DAE0_Tab { u8 pad[0x30]; struct func_8037DAE0_Ent *unk30; };
struct func_8037DAE0_G { struct func_8037DAE0_Tab *unk0; struct func_8037DAE0_Tab *unk4; };
struct func_8037DAE0_Arg {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[7];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[4];
    u16 unkA0;
    u16 unkA2;
    u8 padA4[5];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    s16 unkB0;
};
extern u8 D_8038BC24[];
extern u8 D_8038BC2C[];
extern s32 D_8037D320(void *, u8, s32);
struct func_8037DD2C_Arg;
void func_8037DD2C(struct func_8037DD2C_Arg *arg0, s32 arg1);

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define GT ((struct func_8037DAE0_G *)&D_8008DA88)

void func_8037DAE0(struct func_8037DAE0_Arg *arg0, s32 arg1) {
    s32 x;
    s32 v;

    if (arg0->unkB0-- < 0) {
        func_800058DC(arg0, (void *)func_8037DD2C);
        return;
    }
    arg1 = arg0->unk90;
    if (arg1 != 0 && arg0->unkA0 != 0) {
        x = (arg0->unkB0 << 4) - 0x101;
        v = ABS(x);
        func_8001B204(arg0->unkA9, (s16)(GT->unk0->unk30->unk0 + 0x468), (s16)(GT->unk0->unk30->unk2 - arg0->unk9A + 3), D_8038BC24, v, arg0->unk98, D_8037D320(arg0, arg1, arg1));
        arg1 = arg0->unk90;
    }
    if (arg1 == 0 && arg0->unkA2 != 0) {
        x = (arg0->unkB0 << 4) - 0x101;
        v = ABS(x);
        func_8001B204(arg0->unkAA, (s16)(GT->unk4->unk30->unk0 + 0x468), (s16)(GT->unk4->unk30->unk2 - arg0->unk9B + 3), D_8038BC2C, v, arg0->unk99, D_8037D320(arg0, arg1 ^ 1, arg1));
    }
}
