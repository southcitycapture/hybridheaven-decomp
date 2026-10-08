#include "common.h"

s32 func_801D1220(s32 arg0, s32 arg1);
s32 func_801D1AC0(s32 arg0, s32 arg1);
s32 func_8038D28C(s32 arg0);

s32 func_801F01E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03938700) != 0) {
        return 0xB;
    }
    if ((func_801D1AC0(0x01680003, 0x14) != 0) || (func_801D1AC0(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x6A2);
    }
    if ((func_801D1220(0x01B8000E, 0xE) != 0) || (func_801D1220(0x01B8000E, 0x1E) != 0)) {
        func_8038D28C(0x6A0);
    }
    return 0xA;
}
