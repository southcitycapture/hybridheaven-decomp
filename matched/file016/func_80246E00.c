#include "context.h"

struct func_80246E00_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_80246ED4();
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80133980(s32 arg0);
extern void func_801339D0(s32 arg0);
extern s32 func_80133A24(s32 arg0);
extern s32 func_801FBB20();

void func_80246E00(struct func_80246E00_Struct *arg0, s32 arg1) {
    s32 flag;

    if (func_801C3044() == 0) {
        if (arg0->unk3C == 0) {
            func_80020718(0x14E);
            if (func_80133A24(0xBF) == 0) {
                func_80133980(0xBF);
                func_8012C89C(arg0, 0, 0x3A0, 0xA);
            } else {
                func_801339D0(0xBF);
                func_8012C89C(arg0, 0, 0x3A0, 9);
            }
        }
        flag = arg0->unk3C >= 0xF;
        arg0->unk3C = arg0->unk3C + 1;
        if (flag) {
            func_801FBB20();
            func_801C2F0C(1, 0);
            func_800058DC((s32)arg0, func_80246ED4);
        }
    }
}
