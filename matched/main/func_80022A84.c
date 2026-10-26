#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern s32 D_800498F0;
extern u8 D_800CBAB8;
extern u8 D_800CBBE0[];
extern void (*D_80047E0C[])(void);
extern void *D_800CBDA4;

extern void func_8002B380(s32, void *, s32, s32);

typedef struct func_80022A84_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x58 - 7];
    u16 unk58;
    u8 pad5A[0xAC - 0x5A];
    s16 unkAC;
    u8 padAE[0xCA - 0xAE];
    s16 unkCA;
} func_80022A84_Struct;

typedef struct func_80022A84_Ent {
    u8 pad[0x1C];
} func_80022A84_Ent;

void func_80022A84(u8 arg0) {
    s16 temp_a0;
    s16 var_v0;
    s32 temp_a3;
    u8 *ent;
    func_80022A84_Struct *p;

    temp_a3 = arg0 & 0xFF;
    if (temp_a3 < 0x10) {
        ((func_80022A84_Struct *)D_800CBDA4)->unk6 |= 1;
        if (D_800CBAB8 != 0) {
            var_v0 = 0x40;
        } else {
            temp_a0 = ((func_80022A84_Struct *)D_800CBDA4)->unkCA;
            var_v0 = (((func_80022A84_Struct *)D_800CBDA4)->unk58 >> 8) & 0x7F;
            var_v0 += ((func_80022A84_Struct *)D_800CBDA4)->unkAC;
            if (temp_a0 != 0) {
                var_v0 += temp_a0 / 256;
            }
            if (var_v0 < 0) {
                var_v0 = 0;
            } else if (var_v0 >= 0x80) {
                var_v0 = 0x7F;
            }
        }
        func_8002B380(D_800498F0, &((func_80022A84_Ent *)D_800CBBE0)[temp_a3], var_v0 & 0xFF, temp_a3);
    }
}
