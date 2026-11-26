#include "common.h"
typedef struct func_8012C784_StructA {
    u16 unk0;
    u8 pad2[0x26];
    s32 unk28;
    u16 unk2C;
} func_8012C784_StructA;
typedef struct func_8012C784_StructB {
    u8 pad[0x2C];
    func_8012C784_StructA *unk2C;
    func_8012C784_StructA *unk30;
} func_8012C784_StructB;
extern func_8012C784_StructB *D_8008DA88[];
typedef struct func_8012C784_StructE {
    u16 *unk0;
    s32 *unk4;
} func_8012C784_StructE;
extern func_8012C784_StructE *D_80171CF0[];
extern int func_80005204(unsigned short);
extern void func_80017064(u16, u8 *, u8 *, u8 *);
typedef struct func_8012D064_Elem {
    s32 unk0;
    u8 unk4;
    u8 pad5[3];
} func_8012D064_Elem;
typedef struct func_8012D064_StructV {
    u8 pad0[0x38];
    u16 unk38;
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u16 unk3E;
    s32 unk40;
} func_8012D064_StructV;
typedef struct func_8012D064_StructO {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x9];
    func_8012D064_StructV *unk2C;
    func_8012D064_StructV *unk30;
} func_8012D064_StructO;
typedef struct func_8012D7A8_Node {
    u8 pad[0x10];
    struct func_8012D7A8_Node *unk10;
} func_8012D7A8_Node;


typedef struct func_8012D40C_StructArg {
    u8 pad0[0x24];
    func_8012D7A8_Node *unk24;
    u8 pad28[8];
    s32 unk30;
} func_8012D40C_StructArg;
#define ARG0 ((func_8012D40C_StructArg *)arg0)
extern func_8012D064_StructO *B_8008DA88[];

void func_8012D40C(void *arg0, s32 arg1)
{
    s32 sp2C;
    u16 sp2A;
    struct func_8012D40C_StructOutput { s32 *out; u8 pad[12]; } state;
    func_8012D064_StructO **slot;
    func_8012D064_StructV *v, *w;
    u8 *v1;
    u16 *a0;
    u8 *a3, *a1, *t2;
    u16 *t0;
    u32 idx, val;
    func_8012C784_StructE *t;
    func_8012D064_StructO **dst;
    func_8012D7A8_Node *n;
    u32 index;

    index = *(u32 *)&arg1 & 255;
    slot = (func_8012D064_StructO **)&D_8008DA88[index];
    v1 = (u8 *)*slot;
    v = ((func_8012D064_StructO *)v1)->unk2C;
    if (v != NULL) {
        a3 = &v->unk3A;
        a1 = &v->unk3B;
        if (v->unk3A != 0) {
            v1 = &v->unk3C;
            state.out = &v->unk40;
            t0 = &v->unk38;
            a0 = &v->unk3E;
            t2 = &v->unk3D;
            goto block;
        }
    } else {
        w = ((func_8012D064_StructO *)v1)->unk30;
        a3 = &w->unk3A;
        a1 = &w->unk3B;
        v1 = &w->unk3C;
        if (w->unk3A != 0) {
            state.out = &w->unk40;
            t0 = &w->unk38;
            a0 = &w->unk3E;
            t2 = &w->unk3D;
block:
            if (*a3 != 0 && (u8)--*v1 == 0) {
                *a1 += 1;
                idx = *t0;
                if (idx > 0x1000U) {
                    n = ARG0->unk24;
                    dst = B_8008DA88;
                    if (n != NULL) {
                        do {
                            *dst = (func_8012D064_StructO *)n;
                            n = n->unk10;
                            dst++;
                        } while (n != NULL);
                    }
                    (*slot)->unk22 = 0;
                    ARG0->unk30 |= 0x20;
                    return;
                }
                val = ((func_8012D064_Elem **)D_80171CF0[idx - 1]->unk4)[*a3 - 1][*a1].unk4;
                if (val == 0 && !(*a0 & 1)) {
                    *a3 = 0;
                    ARG0->unk30 |= 0x20;
                    if ((*a0 |= 2) & 4) (*slot)->unk22 = 0;
                } else {
                    if (val == 0 || val == 0xFF) {
                        *a1 = 0;
                        val = ((func_8012D064_Elem **)D_80171CF0[*t0 - 1]->unk4)[*a3 - 1][*a1].unk4;
                    }
                    *v1 = (f32)(u32)*t2 * (f32)val / 10.0;
                    if (*v1 == 0) *v1 = 1;
                    t = D_80171CF0[*t0 - 1];
                    sp2C = ((func_8012D064_Elem **)t->unk4)[*a3 - 1][*a1].unk0;
                    if ((sp2C & 0x0F000000) == 0x0D000000) {
                        sp2A = t->unk0[1];
                        func_80017064(sp2A, a1, (u8 *)idx, a3);
                        *state.out = (func_80005204(sp2A) + sp2C + 0x80000000) & 0xFFFFFF;
                    } else {
                        sp2A = t->unk0[0];
                        func_80017064(sp2A, a1, (u8 *)idx, a3);
                        *state.out = (func_80005204(sp2A) + sp2C + 0x80000000) & 0xFFFFFF;
                    }
                }
            }
        }
    }
}
