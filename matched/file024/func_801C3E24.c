#include "context.h"

typedef struct func_801C3E24_Struct { u8 b[11]; } func_801C3E24_Struct;
extern func_801C3E24_Struct D_801CCAD4;
extern u8 func_801C3F48[];
extern s32 func_8013EA54();
typedef struct func_801C3E24_S2 { u8 pad[0x28]; s16 unk28; } func_801C3E24_S2;

void func_801C3E24(s32 arg0, func_801C3E24_S2 **arg1) {
    u8 c;
    u8 v;
    func_801C3E24_Struct sp40;

    sp40 = D_801CCAD4;
    if (D_801CC8CC == 2) {
        if (func_8013EA54() == 0xFF) {
            func_8012FE50(0x15, 0x10D, 6, 1, 0);
            func_800058DC(arg0, func_801C40EC);
            return;
        }
        v = sp40.b[func_8013EA54() - 1];
        if (v != 0) {
            v = (v - 1) & 0xFF;
            func_80146208((u8 *)arg0, &c, 0x66, 0x20, 0x64, 0x100, 0x10, 0, 0, 0, 0x228, v + 0x1A);
            func_80006214((void *)arg0);
            (*arg1)->unk28 = 0x100;
        }
        func_800058DC(arg0, func_801C3F48);
    }
}
