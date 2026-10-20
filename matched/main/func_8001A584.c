#include "context.h"

typedef struct func_8001A584_StructOut {
    s16 x;
    s16 y;
    u8 b4, b5, b6, b7, b8, b9, bA, bB;
    u16 w0C;
    u16 w0E;
    u16 w10;
} func_8001A584_StructOut;

typedef struct func_8001A584_StructObj {
    u8 pad[0x2C];
    func_8001A584_StructOut *out;
} func_8001A584_StructObj;

typedef struct func_8001A584_StructEnt {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u8 b6, b7, b8, b9, bA, bB, bC, bD;
    u16 w0E;
    u16 w10;
    u16 w12;
} func_8001A584_StructEnt;

extern func_8001A584_StructEnt D_8008EEA0[];
extern u8 D_801BBF8E;
extern s32 func_801302CC();

void func_8001A584(s32 arg0, func_8001A584_StructObj **a1) {
    u8 pad[12];
    func_8001A584_StructObj **arg1;
    func_8001A584_StructEnt *e;
    s32 i;

    for (e = D_8008EEA0, arg1 = a1, i = 0; i != 0x28; i += 4) {
        if (e->flag == 1) {
            e->flag = 0;
            (*arg1)->out->x = e->x;
            (*arg1)->out->y = e->y;
            (*arg1)->out->b4 = e->b6;
            (*arg1)->out->b5 = e->b7;
            (*arg1)->out->b6 = e->b8;
            (*arg1)->out->b7 = e->b9;
            (*arg1)->out->b8 = e->bA;
            (*arg1)->out->b9 = e->bB;
            (*arg1)->out->bA = e->bC;
            (*arg1)->out->bB = e->bD;
            (*arg1)->out->w0C = e->w0E;
            (*arg1)->out->w0E = e->w10;
            (*arg1)->out->w10 = e->w12;
            if (e->x == 0x7D0) {
                (*arg1)->out->x = (0x140 - e->w0E) / 2;
            }
        }
        e++;
        arg1++;
    }
    if (D_801BBF8E == 0) {
        (*arg1)->out->b7 = 0;
        return;
    }
    if (func_801302CC() == 0) {
        (*arg1)->out->x = 0xC5;
        (*arg1)->out->y = 0x8F;
        (*arg1)->out->w0C = 0x50;
        (*arg1)->out->w0E = 0x50;
    } else {
        (*arg1)->out->x = 0xF1;
        (*arg1)->out->y = 0x88;
        (*arg1)->out->w0C = 0x3C;
        (*arg1)->out->w0E = 0x3C;
    }
    (*arg1)->out->b4 = 0;
    (*arg1)->out->b5 = 0;
    (*arg1)->out->b6 = 0;
    (*arg1)->out->b7 = 0x60;
    (*arg1)->out->b8 = 0;
    (*arg1)->out->b9 = 0;
    (*arg1)->out->bA = 0;
    (*arg1)->out->bB = 0;
    (*arg1)->out->w10 = 0;
    D_801BBF8E = 0;
}
