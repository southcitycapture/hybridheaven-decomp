#include "context.h"

void func_801300E8(void);
void func_8012E81C(void);
void func_8012C6B4(s32);
void func_80124D48(s32);
extern u16 D_801BBC20;
extern u8 D_801BBD54;
extern s8 D_801BBD6E;

void func_80124CEC(s32 arg0, s32 arg1) {
    func_801300E8();
    D_801BBD6E = 9;
    func_8012E81C();
    func_8012C6B4(D_801BBC20 + 0x4D2);
    if (D_801BBD54 == 0) {
        func_80124D48(arg0);
    }
}
