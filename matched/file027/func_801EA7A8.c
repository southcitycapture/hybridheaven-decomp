#include "common.h"
extern s32 D_801F45A4;
extern s32 func_801C0B8C(u64);
extern void func_8038D28C(s32);


s32 func_801EA7A8(s32 arg0, s32 arg1) {
    switch (D_801F45A4) {
    case 0:
        if (func_801C0B8C(0x3D0900) != 0) {
            func_8038D28C(0x15C);
            D_801F45A4 = 1;
        }
        break;
    case 1:
        if (func_801C0B8C(0xC65D40) != 0) {
            func_8038D28C(0x15D);
            D_801F45A4 = 2;
        }
        break;
    case 2:
        if (func_801C0B8C(0x14FB180) != 0) {
            func_8038D28C(0x15E);
            D_801F45A4 = 3;
        }
        break;
    case 3:
        if (func_801C0B8C(0x16E3600) != 0) {
            func_8038D28C(0x15F);
            D_801F45A4 = 4;
        }
        break;
    case 4:
        if (func_801C0B8C(0x1C9C380) != 0) {
            func_8038D28C(0x6AC);
            return 10;
        }
        break;
    }
    return 9;
}
