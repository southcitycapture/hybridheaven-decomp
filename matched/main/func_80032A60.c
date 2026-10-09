#include "context.h"

s32 func_800267F0(s32, void *, void *);             /* extern */

struct func_80032A60_Struct {
    void *unk0;
    u8 pad4[0x10 - 0x4];
    void *unk10;
    u8 pad14[0x20 - 0x14];
    void *unk20;
};

void func_80032A60(void *arg0, void *arg1) {
    struct func_80032A60_Struct *a0;
    struct func_80032A60_Struct *a1;
    s32 temp_v0;

    a0 = (struct func_80032A60_Struct *) arg0;
    a1 = (struct func_80032A60_Struct *) arg1;
    temp_v0 = func_800267F0(1, arg1, arg0);
    a1->unk10 = a0->unk20;
    a1->unk0 = a0->unk0;
    a0->unk0 = a1;
    func_800267F0(temp_v0, arg1, arg0);
}
