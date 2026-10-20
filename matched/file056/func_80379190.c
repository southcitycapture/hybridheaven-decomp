#include "context.h"

typedef struct func_80379190_Struct {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80379190_Struct;

typedef struct func_80379190_Arg {
    u8 pad0[0x5C];
    func_80379190_Struct *unk5C;
} func_80379190_Arg;


extern func_80379190_Globals D_801BBBF0;
extern void func_8001F6FC();
extern void func_8001F74C(s32);
extern void func_80126E88(s32);
extern u8 func_801E5010[];
extern s32 D_801BBCCC;

void func_80379190(func_80379190_Arg *arg0, s32 arg1) {
    func_80379190_Struct *temp_a1;

    temp_a1 = arg0->unk5C;
    D_801BBBF0.unkEF0 = (u16) (D_801BBBF0.unkEF0 & 0xFFAF);
    func_80011140(arg1, (s32) temp_a1, D_80216B90, 5);
    if (temp_a1->unk1C == 0x01680041) {
        func_8001F6FC();
        func_8001F74C(D_801BBCCC);
        func_80126E88(0xC1);
        func_800058DC((s32) arg0, func_801E5010);
    }
}
