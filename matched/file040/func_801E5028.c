#include "common.h"
extern s32 D_801E82F4;
extern s32 func_801C0B8C(u64 time);
void func_801C4028(s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32);


s32 func_801E5028(s32 arg0, s32 arg1) {
    switch (D_801E82F4) {
    case 0:
        if (func_801C0B8C(0x0234110B) != 0) {
            func_801C4028(1, 0x3F800000, 0x41700000, 0xC0800000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 1;
        }
        break;
    case 1:
        if (func_801C0B8C(0x023D38C9) != 0) {
            func_801C4028(1, 0x41980000, 0x41F80000, 0x41700000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 2;
        }
        break;
    case 2:
        if (func_801C0B8C(0x0243534B) != 0) {
            func_801C4028(1, 0x41980000, 0x42300000, 0x41700000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 3;
        }
        break;
    case 3:
        if (func_801C0B8C(0x0244D9E9) != 0) {
            func_801C4028(1, 0xC1400000, 0x42800000, 0xC0800000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 4;
        }
        break;
    case 4:
        if (func_801C0B8C(0x0247E72A) != 0) {
            func_801C4028(1, 0xC2100000, 0x42980000, 0xC2080000, 0x10E, 0, 0, 5.0f, 5.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 5;
        }
        break;
    case 5:
        if (func_801C0B8C(0x024F884A) != 0) {
            func_801C4028(1, 0xC1400000, 0x42FA0000, 0xC0800000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 6;
        }
        break;
    case 6:
        if (func_801C0B8C(0x0252958B) != 0) {
            func_801C4028(1, 0xC1400000, 0x43010000, 0x41800000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 7;
        }
        break;
    case 7:
        if (func_801C0B8C(0x0258B00C) != 0) {
            func_801C4028(1, 0x41880000, 0x430C0000, 0x41800000, 0x10E, 0, 0, 8.0f, 8.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 8;
        }
        break;
    case 8:
        if (func_801C0B8C(0x0261D7CB) != 0) {
            func_801C4028(1, 0xC1400000, 0x43190000, 0xC1200000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            D_801E82F4 = 9;
        }
        break;
    case 9:
        if (func_801C0B8C(0x026978EB) != 0) {
            func_801C4028(1, 0xC1400000, 0x43470000, 0x41800000, 0x10E, 0, 0, 10.0f, 10.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
            return 0xF;
        }
        break;
    }
    return 0xE;
}
