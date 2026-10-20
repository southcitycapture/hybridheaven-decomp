#include "context.h"
typedef struct func_80148DDC_V { s32 a, b, c; } func_80148DDC_V;
typedef struct func_80148DDC_S { u8 pad[0x5C]; s32 unk5C; } func_80148DDC_S;
extern func_80148DDC_V func_8013A334();
extern u8 D_8008DA88[];
func_80148DDC_V func_80148DDC(func_80148DDC_S *arg0, u16 arg1) {
    func_80148DDC_V r;
    func_80006214(arg0);
    r = func_8013A334(D_8008DA88, arg0->unk5C, arg1);
    return r;
}
