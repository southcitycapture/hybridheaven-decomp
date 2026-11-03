#include "common.h"
extern u8 D_801BBBF0[];
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
#define g ((struct func_801CB71C_Struct2 *)&D_801BBBF0)

extern void func_800208C4(u16);
extern s32 func_80020DAC(u16);
extern u8 D_801E0C84;
extern u8 B_801E0C84;
extern f32 func_8002FC20(f32);
#undef g

struct func_801C8C28_Pos { u8 pad[4]; f32 x; f32 y; f32 z; };
struct func_801C8C28_E { u8 pad0[6]; s16 unk6; s16 unk8; s16 unkA; s16 unkC; u8 pad1[4]; u16 unk12; u8 pad2[0x20 - 0x14]; };
struct func_801C8C28_Arg { u8 pad0[0x38]; struct func_801C8C28_E *unk38; };
struct func_801C8C28_B { u8 pad[0x2C]; struct func_801C8C28_Pos *unk2C; };
struct func_801C8C28_A { u8 pad[0x24]; s32 unk24; };
struct func_801C8C28_G { u8 pad[0x2C]; u16 unk2C; u8 pad2[0xDC-0x2E]; struct func_801C8C28_A *unkDC; struct func_801C8C28_B *unkE0; u8 pad3[0xF5-0xE4]; u8 unkF5; };

void func_801C8C28(struct func_801C8C28_Arg *arg0, s32 arg1) {
#define g ((struct func_801C8C28_G *)&D_801BBBF0)
    f32 v[4];
    f32 dx, dy, dz;
    f32 d;
    s8 i;
    struct func_801C8C28_Pos *p;

    if (g->unkDC != NULL) {
      if (g->unkDC->unk24 != 0 && g->unkF5 != 0) {
        if (g->unk2C == 4) {
            for (i = 1; (f32)arg0->unk38[i].unk6 / 10.0 != 0.0; i++) {
                v[0] = (f32)arg0->unk38[i].unk6 / 10.0;
                v[1] = (f32)arg0->unk38[i].unk8 / 10.0;
                v[2] = (f32)arg0->unk38[i].unkA / 10.0;
                p = g->unkE0->unk2C;
                dz = p->z - v[2];
                dx = p->x - v[0];
                dy = p->y - v[1];
                d = func_8002FC20(dz * dz + (dx * dx + dy * dy));
                if (!(d < (f32)arg0->unk38[i].unkC)) goto next;
                if (D_801E0C84 == 0 && func_80020DAC(arg0->unk38[i].unk12) == 0) {
                    func_800208C4(arg0->unk38[i].unk12);
                    B_801E0C84 = 1;
                }
                return;
next:;
            }
        }
        D_801E0C84 = 0;
      }
    }
}
