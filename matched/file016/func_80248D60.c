#include "context.h"
extern void func_800111E0();
extern void func_800113D0();
void func_80248DE0(void *arg0, s32 arg1);

typedef struct {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
} func_80248D60_Struct;

void func_80248D60(u8 *arg0, s32 arg1) {
    s32 sp1C[1];
    s32 t;

    t = *(s32 *)(arg0 + 0x5C);
    ((func_80248D60_Struct *)&D_801BBBF0)->unk18E = 2;
    ((func_80248D60_Struct *)&D_801BBBF0)->unk190 = 0;
    D_8024F518 = 9;
    func_800111E0(arg1, (sp1C[0] = t) + 0x22);
    func_800113D0(arg1, sp1C[0] + 0x22);
    func_80010550(arg1, sp1C[0]);
    func_800058DC(arg0, func_80248DE0);
}
