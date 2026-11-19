#include "common.h"
extern u8 D_801BBBF0[];
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_801FD5BC(f32, f32, f32);
typedef struct func_80202BF0_StructD {
    u8 pad0[0x35A];
    u8 unk35A;
    u8 pad35B[0x29];
    f32 unk384;
} func_80202BF0_StructD;
extern void (*D_8021793C[])();


typedef struct func_80201E44_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad9C[0xA8 - 0x9C];
    u16 unkA8;
} func_80201E44_Struct;

extern f64 D_802195F8;
extern f64 D_80219600;

void func_80201E44(func_80201E44_Struct *arg0, s32 arg1)
{
    if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98) != 0) {
        arg0->unk40 = 0.0f;
        arg0->unk44 = 0.0f;
        arg0->unk48 = 0.0f;
        return;
    }
    if (arg0->unkA8 & 8) {
        arg0->unk94 = arg0->unk94 + arg0->unk44;
        arg0->unk44 = ((f64) arg0->unk44) - D_802195F8;
        if ((func_8010843C(arg0->unk90, arg0->unk94 - (2.0 * arg0->unk44), arg0->unk98, arg0->unk90, arg0->unk94 - D_80219600, arg0->unk98) != 0) && (((func_80202BF0_StructD *) D_801BBBF0)->unk35A != 0x16)) {
            arg0->unk94 = ((func_80202BF0_StructD *) D_801BBBF0)->unk384;
            arg0->unk44 = 0.0f;
        }
    }
    if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98) != 0) {
        arg0->unkA8 = arg0->unkA8 & 0xFFF7;
        arg0->unk44 = 0.0f;
    }
}
