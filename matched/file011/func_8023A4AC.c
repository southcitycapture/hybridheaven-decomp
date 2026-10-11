#include "context.h"

struct func_8023A4AC_Struct {
    u8 pad0[0x98];
    s32 unk98;
};

extern void func_8013C8F0(s32, s32);

void func_8023A4AC(struct func_8023A4AC_Struct *arg0, u8 arg1) {
    s32 field;

    field = arg0->unk98;
    func_8013C8F0(field, ((arg1 + 2) & 0xFF) % 5 & 0xFF);
}
