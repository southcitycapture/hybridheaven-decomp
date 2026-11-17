#include "common.h"
extern u8 D_801842A0[];


typedef struct {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x2D4 - 8];
    u8 *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[0x375 - 0x2DA];
    u8 unk375;
    u8 unk376;
    u8 unk377;
    u8 unk378[5];
    u8 unk37D;
    u8 pad37E[2];
    u8 *unk380;
} func_8013CD04_Struct;

s8 func_8013CC10(func_8013CD04_Struct *, u8, u8);
extern u8 D_8017DEE4[][4];
extern u8 D_8017DEEC[][5];
extern u8 D_8017DEF8[][6];
extern u8 D_8017DF04[][7];
extern u8 D_8017DF14[][7];
extern u8 D_8017DF2C[][7];
extern u8 D_801BBBF0[];

s32 func_8013CD04(func_8013CD04_Struct *arg0, u8 arg1, u8 arg2) {
    u8 *p;
    u8 *tbl;
    s32 idx;
    u8 i;
    s32 j;
    u8 n;
    s32 r;

    if (arg0 == (func_8013CD04_Struct *)(D_801BBBF0 + 0x7E8) && arg1 >= 2) {
        idx = arg1;
    } else {
        idx = arg1;
    }
    if (arg0 == (func_8013CD04_Struct *)(D_801BBBF0 + 0x44C)) {
        tbl = D_8017DF14[idx - 2];
    } else {
        tbl = D_8017DF2C[idx - 2];
    }
    arg0->unk375 = 0;
    arg0->unk377 = arg2;
    if (arg0->unk377 == 0) {
        if (idx < 2) {
            if (arg0->unk6 == 500) {
                arg0->unk376 = 4;
                arg0->unk380 = &D_8017DF04[arg1][1];
                for (j = 0; j < 5; j = (j + 1) & 0xFF) {
                    arg0->unk378[j] = D_8017DF04[arg1][j + 1];
                }
            } else if (arg0->unk6 >= 400) {
                arg0->unk376 = 3;
                arg0->unk380 = &D_8017DEF8[arg1][1];
                for (j = 0; j < 4; j = (j + 1) & 0xFF) {
                    arg0->unk378[j] = D_8017DEF8[arg1][j + 1];
                }
            } else if (arg0->unk6 >= 300) {
                arg0->unk376 = 2;
                arg0->unk380 = &D_8017DEEC[arg1][1];
                for (j = 0; j < 3; j = (j + 1) & 0xFF) {
                    arg0->unk378[j] = D_8017DEEC[arg1][j + 1];
                }
            } else if (arg0->unk6 >= 200) {
                arg0->unk376 = 1;
                arg0->unk380 = &D_8017DEE4[arg1][1];
                for (j = 0; j < 2; j = (j + 1) & 0xFF) {
                    arg0->unk378[j] = D_8017DEE4[arg1][j + 1];
                }
            }
        } else {
            n = idx - 2;
            arg0->unk376 = tbl[0] - 1;
            arg0->unk380 = tbl + 1;
            for (j = 0; j < tbl[0]; j = (j + 1) & 0xFF) {
                arg0->unk378[j] = arg0->unk380[j];
            }
            r = func_8013CC10(arg0, arg0->unk376, n);
            if (r != 0) {
                tbl[6] = r & 0xFF;
                arg0->unk37D = r;
                arg0->unk376++;
            }
        }
        arg0->unk2D9 = *arg0->unk380;
        arg0->unk2D4 = D_801842A0 + arg0->unk2D9 * 0x1C;
    } else {
        if (arg0->unk6 == 500) {
            arg0->unk376 = 4;
        } else if (arg0->unk6 >= 400) {
            arg0->unk376 = 3;
        } else if (arg0->unk6 >= 300) {
            arg0->unk376 = 2;
        } else if (arg0->unk6 >= 200) {
            arg0->unk376 = 1;
        } else {
            arg0->unk376 = 0;
        }
        arg0->unk380 = arg0->unk378;
        *arg0->unk380 = arg0->unk2D9;
        arg0->unk2D4 = D_801842A0 + arg0->unk2D9 * 0x1C;
    }
    return 1;
}
