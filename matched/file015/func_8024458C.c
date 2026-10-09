#include "context.h"

extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80244610(void);

void func_8024458C(struct func_802433D4_Struct *arg0, s32 arg1) {
    s32 temp;
    s16 *p;

    temp = arg0->unk5C;
    if ((func_80010550(arg1, temp, arg1) != 0) && (func_800178E8() != 0)) {
        func_80020718(0x666);
        p = (s16 *)&D_801BBBF0;
        p[2] = 0x10C;
        func_8012FE50(0x10, (u16)p[2], 6, 1, 0);
        func_800058DC(arg0, &func_80244610);
    }
}
