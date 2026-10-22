#include "context.h"

typedef struct func_80020A7C_Struct {
    u32 unk0;
    u8 pad4[0xA2 - 0x4];
    s16 unkA2[(0xD8 - 0xA2) / 2];
} func_80020A7C_Struct;

extern s16 func_800209E4(u8, u8);

void func_80020A7C(s32 arg0) {
    extern s16 D_80047E00[][2];
    s32 result;
    s32 bound;
    s32 value;
    s32 i;
    u32 index;
    s16 *limits;
    func_8002096C_Struct *config;

    config = &D_800CBAF0[arg0];
    index = config->c;
    for (i = 0; i < 16; i++) {
        D_800CBDA4 = &((func_80020A7C_Struct *)&D_801B5520)[i];
        if (config->a == (((func_80020A7C_Struct *)D_800CBDA4)->unk0 & 0x7FFF)) {
            limits = D_80047E00[index];
            result = func_800209E4(arg0, index);
            value = result;
            if (result < limits[0]) {
                value = limits[0];
            } else if (limits[1] < result) {
                value = limits[1];
            }
            if ((s16)value != ((func_80020A7C_Struct *)D_800CBDA4)->unkA2[index]) {
                ((func_80020A7C_Struct *)D_800CBDA4)->unkA2[index] = value;
            }
        }
    }
}
