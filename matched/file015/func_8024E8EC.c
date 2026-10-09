#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80133980(s32);
extern s32 func_80133A24(s32);

struct func_8024E8EC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024E8EC_Init {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 pad;
};

extern void func_801339D0(s32);
extern void func_801C2F0C(s32, struct func_8024E8EC_Init *);
extern void func_8024E9A8(void);
extern f32 D_8025A05C;

void func_8024E8EC(struct func_8024E8EC_Struct *arg0, s32 arg1) {
    struct func_8024E8EC_Init sp20;
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 + 1;
    if (temp_v0 == 0x3C) {
        func_80133980(0x73);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        sp20.unkC = 0x1100;
        sp20.unk10 = 0x0168003F;
        sp20.unk18 = 0;
        sp20.unk1A = 0x96;
        sp20.unk0 = -45.0f;
        sp20.unk4 = 464.0f;
        sp20.unk8 = 0.0f;
        sp20.unk14 = D_8025A05C;
        func_801C2F0C(2, &sp20);
        func_800058DC(arg0, func_8024E9A8);
    }
}
