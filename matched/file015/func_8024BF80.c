#include "context.h"

typedef struct func_8024BF80_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024BF80_Struct;

extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, func_8024BF80_Struct *);
extern void func_800058DC(void *, void *);
extern void func_8024BFEC(void);

void func_8024BF80(s32 arg0, s32 arg1) {
    func_8024BF80_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x0348007A;
        sp18.unkC = 0x14;
        sp18.unk8 = 10.0f;
        func_801C2F0C(5, &sp18);
        func_800058DC((void *) arg0, (void *) func_8024BFEC);
    }
}
