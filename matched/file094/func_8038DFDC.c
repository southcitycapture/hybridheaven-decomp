#include "context.h"

struct func_8038DFDC_Struct0 {
    u8 pad[0xA5];
    u8 unkA5;
};
struct func_8038DFDC_Struct1 {
    u8 pad[6];
    s16 unk6;
    u8 pad2[0x32B];
    u8 unk333;
};
extern s32 func_8022B640(s32);
extern void func_8022A834();

void func_8038DFDC(struct func_8038DFDC_Struct0 *arg0, struct func_8038DFDC_Struct1 *arg1) {
    s32 result;
    s32 two;

    result = func_8022B640(3) & 0xFF;
    if (result == 0) goto zero;
    if (result == 1) goto one;
    two = 2;
    if (result != two) goto other;
    goto other;
zero:
    arg0->unkA5 = 0;
    arg1->unk333++;
    return;
one:
    func_8022A834(arg0);
    arg1->unk333++;
    return;
other:
        if (arg1->unk6 >= 100) {
            arg0->unkA5 = two;
        } else {
            arg0->unkA5 = 0;
        }
        arg1->unk333 = 0;
}
