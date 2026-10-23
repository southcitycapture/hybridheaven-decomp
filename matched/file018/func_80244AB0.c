#include "context.h"

typedef struct func_80244AB0_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80244AB0_Node;

typedef struct func_80244AB0_Mid {
    u8 pad0[0x2C];
    func_80244AB0_Node *unk2C;
} func_80244AB0_Mid;

typedef struct func_80244AB0_Struct {
    u8 pad0[0x24];
    func_80244AB0_Mid *unk24;
} func_80244AB0_Struct;

struct func_802474E4_StructMid;
extern struct func_802474E4_StructMid *D_801BBCD0;
extern s8 D_8025C704;
extern s16 D_8025C7E6;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern f32 D_8002FC20(f32);
extern void D_80127430(f32, f32, f32, s32, f32, f32);
extern u8 D_8025BF90[];
extern f32 D_8025C57C;

/* used by later functions in this file before their own declarations */
struct func_80246E60_StructGlobal;
extern struct func_80246E60_StructGlobal D_80258F48;
struct func_80245D78_Struct;
void func_80245D78(struct func_80245D78_Struct *arg0, s32 arg1);
struct func_80247224_Struct;
void func_80247224(struct func_80247224_Struct *arg0, s32 arg1);
#ifndef AD /* only in the real file, where this function comes first */
struct func_80249A58_StructTbl;
extern struct func_80249A58_StructTbl D_8025C728[];
#endif

s32 func_80244AB0(func_80244AB0_Struct *arg0) {
    func_80244AB0_Node *n;
    func_80244AB0_Node *m;
    f32 x;
    f32 sp50;
    f32 z, d, ax, az, dx, dy, dz;

    n = ((func_80244AB0_Mid *)D_801BBCD0)->unk2C;
    x = n->unk4;
    z = n->unkC;
    d = D_8002FC20(x * x + z * z);
    if (*(u8 *)&D_8025C704 != 0) {
        n = ((func_80244AB0_Mid *)D_801BBCD0)->unk2C;
        x = n->unk4;
        ax = (x < 0.0f) ? -x : x;
        z = n->unkC;
        az = (z < 0.0f) ? -z : z;
        if (az + ax > 40.0f) {
            func_8011AAF4(D_8025BF90, 0x14D, arg0, 0, 1, 4.0f, (x / d) * -120.0f + x, 270.0f,
                          (z / d) * -120.0f + z, 4294967296.0f, x, n->unk8 + 20.0f, z, 0.0f, 35.0f, -1, -1);
        }
    }
    n = ((func_80244AB0_Mid *)D_801BBCD0)->unk2C;
    m = arg0->unk24->unk2C;
    sp50 = m->unk4;
    dx = n->unk4 - sp50;
    dy = n->unk8 - m->unk8;
    dz = n->unkC - m->unkC;
    if (dx * dx + dy * dy + dz * dz < 900.0f) {
        D_80127430(sp50, m->unk8, m->unkC, 0x6BD, D_8025C57C, 1.0f);
        func_8037BB4C(arg0->unk24->unk2C->unk12, 2.0f, 2.0f, D_8025C7E6);
        return 0;
    }
    return 0;
}

/* later code in this file calls func_80244AB0() with no args: same address, K&R alias */
extern s32 D_80244AB0();
#define func_80244AB0 D_80244AB0
