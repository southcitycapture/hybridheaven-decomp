#include "context.h"
typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;
void func_8013A1B4(s32, func_8024AA38_Struct, s32);

typedef struct func_80249854_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80249854_Sub;

typedef struct func_80249854_Inner {
    u8 pad[0x2C];
    func_80249854_Sub *unk2C;
} func_80249854_Inner;

typedef struct func_80249854_Arg0 {
    u8 pad[0x9C];
    s16 unk9C;
} func_80249854_Arg0;

extern void func_800058DC(void *arg0, void *arg1);
extern void func_8024990C();

extern struct func_8024AA38_Struct D_80253064;

void func_80249854(void *arg0, func_80249854_Inner **arg1) {
    (*arg1)->unk2C->unk4 = 0.0f;
    (*arg1)->unk2C->unk8 = -200.0f;
    (*arg1)->unk2C->unkC = -100.0f;
    (*arg1)->unk2C->unk12 = 0x800;
    func_8013A1B4((s32)arg1, D_80253064, 0xFFFFFF);
    ((func_80249854_Arg0 *)arg0)->unk9C = 0;
    func_800058DC(arg0, (void *)func_8024990C);
}
