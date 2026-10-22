#include "context.h"

typedef struct func_80152D4C_Struct {
    u8 pad0[0x18];
    u16 unk18[5];
} func_80152D4C_Struct;

extern s32 func_8012C6B4(s32 arg0);
extern u16 func_80152980(s32 arg0, s32 arg1);

void func_80152D4C(void) {
    u8 sp[5];
    u8 v;
    u8 j;
    u8 n;
    u8 t;

    n = 0;
    v = func_80152890(0) - 2;
    if (v < 5) {
        ((func_80152D4C_Struct *)&D_8017DD7C)->unk18[2] =
            (((func_80152D4C_Struct *)&D_8017DD7C)->unk18[1] =
                 (((func_80152D4C_Struct *)&D_8017DD7C)->unk18[0] = 0x51, 0x52),
             0x50);
        ((func_80152D4C_Struct *)&D_8017DD7C)->unk18[4] =
            (((func_80152D4C_Struct *)&D_8017DD7C)->unk18[3] = 0x53, 0xF9);
        return;
    }
    do {
        sp[n] = func_8012C6B4(v) + 2;
        if (!n) {
            n++;
        } else if (n == 1 && sp[1] != sp[0]) {
            n++;
        } else if (n == 2 && sp[2] != sp[1] && sp[2] != sp[0]) {
            n++;
        } else if (n == 3 && sp[3] != sp[2] && sp[3] != sp[1] && sp[3] != sp[0]) {
            n++;
        } else if (n == 4 && sp[4] != sp[3] && sp[4] != sp[2] && sp[4] != sp[1] && sp[4] != sp[0]) {
            n++;
        }
    } while (n < 5);
    for (n = 0; n < 5; n++) {
        for (j = 0; j < 5; j++) {
            if (n < j) {
                if (sp[j] < sp[n]) {
                    t = sp[n];
                    sp[n] = sp[j];
                    sp[j] = t;
                }
            }
        }
    }
    for (n = 0; n < 5; n++) {
        ((func_80152D4C_Struct *)&D_8017DD7C)->unk18[n] = func_80152980(0, sp[n]);
    }
}
