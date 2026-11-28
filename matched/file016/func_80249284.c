#include "common.h"
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;


typedef struct func_80249284_StructEnt {
    f32 unk0, unk4, unk8, unkC, unk10, unk14;
    u8 unk18, pad19;
    u16 unk1A;
} func_80249284_StructEnt;
typedef struct func_80249284_StructPos {
    u8 pad0[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80249284_StructPos;
typedef struct func_80249284_StructE8 {
    u8 pad0[0x2C];
    func_80249284_StructPos *unk2C;
} func_80249284_StructE8;
extern void func_8001A804();
extern void func_80020718(s32);
extern f32 func_8002FC20(f32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80130264(void);
extern s32 func_801302CC(void);
extern u8 D_80249DD0[];
extern u8 D_8024F318[];
extern u8 D_8024F330[];
extern u8 D_8024F348[];
extern u8 D_8024F380[];
extern u8 D_8024F520;
extern u8 D_8024F521;
extern u16 D_8024F522;
extern f32 D_8024F524;
extern f32 D_8024F528;
#define BB_E8 (*(func_80249284_StructE8 **)((u8 *)&D_801BBBF0 + 0xE8))
#define BB_DC (*(s32 *)((u8 *)&D_801BBBF0 + 0xDC))

void func_80249284(void) {
    f32 x1, y1, z1, x2, y2, fcount, z2, dx, dy, dz, dx2, dy2, dz2;
    func_80249284_StructEnt *e, *e2;
    func_80249284_StructPos *p;
    s32 type, hi, mode;
    s32 lo;
    u16 count;
    while (1) {
        hi = ((func_80249284_StructEnt *)D_80249DD0)[D_8024F520].unk18;
        count = ((func_80249284_StructEnt *)D_80249DD0)[D_8024F520].unk1A;
        lo = (u8)(hi & 0xf);
        hi = hi & 0xF0;
        if (hi == 0x20) func_80020718(0x219);
        if (hi == 0x10) {
            if (D_8024F522 == 0) {
                if (func_80130264() != 0 && func_801302CC() != 0) {
                    func_8001A804(0, D_8024F318, 0x10, 0x2D, 0x120, 0x96, 0, 0x60, 0, 0x60);
                } else {
                    func_8001A804(0, D_8024F330, 0, 0, 0x140, 0xF0, 0, 0x60, 0, 0x60);
                }
            }
        } else if (D_8024F522 == 0) {
            func_8001A804(0, D_8024F348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        if (lo == 0) return;
        mode = lo ^ 0;
        e = &((func_80249284_StructEnt *)D_80249DD0)[D_8024F520];
        x1 = e->unk0;
        y1 = e->unk4;
        z1 = e->unk8;
        x2 = e->unkC;
        y2 = e->unk10;
        z2 = e->unk14;
        if (mode == 3) {
            if (D_8024F522 >= count) {
                D_8024F520++;
                D_8024F522 = 0;
                return;
            }
            D_8024F522++;
            return;
        }
        if (mode == 2) {
            if (D_8024F521 == 0) {
                p = BB_E8->unk2C;
                dx = p->unk30 - x1;
                dy = p->unk34 - y1;
                dz = p->unk38 - z1;
                fcount = (u32)count;
                D_8024F524 = func_8002FC20(dx * dx + dy * dy + dz * dz) / fcount;
                p = BB_E8->unk2C;
                dx2 = p->unk3C - x2;
                dy2 = p->unk40 - y2;
                dz2 = p->unk44 - z2;
                D_8024F528 = func_8002FC20(dx2 * dx2 + dy2 * dy2 + dz2 * dz2) / fcount;
                D_8024F521 = 1;
            }
        } else {
            D_8024F528 = 1.0f;
            D_8024F524 = 1.0f;
        }
        if (func_8011AAF4(D_8024F380, 0x3E9, BB_DC, 0, lo, D_8024F524, x1, y1, z1, D_8024F528, x2, y2, z2, 0.0f, 35.0f, -1, -1) != 0) return;
        D_8024F521 = 0;
        D_8024F520++;
        if (mode != 2) return;
        if (((func_80249284_StructEnt *)D_80249DD0)[D_8024F520].unk18 != 1) return;
    }
}
