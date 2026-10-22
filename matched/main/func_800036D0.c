#include "context.h"

u8 *func_800036D0(u8 *arg0, u8 *arg1) {
    u8 *end;
    u8 *src;
    u8 code;
    u16 offset;
    u16 count;
    u8 value;

    end = arg0 + *(s32 *)arg0;
    arg0 += 4;
    while (arg0 < end) {
        code = *arg0++;
        if (code < 0x80) {
            count = (code >> 2) + 2;
            offset = (*arg0++ + (code << 8)) & 0x3FF;
            src = arg1 - offset;
            while (count--) {
                *arg1++ = *src++;
            }
        } else if (code < 0xA0) {
            count = code & 0x1F;
            while (count--) {
                *arg1++ = *arg0++;
            }
        } else {
            if (code < 0xE0) {
                count = (code & 0x1F) + 2;
                value = *arg0++;
            } else {
                value = 0;
                if (code < 0xFF) {
                    count = (code & 0x1F) + 2;
                } else {
                    count = *arg0++ + 2;
                }
            }
            while (count--) {
                *arg1++ = value;
            }
        }
    }
    return arg1;
}
