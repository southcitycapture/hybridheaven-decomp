#include "common.h"
#include "common.h"
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define zU_11 u16
#define zU_12 u16
#define zU_13 u16
#define zU_19 u16
#define zU_20 u16
#define zU_21 u16
#define zU_36 u16
#define zU_37 u16
#define zU_38 u16
#define zU_58 u16
#define zU_59 u16
#define zU_60 u16
#define zU_72 u16
#define zU_73 u16
#define zU_74 u16
#define zU_99 u16
#define zU_139 u16
#define zU_150 u16
#define zU_154 u16
#define zU_190 u16
#define zU_202 u16
#define zU_217 u16
#define zU_283 u16
#define zU_297 u16
#define zU_328 u16
#define zU_331 u16
#define zU_332 u16
#define zU_333 u16
#define zU_339 u16
#define zU_383 u16
#define zU_384 u16
#define zU_385 u16
#define zU_386 u16
#define zU_390 u16
#define zU_392 u16
#define zU_393 u16
#define zU_400 u16
#define zU_401 u16
#define zU_442 u8
#define zU_443 u8
#define zU_444 u8
#define zU_445 u8
#define zU_446 u8
#define zU_447 u16
#define zU_453 u16
#define zU_454 u16
#define zU_459 u16
#define zU_464 u16
#define zU_465 u16
#define zU_466 u16
#define zU_470 u16
#define zU_471 u16
#define zU_472 u16
#define zU_473 u16
#define zU_523 u16
#define zU_530 u16
#define zU_542 u16
#define zU_550 u16
#define zU_551 u16
#define zU_552 u16
#define zU_626 u16
#define zU_628 u16
#define zU_666 u16
#define zU_667 u16
#define zU_668 u16
#define zU_682 u16
#define zU_683 u16
#define zU_684 u16
#define zU_709 u16
#define zU_710 u16
#define zU_727 u16
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
    s32 idx;
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
                    idx = i * 0x80;
                    dst[idx + j]&= 0x33;
                    dst[idx + j]|= src[k] & 0xCC;
                    k++;
                }
            }
        } else {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    idx = i * 0x80;
                    dst[idx + j]&= 0x33;
                    dst[idx + j]|= (src[k] & 0x33) << 2;
                    k++;
                }
            }
        }
    } else {
        if (!(arg3 & 1)) {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    idx = i * 0x80;
                    dst[idx + j]&= 0xCC;
                    dst[idx + j]|= (src[k] & 0xCC) >> 2;
                    k++;
                }
            }
        } else {
            for (i = 0; i < 13; i++) {
                for (j = 0; j < n; j++) {
                    dst = (u8 *)D_800F51C0 + (arg1 / 2 + (arg0 >> 1) * 0x700);
                    idx = i * 0x80;
                    dst[idx + j]&= 0xCC;
                    dst[idx + j]|= src[k] & 0x33;
                    k++;
                }
            }
        }
    }
}
