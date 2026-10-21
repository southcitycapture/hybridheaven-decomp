typedef struct { u16 w; u8 pad; u8 a; u8 b; u8 c; } Lim;
typedef struct { u16 flags; u16 pad; Lim *lim; u16 hi; u16 pad2; } Ent;
extern u8 D_800CBDB3;
extern Ent D_800CBDB8[];
extern s16 D_800CBAD8[];
extern s32 D_800CBB48;
void func_80021968(s32);

void func_800211B4(void) {
    Ent *e;
    Lim *l;
    s16 x, y, z, t, u;
    s32 q;
    s32 m;
    u16 f;
    while (D_800CBDB3 != 0) {
        D_800CBDB3--;
        e = &D_800CBDB8[D_800CBDB3];
        f = e->flags;
        l = e->lim;
        t = f >> 3;
        x = t & 0x3FFF;
        t = t >> 3;
        y = t & 0xFF;
        u = t >> 3;
        z = u & 0x7F;
        if (l->pad != 0) {
            s16 m = l->pad << 8;
            if (m < x) { do { x >>= 1; } while (m < x); }
        } else x = 0;
        q = l->a;
        if (q != 0) {
            if (q < y) { m = q; do { y >>= 1; } while (m < y); }
        } else y = 0;
        q = l->b;
        if (q != 0) {
            if (q < z) { m = q; do { z >>= 1; } while (m < z); }
        } else z = 0;
        if (f & 1) x = -x;
        if (f & 2) y = -y;
        if (f & 4) z = -z;
        D_800CBB48 = (e->hi << 16) + l->w;
        D_800CBAD8[6] = x;
        D_800CBAD8[7] = y;
        D_800CBAD8[8] = z;
        if ((u32)(D_800CBB48 & 0x7FFF) >= 0x100) func_80021968(1);
    }
}
