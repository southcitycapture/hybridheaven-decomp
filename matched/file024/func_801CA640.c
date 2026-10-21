#include "context.h"
typedef struct func_801CA640_Struct { u8 a; u8 p1; u16 b; u8 c; u8 d; u8 e; u8 p2; } func_801CA640_Struct;
typedef struct func_801CA640_Struct2 { func_801CA640_Struct e[11]; } func_801CA640_Struct2;
extern func_801CA640_Struct2 D_801CE384;
extern void func_8012FE50(s32, s32, s32, s32, s32);
typedef struct func_801CA640_Arg { u8 pad[0x2C]; u8 unk2C; } func_801CA640_Arg;

void func_801CA640(func_801CA640_Arg *arg0) {
    func_801CA640_Struct *p;
    func_801CA640_Struct2 sp;
    u8 i;
    sp = D_801CE384;
    i = arg0->unk2C;
    p = &sp.e[i];
    func_8012FE50(p->a, p->b, p->c, p->d, p->e);
}
