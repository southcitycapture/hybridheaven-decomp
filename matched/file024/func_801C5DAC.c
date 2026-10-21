#include "context.h"
extern void func_801472C0(void *, s32, s32, s32, s32);
extern u8 *D_801CFD90[];
extern s8 D_801CFDA6[];
typedef struct func_801C5DAC_Struct {
    u8 pad[0x10];
    struct func_801C5DAC_Struct *unk10;
} func_801C5DAC_Struct;

void func_801C5DAC(u8 *arg0) {
    u8 i;
    u8 j;
    func_801C5DAC_Struct *p;

    p = (func_801C5DAC_Struct *)D_801CFD90[arg0[0x90]];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if ((i == 0 && D_801CFDA6[arg0[0x90]] == 1) || (i == 1 && D_801CFDA6[arg0[0x90]] == 2)) {
                func_80147250(p, 0xFF, 0xCF, 0xCF, 0xFF);
                func_801472C0(p, 0xFF, 0x20, 0x20, 0xFF);
            } else {
                func_80147250(p, 0x60, 0x30, 0x30, 0xFF);
                func_801472C0(p, 0x40, 0, 0, 0xFF);
            }
            p = p->unk10;
        }
    }
}
