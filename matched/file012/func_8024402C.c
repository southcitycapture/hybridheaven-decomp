#include "common.h"


s32 func_8024402C(u8 arg0) {
    if (arg0 >= 0x41) {
        switch (arg0) {
        case 0x41:
            return 0;
        case 0x42:
            return 1;
        case 0x43:
            return 2;
        case 0x44:
            return 0;
        case 0x45:
            return 0;
        case 0x46:
            return 1;
        case 0x47:
            return 0;
        case 0x48:
            return 1;
        case 0x49:
            return 2;
        case 0x4A:
            return 3;
        case 0x4B:
            return 0xA;
        case 0x4C:
            return 1;
        default:
            return 0;
        }
    } else {
        if (arg0 >= 0x3E) {
            return (arg0 - 0x3E) & 0xFF;
        }
        if (arg0 >= 0x39) {
            if (arg0 == 0x3D) {
                return 0xA;
            }
            return (arg0 - 0x39) & 0xFF;
        }
        if (arg0 >= 0x25) {
            if (arg0 >= 0x35) {
                return (arg0 - 0xD) & 0xFF;
            }
            if (arg0 >= 0x31) {
                return (arg0 - 0x13) & 0xFF;
            }
            if (arg0 >= 0x2D) {
                return (arg0 - 0x19) & 0xFF;
            }
            if (arg0 >= 0x29) {
                return (arg0 - 0x1F) & 0xFF;
            }
            return (arg0 - 0x25) & 0xFF;
        }
        return 0;
    }
}
