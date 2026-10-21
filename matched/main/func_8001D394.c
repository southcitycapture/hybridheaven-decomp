#include "context.h"

extern u16 func_8001C88C(u16);
extern u16 func_8001C96C(u16);
extern u16 func_8001CF40(u16);

s32 func_8001D394(u8 arg0, u16 arg1) {
    u16 r;
    u16 a;

    a = arg1;
    if (arg0 == 0 && a == 0xA1B8) a = 0xA1A1;
    if (arg0 == 1 && a == 0xA1B8) a = 0xA1A1;
    if (arg0 == 2 && a == 0xA1B8) a = 0xA1A1;
    if (arg0 == 0) r = func_8001C88C(a);
    if (arg0 == 1) r = func_8001C96C(a);
    if (arg0 == 2) r = func_8001CE9C(a);
    if (arg0 == 4) r = func_8001D2E0(a);
    if (a == 0xD4A2) a = 0xA6A0;
    if (a == 0xE7A7) a = 0xA6A1;
    if (a == 0xD1DB) a = 0xA6A2;
    if (a == 0xD9C7) a = 0xA6A3;
    if (a == 0xE6AB) a = 0xA6A4;
    if (a == 0xE0FA) a = 0xA6A5;
    if (arg0 == 3) r = func_8001CF40(a);
    if (arg0 == 5) {
        if (a == 0xA1A1) r = 0;
        else r = a + 0xFFFF5C40;
    }
    return r;
}
