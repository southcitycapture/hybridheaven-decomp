#include "context.h"

typedef struct func_801F4AFC_StructInner {
    u8 pad[0x18];
    u32 unk18;
} func_801F4AFC_StructInner;
typedef struct func_801F4AFC_Struct {
    u8 pad[0x38];
    func_801F4AFC_StructInner *unk38;
    u8 pad3C[0x72];
    u8 unkAE;
    u8 padAF;
    void *unkB0;
} func_801F4AFC_Struct;

extern void func_801478D4(void *, s32);
extern void func_80147AA8(s32, s32, s32, s32);
extern void func_80147AF0(s32, s32, s32, s32);
extern void func_80147C28(s32, s32, s32, s32);
struct func_801F7554_Struct;
struct func_801F75B0_Struct;
extern void func_801F7554(struct func_801F7554_Struct *, s32);
extern void func_801F75B0(struct func_801F75B0_Struct *, s32);
extern void func_801F832C(void *, s32);

void func_801F4AFC(func_801F4AFC_Struct *arg0, s32 arg1) {
    func_801F4620_Struct sp34;
    s32 temp_v0;

    if (arg0->unkAE == 0) {
        arg0->unkAE = 0x23;
    }
    temp_v0 = (arg0->unk38->unk18 >> 16) & 0xFF;
    if (temp_v0 == 0) goto case0;
    if (temp_v0 == 1) goto case1;
    if (temp_v0 != 2) goto end;
    goto case2;
    end:
    return;
    case0:
    {
        arg0->unkB0 = func_801F7554;
        return;
    }
    case1:
    {
        func_801478D4(arg0, 0);
        func_80147AA8(0, 0x20, 0, 0);
        func_80147AF0(0, 0, 0, 0);
        func_80147C28(0, 0x43, -0x64, -0x43);
        arg0->unkB0 = func_801F75B0;
        return;
    }
    case2:
    {
        func_801478D4(arg0, 0);
        func_80147AA8(0, 0x3C, 0x3C, 0x3C);
        func_80147AF0(0, 0, 0, 0xC8);
        func_801F4620(&sp34, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 100.0f);
        func_80147C28(0, 0, -0x64, 0);
        arg0->unkB0 = func_801F832C;
    }
}
