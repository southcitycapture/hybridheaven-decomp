#include "context.h"

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

typedef struct func_8012D064_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8012D064_StructB;

typedef struct func_8012D064_StructA {
    u8 pad0[0x24];
    func_8012D064_StructB *unk24;
} func_8012D064_StructA;

typedef struct func_8012D064_Elem {
    s32 unk0;
    u8 unk4;
    u8 pad5[3];
} func_8012D064_Elem;

extern void func_80017064(u16, u8 *, u8 *, u8 *);
extern s32 func_80005204(u16);

void func_8012D064(void *arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 w0;
    u16 pad;
    u16 id;
    func_8012D064_StructO **o;
    func_8012D064_StructV *v;
    func_8012D064_Elem *e;
    s32 *p40;
    u8 *p3C;
    u8 *p3B;
    u8 *p3A;
    u16 *p38;
    u16 *p3E;
    u8 *p3D;
    f64 one;
    u32 n;

    o = (func_8012D064_StructO **)&D_8008DA88[(u8)arg5];
    (*o)->unk22 = 1;
    if (((func_8012D064_StructA *)arg0)->unk24->unk2C != 0) {
        (*o)->unk2C->unk38 = arg4;
        p40 = &(*o)->unk2C->unk40;
        p3C = &(*o)->unk2C->unk3C;
        p3B = &(*o)->unk2C->unk3B;
        p3A = &(*o)->unk2C->unk3A;
        p38 = &(*o)->unk2C->unk38;
        p3E = &(*o)->unk2C->unk3E;
        p3D = &(*o)->unk2C->unk3D;
    } else {
        (*o)->unk30->unk38 = arg4;
        p40 = &(*o)->unk30->unk40;
        p3C = &(*o)->unk30->unk3C;
        p3B = &(*o)->unk30->unk3B;
        p3A = &(*o)->unk30->unk3A;
        p38 = &(*o)->unk30->unk38;
        p3E = &(*o)->unk30->unk3E;
        p3D = &(*o)->unk30->unk3D;
    }
    if (arg3 == 1) {
        *p3E |= 1;
    } else {
        *p3E &= 0xFFFE;
    }
    if (arg3 == 2) {
        *p3E |= 4;
    }
    one = 2.0 - 1.0;
    *p3D = arg2 * 10.0 * one;
    *p3B = 0;
    e = *p3B + ((func_8012D064_Elem **)D_80171CF0[*p38 - 1]->unk4)[arg1];
    w0 = e->unk0;
    n = e->unk4;
    *p3C = (f32)(u32)*p3D * (f32)n / 10.0;
    if (*p3C == 0) {
        *p3C = 1;
    }
    *p3A = arg1 + 1;
    if ((w0 & 0x0F000000) == 0x0D000000) {
        id = D_80171CF0[*p38 - 1]->unk0[1];
        func_80017064(id, p3C, p3B, p3D);
        *p40 = (func_80005204(id) + w0 + 0x80000000) & 0xFFFFFF;
    } else {
        id = D_80171CF0[*p38 - 1]->unk0[0];
        func_80017064(id, p3C, p3B, p3D);
        *p40 = (func_80005204(id) + w0 + 0x80000000) & 0xFFFFFF;
    }
}
