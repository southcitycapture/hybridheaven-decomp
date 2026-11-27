#include "common.h"
extern u8 D_802407E8[];
typedef struct func_80234450_Struct {
    u8 pad[0x8];
    u8 unk8;
    u8 pad2[0x3];
} func_80234450_Struct;
struct func_80235E54_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
};
extern void (*D_80216D10[])(void *, s32);


void func_80235E54(struct func_80235E54_Struct *arg0, s8 arg1) {
    if (((func_80234450_Struct *) D_802407E8)[arg1].unk8 > 0) {
        arg0->unkA5 = arg1;
    } else if (arg1 < arg0->unkA4 - 1) {
        func_80235E54(arg0, arg1 + 1);
    }
}
