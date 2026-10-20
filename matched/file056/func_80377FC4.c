#include "context.h"

struct func_80377FC4_Struct {
    u8 pad[4];
    s32 *unk4;
};

extern struct func_80377FC4_Struct *D_80171CEC[];
extern void func_80377D68(s32, u16, s32);

void func_80377FC4(s32 arg0, u16 arg1, volatile u16 arg2) {
    s32 *temp;

    temp = D_80171CEC[arg1]->unk4;
    func_80377D68(arg0, arg1, temp[arg2]);
}
