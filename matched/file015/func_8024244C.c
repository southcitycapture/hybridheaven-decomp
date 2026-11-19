#include "common.h"
#include "common.h"
extern s32 func_80133A24(s32);
extern s32 func_800178E8();
extern void func_801339D0(s32);
extern void func_802424FC();
extern void func_801C2F0C(s32, s16 *);
extern void func_800058DC(void *, void *);
extern f32 D_802585CC;
extern f32 D_802585D0;

typedef struct func_8024244C_Struct {
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s16 unk24;
    s32 unk28;
    f32 unk2C;
    s16 unk30;
    s16 unk32;
    s32 unk34;
} func_8024244C_Struct;

void func_8024244C(s32 arg0, s32 arg1) {
    func_8024244C_Struct sp;

    if ((func_80133A24(0x73) != 0) && (func_800178E8() != 0)) {
        func_801339D0(0x73);
        sp.unk18 = D_802585CC;
        sp.unk1C = D_802585D0;
        sp.unk20 = 0.0f;
        sp.unk24 = 0x1100;
        sp.unk28 = 0x01B8001B;
        sp.unk2C = 1.0f;
        sp.unk30 = 0;
        sp.unk32 = 0x96;
        func_801C2F0C(2, (s16 *)&sp);
        func_800058DC((void *)arg0, (void *)func_802424FC);
    }
}
