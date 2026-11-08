#include "common.h"
extern f32 D_8001EAD0(s16);
extern u8 D_801819E8[];
extern s16 D_801BEC88[];


typedef struct func_801453CC_StructColor {
    u8 r, g, b, a;
} func_801453CC_StructColor;

typedef struct func_801453CC_StructObj {
    u8 pad0[8];
    u8 r0, g0, b0, a0;
    u8 r1, g1, b1, a1;
    u8 pad1[0x38];
    u8 r2, g2, b2, a2;
    u8 r3, g3, b3, a3;
} func_801453CC_StructObj;

typedef struct func_801453CC_StructArg {
    u8 pad0[0x2A];
    u16 type;
    u8 pad1[4];
    func_801453CC_StructObj *obj;
} func_801453CC_StructArg;

s16 func_801453CC(func_801453CC_StructArg *arg0, s16 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6) {
    u8 r0, g0, b0;
    u8 r1, g1, b1;
    u8 r2, g2, b2;
    u8 r3, g3, b3;
    f32 factor;

    r0 = ((func_801453CC_StructColor *)D_801819E8)[arg3].r;
    g0 = ((func_801453CC_StructColor *)D_801819E8)[arg3].g;
    b0 = ((func_801453CC_StructColor *)D_801819E8)[arg3].b;
    r1 = ((func_801453CC_StructColor *)D_801819E8)[arg4].r;
    g1 = ((func_801453CC_StructColor *)D_801819E8)[arg4].g;
    b1 = ((func_801453CC_StructColor *)D_801819E8)[arg4].b;
    r2 = ((func_801453CC_StructColor *)D_801819E8)[arg5].r;
    g2 = ((func_801453CC_StructColor *)D_801819E8)[arg5].g;
    b2 = ((func_801453CC_StructColor *)D_801819E8)[arg5].b;
    r3 = ((func_801453CC_StructColor *)D_801819E8)[arg6].r;
    g3 = ((func_801453CC_StructColor *)D_801819E8)[arg6].g;
    b3 = ((func_801453CC_StructColor *)D_801819E8)[arg6].b;
    D_801BEC88[arg2] += arg1;
    D_801BEC88[arg2] &= 0x1FFF;
    factor = (D_8001EAD0(D_801BEC88[arg2]) + 1.0) * 0.5;
    if (arg0->type == 0xC) {
        if (arg3 != 0x22) {
            arg0->obj->r2 = (u32)((f32)(r1 - r0) * factor + (f32)(u32)r0);
            arg0->obj->g2 = (u32)((f32)(g1 - g0) * factor + (f32)(u32)g0);
            arg0->obj->b2 = (u32)((f32)(b1 - b0) * factor + (f32)(u32)b0);
        }
        if (arg5 != 0x22) {
            arg0->obj->r3 = (u32)((f32)(r3 - r2) * factor + (f32)(u32)r2);
            arg0->obj->g3 = (u32)((f32)(g3 - g2) * factor + (f32)(u32)g2);
            arg0->obj->b3 = (u32)((f32)(b3 - b2) * factor + (f32)(u32)b2);
        }
    } else if (arg0->type == 0xD) {
        if (arg3 != 0x22) {
            arg0->obj->r0 = (u32)((f32)(r1 - r0) * factor + (f32)(u32)r0);
            arg0->obj->g0 = (u32)((f32)(g1 - g0) * factor + (f32)(u32)g0);
            arg0->obj->b0 = (u32)((f32)(b1 - b0) * factor + (f32)(u32)b0);
        }
        if (arg5 != 0x22) {
            arg0->obj->r1 = (u32)((f32)(r3 - r2) * factor + (f32)(u32)r2);
            arg0->obj->g1 = (u32)((f32)(g3 - g2) * factor + (f32)(u32)g2);
            arg0->obj->b1 = (u32)((f32)(b3 - b2) * factor + (f32)(u32)b2);
        }
    }
    return D_801BEC88[arg2];
}
