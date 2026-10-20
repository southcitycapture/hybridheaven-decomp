#include "context.h"

struct func_803768AC_Sub {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_803768AC_Struct {
    u8 pad0[0x24];
    struct func_803768AC_S24 *unk24;
    u8 pad28[0x10];
    struct func_803768AC_Sub *unk38;
    u8 pad3C[0x20];
    u8 *unk5C;
    u8 pad60[0x32];
    s16 unk92;
};
struct func_803768AC_S24 {
    u8 pad0[0x2C];
    f32 *unk2C;
};
extern s32 func_800178E8();
extern void func_801FA2E0();
extern void func_80375F98(void *, s32);
extern void func_80379498(s32, s32, f32, s32, f32, f32);
extern u8 D_80388940[];
extern u8 D_80389EE1;
extern u8 func_80376ADC[];
extern void func_803769FC();
extern void *func_80005670(s32, void *);

void func_803768AC(struct func_803768AC_Struct *arg0, s32 arg1) {
    u8 *sp2C;
    f32 *v;

    sp2C = arg0->unk5C;
    func_80010550(arg1, sp2C, arg1);
    if (func_800178E8() != 0) {
        *(s16 *)(sp2C + 0x78) = 1;
        if ((arg0->unk92 == 0x5A) && ((arg0->unk38->unk10 >> 0x18) != 2)) {
            v = arg0->unk24->unk2C;
            func_80379498(0x27, ((s32 *)v)[1], (f32)((f64)v[2] + 14.0), ((s32 *)v)[3], 225.0f, 80.0f);
            func_80005670((s32)arg0, D_80388940);
        }
        if (arg0->unk92--) {
        } else {
            if ((arg0->unk38->unk10 >> 0x18) == 2) {
                func_801FA2E0();
                func_800058DC(arg0, func_80376ADC);
                return;
            }
            if (D_80389EE1 != 0) {
                func_80375F98(arg0, 0);
            }
            func_800058DC(arg0, (void *)func_803769FC);
        }
    }
}
