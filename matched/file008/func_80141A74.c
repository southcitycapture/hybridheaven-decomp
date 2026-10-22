#include "context.h"

typedef struct func_80141A74_StructHeader {
    u8 bytes[13];
} func_80141A74_StructHeader;
typedef struct func_80141A74_StructRecord {
    u8 a, b, c, d;
    u16 e;
    u8 f, g;
} func_80141A74_StructRecord;
extern func_80141A74_StructHeader D_80181490;

s32 func_80141A74(s32 arg0, s32 arg1) {
    s32 i;
    u16 sum;
    s16 result;
    func_80141A74_StructHeader header;

    header = D_80181490;
    for (i = 0, result = 0; i < 13; i++) {
        if (((u8 *)arg1)[i] != header.bytes[i]) {
            result = 14;
        }
    }
    if (result == 0) {
        i = 0;
        sum = 0;
        for (; i < 255; ) {
            sum += ((u8 *)arg1)[i++];
        }
        if ((sum & 0xFF) != ((u8 *)arg1)[i]) {
            result = 14;
        }
        if (result == 0) {
            for (i = 0; i < 4; i++) {
                ((func_80141A74_StructRecord *)arg0)[i].a = ((u8 *)arg1)[16 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].b = ((u8 *)arg1)[17 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].c = ((u8 *)arg1)[18 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].d = ((u8 *)arg1)[19 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].e = (((u8 *)arg1)[20 + i * 8] << 8) + ((u8 *)arg1)[21 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].f = ((u8 *)arg1)[22 + i * 8];
                ((func_80141A74_StructRecord *)arg0)[i].g = ((u8 *)arg1)[23 + i * 8];
            }
        }
    }
    return result;
}
