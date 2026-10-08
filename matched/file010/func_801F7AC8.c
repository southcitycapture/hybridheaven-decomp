#include "context.h"

extern void func_801F7B2C(void);

typedef struct func_801F7AC8_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x94 - 0x3E];
    s16 unk94;
} func_801F7AC8_Struct;

void func_801F7AC8(void *arg0, s32 arg1) {
    func_80147AA8(0, 0x14, 0x14, 0x32);
    func_80147AF0(0, 0x50, 0, 0);
    ((func_801F7AC8_Struct *)arg0)->unk94 = -0x1000;
    ((func_801F7AC8_Struct *)arg0)->unk3C = 0;
    func_800058DC(arg0, (s32)func_801F7B2C);
}
