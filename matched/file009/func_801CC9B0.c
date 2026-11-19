#include "common.h"
typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;
extern func_801CC660_Struct *D_801E4080;
extern void *func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
struct func_801CBE04_Inner {
    u8 pad[0xC];
    u16 unkC;
};
struct func_801CBE04_Outer {
    u8 pad[0x5C];
    struct func_801CBE04_Inner *unk5C;
};
void func_801CBE04(struct func_801CBE04_Outer *arg0, void **arg1);


struct func_801CC9B0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};
extern void *D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801E0CE8[];
extern void func_801CCA44();

void func_801CC9B0(struct func_801CC9B0_Struct *arg0, void **arg1) {
    u8 saved[8];
    u8 *var_v0;

    if ((void *)arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    saved[3] = var_v0[0x2D9];
    D_801E4080 = func_80005670(arg0, D_801E0CE8);
    ((u8 *)D_801E4080)[0x30] = saved[3];
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_801CBE04((void *)arg0, arg1);
    func_800058DC(arg0, func_801CCA44);
}
