#include "context.h"

typedef struct func_801DC250_Struct {
    u32 key;
    u8 b[4];
} func_801DC250_Struct;
typedef struct func_801DC250_Arg {
    u32 key;
    u16 unk4;
    u8 pad[2];
    f32 unk8;
} func_801DC250_Arg;

extern u16 func_80011590();
extern func_801DC250_Struct D_801E17C0[];

s32 func_801DC250(arg0)
    func_801DC250_Arg *arg0;
{
    func_801DC250_Struct *p = D_801E17C0;
    u32 k = arg0->key;
    u16 a = arg0->unk4;
    f32 f = arg0->unk8;

    if (p->key != 0) {
        do {
            if (k == p->key) {
                if (a == func_80011590((u32)(p->b[0] * f) & 0xFFFF)) goto ret;
                if (a == func_80011590((u32)(p->b[1] * f) & 0xFFFF)) goto ret;
                if (a == func_80011590((u32)(p->b[2] * f) & 0xFFFF)) {
ret:
                    return p->b[3];
                }
                return 0;
            }
            p++;
        } while (p->key != 0);
    }
    return 0;
}
