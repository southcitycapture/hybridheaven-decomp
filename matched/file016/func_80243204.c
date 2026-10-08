#include "context.h"

typedef struct func_80243204_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    u16 unk3C;
    u8 pad2[0x2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad3[0x28];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad4[0x6];
    u8 unk90;
    u8 pad5;
    u16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 pad6[0x2];
    s32 unkA8;
} func_80243204_Struct;

s32 func_8015105C(s32);
void func_8015180C(s32, void *);

void func_80243204(func_80243204_Struct *arg0, void *arg1) {
    s32 temp_v0;

    func_80005E44(arg0, &D_80164F40);
    func_80006214(arg0);
    temp_v0 = func_8015105C(0xF7);
    arg0->unkA8 = temp_v0;
    func_8015180C(temp_v0, arg0);
    arg0->unk90 = 1;
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    arg0->unkA0 = 0;
    arg0->unkA2 = 0x800;
    arg0->unkA4 = 0;
    arg0->unk2C = arg0->unk2C | 0x800;
    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    arg0->unk74 = func_8012C97C(0xF7, 2);
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
}
