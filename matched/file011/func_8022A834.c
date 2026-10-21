#include "context.h"

typedef struct func_8022A834_StructPos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8022A834_StructPos;
typedef struct func_8022A834_StructObj {
    u8 pad0[0x2C];
    func_8022A834_StructPos *unk2C;
} func_8022A834_StructObj;
typedef struct func_8022A834_StructMid {
    u8 pad0[0x24];
    func_8022A834_StructObj *unk24;
} func_8022A834_StructMid;
typedef struct func_8022A834_StructG {
    u8 pad0[0x448];
    func_8022A834_StructMid **unk448;
} func_8022A834_StructG;
typedef struct func_8022A834_StructA0 {
    u8 pad0[0xA5];
    u8 unkA5;
} func_8022A834_StructA0;
typedef struct func_8022A834_StructA1 {
    u8 pad0[0x2D9];
    u8 unk2D9;
} func_8022A834_StructA1;
extern s32 D_8022B640(s32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);

#define G ((func_8022A834_StructG *)&D_801BBBF0)
#define P (*G->unk448)->unk24->unk2C

void func_8022A834(func_8022A834_StructA0 *arg0, func_8022A834_StructA1 *arg1) {
    f32 s, c;
    func_8022A834_StructPos *p;

    arg0->unkA5 = 2;
    s = func_8001EB64((s16)((s16)(P->unk12 + 0x1000) & 0x1FFF));
    c = func_8001EAD0((s16)((s16)(P->unk12 + 0x1000) & 0x1FFF));
    p = P;
    if (func_8010843C(p->unk4, p->unk8, p->unkC, s * 20.0f + p->unk4, p->unk8, c * 20.0f + p->unkC)) {
        s = func_8001EB64((s16)((s16)(P->unk12 + 0x800) & 0x1FFF));
        c = func_8001EAD0((s16)((s16)(P->unk12 + 0x800) & 0x1FFF));
        p = P;
        if (!func_8010843C(p->unk4, p->unk8, p->unkC, s * 20.0f + p->unk4, p->unk8, c * 20.0f + p->unkC)) {
            arg1->unk2D9 = 2;
        } else {
            s = func_8001EB64((s16)((s16)(P->unk12 + 0x1800) & 0x1FFF));
            c = func_8001EAD0((s16)((s16)(P->unk12 + 0x1800) & 0x1FFF));
            p = P;
            if (!func_8010843C(p->unk4, p->unk8, p->unkC, s * 20.0f + p->unk4, p->unk8, c * 20.0f + p->unkC)) {
                arg1->unk2D9 = 6;
            }
        }
    } else {
        arg1->unk2D9 = D_8022B640(8);
    }
}
