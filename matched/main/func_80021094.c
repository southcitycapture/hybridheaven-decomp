#include "context.h"

typedef struct func_80021094_Struct {
    u16 unk0;
    u16 unk2;
} func_80021094_Struct;

extern u8 D_800CBB91[];
extern s32 D_800CBB48;
void func_80021968(s32);
extern func_80021094_Struct D_800CBB98[][16];

void func_80021094(void) {
    s32 i;
    u8 t;
    func_80021094_Struct *p;

    for (i = 0; i != 1; i++) {
        if (D_800CBBD8[i] == 0) {
            if (D_800CBB90[i] != 0) {
                p = &D_800CBB98[i][D_800CBB91[i]];
                if (p->unk2 != 0) {
                    p->unk2--;
                } else {
                    if (p->unk0 != 0) {
                        D_800CBB48 = p->unk0;
                        func_80021968(0);
                    }
                    D_800CBB90[i]--;
                    D_800CBB91[i]++;
                    if (D_800CBB91[i] >= 0x10) {
                        D_800CBB91[i] = 0;
                    }
                }
            }
        }
    }
}
