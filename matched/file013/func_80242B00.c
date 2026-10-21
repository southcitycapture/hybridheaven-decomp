#include "context.h"

typedef struct func_80242B00_Struct5C {
    u8 pad[0x78];
    s16 unk78;
} func_80242B00_Struct5C;

typedef struct func_80242B00_Struct0 {
    u8 pad0[0x5C];
    func_80242B00_Struct5C *unk5C;
    u8 pad1[0x94 - 0x60];
    s16 unk94;
} func_80242B00_Struct0;

extern void func_80242BAC();

void func_80242B00(func_80242B00_Struct0 *arg0, s32 arg1) {
    func_80242B00_Struct5C *sp24;

    sp24 = arg0->unk5C;
    func_80010550(arg1, sp24);
    if ((func_80133A24(9) != 0) &&
        (func_8012CE9C(arg1, sp24, (&D_80245DE0)[1], 10) == 0) &&
        (func_80133A24(10) != 0)) {
        sp24->unk78 = 1;
        arg0->unk94 = 0x80;
        func_800058DC((s32)arg0, (void (*)(void))func_80242BAC);
    }
}
