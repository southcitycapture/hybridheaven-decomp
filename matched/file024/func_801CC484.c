#include "context.h"
void func_801CC574(struct func_801CC2CC_Struct1 *arg0, s32 arg1);

struct func_801CC484_Struct3 {
    u8 pad[8];
    f32 unk8;
};
struct func_801CC484_Struct2 {
    u8 pad[0x2C];
    struct func_801CC484_Struct3 *unk2C;
};
struct func_801CC484_Struct1 {
    u8 pad[0x24];
    struct func_801CC484_Struct2 *unk24;
    u8 pad2[0x5C - 0x28];
    void *unk5C;
};

extern s32 func_80010550();
extern void func_8013A28C(s32, struct func_801CC2CC_Struct3);
extern struct func_801CC2CC_Struct3 D_801CE6C4;
extern f64 D_801CFCE8;
extern f32 D_801CFE04;

void func_801CC484(struct func_801CC484_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC484_Struct3 *temp_v0;
    void *temp_a1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 + D_801CFE04;
    D_801CFE04 = (f32) ((f64) D_801CFE04 - D_801CFCE8);
    if (*(u8 *)&D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if ((f64) D_801CFE04 <= 0.0) {
        func_8013A28C(arg1, D_801CE6C4);
        func_800058DC((s32) arg0, func_801CC574);
    }
}
