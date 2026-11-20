#include "common.h"
extern u8 D_800631F0[];
extern u16 D_80063DF0[];
typedef struct func_80010454_StructVec {
    s32 x, y, z;
} func_80010454_StructVec;
extern func_80010454_StructVec D_801BC028;
void func_8000F458(u32 **arg0, void *arg1);
typedef struct func_8000FCD0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8000FCD0_Struct;
struct func_8000FE48_StructObj {
    u8 pad[0x2C];
    u8 *unk2C;
};
u16 func_8000FE48(struct func_8000FE48_StructObj **arg0, u16 arg1, func_8000FCD0_Struct *arg2, u16 *arg3);
u16 func_800101D8(u16 arg0, u32 **arg1, u16 arg2);
typedef struct func_80010454_StructArg {
    u8 pad[0xC];
    u16 unkC;
    u8 padE[0x44 - 0xE];
    func_80010454_StructVec unk44;
} func_80010454_StructArg;


u16 func_80010550(u32 **arg0, func_80010454_StructArg *arg1) {
    u16 n;
    u16 i;
    u16 sp32;
    u16 r;

    n = func_8000FE48((struct func_8000FE48_StructObj **)arg0, arg1->unkC, (func_8000FCD0_Struct *)D_800631F0, D_80063DF0);
    for (i = 0; i < n; i++) {
        r = func_800101D8(i, arg0, arg1->unkC);
        if (i == 0) {
            sp32 = r;
        }
    }
    func_8000F458(arg0, arg1);
    D_801BC028 = arg1->unk44;
    return sp32;
}
