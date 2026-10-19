#include "context.h"

extern s32 func_8012C6B4(s32);
extern f64 D_801E3570;
struct func_801CE6F8_Struct;

typedef struct func_801CE618_In {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801CE618_In;

typedef struct func_801CE618_Out {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801CE618_Out;

void func_801CE618(s32 arg0, struct func_801CE6F8_Struct *arg1) {
    func_801CE618_In *in = (func_801CE618_In *)arg0;
    func_801CE618_Out *out = (func_801CE618_Out *)arg1;

    out->unk4 = (f32) ((f64) (f32) (func_8012C6B4(0x64) - 0x32) / 10.0 + (f64) in->unk6C);
    out->unk8 = (f32) ((f64) func_8012C6B4(0x14) * D_801E3570 + (f64) in->unk70);
    out->unkC = (f32) ((f64) (f32) (func_8012C6B4(0x64) - 0x32) / 10.0 + (f64) in->unk74);
}
