#include "context.h"

struct func_8037BD64_StructInner {
    u8 pad[0x95];
    u8 unk95;
    u8 pad96[0xAF - 0x96];
    u8 unkAF;
};
struct func_8037BD64_Struct {
    u8 pad[0xC];
    struct func_8037BD64_StructInner *unkC;
    u8 pad10[0xAB - 0x10];
    u8 unkAB;
    u8 unkAC;
    u8 unkAD;
    u8 padAE[2];
    s16 unkB0;
};
extern s32 func_8037BBCC(void *, s32, s16, s32, u8, s8 *);
void func_8037BEA4(void *arg0, void *arg1);

void func_8037BD64(struct func_8037BD64_Struct *arg0, s32 arg1) {
    s8 sp3F;
    u8 var_s1;
    u8 var_s4;

    var_s4 = 0;
    sp3F = 0;
    var_s1 = 0;
    do {
        if (arg0->unkAC & (1 << var_s1)) {
            func_8037BBCC(arg0, 0x28, (s16) ((arg0->unkC->unk95 * 0x18) + 0x4C), 0x20, 6, &sp3F);
            func_8037BBCC(arg0, 0x28, (s16) ((arg0->unkC->unk95 * 0x18) + 0x4C), 0x20, var_s1, &sp3F);
            var_s4++;
            arg0->unkC->unk95++;
        }
        var_s1++;
    } while (var_s1 < 6);
    arg0->unkAB = func_80006214(arg0);
    arg0->unkAD = var_s4;
    arg0->unkC->unkAF = 1;
    arg0->unkB0 = 0x3C;
    func_800058DC(arg0, func_8037BEA4);
}
