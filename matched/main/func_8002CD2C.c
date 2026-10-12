#include "context.h"

extern u8 func_8002DEC0[];
extern u8 func_8002E3C8[];

struct func_8002CD2C_Struct {
    u8 pad0[0x14];
    s32 unk14;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    u8 pad2A[4];
    s16 unk2E;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
};

void func_8002CD2C(struct func_8002CD2C_Struct *arg0, s32 arg1) {
    func_80030480(arg0, func_8002DEC0, func_8002E3C8, 4);
    arg0->unk14 = func_80034A10(0, 0, arg1, 1, 0x50);
    arg0->unk38 = 1;
    arg0->unk48 = 0;
    arg0->unk1A = 1;
    arg0->unk28 = 1;
    arg0->unk2E = 1;
    arg0->unk1C = 1;
    arg0->unk1E = 1;
    arg0->unk20 = 0;
    arg0->unk22 = 0;
    arg0->unk26 = 1;
    arg0->unk24 = 0;
    arg0->unk30 = 0;
    arg0->unk34 = 0;
    arg0->unk18 = 0;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
}
