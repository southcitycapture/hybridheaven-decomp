#include "context.h"

extern void func_801BF54C(s32 arg0, s32 arg1);
extern void func_801BF4A4(s32 arg0, s32 arg1);
extern void func_801C0A68();
extern void func_801C0C50();
extern s32 func_801C012C();
extern s32 func_801C0C68();
extern void func_8038BCE0();
extern void D_8038C914();
extern void D_8038CA8C();
extern void func_8038D224();

void func_801BF388(s32 arg0, s32 arg1) {
    D_801D8CEC = 1;
    D_801D8D60 = (func_801BFF20_Struct *)arg0;
    D_801D8D64 = arg1;
    func_801C0A68();
    func_801C0C50();
    if (func_801BFA58() != 0) {
        func_8038BCE0();
        D_8038C914();
        D_8038CA8C();
        func_8038D224();
    } else {
        func_800058DC(arg0, (void *)func_801BF54C);
        return;
    }
    if (func_801C02FC() != 0) {
        if ((func_801C012C() != 0) && (func_801C0190() != 0)) {
            func_800058DC(arg0, (void *)func_801BF4A4);
        }
    } else if ((func_801C0C68(0x3C) != 0) && (func_801C012C() != 0) && (func_801C0190() != 0)) {
        D_801D8CFC = 1;
        func_800058DC(arg0, (void *)func_801BF4A4);
    }
}
