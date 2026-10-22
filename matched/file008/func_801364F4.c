#include "context.h"
extern s32 func_80135E60(void *, f32, s32, s32);
void func_801361C8(func_801361C8_Struct *arg0, s32 arg1);
extern func_801362DC_StructBBBF0 D_801BBBF0;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_801268F4(s32);
extern f32 D_8018DB6C;

typedef struct func_801364F4_StructPos {
    u8 pad[4];
    f32 x;
    u8 pad8[4];
    f32 z;
    u8 pad10[2];
    s16 angle;
} func_801364F4_StructPos;
typedef struct func_801364F4_StructLink {
    u8 pad[0x30];
    func_801364F4_StructPos *pos;
} func_801364F4_StructLink;
typedef struct func_801364F4_Struct {
    u8 pad[0x24];
    func_801364F4_StructLink *link;
    u8 pad28[0x10];
    func_801361C8_StructInner *data;
} func_801364F4_Struct;
typedef struct func_801364F4_StructGlobal {
    u8 pad[0x192];
    s16 state;
    u8 pad194[4];
    f32 x;
    u8 pad19C[4];
    f32 z;
    u8 pad1A4[0xD5C];
    s16 mode;
    u8 padF02[2];
    f32 value;
    f32 scale;
    s16 zero;
    u8 padF0E[2];
    s32 flags;
    f32 x2;
    f32 z2;
} func_801364F4_StructGlobal;

void func_801364F4(func_801364F4_Struct *arg0, s32 arg1)
{
  if (func_80135E60(arg0, (f32) ((arg0->data->unk10 >> 16) & 0xFF), 0, 0x41000000))
  {
    func_801268F4(0);
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->state = 5;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->x = (func_8001EAD0(arg0->link->pos->angle) * 10.0) + arg0->link->pos->x;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->z = (func_8001EB64(arg0->link->pos->angle) * 10.0) + arg0->link->pos->z;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->x2 = (func_8001EAD0(arg0->link->pos->angle) * (-8.0)) + arg0->link->pos->x;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->z2 = (func_8001EB64(arg0->link->pos->angle) * (-8.0)) + arg0->link->pos->z;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->value = D_8018DB6C;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->flags = 0x0168003E;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->zero = 0;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->mode = 0x1100;
    ((func_801364F4_StructGlobal *) (&D_801BBBF0))->scale = 1.0f;
    func_800058DC(arg0, func_801366BC);
  }
}
