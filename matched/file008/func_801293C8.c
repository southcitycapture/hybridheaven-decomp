#include "context.h"

typedef struct func_801293C8_S3 { u8 pad[0x48]; u8 b48, b49, b4A; } func_801293C8_S3;
typedef struct func_801293C8_S2 { u8 pad[0x30]; func_801293C8_S3 *unk30; } func_801293C8_S2;
typedef struct func_801293C8_S1 { u8 pad[0x24]; func_801293C8_S2 *unk24; u8 pad2[0x74]; f32 unk9C; } func_801293C8_S1;
typedef struct func_801293C8_G { u8 pad[0x30]; u16 unk30; u8 pad2[0xB6E]; u16 unkBA0; } func_801293C8_G;
typedef struct func_801293C8_A { u8 pad[0xC]; u16 unkC; } func_801293C8_A;
typedef struct func_801293C8_Arg { u8 pad[0x5C]; func_801293C8_A *unk5C; } func_801293C8_Arg;

extern func_801293C8_S1 *func_8012A0F0(void *, s32, s32, s32, f32, s32);
extern void func_8013A334(s32 *, void *, void *, u16);
extern u8 D_8008DA88[];
extern func_801293C8_G D_801BBBF0;

void func_801293C8(func_801293C8_Arg *arg0, f32 arg1) {
    func_801293C8_A *a2;
    func_801293C8_S1 *r;
    f32 sp3C;
    s32 v;
    u8 pad[8];
    s32 sp24[3];

    a2 = arg0->unk5C;
    if (arg1 != 0.0f) { v = 1; } else { v = 7; }
    if (!(D_801BBBF0.unk30 & v)) {
        D_801BBBF0.unkBA0 += 3;
        if (D_801BBBF0.unkBA0 >= a2->unkC) {
            D_801BBBF0.unkBA0 = (D_801BBBF0.unkBA0 % 3) + 1;
        }
        sp3C = ((f32)func_8012C6B4(10) + 1.0) / 10.0;
        func_8013A334(sp24, D_8008DA88, a2, D_801BBBF0.unkBA0);
        r = func_8012A0F0(arg0, sp24[0], sp24[1], sp24[2], sp3C, 7);
        if (r != NULL) {
            if (arg1 != 0.0f) {
                r->unk24->unk30->b48 = 0xFF;
                r->unk24->unk30->b49 = 0xFF;
                r->unk24->unk30->b4A = 0xFF;
                r->unk9C = arg1;
                return;
            }
            r->unk24->unk30->b48 = 0xFF;
            r->unk24->unk30->b49 = 0xFF;
            r->unk24->unk30->b4A = 0xC8;
            r->unk9C = 0.0f;
        }
    }
}
