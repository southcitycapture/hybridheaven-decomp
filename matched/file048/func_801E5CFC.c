#include "context.h"

typedef struct func_801E5CFC_S3 { u8 pad[8]; f32 unk8; } func_801E5CFC_S3;
typedef struct func_801E5CFC_S2 { u8 pad[0x30]; func_801E5CFC_S3 *unk30; } func_801E5CFC_S2;
typedef struct func_801E5CFC_S1 { u8 pad[0x24]; func_801E5CFC_S2 *unk24; } func_801E5CFC_S1;
extern f32 D_801EA540;
extern f32 D_801EA544;
extern f32 D_801EA548;

void func_801E5CFC(void) {
    s32 v;
    f32 r;

    v = D_801E9EB0;
    if (v >= 0x14) {
        v = 0;
        if (D_801E9EB4 == 1) {
            D_801E9EB4 = 0;
        } else {
            D_801E9EB4 = 1;
        }
        D_801E9EB0 = 0;
    }
    if (D_801E9EB4 != 0) {
        if (1 == D_801E9EB4) {
            r = (f32)v / 20.0f;
            goto l1;
        l1:
            ((func_801E5CFC_S1 *)D_8038D8D0)->unk24->unk30->unk8 = D_801EA540 * r + 13.0f;
            v = D_801E9EB0;
        }
    } else {
        r = (f32)v / 20.0f;
        goto l2;
    l2:
        ((func_801E5CFC_S1 *)D_8038D8D0)->unk24->unk30->unk8 = D_801EA544 * r + D_801EA548;
        v = D_801E9EB0;
    }
    D_801E9EB0 = v + 1;
}
