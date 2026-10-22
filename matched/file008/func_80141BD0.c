#include "context.h"

typedef struct func_80141BD0_StructEntry {
    u8 a, b, c, d;
    u16 e;
    u8 f, g;
} func_80141BD0_StructEntry;

typedef struct func_80141BD0_StructHdr {
    u8 b[13];
} func_80141BD0_StructHdr;

extern func_80141BD0_StructHdr D_801814A0;

void func_80141BD0(s32 arg0, s32 arg1) {
    s32 i;
    u16 sum;
    u16 pad;
    func_80141BD0_StructHdr data;

    data = D_801814A0;
    for (i = 0; i < 256;) {
        ((u8 *)arg1)[i++] = 0;
    }
    for (i = 0; i < 13; i++) {
        ((u8 *)arg1)[i] = data.b[i];
    }
    for (i = 0; i < 4; i++) {
        ((u8 *)arg1)[16 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].a;
        ((u8 *)arg1)[17 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].b;
        ((u8 *)arg1)[18 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].c;
        ((u8 *)arg1)[19 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].d;
        ((u8 *)arg1)[20 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].e >> 8;
        ((u8 *)arg1)[21 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].e & 0xFF;
        ((u8 *)arg1)[22 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].f;
        ((u8 *)arg1)[23 + i * 8] = ((func_80141BD0_StructEntry *)arg0)[i].g;
    }
    sum = 0;
    for (i = 0; i < 255; i++) {
        sum += ((u8 *)arg1)[i];
    }
    ((u8 *)arg1)[i] = sum;
}
