#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_800058DC(s32, void *);
extern s32 func_8022DA7C(s32, s32);
struct func_8038D420_StructObj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x8A];
    s16 unk9A;
};
void func_8038D420(struct func_8038D420_StructObj *arg0, s32 arg1);

extern s32 func_8012C6B4(s32);
extern u8 D_801842A0[];
extern s32 D_801BBCCC;

struct func_8038D2C0_O {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 pad2[0x9A - 0x93];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

void func_8038D2C0(s32 arg0, s32 arg1) {
    u8 *var_v1;
    u8 *var_a3;
    s32 temp_a1;

    var_v1 = (D_801BBCCC == *(s32 *) ((u8 *) arg0 + 0xC)) ? D_801BC03C : D_801BC3D8;
    var_a3 = (D_801BBCCC == *(s32 *) ((u8 *) arg0 + 0xC)) ? D_801BC3D8 : D_801BC03C;
    temp_a1 = *(s32 *) ((u8 *) arg0 + 0xC);
    if (func_8022DA7C(temp_a1, *(s32 *) ((u8 *) arg0 + 0xC)) != 0) {
        var_v1[0x2D8] = 0x13;
        switch (func_8012C6B4(3)) {
        case 0:
            var_v1[0x2D9] = 5;
            break;
        case 1:
            var_v1[0x2D9] = 4;
            break;
        case 2:
            var_v1[0x2D9] = 7;
            if (*(u16 *) (var_a3 + 0x9E) != 0) {
                var_v1[0x2D9] = 5;
            }
            break;
        }
        ((u8 *) arg0)[0x92] = 0;
        ((s16 *) arg0)[0x4D] = (s16) (((s16 *) arg0)[0x4D] | 0x80);
    } else {
        var_v1[0x2D8] = 1;
        var_v1[0x2D9] = 0x24;
        *(s32 *) (var_v1 + 0x2D4) = (s32) &D_801842A0[var_v1[0x2D9] * 7 * 4];
        ((u8 *) arg0)[0x92] = 1;
    }
    ((u8 *) arg0)[0xA1] = var_v1[0x2D8];
    ((u8 *) arg0)[0xA2] = var_v1[0x2D9];
    func_800058DC((s32) arg0, func_8038D420);
}
