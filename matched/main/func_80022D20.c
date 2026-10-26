#include "common.h"
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define zA_319 func_80024114_ctx319
#define zA_350 func_80024114
typedef struct func_80022B6C_Struct {
    u16 unk0;
    u16 unk2;
} func_80022B6C_Struct;
extern func_80022B6C_Struct D_800CBAC4[];
extern u16 D_800CBAC8[];
extern u32 D_801B5520;
extern void (*D_80047E0C[])(void);
void func_80022874(s32 arg0);
extern s32 func_80024114(s32, u8, s8, ...);


void func_80022D20(u16 arg0) {
    u32 *var_s1;
    s32 var_s0;
    func_80022B6C_Struct *p;

    for (var_s0 = 0, var_s1 = &D_801B5520; var_s0 < 0x14; var_s0++) {
        if (D_800CBAC8[arg0] == (*var_s1 & 0x7FFF)) {
            func_80022874(var_s0);
        }
        var_s1 = (u32 *)((u8 *)var_s1 + 0xD8);
    }
    D_800CBAC4[arg0].unk2 = 0;
    D_800CBAC8[arg0] = D_800CBAC4[arg0].unk2;
}
