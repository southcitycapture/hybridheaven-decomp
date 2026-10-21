#include "context.h"

extern s32 func_8012FD1C(s32);
extern u8 D_801BBD6D;
void func_801300E8(void);
void func_8012E81C(void);
void func_8012C6B4(s32);
void func_80124D48(s32);
void func_80124CEC(s32 arg0, s32 arg1);

void func_80124C54(s32 arg0, s32 arg1) {
    D_801BBBF0.unk17E = 8;
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x2C) != 0x10) {
        func_8012E81C();
    }
    func_801300E8();
    func_8012C6B4(D_801BBC20 + 0x4D2);
    if (D_801BBBF0.unk17D != 0) {
        if (func_8012FD1C(arg0) != 0) {
            func_800058DC(arg0, (void *)func_80124CEC);
            return;
        }
        func_80124D48(arg0);
    }
}
