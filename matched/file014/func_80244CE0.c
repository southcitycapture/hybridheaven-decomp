#define XQ(p, l) p##_##l
#define XP(p, l) XQ(p, l)
#define func_80243820 XP(xA, __LINE__)
#define func_802448C8 XP(xB, __LINE__)
#define func_80244988 XP(xC, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988
extern struct func_802438E4_Table D_80248524;
extern f64 D_8024AB00;
extern f64 D_8024AB08;
extern f64 D_8024AB10;
extern f64 D_8024AB18;

void func_80244CE0(struct func_80244B3C_StructObj *arg0, s32 arg1) {
    void *p;
    struct func_80244B3C_StructSub *s;
    func_802455D8_Sub *t;
    f64 y, x, z, a, b, c, bx, cz, w;
    s32 cond;

    p = arg0->unk5C;
    if (func_8012CE9C(arg1, p, D_80248524, 0xA) == 0) {
        D_80010550(arg1, p);
        cond = (arg0->unk94++ % 120) == 0;
        if (cond) {
            s = arg0->unk24->unk2C;
            func_80127430(s->unk4, s->unk8, *(s32 *)&s->unkC, 0x669, 1.5f, 1.0f);
        }
        t = D_801BBCD0->unk2C;
        y = t->unk8;
        if (y < 0.0) {
            a = -y;
        } else {
            a = y;
        }
        x = t->unk4;
        if (x < 56.0) {
            b = -(x - 56.0);
        } else {
            b = x - 56.0;
        }
        z = t->unkC;
        if (z < D_8024AB00) {
            cz = z - D_8024AB08;
            c = -cz;
        } else {
            cz = z - D_8024AB10;
            c = cz;
        }
        if (c * 1.0 + (b + a) < 20.0) {
            func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 0.0f, 0.95f, D_8024AB46);
            return;
        }
        w = y + 20.0;
        if (w < 0.0) {
            a = -w;
        } else {
            a = w;
        }
        if (x < 56.0) {
            b = -(x - 56.0);
        } else {
            b = x - 56.0;
        }
        if (z < D_8024AB18) {
            c = -cz;
        } else {
            c = cz;
        }
        if (c * 1.0 + (b + a) < 20.0) {
            func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 0.0f, 0.95f, D_8024AB46);
        }
    }
}
