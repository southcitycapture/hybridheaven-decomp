#include "context.h"

typedef struct func_801300E8_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x324 - 0x32];
    f32 unk324;
    u8 pad328[0x112C - 0x328];
    s32 unk112C;
    f32 unk1130;
    u8 pad1134[4];
    s32 unk1138;
    u8 pad113C[8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
} func_801300E8_Struct;

extern void func_801518D4(s32, u8, s32);
extern f64 D_8018D670;

#define G ((func_801300E8_Struct *)D_801BBBF0)

void func_801300E8(void) {
    s32 v;
    s32 n;
    f32 a;

    if (G->unk112C != 0) {
        if ((G->unk30 % 7) == 0) {
            v = (s32)(((f64)G->unk1130 * 5.0) / 7.0);
            if (v >= 8) {
                v = 7;
            }
            func_801518D4(0, v, 8);
        }
        if (G->unk1138 != 0) {
            if (--G->unk1138 == 0) {
                G->unk112C = 0;
                G->unk114C = 0.0f;
                return;
            }
        }
        if (!(G->unk1138 & 1)) {
            if (G->unk1130 > 0.0f) {
                G->unk324 = G->unk1130;
                if (G->unk1130 <= G->unk1148) {
                    G->unk1130 = G->unk1130 * G->unk1144;
                }
                G->unk1130 = -G->unk1130;
            } else {
                G->unk324 = G->unk1130;
                G->unk1130 = -G->unk1130;
            }
            if (G->unk1130 < 0.0f) {
                a = -G->unk1130;
            } else {
                a = G->unk1130;
            }
            if (a < D_8018D670) {
                G->unk112C = 0;
                G->unk324 = 0.0f;
            }
        }
    }
}
