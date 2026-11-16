#include "common.h"
extern u32 func_801C1134(s32, s32);
extern void func_801C10D8(s32, s32);
extern void func_801E2E14(s32, s32, f32, f32, f32);
extern s32 func_801E2EAC(s32);
extern void func_8038D28C(s32);

s32 func_801E3450(s32 arg0, s32 arg1) {
    u32 var_v0;
    s32 var_s0;

    var_v0 = func_801C1134(3, 1);
    switch (var_v0) {
    case 0x1E:
        func_801E2E14(0, 1, 230.0f, 20.0f, 5.0f);
        func_8038D28C(0x503);
        break;
    case 0x3C:
        func_801E2E14(1, 1, 170.0f, 20.0f, 10.0f);
        func_8038D28C(0x504);
        break;
    case 0x46:
        func_801E2E14(2, 1, 210.0f, 20.0f, -14.0f);
        func_8038D28C(0x504);
        break;
    case 0x5A:
        func_801E2E14(3, 1, 250.0f, 20.0f, -9.0f);
        func_8038D28C(0x504);
        break;
    case 0x5F:
        func_801E2E14(4, 1, 260.0f, 20.0f, -9.0f);
        func_8038D28C(0x504);
        break;
    case 0x6E:
        func_801E2E14(5, 1, 187.0f, 20.0f, -3.0f);
        func_8038D28C(0x504);
        break;
    case 0x79:
        func_801E2E14(6, 1, -130.0f, -59.0f, 33.0f);
        func_8038D28C(0x504);
        break;
    case 0x82:
        func_801E2E14(7, 1, -130.0f, -55.0f, -16.0f);
        func_8038D28C(0x504);
        break;
    case 0x87:
        func_801E2E14(8, 1, -130.0f, -14.0f, -22.0f);
        func_8038D28C(0x504);
        break;
    case 0xAA:
        func_801E2E14(9, 1, -130.0f, -35.0f, 4.0f);
        func_8038D28C(0x504);
        break;
    case 0xBE:
        func_801E2E14(0xA, 1, -130.0f, -101.0f, 32.0f);
        func_8038D28C(0x504);
        break;
    case 0xC3:
        func_801E2E14(0xB, 1, -130.0f, -36.0f, 25.0f);
        func_8038D28C(0x504);
        break;
    case 0xD2:
        func_801E2E14(0xC, 1, -130.0f, -72.0f, 47.0f);
        func_8038D28C(0x504);
        break;
    case 0xE6:
        func_801E2E14(0xD, 1, -130.0f, -70.0f, 11.0f);
        func_8038D28C(0x504);
        break;
    case 0xEB:
        func_801C10D8(3, 1);
        return 4;
    }
    var_s0 = 0;
    do {
        func_801E2EAC(var_s0);
        var_s0++;
    } while (var_s0 != 0xE);
    return 3;
}
