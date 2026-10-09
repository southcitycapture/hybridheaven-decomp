#include "context.h"

typedef struct func_801E98D4_Target {
    s32 pad0;
    f32 f4;
    f32 f8;
    f32 fC;
    s16 pad10;
    s16 s12;
} func_801E98D4_Target;

typedef struct func_801E98D4_Obj {
    u8 pad0[0x2C];
    func_801E98D4_Target *p2C;
} func_801E98D4_Obj;

typedef struct func_801E98D4_Node {
    u8 pad0[8];
    struct func_801E98D4_Node *n8;
    u8 pad1[0x18];
    func_801E98D4_Obj *o24;
} func_801E98D4_Node;

void func_801D3688(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_801D3750(s32 a);

s32 func_801E98D4(s32 arg0, s32 arg1)
{
    func_801E98D4_Node **pp;
    if (func_801C0B8C(0x5B8D80) != 0)
    {
        pp = (func_801E98D4_Node **)func_801DAAF0;
        pp += 9;
        (*pp)->n8->n8->n8->o24->p2C->f4 = 0.0f;
        (*pp)->n8->n8->n8->o24->p2C->f8 = 2.0f;
        (*pp)->n8->n8->n8->o24->p2C->fC = 0.0f;
        (*pp)->n8->n8->n8->o24->p2C->s12 = 0xCA1;
        func_801D3688(1, 2, 0x40400000, 0, 0xFF, 1, 0);
        func_801D3750(1);
        return 4;
    }
    return 3;
}
