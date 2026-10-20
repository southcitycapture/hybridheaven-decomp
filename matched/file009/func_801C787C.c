#include "context.h"

struct func_801C787C_StructV { f32 x, y, z; };
struct func_801C787C_StructG {
    u8 pad[0xEC4];
    s32 unkEC4;
    u8 padEC8[0xED8 - 0xEC8];
    struct func_801C787C_StructV v[2];
    u8 padEF0[0xEF6 - 0xEF0];
    u8 unkEF6;
};
struct func_801C787C_StructA {
    u8 pad[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x44 - 0x34];
    f32 unk44;
    u8 pad48[0x58 - 0x48];
    s32 unk58;
};
extern u16 func_801C5A5C(void *);
struct func_801C787C_StructP { s32 a, b; };
extern struct func_801C787C_StructP D_801E0B78;
extern f64 D_801E2ED8;
#define G ((struct func_801C787C_StructG *)&D_801BBBF0)

void func_801C787C(struct func_801C787C_StructA *arg0) {
    struct func_801C787C_StructV sp60[2];
    f32 sp58[2];
    u8 i;
    u16 sp54;

    *(struct func_801C787C_StructP *)sp58 = D_801E0B78;
    if (arg0->unk2C & 0x100) {
        if (arg0->unk30 & 4) {
            arg0->unk30 |= 2;
        } else {
            arg0->unk30 &= ~2;
        }
        arg0->unk30 &= ~4;
        arg0->unk30 &= ~8;
        sp54 = func_801C5A5C(arg0);
        arg0->unk58 = G->unkEC4;
        if (sp54 != 0) {
            i = 0;
            do {
                sp60[i].x = G->v[i].x;
                sp60[i].y = G->v[i].y;
                sp60[i].z = G->v[i].z;
                sp58[i] = G->v[i].x * G->v[i].x + G->v[i].y * G->v[i].y + G->v[i].z * G->v[i].z;
                sp58[i] = func_8002FC20(sp58[i]);
                if ((f64)sp58[i] != 0.0) {
                    sp60[i].y = sp60[i].y / sp58[i];
                } else {
                    sp60[i].y = 5.0f;
                }
                i++;
            } while (i < 2);
            if ((sp54 & 1) && G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                arg0->unk30 |= 4;
                arg0->unk44 = 0.0f;
            }
            if ((sp54 & 0x20) && G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                arg0->unk44 = 0.0f;
            }
            if ((sp54 & 0xFDE) && (f64)sp60[1].y != 5.0) {
                if ((f64)(sp60[1].y < 0.0f ? -sp60[1].y : sp60[1].y) < D_801E2ED8) {
                    arg0->unk30 |= 8;
                    return;
                }
                if (G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                    arg0->unk44 = 0.0f;
                    arg0->unk30 |= 4;
                }
            }
        }
    }
}
