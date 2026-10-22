#include "context.h"

struct func_80024540_Struct {
    u32 unk0;
    u8 pad4[8];
    u8 unkC;
    u8 unkD;
    u8 padE[0x58 - 0xE];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
};
extern s8 *D_800482A0[];
extern s8 D_80048894[];
extern void func_80024614(s8 *);

void func_80024540(void) {
    s8 *var_a0;
    u32 var_v0;
    u8 temp_a1;

    var_v0 = ((struct func_80024540_Struct *)D_800CBDA4)->unk0 & 0x7F0000;
    if (var_v0 != 0) {
        var_v0 >>= 8;
        if (var_v0 < 0xA00U) {
            var_v0 = 0xA00;
        } else if (var_v0 >= 0x7501U) {
            var_v0 = 0x7500;
        }
        ((struct func_80024540_Struct *)D_800CBDA4)->unk5B = 0;
        ((struct func_80024540_Struct *)D_800CBDA4)->unk58 = var_v0 | 0x8000;
    }
    ((struct func_80024540_Struct *)D_800CBDA4)->unkD = *D_800CBDA0;
    D_800CBDA0 += 1;
    temp_a1 = ((struct func_80024540_Struct *)D_800CBDA4)->unkC;
    if ((s32)temp_a1 < 2) {
        var_a0 = D_800482A0[temp_a1];
        var_a0 += ((struct func_80024540_Struct *)D_800CBDA4)->unkD * 7;
    } else {
        var_a0 = D_80048894;
    }
    func_80024614(var_a0);
}
