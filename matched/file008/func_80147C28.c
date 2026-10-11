#include "context.h"

extern u8 D_80181590[];

struct func_80147C28_Struct {
    u8 pad0[0x10];
    s8 unk10;
    s8 unk11;
    s8 unk12;
};

void func_80147C28(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    struct func_80147C28_Struct *temp_v0;

    if (&arg0 == NULL) {
        arg0 = 0;
    }
    if (&arg1 == NULL) {
        arg1 = 0;
    }
    if (&arg2 == NULL) {
        arg2 = 0;
    }
    if (&arg3 == NULL) {
        arg3 = 0;
    }
    arg0 = arg0 & 0xFF;
    temp_v0 = (struct func_80147C28_Struct *) (D_80181590 + arg0 * 24);
    temp_v0->unk10 = arg1;
    temp_v0->unk11 = arg2;
    temp_v0->unk12 = arg3;
}
