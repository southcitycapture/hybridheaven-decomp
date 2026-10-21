#include "context.h"

typedef struct func_8001F364_Struct {
    u32 unk0;
    s32 unk4;
    struct func_8001F364_Struct *unk8;
    struct func_8001F364_Struct *unkC;
} func_8001F364_Struct;

extern func_8001F364_Struct *D_80091BCC;

s32 func_8001F364(arg0)
    s32 arg0;
{
    s32 size;
    u32 addr;
    func_8001F364_Struct *end;
    func_8001F364_Struct *node;
    func_8001F364_Struct *prev;
    func_8001F364_Struct *next;

    if (arg0 <= 0) {
        return 0;
    }
    size = (arg0 + 0x17) & ~7;
    prev = D_80091BCC;
    next = prev->unk8;
    while (next != NULL) {
        addr = (prev->unk0 - size) & ~D_80047940;
        if (addr >= (u32)next + 0x10) {
            goto found;
        }
        prev = next;
        next = next->unk8;
    }
    return 0;
found:
        end = (func_8001F364_Struct *)((u8 *)addr + size);
        ((func_8001F364_Struct ** )end)[-2] = next;
        ((func_8001F364_Struct ** )end)[-1] = prev;
        node = end - 1;
        prev->unk8->unkC = node;
        prev->unk8 = node;
        node->unk0 = addr;
        node->unk4 = size;
        return addr;
}
