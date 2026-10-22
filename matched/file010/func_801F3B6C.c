#include "context.h"

struct func_801F3B6C_E { u16 a; u16 b; u8 pad[6]; };
struct func_801F3B6C_N { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[0x20]; f32 unk30; f32 unk34; f32 unk38; };
struct func_801F3B6C_M { u8 pad0[0x2C]; struct func_801F3B6C_N *unk2C; };
struct func_801F3B6C_A { u8 pad0[0x24]; struct func_801F3B6C_M *unk24; u8 pad1[0x34]; struct func_801F3B6C_S *unk5C; };
struct func_801F3B6C_S { u8 pad[0x1A]; u16 unk1A; };
struct func_801F7928_A;
extern struct func_801F7928_A *D_801BBCD8;
extern struct func_801F3B6C_E D_8017D250[];
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_80127430(f32, f32, f32, u16, f32, f32);

void func_801F3B6C(struct func_801F3B6C_A *arg0) {
    u8 pad[4];
    u16 key;
    u8 pad2[2];
    u16 i;
    struct func_801F3B6C_N *n;
    struct func_801F3B6C_N *p;
    struct func_801F3B6C_S *s;

    s = arg0->unk5C;
    key = s->unk1A;
    n = ((struct func_801F3B6C_M *)D_801BBCD8)->unk2C;
    p = arg0->unk24->unk2C;
    i = 0;
    if (func_8010843C(n->unk30, n->unk34, n->unk38, p->unk4, p->unk8 + 2.0f, p->unkC) == 0) {
        for (; D_8017D250[i].a != 0; i++) {
            if (key == D_8017D250[i].a) break;
        }
        if (D_8017D250[i].b != 0) {
            p = arg0->unk24->unk2C;
            func_80127430(p->unk4, p->unk8, p->unkC, D_8017D250[i].b, 1.0f, 1.0f);
        }
    }
}
