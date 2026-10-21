#include "context.h"

typedef struct func_801BF850_Struct {
    u32 unk0;
    u16 unk4;
    u16 pad6;
    s32 unk8;
} func_801BF850_Struct;

extern s32 func_801C00FC(s32, void *);
extern void func_801C0464();

s32 func_801BF850(void (**arg0)(), s32 arg1, func_801BF850_Struct *arg2) {
    s32 ret;
    u32 v;

    ret = func_801C00FC(arg1, arg2);
    v = arg2->unk0;
    if (v >= 0x50000) {
        arg0[(v - 0x50000) >> 16](arg2->unk4, arg2->unk8);
        goto out;
    }
    if (v == 0x10000) goto l1;
    if (v == 0x20000) goto l2;
    if (v == 0x30000) goto l3;
    if (v == 0x40000) goto l4;
    if (v != 0x50000) goto ldef;
    goto l5;
l1:
    func_801C0464(arg1, arg2);
    goto out;
l2:
    func_801C0640(arg1, (u8 *)arg2);
    goto out;
l3:
    func_801C06C0(arg1, (u8 *)arg2);
    goto out;
l4:
    func_801C0740(arg1, (s32)arg2);
    goto out;
l5:
    func_801C0750(arg1, (s32)arg2);
    goto out;
ldef:
    return 0;
out:
    return 1;
    return ret;
}
