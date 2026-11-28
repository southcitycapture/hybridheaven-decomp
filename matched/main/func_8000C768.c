#include "context.h"
typedef func_8000C4A8_StructCmd func_8000C768_StructGfx;
typedef struct func_8000C768_StructSub {
    u16 unk0; u8 pad2[0x22]; u32 unk24; s32 unk28; u16 unk2C; u8 pad2E[2];
    u32 unk30; s32 unk34; u8 pad38[8]; s32 unk40, unk44;
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
    u8 pad50[8]; u16 unk58;
} func_8000C768_StructSub;
typedef struct func_8000C768_StructObj {
    u8 pad0[0x1C]; s32 unk1C; u8 pad20[4]; u32 unk24; u8 pad28[4];
    func_8000C768_StructSub *unk2C, *unk30;
} func_8000C768_StructObj;
extern s32 func_80005204(u16);
extern s32 func_8000671C(void);
extern void func_8000BC78(func_8000C768_StructObj *);
extern func_8000C768_StructGfx D_80043750, D_80043758;
extern s32 D_801BCD48;
typedef struct func_8000C768_StructTile { u32 :20; u32 x:12; u32 :20; u32 y:12; u32 :20; u32 x2:12; u32 :20; u32 y2:12; } func_8000C768_StructTile;
typedef struct func_8000C768_StructRaw { u32 x, y, x2, y2; } func_8000C768_StructRaw;
extern func_8000C768_StructTile *D_801BCD4C;
extern u8 D_801BCD58[], D_801BCD60[], D_801BCD70[];
#define GP D_8008D5BC
typedef struct func_8000C768_StructState { u8 pad[0x4298]; func_8000C768_StructGfx *cur; } func_8000C768_StructState;
#define CUR (((func_8000C768_StructState *)D_800892B0)->cur)
#define G2(a,b) { func_8000C768_StructGfx *_g = GP++; _g->w0 = (a); _g->w1 = (b); }
#define SHL(v,s,w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define FOGPOS(min,max) G2(0xDB080000, (SHL(((500 - (min)) * 256 / ((max) - (min))), 0, 16) | SHL((128000 / ((max) - (min))), 16, 16)))
void func_8000C768(func_8000C768_StructObj *arg0) {
    func_8000C768_StructGfx endA = D_80043750;
    func_8000C768_StructGfx endB = D_80043758;
    u32 t1, a2;
    func_8000C768_StructGfx *t0, *t5;
    func_8000C768_StructSub *t3;
    t5 = NULL; t1 = 0; a2 = 0; t0 = NULL;
    arg0->unk1C = func_8000671C();
    if (arg0->unk2C != NULL) t3 = arg0->unk2C; else t3 = arg0->unk30;
    if (arg0->unk2C != NULL) {
        if (arg0->unk2C->unk58 != 0) G2(0xDB060010, func_80005204(arg0->unk2C->unk58) + 0x80000000);
        if (arg0->unk2C->unk44 != 0) G2(0xDB060028, arg0->unk2C->unk44);
    }
    if (t3->unk40 != 0) G2(0xDB060024, t3->unk40);
    G2(0xDB06000C, func_80005204(t3->unk0) + 0x80000000);
    G2(0xDB060034, func_80005204(t3->unk2C) + 0x80000000);
    {
    u32 w;
    w = t3->unk30;
    if ((w & 0x40000000) || (func_8000C768_StructGfx *)(w & 0x8FFFFFFF) != CUR) {
        if (w & 0x8FFFFFFF) {
            CUR = (func_8000C768_StructGfx *)(w & 0x8FFFFFFF);
            if (t3->unk30 & 0x20000000) {
                while (*(u64 *)&endA != *(u64 *)CUR) {
                    *GP = *CUR;
                    if (endB.w0 == CUR->w0) {
                        t1 = (u32)CUR; t0 = GP; a2 = CUR->w1;
                    }
                    if (a2 != 0 && a2 == (u32)CUR) {
                        t5 = GP;
                        { func_8000C768_StructGfx *_g = t0; _g->w0 = 0xDE010000; _g->w1 = (u32)GP; }
                    }
                    if (t5 != NULL && *(s8 *)CUR == 1) {
                        if (CUR->w1 >= t1 && CUR->w1 < a2) GP->w1 = GP->w1 + (u32)t0 - t1;
                    }
                    GP++; CUR++;
                }
            } else { G2(0xDE000000, (u32)CUR); }
        } else { G2(0xE7000000, 0); }
    } else { G2(0xE7000000, 0); }
    }
    switch (t3->unk24 & 0x4600) {
    case 0x200:
        G2(0xFB000000, SHL(t3->unk4F, 0, 8) | SHL(t3->unk4C, 24, 8) | SHL(t3->unk4D, 16, 8) | SHL(t3->unk4E, 8, 8)); break;
    case 0x400:
        if (t3->unk4F >= 100) { FOGPOS(t3->unk4F + 800, 1000); } else { FOGPOS(t3->unk4F * 10, 1000); }
        G2(0xF8000000, SHL(t3->unk4E, 8, 8) | SHL(t3->unk4C, 24, 8) | SHL(t3->unk4D, 16, 8) | SHL(0xFF, 0, 8)); break;
    case 0x4000:
        G2(SHL(t3->unk4D, 0, 12) | SHL(0xF2, 24, 8) | SHL(t3->unk4C, 12, 12), SHL(t3->unk4F, 0, 12) | SHL(t3->unk4E, 12, 12)); break;
    }
    if (t3->unk24 & 0xB900) {
        if (t3->unk24 & 0x100) { G2(0xFA000000, SHL(t3->unk4B, 0, 8) | SHL(t3->unk48, 24, 8) | SHL(t3->unk49, 16, 8) | SHL(t3->unk4A, 8, 8)); }
        if (t3->unk24 & 0x800) {
            arg0->unk24 = 0x80000500;
            G2(0xDC08000A, D_801BCD48);
            G2(0xDC08030A, D_801BCD48 + 0x10);
            G2(SHL(D_801BCD4C->x, 12, 12) | 0xF2000000 | SHL(D_801BCD4C->y, 0, 12),
               SHL((u16)(((func_8000C768_StructRaw *)D_801BCD4C)->x + 0x7C), 12, 12) | 0 | SHL((u16)(((func_8000C768_StructRaw *)D_801BCD4C)->y + 0x7C), 0, 12));
            G2(SHL(D_801BCD4C->x2, 12, 12) | 0xF2000000 | SHL(D_801BCD4C->y2, 0, 12),
               SHL((u16)(((func_8000C768_StructRaw *)D_801BCD4C)->x2 + 0x7C), 12, 12) | 0x1000000 | SHL((u16)(((func_8000C768_StructRaw *)D_801BCD4C)->y2 + 0x7C), 0, 12));
        }
        if (t3->unk24 & 0x1000) { G2(0xDC08000A, D_801BCD48); G2(0xDC08030A, D_801BCD48 + 0x10); }
        if (t3->unk24 & 0x2000) { G2(0xDB020000, 0x30); G2(0xDC08060A, (u32)D_801BCD60); G2(0xDC08090A, (u32)D_801BCD70); G2(0xDC080C0A, (u32)D_801BCD58); }
        if (t3->unk24 & 0x8000) { G2(SHL(t3->unk49, 0, 12) | SHL(0xF2, 24, 8) | SHL(t3->unk48, 12, 12), SHL(t3->unk4B, 0, 12) | SHL(1, 24, 3) | SHL(t3->unk4A, 12, 12)); }
    }
    if (t3->unk28 != 0) {
        func_8000C4A8((struct func_8000C4A8_StructObj *)arg0, t3->unk24, arg0->unk1C);
        if (!(t3->unk24 & 0x80000000)) { G2(0xDE000000, t3->unk28); if (t3->unk34 != 0) { G2(0xDE000000, t3->unk34); } }
        else { func_8000BC78(arg0); }
    }
}
