#include "context.h"
extern void func_803602D4();
extern void func_80366090();
extern void func_800058DC(s32, void *);
extern void func_80011198(s32 arg0, void *arg1);

typedef struct func_80365FE0_Struct {
    u8 pad0[0x30];
    u32 p30 : 8;
    u32 a31 : 1;
    u32 b31 : 2;
    u32 c31 : 5;
    u32 p32 : 16;
    u8 pad34[4];
    u32 a38 : 1;
    u32 b38 : 2;
    u32 c38 : 1;
    u32 d38 : 4;
    u32 p39 : 24;
    u8 pad3C[0x2FA - 0x3C];
    u8 unk2FA;
} func_80365FE0_Struct;

void func_80365FE0(u8 *arg0, s32 arg1) {
    func_80365FE0_Struct *v;
    s32 a3;

    if ((s32)arg0 == *(s32 *)((u8 *)&D_801BBBF0 + 0xDC)) {
        v = (func_80365FE0_Struct *)&D_801BC03C;
    } else {
        v = (func_80365FE0_Struct *)&D_801BC3D8;
    }
    a3 = *(s32 *)(arg0 + 0x5C);
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        v->unk2FA = 0;
        v->b31 = 0;
        v->a38 = 0;
        v->c38 = 0;
        v->b38 = 0;
        func_803602D4(arg0, arg1);
        func_80011198(arg1, (void *)a3);
        func_800058DC((s32)arg0, func_80366090);
    }
}
