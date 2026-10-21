#include "context.h"

typedef struct func_801C1040_Struct {
    u8 pad[0x10];
    struct func_801C1040_Struct *unk10;
    u8 pad2[0x1C];
    u8 *unk30;
} func_801C1040_Struct;

void func_801C1040(arg0, arg1, arg2)
s32 arg0;
s8 arg1;
s32 arg2;
{
    func_801C1040_Struct *p;
    u8 i;
    s32 n;

    p = (func_801C1040_Struct *)arg0;
    i = 0;
    n = *(u32 *)&arg2 & 0xFF;
    for (; i < n; ) {
        i++;
        p->unk30[0xB] = arg1;
        p = p->unk10;
    }
}
