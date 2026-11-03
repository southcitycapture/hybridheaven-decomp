#include "common.h"
typedef struct T_D_80181A98 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80181A98;
extern T_D_80181A98 D_80181A98;


typedef struct {
    u8 b[4];
} func_80146CD4_Struct4;
typedef union {
    s8 v[4][2];
    T_D_80181A98 w;
} func_80146CD4_Struct8;
typedef struct {
    s16 unk0;
    s16 unk2;
    u8 pad4[4];
    s16 unk8;
    s16 unkA;
    u8 padC[4];
} func_80146CD4_Struct;

extern f32 D_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern func_80146CD4_Struct D_801817A0[];
extern func_80146CD4_Struct D_80181900[];
extern func_80146CD4_Struct4 D_80181A94;

void func_80146CD4(s16 ang, s8 arg1) {
    func_80146CD4_Struct *base;
    s32 i;
    f32 f;
    f32 s;
    f32 c;
    f32 r;
    func_80146CD4_Struct4 idx;
    func_80146CD4_Struct8 vals;
    s32 t;
    s32 v;

    idx = D_80181A94;
    vals.w = D_80181A98;
    ang = 0x2000 - ang;
    if (arg1 == 0) {
        base = D_801817A0;
    } else {
        base = D_80181900;
    }
    i = 0;
    do {
        if (ang >= 0x800) {
            ang -= 0x800;
            base[idx.b[i]].unk0 = vals.v[i][0] * 42;
            base[idx.b[i]].unk2 = vals.v[i][1] * 42;
        } else {
            if (ang < 0) {
                ang = -1;
            }
            s = D_8001EAD0(ang), c = func_8001EB64(ang);
            switch (i) {
            case 0:
                r = s / c;
                f = 42.0f / (r + 1.0f);
                base[idx.b[i]].unk0 = f * r;
                base[idx.b[i]].unk2 = f;
                v = (s16)(f * 32.0f / 42.0f * 64.0f);
                base[idx.b[i]].unk8 = v;
                base[idx.b[i]].unkA = v;
                break;
            case 1:
                r = s / c;
                f = 42.0f / (r + 1.0f);
                base[idx.b[i]].unk2 = (base[idx.b[i]].unk0 = f) - 42;
                v = (s16)(f * r * 32.0f / 42.0f * 64.0f);
                base[idx.b[i]].unk8 = v;
                base[idx.b[i]].unkA = v;
                break;
            case 2:
                r = s / c;
                f = 42.0f / (r + 1.0f);
                base[idx.b[i]].unk0 = (s16)f - 42;
                base[idx.b[i]].unk2 = (s16)(f * r) - 42;
                v = (s16)(f * 32.0f / 42.0f * 64.0f);
                base[idx.b[i]].unk8 = v;
                base[idx.b[i]].unkA = v;
                break;
            case 3:
                r = s / c;
                f = 42.0f / (r + 1.0f) * r;
                t = f;
                base[idx.b[i]].unk0 = (s16)t - 42;
                base[idx.b[i]].unk2 = t;
                v = (s16)(f * 32.0f / 42.0f * 64.0f);
                base[idx.b[i]].unk8 = v;
                base[idx.b[i]].unkA = v;
                break;
            }
            ang -= 0x800;
        }
        i++;
    } while (i != 4);
}
