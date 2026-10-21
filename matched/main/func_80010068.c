#include "context.h"

typedef struct func_80010068_Struct { s32 a; s32 b; s32 c; } func_80010068_Struct;
typedef struct func_80010068_Key { s32 unk0; u16 unk4; u16 unk6; s32 unk8; } func_80010068_Key;
extern f32 D_8000E748(void *, f32 *, s32 *, s32, u16 *);
extern void func_8000EC9C(func_80010068_Struct, s32, s32, u32, u16, s32, s32, u16);

void func_80010068(u16 arg0, s32 arg1, u16 arg2, s32 arg3, func_80010068_Key *arg4, s32 arg5, s32 arg6, u16 *arg7) {
    s32 pad1;
    func_80010068_Struct sp48;
    f32 f;
    f32 sp40;
    s32 sp3C;
    func_80010068_Key *p;

    p = &arg4[arg0];
    sp48 = *(func_80010068_Struct *)p;
    f = D_8000E748(p, &sp40, &sp3C, arg6, arg7);
    if (sp40 == f) {
        p->unk4 = *arg7;
    }
    func_8000EC9C(sp48, sp3C, arg5, (u32)sp40, arg2, arg1, arg3, arg0);
}
