#include "common.h"


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

typedef struct func_8001A584_StructIter {
    func_8001A584_StructObj **arg1;
    func_8001A584_StructEnt *e;
    s32 i;
    s32 end;
} func_8001A584_StructIter;

void func_8001A584(s32 arg0, func_8001A584_StructObj **a1) {
    func_8001A584_StructIter iter;

    for (iter.e = D_8008EEA0, iter.arg1 = a1, iter.i = 0, iter.end = 0x28;
         iter.i != iter.end; iter.i += 4) {
        if (iter.e->flag == 1) {
            iter.e->flag = 0;
            (*iter.arg1)->out->x = iter.e->x;
            (*iter.arg1)->out->y = iter.e->y;
            (*iter.arg1)->out->b4 = iter.e->b6;
            (*iter.arg1)->out->b5 = iter.e->b7;
            (*iter.arg1)->out->b6 = iter.e->b8;
            (*iter.arg1)->out->b7 = iter.e->b9;
            (*iter.arg1)->out->b8 = iter.e->bA;
            (*iter.arg1)->out->b9 = iter.e->bB;
            (*iter.arg1)->out->bA = iter.e->bC;
            (*iter.arg1)->out->bB = iter.e->bD;
            (*iter.arg1)->out->w0C = iter.e->w0E;
            (*iter.arg1)->out->w0E = iter.e->w10;
            (*iter.arg1)->out->w10 = iter.e->w12;
            if (iter.e->x == 0x7D0) {
                (*iter.arg1)->out->x = (0x140 - iter.e->w0E) / 2;
            }
        }
        iter.e++;
        iter.arg1++;
    }
    if (D_801BBF8E == 0) {
        (*iter.arg1)->out->b7 = 0;
        return;
    }
    if (func_801302CC() == 0) {
        (*iter.arg1)->out->x = 0xC5;
        (*iter.arg1)->out->y = 0x8F;
        (*iter.arg1)->out->w0C = 0x50;
        (*iter.arg1)->out->w0E = 0x50;
    } else {
        (*iter.arg1)->out->x = 0xF1;
        (*iter.arg1)->out->y = 0x88;
        (*iter.arg1)->out->w0C = 0x3C;
        (*iter.arg1)->out->w0E = 0x3C;
    }
    (*iter.arg1)->out->b4 = 0;
    (*iter.arg1)->out->b5 = 0;
    (*iter.arg1)->out->b6 = 0;
    (*iter.arg1)->out->b7 = 0x60;
    (*iter.arg1)->out->b8 = 0;
    (*iter.arg1)->out->b9 = 0;
    (*iter.arg1)->out->bA = 0;
    (*iter.arg1)->out->bB = 0;
    (*iter.arg1)->out->w10 = 0;
    D_801BBF8E = 0;
}
