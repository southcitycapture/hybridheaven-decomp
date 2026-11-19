#include "common.h"
extern void func_800058DC(void *, void *);
extern void func_80133980(s32);
extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C3044(void);
typedef struct func_8024236C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024236C_StructLocal;

extern void func_8024244C(s32 arg0, s32 arg1);

void func_802423E0(s32 arg0, s32 arg1) {
    func_8024236C_StructLocal sp;

    if (func_801C3044() == 0) {
        sp.unk0 = 0x1100;
        sp.unk4 = 0x04100026;
        sp.unk8 = 5.0f;
        func_801C2F0C(4, &sp.unk0);
        func_80133980(0x73);
        func_800058DC((void *) arg0, (void *) func_8024244C);
    }
}
