#include "context.h"

typedef struct func_80242280_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80242280_Struct2;
typedef struct func_80242280_Struct1 {
    u8 pad0[0x30];
    func_80242280_Struct2 *unk30;
} func_80242280_Struct1;
typedef struct func_80242280_Obj {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x36];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_80242280_Obj;
void func_802423F0(void *arg0, void *arg1);
void func_802424D4(s32 arg0, s32 arg1);
extern u8 D_8017B608[];
extern s32 func_8012C97C(s32, s32);

void func_80242280(func_80242280_Obj *arg0, func_80242280_Struct1 **arg1) {
    func_80242080_Struct3 sp20;
    extern s32 func_80133A24();

    if (func_80126CC0(arg0, func_80126EAC) != 0 && func_801C3D90() != 0) {
        if (func_80133A24(0xBE) != 0) {
            func_800058DC(arg0, func_802424D4);
        }
        sp20 = D_80164F40;
        sp20.unk4 = 0x80000400;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39E, 5);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32)D_8017B608 | 0x40000000;
        (*arg1)->unk30->unk48 = 0;
        (*arg1)->unk30->unk49 = 0xFE;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk4B = 0;
        arg0->unk74 = func_8012C97C(0x39E, 6);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk3C = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        func_800058DC(arg0, func_802423F0);
    }
}
