#include "context.h"

struct func_80376300_Struct2 { u8 pad[0x12]; s16 unk12; };
struct func_80376300_Struct1 { u8 pad[0x2C]; struct func_80376300_Struct2 *unk2C; };
struct func_80376300_Struct0 { u8 pad[0x24]; struct func_80376300_Struct1 *unk24; };
struct func_80376300_Struct {
    u8 pad[0xDC];
    struct func_80376300_Struct0 *unkDC;
    u8 pad2[0xEC - 0xE0];
    struct func_80376300_Struct0 *unkEC;
    u8 pad3[0xB98 - 0xF0];
    s16 unkB98;
};

#define G ((struct func_80376300_Struct *)base)
#define WRAP(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))

s32 func_80376300(s32 arg0) {
    u32 p;
    u32 base;
    s16 b, a, d;
    b = (p = arg0 - 0x7E8, base = (u32)D_801BBBF0, base == p) ? G->unkDC->unk24->unk2C->unk12 : G->unkEC->unk24->unk2C->unk12;
    a = (p == base) ? G->unkB98 : G->unkB98 + 0x1000;
    d = a - b;
    if (ABS(WRAP(d)) < 0x800) {
        return 1;
    }
    return 0;
}
