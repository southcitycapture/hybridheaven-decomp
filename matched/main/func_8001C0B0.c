#include "common.h"
#include "common.h"
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define zU_14 u16
#define zU_15 u16
#define zU_16 u16
#define zU_33 u16
#define zU_34 u16
#define zU_35 u16
#define zU_47 u16
#define zU_48 u16
#define zU_49 u16
#define zU_65 u16
#define zU_105 u16
#define zU_116 u16
#define zU_120 u16
#define zU_156 u16
#define zU_168 u16
#define zU_183 u16
#define zU_249 u16
#define zU_263 u16
#define zU_294 u16
#define zU_297 u16
#define zU_298 u16
#define zU_299 u16
#define zU_305 u16
#define zU_349 u16
#define zU_350 u16
#define zU_351 u16
#define zU_352 u16
#define zU_356 u16
#define zU_358 u16
#define zU_359 u16
#define zU_366 u16
#define zU_367 u16
#define zU_408 u8
#define zU_409 u8
#define zU_410 u8
#define zU_411 u8
#define zU_412 u8
#define zU_413 u16
#define zU_419 u16
#define zU_420 u16
#define zU_425 u16
#define zU_430 u16
#define zU_431 u16
#define zU_432 u16
#define zU_436 u16
#define zU_437 u16
#define zU_438 u16
#define zU_439 u16
#define zU_488 u16
#define zU_496 u16
#define zU_497 u16
#define zU_498 u16
#define zU_572 u16
#define zU_574 u16
#define zU_591 u16
#define zU_592 u16
#define zU_593 u16
#define zU_607 u16
#define zU_608 u16
#define zU_625 u16
#define u16 ZP(zU, __LINE__)
typedef struct func_8001ADD4_Blk700 { u8 d[0x700]; } func_8001ADD4_Blk700;
extern func_8001ADD4_Blk700 D_800F51C0[];
extern s64 D_801077C0[];
void func_8001BFE4(u8 arg0, u16 arg1);

#undef u16

typedef struct func_8001C0B0_Struct { u8 d[6]; } func_8001C0B0_Struct;
extern func_8001C0B0_Struct D_80044638;
extern func_8001C0B0_Struct D_80044640;

void func_8001C0B0(u8 arg0, u16 arg1, u8 arg2, u16 arg3) {
    s32 i;
    s32 j;
    s32 pad;
    func_8001C0B0_Struct a = D_80044638;
    func_8001C0B0_Struct b = D_80044640;
    s32 k;
    u8 *src;
    u8 n;
    u8 *dst;

    src = (u8 *)D_801077C0 + b.d[arg2];
    func_8001BFE4(arg2, arg3);
    n = a.d[arg2];
    k = 0;
    if (!(arg0 & 1)) {
        if (!(arg3 & 1)) {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    dst[i * 0x80 + j]&= 0x33;
                    dst[i * 0x80 + j]|= src[k] & 0xCC;
                    k++;
                }
            }
        } else {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    dst[i * 0x80 + j]&= 0x33;
                    dst[i * 0x80 + j]|= (src[k] & 0x33) << 2;
                    k++;
                }
            }
        }
    } else {
        if (!(arg3 & 1)) {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    dst[i * 0x80 + j]&= 0xCC;
                    dst[i * 0x80 + j]|= (src[k] & 0xCC) >> 2;
                    k++;
                }
            }
        } else {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    dst[i * 0x80 + j]&= 0xCC;
                    dst[i * 0x80 + j]|= src[k] & 0x33;
                    k++;
                }
            }
        }
    }
}
