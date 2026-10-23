#include "context.h"

extern u8 D_801CEE10[];
extern u8 D_801C56B8[];
void func_801C43B0();
void func_801C43BC();
void func_801C47D0();
void func_801C56B8();

void func_801C4200(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CEE10);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto case0;
        if (D_801CC8C8 == 1) goto case1;
        if (D_801CC8C8 == 2) goto case2;
        if (D_801CC8C8 != 3) goto end;
        goto case3;
case0:
        func_800023A8(0);
        func_80020718(10);
        func_8012FE50(20, 190, 1, 1, 0);
        func_800058DC(arg0, func_801C43B0);
        return;
case1:
        func_800058DC(arg0, func_801C43BC);
        return;
case2:
        func_800023A8(0);
        func_80020718(8);
        func_800058DC(arg0, func_801C47D0);
        return;
case3:
        func_800058DC(arg0, func_801C56B8);
        return;
    }
end:
    ;
}
