#include "context.h"
extern s8 D_8038CC60;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;
extern func_8036B7EC_Struct *func_803698D0(void *);

typedef struct func_80369CF4_Struct {
    u32 unk0;
} func_80369CF4_Struct;

s32 func_80369CF4(struct func_80369C7C_Obj1 *arg0, s16 arg1) {
    u8 *p;
    s16 v1;
    u32 t;
    s16 s;
    s32 x;
    s32 ret;

    if (arg0 == D_801BBBF0.unkDC) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (p[0x2D8] == 6 || p[0x2D8] == 8) {
        if (arg0 != D_801BBBF0.unkDC) {
            v1 = 0;
        } else {
            v1 = 0x1000;
        }
        s = v1 + D_801BBBF0.unkB98;
        s = s * 1;
        if (((s16)(s - arg1) & 0x1FFF) >= 0x1001) {
            return 1;
        }
        return 0;
    }
    t = (((func_80369CF4_Struct *)func_803698D0(p))->unk0 << 11) >> 30;
    if (t == 0) {
        return 0;
    }
    if ((t & 0xFF) == (u8)D_8038CC60) {
        return 0;
    }
    return 1;
}
