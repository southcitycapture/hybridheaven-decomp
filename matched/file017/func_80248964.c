#include "context.h"

extern f32 D_8025CB60;

void func_80248964(func_80248620_StructP *arg0, func_80248620_StructHold **arg1) {
    func_80248620_StructV sp38;

    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        D_801BBBF0.unk32 = 0xC00;
        D_801BBBF0.unk198 = 55.0f;
        D_801BBBF0.unk19C = -200.0f;
        D_801BBBF0.unk1A0 = -600.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = D_80164F40;
        sp38.w[1] = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk90 = -20.0f;
        arg0->unk94 = -200.0f;
        arg0->unk98 = D_8025CB60;
        arg0->unk9C = 0x1000;
        func_8012C89C(arg0, 0, 0x30A, 0);
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4 = func_8001EB64(arg0->unk9C) * 46.0 + arg0->unk90;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk8 = arg0->unk94;
        ((func_80248620_StructA *)(*arg1)->unk30)->unkC = arg0->unk98 - func_8001EAD0(arg0->unk9C) * 46.0;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk12 = *(u16 *)&arg0->unk9C;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4C = D_801BBBF0.unkF32[0];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4D = D_801BBBF0.unkF32[1];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4E = D_801BBBF0.unkF32[2];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4F = D_801BBBF0.unkF32[3];
        D_801BBBF0.unkF20[0] = 1;
        D_801BBBF0.unkF20[1] = 1;
        D_801BBBF0.unkF20[2] = 1;
        D_801BBBF0.unkF20[3] = 0xFF;
        D_801BBBF0.unkF20[4] = 0xFF;
        D_801BBBF0.unkF20[5] = 0xFF;
        D_801BBBF0.unkF20[6] = 0x55;
        D_801BBBF0.unkF20[7] = 0x7D;
        D_801BBBF0.unkF20[8] = 0x46;
        D_801BBBF0.unkF20[9] = 0xC8;
        D_801BBBF0.unkF20[10] = 0xC8;
        D_801BBBF0.unkF20[11] = 0x96;
        ((s8 *)D_801BBBF0.unkF20)[12] = -0x55;
        D_801BBBF0.unkF20[13] = 0x7D;
        ((s8 *)D_801BBBF0.unkF20)[14] = -0x46;
        D_801BBBF0.unkF32[0] = 0;
        D_801BBBF0.unkF32[1] = 0x82;
        D_801BBBF0.unkF32[2] = 0x82;
        D_801BBBF0.unkF32[3] = 0xB0;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = 500.0f;
        arg0->unkA4 = -20.0f;
        arg0->unkA8 = -470.0f;
        D_8025DDD0 = (struct func_802490EC_StructGlobal *)func_80241790(60.0f, -200.0f, 0xC4188000, 0xC00, 0x127, 0x129, 0x125, 0x2E);
        if (func_80133A24(0x127) == 0) {
            func_800058DC(arg0, func_80248CAC);
            return;
        }
        func_800058DC(arg0, func_8024915C);
    }
}
