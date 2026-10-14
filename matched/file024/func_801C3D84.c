#include "context.h"
void func_801C40EC(s32 arg0, s32 arg1);
extern void func_80142570();
extern void func_800179B0(s32);

extern u8 func_8013E850();
extern void func_801C3E24();

void func_801C3D84(s32 arg0, s32 arg1) {
    u8 sp27;
    u8 temp_v0;

    temp_v0 = func_8013E850();
    sp27 = temp_v0;
    if (temp_v0 & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (sp27 == 1) {
            func_801C11BC(0xA);
            func_800058DC(arg0, &func_801C3E24);
        }
        if (sp27 == 2) {
            func_8012FE50(0x17, 0x73, 1, 1, 0);
            func_800058DC(arg0, &func_801C40EC);
        }
    }
}
