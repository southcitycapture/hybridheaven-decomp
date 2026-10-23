#include "context.h"

extern u8 D_801CED50[];
extern u8 D_801C56B8[];
void func_801C3BA4();
void func_801C4C7C();
void func_801C56B8();

void func_801C3A40(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 2;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 2) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CED50);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        arg1 = D_801CC8C8;
        if (arg1 == 0) goto choice0;
        if (arg1 == 1) goto choice1;
        if (arg1 != 2) goto end;
        goto choice2;
choice0:
        func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801C3BA4);
        goto end;
choice1:
        func_800058DC(arg0, func_801C4C7C);
        goto end;
choice2:
        func_800058DC(arg0, func_801C56B8);
        goto end;
    }
end:
    ;
}
