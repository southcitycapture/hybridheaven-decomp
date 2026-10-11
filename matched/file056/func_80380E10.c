#include "context.h"

extern void func_80005670(s32, void *);
extern u8 D_80181D64[];
extern void func_80380E4C(s32 arg0, s32 arg1);

void func_80380E10(s32 arg0, s32 arg1) {
    func_80005670(arg0, D_80181D64);
    func_800058DC(arg0, func_80380E4C);
}
