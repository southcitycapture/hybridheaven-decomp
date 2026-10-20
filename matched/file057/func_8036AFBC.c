#include "context.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_8036B0D4(void *arg0, s32 arg1);
typedef struct func_8036D9F8_Struct3 { s32 w[3]; } func_8036D9F8_Struct3;
struct func_8036D9F8_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    s32 unk5C;
};
extern s32 func_80011140(s32, s32, func_8036D9F8_Struct3, s32);
extern func_8036D9F8_Struct3 func_80225664(s32, s32);

void func_8036AFBC(s32 arg0, s32 arg1) {
    s32 sp44;
    u8 *v1;
    u8 *v0;
    func_8036D9F8_Struct3 t;

    sp44 = ((struct func_8036D9F8_Arg *)arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        v1 = D_801BC03C;
    } else {
        v1 = D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        v0 = D_801BC03C;
    } else {
        v0 = D_801BC3D8;
    }
    if ((v0[0x2D8] == 6) || (v0[0x2D8] == 7)) {
        v1[0x31] = (v1[0x31] & 0xFFE7) | 0x10;
        t = func_80225664(arg0, 0x01900018);
    } else {
        v1[0x31] = (v1[0x31] & 0xFFE7) | 8;
        t = func_80225664(arg0, 0x01900017);
    }
    if (func_80011140(arg1, sp44, t, 5) != 0) {
        func_800058DC(arg0, func_8036B0D4);
    }
}
