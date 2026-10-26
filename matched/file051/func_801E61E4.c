#include "common.h"
extern u8 *D_801DAB14;
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
extern s32 func_801D7634(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern f32 D_801E7930;
typedef struct func_801E61E4_T { u8 pad[4]; f32 a; f32 b; f32 c; } func_801E61E4_T;
typedef struct func_801E61E4_R { u8 pad[0x2C]; func_801E61E4_T *t; } func_801E61E4_R;
typedef struct func_801E61E4_S { u8 pad[8]; struct func_801E61E4_S *n; u8 pad2[0x18]; func_801E61E4_R *m; } func_801E61E4_S;
#define CH ((func_801E61E4_S *)D_801DAB14)->n->n->n->n->m->t
s32 func_801E61E4(s32 arg0, s32 arg1) {
    u32 v = func_801C1134(4, 3);
    f32 q = (f32)v / 60.0f;
    CH->c = -11.5f * q + 95.0f;
    if (func_801D7634(0x01B80047, 6) != 0 || func_801D7634(0x01B80047, 0x24) != 0) {
        func_8038D33C(CH->a, CH->b, *(s32 *)&CH->c, 0x654, D_801E7930, 1.0f);
    }
    if (func_801C1088(4, 3, 0x3C) != 0) {
        func_801C10D8(4, 3);
        return 0x10;
    }
    return 0xF;
}
