#include "context.h"

struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 func_80224F5C(void);
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);
extern void func_8013A28C(s32 arg0, struct func_8021E52C_Struct arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8021E59C(void);

void func_8021E52C(s32 arg0, s32 arg1) {
    struct func_8021E52C_Struct sp1C;

    if (func_80224F5C() == 0) {
        func_802256E4(&sp1C, arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_800058DC(arg0, func_8021E59C);
    }
}
