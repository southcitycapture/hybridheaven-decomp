#include "context.h"

typedef struct func_801419A4_StructData {
    u8 bytes[13];
} func_801419A4_StructData;

extern func_801419A4_StructData D_80181480;

void func_801419A4(s32 arg0) {
    s32 i;
    u16 sum;
    func_801419A4_StructData data;

    data = D_80181480;
    {
        u8 *p;

        i = 0;
        p = (u8 *)arg0;
        do {
            i++;
            *p++ = 0;
        } while (i < 256);
    }
    for (i = 0; i < 13; i++) {
        ((u8 *)arg0)[i] = data.bytes[i];
    }
    sum = 0;
    for (i = 0; i < 255; i++) {
        sum += ((u8 *)arg0)[i];
    }
    ((u8 *)arg0)[i] = sum;
}
