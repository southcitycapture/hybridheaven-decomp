#include "context.h"

typedef struct func_801C9234_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801C9234_Struct;

extern void func_800058DC(void *, void *, void *, void *);
extern func_801C9234_Struct D_801CFD10[];
extern func_801C9234_Struct D_801CFD40[];
extern u8 func_801C9328[];

void func_801C9234(void *arg0, s32 arg1) {
    u8 temp_v1;
    func_801C9234_Struct *temp_a2;

    D_801CFD10[((u8 *)arg0)[0x90]].unk0 = 1000.0f;
    temp_v1 = ((u8 *)arg0)[0x90];
    D_801CFD10[temp_v1].unk4 = (f32) (temp_v1 * 0xA);
    temp_a2 = &D_801CFD10[((u8 *)arg0)[0x90]];
    temp_a2->unk8 = 300.0f - temp_a2->unk0;
    D_801CFD40[((u8 *)arg0)[0x90]].unk0 = -1.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk4 = 0.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk8 = 1.0f;
    func_800058DC(arg0, func_801C9328, temp_a2, D_801CFD10);
}
