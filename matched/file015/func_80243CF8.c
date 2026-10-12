#include "context.h"

typedef struct func_80243CF8_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80243CF8_Struct;

typedef struct func_80243CF8_StructLocal {
    s16 sp20;
    s16 pad;
    s32 sp24;
    f32 sp28;
    s16 sp2C;
    u8 pad2[0x12];
} func_80243CF8_StructLocal;

extern void func_80243D84();

void func_80243CF8(func_80243CF8_Struct *arg0, s32 arg1) {
    func_80243CF8_StructLocal sp;
    if (arg0->unk3C++ >= 0x32) {
        func_80020718(0x1AE);
        sp.sp20 = 0x1000;
        sp.sp24 = 0x04100044;
        sp.sp2C = 0x14;
        sp.sp28 = 1.0f;
        func_801C2F0C(3, &sp.sp20);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243D84);
    }
}
