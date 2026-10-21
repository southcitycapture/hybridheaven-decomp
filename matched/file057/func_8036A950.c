#include "context.h"

s32 func_8036A950(struct func_80369C7C_Obj1 *arg0) {
    u8 *p;
    u8 *q;
    struct func_80369C7C_Obj1 *o;
    s32 a;
    s16 x;
    s16 y;
    s16 d;
    s32 t;

    if (arg0 == D_801BBBF0.unkDC) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        q = D_801BC03C;
    } else {
        q = D_801BC3D8;
    }
    t = p[0x2D8];
    if (t == 6) {
        return 1;
    }
    if (t == 8 || t == 0xC || t == 0x13) {
        if (arg0 != D_801BBBF0.unkDC) {
            o = D_801BBBF0.unkDC;
        } else {
            o = D_801BBBF0.unkEC;
        }
        x = ((((u32)(*(s32 *)(q + 0x30) << 11) >> 30) == 1) ? 0x1000 : 0) + o->unk24->unk2C->unk12;
        x &= 0x1FFF;
        y = (a = ((arg0 != D_801BBBF0.unkDC) ? 0 : 0x1000)) + D_801BBBF0.unkB98;
        y &= 0x1FFF;
        d = y - x;
        if (((d & 0x1000) ? (d & 0x1FFF) - 0x2000 : d & 0x1FFF) < 0x800) {
            return 1;
        }
    }
    return 0;
}
