#include "context.h"

typedef struct func_801DC510_StructA { s32 id; u16 k; u8 pad6[2]; f32 scale; } func_801DC510_StructA;
typedef struct func_801DC510_StructB { s32 id; u16 a; u16 b; u16 c; u8 pad[2]; } func_801DC510_StructB;
extern u16 func_80011590(u32, void *);

u16 func_801DC510(func_801DC510_StructA *arg0, func_801DC510_StructB *arg1) {
    s32 id = arg0->id;
    u16 k = arg0->k;
    f32 s = arg0->scale;

    while (arg1->id != 0) {
        if (id == arg1->id) {
            if (k == func_80011590((u16)(u32)(arg1->a * s), arg1) ||
                k == func_80011590((u16)(u32)(arg1->b * s), arg1)) {
                return arg1->c;
            }
            return 0;
        }
        arg1++;
    }
    return 0;
}
