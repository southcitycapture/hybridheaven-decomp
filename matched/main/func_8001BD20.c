#include "context.h"
typedef struct func_8001BD20_Struct { u16 a; u16 b; u16 c; } func_8001BD20_Struct;
extern func_8001BD20_Struct D_8004461C;

u8 func_8001BD20(u8 arg0, u16 arg1) {
    func_8001BD20_Struct s;
    u8 v;
    s = D_8004461C;
    v = ((u8 *)&s)[arg0];
    if (arg0 == 2) {
        if (arg1 == 0xA3C9) v -= 4;
        if (arg1 == 0xA3E9) v -= 4;
        if (arg1 == 0xA3EA) v -= 4;
        if (arg1 == 0xA3EC) v -= 4;
        if (arg1 == 0xA3B1) v -= 4;
        if (arg1 == 0xA1A4) v -= 4;
        if (arg1 == 0xA1A5) v -= 4;
        if (arg1 == 0xA1A8) v -= 4;
        if (arg1 == 0xA1A7) v -= 4;
        if (arg1 == 0xA1AD) v -= 4;
        if (arg1 == 0xA1AB) v -= 4;
        if (arg1 == 0xA1AA) v -= 4;
        if (arg1 == 0xA1CA) v -= 4;
        if (arg1 == 0xA1CB) v -= 4;
    }
    if (arg0 == 4) {
        switch (arg1) {
        case 0xA1A1: v -= 2; break;
        case 0xA3E9: v -= 2; break;
        case 0xA3E6: v -= 2; break;
        case 0xA3EA: v -= 2; break;
        case 0xA3EC: v -= 2; break;
        case 0xA3F2: v -= 2; break;
        case 0xA3F4: v -= 2; break;
        case 0xA1A4: v -= 2; break;
        case 0xA1A5: v -= 4; break;
        case 0xA1AD: v -= 4; break;
        case 0xA1A8: v -= 2; break;
        case 0xA1A7: v -= 2; break;
        }
    }
    if (arg0 == 0 && arg1 == 0xA1B8) v -= 4;
    if (arg0 == 1 && arg1 == 0xA1B8) v -= 6;
    if (arg0 == 2 && arg1 == 0xA1B8) v -= 6;
    if (arg0 == 4 && arg1 == 0xA1B8) v -= 4;
    return v;
}
