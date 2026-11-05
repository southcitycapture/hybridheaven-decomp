#include "common.h"


s32 func_80243E50(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    if ((u32)arg0 == 0) {
        if ((u32)arg2 == 0) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 0);
            case 1: return (u8)(arg1 ^ 2);
            case 2: return (u8)(arg1 ^ 6);
            default: return (u8)(arg1 ^ 4);
            }
        } else if (arg2 != 0) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 8);
            case 1: return (u8)(arg1 ^ 10);
            case 2: return (u8)(arg1 ^ 6);
            default: return (u8)(arg1 ^ 12);
            }
        }
    } else if (arg0 == 1) {
        if ((u32)arg2 == 0) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 26);
            case 1: return (u8)(arg1 ^ 14);
            case 2: return (u8)(arg1 ^ 32);
            default: return (u8)(arg1 ^ 20);
            }
        } else if (arg2 == 1) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 28);
            case 1: return (u8)(arg1 ^ 16);
            case 2: return (u8)(arg1 ^ 32);
            default: return (u8)(arg1 ^ 22);
            }
        } else {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 30);
            case 1: return (u8)(arg1 ^ 18);
            case 2: return (u8)(arg1 ^ 32);
            default: return (u8)(arg1 ^ 24);
            }
        }
    }
    return 0;
}
