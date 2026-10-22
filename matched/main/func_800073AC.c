typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    u8 pad0[0x68];
    u8 b68;
    u8 pad69[7];
    f32 f70;
    u16 cnt74;
} Inner;
typedef struct {
    u8 pad[0x2C];
    Inner *d;
} Mid;
typedef struct {
    Mid *in;
    Vec3 pos[1];
    u8 pad[0x80 - 0x10];
    s8 n;
} Obj;
typedef struct {
    u8 pad[0x2DE];
    u8 b2DE;
    u8 b2DF;
    u8 b2E0[8];
    u8 b2E8;
    u8 pad2E9[3];
    f32 f2EC;
} St;
extern f32 func_800075B4(Vec3, Vec3);

void func_800073AC(Obj *a, Obj *b, St *c) {
    f32 lim = a->in->d->f70 * c->f2EC + b->in->d->f70;
    u8 i, j;
    for (i = 0; i < a->n; i++) {
        for (j = 0; j < b->n; j++) {
            if (func_800075B4(a->pos[i], b->pos[j]) < lim) {
                if (c->b2E8 == 0) {
                    c->b2E8 = 1;
                    c->b2DF = 0;
                }
                if (a->in->d->cnt74 == 0) {
                    a->in->d->cnt74 = 0x201;
                } else {
                    a->in->d->cnt74++;
                }
                if ((a->in->d->cnt74 & 0xFF) < 9) {
                    ((Mid **)((u8 *)a->in->d + (a->in->d->cnt74 & 0xFF) * 4))[0x74 / 4] = b->in;
                    if (c->b2E8 == 1 && c->b2DF < 8) {
                        c->b2E0[c->b2DF] = b->in->d->b68 + 1;
                        c->b2DF++;
                    }
                }
                return;
            }
        }
    }
    if (c->b2E8 == 1) {
        c->b2E8 = 2;
        c->b2DE = 0;
    }
}
