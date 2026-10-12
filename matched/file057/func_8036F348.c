#include "context.h"
typedef struct func_8036F528_Vec {
    s32 x;
    s32 y;
    f32 z;
} func_8036F528_Vec;
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8013A2E0();
void func_800058DC(s32, void *);

typedef struct func_8036F348_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x31 - 0x14];
    u8 unk31;
} func_8036F348_Struct;

extern u8 D_80387B70[];
extern void func_8036F40C();

void func_8036F348(void *arg0, s32 arg1) {
    func_8036F348_Struct *var_v0;
    func_8036F528_Vec sp18;

    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = (func_8036F348_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F348_Struct *) D_801BC3D8;
    }
    sp18 = *(func_8036F528_Vec *) D_80387B70;
    if (*(u16 *) ((u8 *) arg0 + 0x36) == 0x11D) {
        sp18.z = var_v0->unk10;
        var_v0->unk31 = (var_v0->unk31 & 0xFF9F) | 0x40;
        func_8013A2E0(arg1, sp18);
        func_800058DC((s32) arg0, func_8036F40C);
    }
}
