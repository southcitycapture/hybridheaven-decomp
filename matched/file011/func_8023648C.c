#include "context.h"

typedef struct func_8023648C_Struct {
    u8 pad[0xA3];
    s8 unkA3;
} func_8023648C_Struct;

typedef struct func_8023648C_Struct3 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
} func_8023648C_Struct3;

extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);
extern u8 D_8023E3AC;
extern func_8023648C_Struct3 D_8023E4F0;

void func_8023648C(func_8023648C_Struct *arg0, s32 arg1) {
    func_8023648C_Struct3 sp24;

    sp24 = D_8023E4F0;
    if ((s32) D_8023E3AC >= 2) {
        arg0->unkA3 = 3;
    } else {
        arg0->unkA3 = 2;
    }
    func_80234ED4(arg0, arg1, &sp24, 0, 0);
}
