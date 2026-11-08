#include "common.h"
extern s32 D_801E3C2C;
extern s32 D_801E3C30;
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);


extern f32 D_801E3C34;
extern f32 D_801E3C38;
extern f32 D_801E3C3C;

s32 func_801E1D74(void) {
    f32 temp_fv0;
    f32 var_fv1;
    f32 var_fa0;

    temp_fv0 = (f32) D_801E3C2C / 30.0f;

    switch ((u32) D_801E3C30) {
        case 0:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 1;
            } else {
                var_fa0 = 40.0f;
                D_801E3C34 = (87.0f * temp_fv0) + var_fa0;
                var_fv1 = (215.0f * temp_fv0) + var_fa0;
                D_801E3C38 = var_fv1;
                D_801E3C3C = var_fv1;
            }
            break;
        case 1:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 2;
            } else {
                D_801E3C34 = (-87.0f * temp_fv0) + 127.0f;
                var_fv1 = (-215.0f * temp_fv0) + 255.0f;
                D_801E3C38 = var_fv1;
                D_801E3C3C = var_fv1;
            }
            break;
        case 2:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 3;
            } else {
                var_fa0 = 40.0f;
                var_fv1 = (87.0f * temp_fv0) + var_fa0;
                D_801E3C34 = var_fv1;
                D_801E3C38 = (215.0f * temp_fv0) + var_fa0;
                D_801E3C3C = var_fv1;
            }
            break;
        case 3:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 4;
            } else {
                var_fv1 = (-87.0f * temp_fv0) + 127.0f;
                D_801E3C34 = var_fv1;
                D_801E3C38 = (-215.0f * temp_fv0) + 255.0f;
                D_801E3C3C = var_fv1;
            }
            break;
        case 4:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 5;
            } else {
                var_fa0 = 40.0f;
                var_fv1 = (215.0f * temp_fv0) + var_fa0;
                D_801E3C34 = var_fv1;
                D_801E3C38 = var_fv1;
                D_801E3C3C = (87.0f * temp_fv0) + var_fa0;
            }
            break;
        case 5:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 6;
            } else {
                var_fv1 = (-215.0f * temp_fv0) + 255.0f;
                D_801E3C34 = var_fv1;
                D_801E3C38 = var_fv1;
                D_801E3C3C = (-87.0f * temp_fv0) + 127.0f;
            }
            break;
        case 6:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 7;
            } else {
                var_fa0 = 40.0f;
                D_801E3C34 = (215.0f * temp_fv0) + var_fa0;
                var_fv1 = (87.0f * temp_fv0) + var_fa0;
                D_801E3C38 = var_fv1;
                D_801E3C3C = var_fv1;
            }
            break;
        case 7:
            if (D_801E3C2C >= 30) {
                D_801E3C2C = 0;
                D_801E3C30 = 0;
            } else {
                D_801E3C34 = (-215.0f * temp_fv0) + 255.0f;
                var_fv1 = (-87.0f * temp_fv0) + 127.0f;
                D_801E3C38 = var_fv1;
                D_801E3C3C = var_fv1;
            }
            break;
    }

    func_801CCE50(((u32) D_801E3C34) & 0xFF, ((u32) D_801E3C38) & 0xFF,
                  ((u32) D_801E3C3C) & 0xFF);
    D_801E3C2C = D_801E3C2C + 1;
}
