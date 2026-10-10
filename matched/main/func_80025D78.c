#include "context.h"

typedef struct func_80025D78_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x1A];
    u8 unk21;
    u8 unk22;
    u8 pad23;
    u8 unk24;
    u8 pad25[0x27];
    u16 unk4C;
} func_80025D78_Struct;

extern void func_80023D04();
extern void func_80024358(void *);

void func_80025D78(void) {
    s32 temp_v1;

    ((func_80025D78_Struct *) D_800CBDA4)->unk21 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((func_80025D78_Struct *) D_800CBDA4)->unk22 = *D_800CBDA0;
    D_800CBDA0 += 1;
    if ((s32) D_800CBAB4 < 0x10) {
        temp_v1 = ((func_80025D78_Struct *) D_800CBDA4)->unk22;
        if (temp_v1 == 0) {
            ((func_80025D78_Struct *) D_800CBDA4)->unk24 = 0;
        } else {
            ((func_80025D78_Struct *) D_800CBDA4)->unk24 = (u8) ((s32) (((func_80025D78_Struct *) D_800CBDA4)->unk21 * temp_v1) >> 7);
            if (((func_80025D78_Struct *) D_800CBDA4)->unk24 == 0) {
                ((func_80025D78_Struct *) D_800CBDA4)->unk24 = 1;
            }
        }
        ((func_80025D78_Struct *) D_800CBDA4)->unk6 = (u8) (((func_80025D78_Struct *) D_800CBDA4)->unk6 | 1);
        if (((func_80025D78_Struct *) D_800CBDA4)->unk4C != 0) {
            func_80024358(&D_800CBDA4);
        }
        if (((func_80025D78_Struct *) D_800CBDA4)->unk6 & 1) {
            func_80023D04();
        }
    }
}
