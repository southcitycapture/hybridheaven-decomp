#include "context.h"
extern s32 func_800178E8();
extern void func_80017990(void *);

extern u8 D_8024577C[];
extern void func_80241F88();

struct func_80241F18_Struct {
    u8 pad[0x94];
    s16 unk94;
};

void func_80241F18(struct func_80241F18_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80017990(D_8024577C);
        func_80020744(0x3DF);
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unkF10 = 0x02A80004;
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_80241F88);
    }
}
