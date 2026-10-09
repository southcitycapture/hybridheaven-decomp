#include "context.h"

struct func_8000A780_Dst2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};

struct func_8000A780_Dst {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_8000A780_Dst2 *unk2C;
};

struct func_8000A780_Src {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};

void func_8000A780(struct func_8000A780_Dst *arg0, struct func_8000A780_Src *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = arg1->unk0;
    arg0->unk2C->unk2 = arg1->unk2;
    arg0->unk2C->unk4 = arg1->unk4;
    arg0->unk2C->unk5 = arg1->unk5;
    arg0->unk2C->unk6 = arg1->unk6;
    arg0->unk2C->unk7 = arg1->unk7;
    arg0->unk2C->unk8 = arg1->unk8;
    arg0->unk2C->unk9 = arg1->unk9;
    arg0->unk2C->unkA = arg1->unkA;
    arg0->unk2C->unkB = arg1->unkB;
    arg0->unk2C->unkC = arg1->unkC;
    arg0->unk2C->unkE = arg1->unkE;
    arg0->unk2C->unk10 = arg1->unk10;
}
