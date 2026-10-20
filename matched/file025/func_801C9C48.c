#include "context.h"



typedef struct func_801C9C48_Struct0 {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u8 padB0[2];
    u8 unkB2;
} func_801C9C48_Struct0;

extern void func_8012C89C(void *, s32, s32, s32);
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_80005E44(s32, void *);
void func_80006214(s32 arg0);
extern void func_8012CF8C(void *, u8 *, s32, s32);
extern u8 D_801D8FA0[];
extern u8 D_801DA818[];
extern u8 func_801C9E80[];

void func_801C9C48(func_801C9C48_Struct0 *arg0, func_801C9C48_Struct1 **arg1) {
    func_80005E44((s32)arg0, D_801DA818);
    func_80006214((s32)arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    switch (arg0->unkB2) {
    case 0:
        func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43C, 0);
        break;
    case 1:
        func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43C, 3);
        break;
    }
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk30 = (u32)D_801D8FA0 | 0x40000000;
    func_800058DC((s32)arg0, (void (*)(void))func_801C9E80);
}
