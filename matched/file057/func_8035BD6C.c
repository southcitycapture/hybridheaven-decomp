#include "context.h"
struct func_8035BF98_Struct0 {
    u8 pad[0x3E];
    u16 unk3E;
};
void func_8035BF98(struct func_8035BF98_Struct0 *arg0, s32 arg1);
extern f32 D_8038A0A8;
extern f32 D_8038A0AC;
extern f32 D_8038A0B0;
extern void D_801CE4D4(void *arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, f32 arg17, s32 arg18);

typedef struct func_8035BD6C_S0 { u8 pad0[4]; s32 f4; s32 f8; f32 fC; } func_8035BD6C_S0;
typedef struct func_8035BD6C_S3 { u8 pad0[0x2C]; func_8035BD6C_S0 *p; } func_8035BD6C_S3;
typedef struct func_8035BD6C_S2 { u8 pad0[0x24]; func_8035BD6C_S3 *p; } func_8035BD6C_S2;
typedef struct func_8035BD6C_O { u8 pad0[0xC]; func_8035BD6C_S2 *p; u8 pad1[0x2C]; u16 f3C; u16 f3E; } func_8035BD6C_O;

void func_8035BD6C(func_8035BD6C_O *arg0, s32 arg1) {
    func_8035BD6C_S0 *s;
    s32 c;

    s = arg0->p->p->p;
    if (arg0->f3E == 0) {
        func_801CE4D4(arg0, 0x2B, s->f4, s->f8, s->fC, 0xFF, 0xFF, 0, 0xFF, 0, 0xFF, 0, 0, 0xFF, 0, 0xC, 0x19, D_8038A0A8, 1);
        func_802254F8(arg0, 0x19, 7);
        arg0->f3C++;
    }
    if (arg0->f3E == 0xF) {
        D_801CE4D4(arg0, 0x2C, s->f4, *(f32 *)&s->f8 + 10.0, s->fC, 0xFF, 0xFF, 0, 0xFF, 0, 0xFF, 0, 0, 0xFF, 0, 1, 0x1E, D_8038A0AC, 1);
        func_801CE4D4(arg0, 0x2D, s->f4, s->f8, s->fC, 0xFF, 0xFF, 0, 0x80, 0, 0xFF, 0, 0, 0xFF, 0, 1, 0x28, D_8038A0B0, 4);
    }
    c = arg0->f3E++ >= 0x15;
    if (c) {
        arg0->f3E = 0;
        func_800058DC(arg0, func_8035BF98);
    }
}
