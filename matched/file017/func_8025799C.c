#include "common.h"
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4(s32);
extern s32 func_80133A24(s32);
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;
typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


void func_8025799C(func_8025799C_A0 *arg0, func_8025799C_A1 *arg1)
{
    f32 sp3C;
    s32 sp38;

    sp38 = arg0->unk90++;
    if (func_80133A24(0x13A) == 0) {
        arg0->unk9C = (f32) ((((f64) func_8001EAD0(sp38 * 0x1E)) * 2.5) - 2.5);
    }
    arg1->unk4->unk30->unk8 = arg0->unk9C;
    arg1->unk8->unk30->unk8 = arg0->unk9C;
    sp3C = func_8012C6B4(0x2000);
    func_80380F94((func_8001EAD0((s32) sp3C) * 7.0) + arg0->unk98, arg0->unk9C + 35.0f, (func_8001EB64((s32) sp3C) * 7.0) + arg0->unkA0, 0, 0.8f, 0.0, 5);
}
