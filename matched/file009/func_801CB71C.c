#include "common.h"
struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};
struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};
extern struct func_801C3D90_StructA D_801BBBF0;
extern void func_800058DC(void *, void *);


struct func_801CB71C_Struct3 { u8 pad[0x24]; s32 unk24; };
struct func_801CB71C_Struct4 { u8 pad[0x4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801CB71C_Struct5 { u8 pad[0x2C]; struct func_801CB71C_Struct4 *unk2C; };
struct func_801CB71C_Struct2 {
    u8 pad0[0xDC];
    struct func_801CB71C_Struct3 *unkDC;
    struct func_801CB71C_Struct5 *unkE0;
    u8 pad1[0xF5 - 0xE4];
    u8 unkF5;
    u8 pad2[0xEF0 - 0xF6];
    u16 unkEF0;
    u8 pad3[3];
    u8 unkEF5;
    u8 pad4[2];
    s32 unkEF8;
};
struct func_801CB71C_Struct6 { u8 pad[6]; s16 unk6; s16 unk8; s16 unkA; };
struct func_801CB71C_Struct7 { u8 pad0[0x38]; struct func_801CB71C_Struct6 *unk38; u8 pad1[0x98 - 0x3C]; u8 unk98; u8 unk99; u8 pad2[2]; s16 unk9C; };
extern s16 D_801E405C;
extern u8 func_801CB864[];
extern f32 D_8002FC20(f32, void *);

#define g ((struct func_801CB71C_Struct2 *)&D_801BBBF0)
void func_801CB71C(struct func_801CB71C_Struct7 *arg0, s32 arg1) {
    struct func_801CB71C_Struct4 *n;
    struct func_801CB71C_Struct6 *v;
    f64 x, y, z;

    arg0->unk9C = arg0->unk98 = arg0->unk99 = 0;
    if (g->unkDC->unk24 != 0 && g->unkF5 != 0 && g->unkEF5 == 0 && g->unkEF8 != 0 && (g->unkEF0 & 0x20)) {
        n = g->unkE0->unk2C;
        v = arg0->unk38;
        x = (f64)n->unkC - (f64)(f32)v->unkA / 10.0;
        y = (f64)n->unk4 - (f64)(f32)v->unk6 / 10.0;
        z = (f64)n->unk8 - (f64)(f32)v->unk8 / 10.0;
        if ((f64)D_8002FC20((f32)(x * x + (y * y + z * z)), g) < 40.0f) {
            arg0->unk98 = 1;
            D_801E405C = 0;
            func_800058DC(arg0, func_801CB864);
        }
    }
}
