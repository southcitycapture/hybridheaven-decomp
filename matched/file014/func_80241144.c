#include "common.h"

typedef struct func_80241144_Struct {
    u8 pad[0x94];
    s16 unk94;
} func_80241144_Struct;

extern void func_800058DC(void *, void *);
extern void func_80020744(s32);
extern void func_80133980(s32);
extern void func_8024118C(void);

void func_80241144(func_80241144_Struct *arg0, s32 arg1) {
    arg0->unk94 = 0xA0;
    func_80133980(0x4E);
    func_80020744(0x143);
    func_800058DC(arg0, func_8024118C);
}
