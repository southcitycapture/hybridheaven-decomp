#include "context.h"

typedef struct func_8023A09C_StructInner {
    u8 pad[0x31];
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
} func_8023A09C_StructInner;

typedef struct func_8023A09C_Struct {
    u8 pad[0x98];
    func_8023A09C_StructInner *unk98;
} func_8023A09C_Struct;

void func_8023A09C(func_8023A09C_Struct *arg0, s32 arg1) {
    extern void func_80147D60();
    func_8023A09C_StructInner *temp;

    temp = arg0->unk98;
    temp->low = 0;
    temp->high = 1;
    func_80147D60(10);
    func_800058DC(arg0, func_8023A0EC);
}
