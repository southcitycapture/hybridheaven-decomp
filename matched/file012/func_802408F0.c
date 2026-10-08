#include "common.h"

extern void func_80011198(s32 a0, void *a1, s32 a2);
extern void func_800058DC(void *a0, void *a1);
extern void func_8024092C(void);

typedef struct func_802408F0_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_802408F0_Struct;

void func_802408F0(func_802408F0_Struct *arg0, s32 arg1) {
    void *temp = arg0->unk5C;

    func_80011198(arg1, temp, arg1);
    func_800058DC(arg0, func_8024092C);
}
