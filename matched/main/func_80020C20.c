#include "common.h"
extern u8 D_800CBAB1;
extern u8 D_800CBB90[];
extern u8 D_800CBB91[];
typedef struct func_80021094_Struct {
    u16 unk0;
    u16 unk2;
} func_80021094_Struct;
extern func_80021094_Struct D_800CBB98[][16];
extern void (*D_80047E0C[])(void);


typedef struct { unsigned value : 32; } func_80020C20_StructWord;

void func_80020C20(s32 arg0, s32 arg1)
{
    s32 bank;
    s32 index;
    s32 i;

    arg0 = (u16)*(s32 *)&arg0;
    if ((s32)((func_80020C20_StructWord *)&arg0)->value >= 0x300) {
        D_800CBAB1 = 0xFF;
        bank = 0;
        if (D_800CBB90[bank] < 16) {
            if (D_800CBB90[bank] >= 4) {
                index = D_800CBB91[bank];
                for (i = 0; i < D_800CBB90[bank]; i++) {
                    if ((s32)((func_80020C20_StructWord *)&arg0)->value == D_800CBB98[bank][index].unk0) {
                        D_800CBB98[bank][index].unk0 = 0;
                        D_800CBB98[bank][index].unk2 = 0;
                        break;
                    }
                    index++;
                    if (index >= 16) {
                        index = 0;
                    }
                }
            }
            index = D_800CBB91[bank] + D_800CBB90[bank];
            if (index >= 16) {
                index -= 16;
            }
            D_800CBB98[bank][index].unk0 = arg0;
            D_800CBB98[bank][index].unk2 = *(u16 *)((u8 *)&arg1 + 2) / 5;
            D_800CBB90[bank]++;
        }
        D_800CBAB1 = 0;
    }
}
