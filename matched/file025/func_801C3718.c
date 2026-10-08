#include "context.h"

extern s32 D_801DA2B0;
extern s32 D_801DA2B4;
extern s32 D_801DA2B8;
extern u8 D_801DA2BC[];
extern u8 D_801DF790;
extern u8 D_801DF791;
extern u8 D_801DF792;
extern u8 D_801DF793;
extern u8 D_801DF794;
extern u8 D_801DF795;
extern u8 D_801DF796;
extern u8 D_801DF797;
extern s16 D_801DF798;
extern u16 D_801DF79A;

s32 func_801C3718(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u16 arg8) {
    if (func_80005670(D_8038D8CC, D_801DA2BC) == 0) {
        return 0;
    }
    D_801DF790 = arg0;
    D_801DF791 = arg1;
    D_801DF792 = arg2;
    D_801DF793 = arg3;
    D_801DF794 = arg4;
    D_801DF795 = arg5;
    D_801DF796 = arg6;
    D_801DF797 = arg7;
    D_801DF798 = 0;
    D_801DF79A = arg8;
    D_801DA2B0 = 1;
    D_801DA2B4 = 1;
    D_801DA2B8 = 0;
    return 1;
}
