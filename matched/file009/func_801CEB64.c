#include "context.h"

typedef struct func_801CEB64_StructInner {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801CEB64_StructInner;

typedef struct func_801CEB64_StructOuter {
    u8 pad0[0x30];
    func_801CEB64_StructInner *unk30;
} func_801CEB64_StructOuter;

typedef struct func_801CEB64_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CEB64_StructC;

typedef struct func_801CEB64_StructArg0 {
    u8 pad0[0x0C];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
} func_801CEB64_StructArg0;

extern void func_8012D7A8(void);
extern void func_801CBD70(void);
extern void func_801CD878(void *arg0, void **arg1);
extern void func_801CD994(u8 arg0, u8 arg1, u8 arg2, u8 arg3);

void func_801CEB64(func_801CEB64_StructArg0 *arg0, void **arg1) {
    func_801CEB64_StructInner *temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = ((func_801CEB64_StructOuter *) *arg1)->unk30;
    func_8012D7A8();
    func_801CD878(arg0, arg1);
    func_801CD994(temp_v0->unk48, temp_v0->unk49, temp_v0->unk4A, temp_v0->unk4B);
    temp_v0_2 = arg0->unk92;
    temp_v1 = (s32) arg0->unk90 < temp_v0_2;
    arg0->unk92 = (u16) (temp_v0_2 + 1);
    if (temp_v1 || (arg0->unkC->unk4C & 0x8000)) {
        func_801CBD70();
        func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
        func_800058DC(arg0, (s32) func_801CE898);
    }
}
