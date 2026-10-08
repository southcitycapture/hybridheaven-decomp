#include "context.h"

typedef struct func_80127F78_Struct {
    u8 pad0[0x24];
    func_80127D70_StructA *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
} func_80127F78_Struct;

extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern void func_800058DC(void *, void *);
extern s32 D_8017B3E0;
extern void func_80128028(void);

void func_80127F78(func_80127F78_Struct *arg0, func_80127D70_StructC **arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        func_8012C89C(arg0, 0, 3, 2);
        arg0->unk2C |= 0x20;
        func_8012D814(arg0, 1, 4, 0x3FB33333, 2);
        arg0->unk24->unk30->unk24 = 0x60100;
        (*arg1)->unk30->unk30 = (s32) &D_8017B3E0 | 0x40000000;
        func_800058DC(arg0, func_80128028);
    }
}
