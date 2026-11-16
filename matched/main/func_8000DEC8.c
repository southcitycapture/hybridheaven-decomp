#include "common.h"
extern f32 *func_8000522C(u16, s32);

extern f32 func_80015214(f32);

typedef struct func_8000DEC8_StructSub {
    u8 pad0[4];
    f32 pos[3];
    s16 rot[3];
    u8 pad16[0x50 - 0x16];
    f32 time;
    f32 *anim;
} func_8000DEC8_StructSub;

typedef struct func_8000DEC8_StructObj {
    u8 pad[0x2C];
    func_8000DEC8_StructSub *unk2C;
} func_8000DEC8_StructObj;

typedef struct func_8000DEC8_StructArg {
    u16 unk0;
    u16 unk2;
    s32 unk4;
} func_8000DEC8_StructArg;

s32 func_8000DEC8(func_8000DEC8_StructObj *obj, func_8000DEC8_StructArg *key) {
    f32 len;
    f32 *anim;
    f32 frac;
    s32 n;
    f32 *p;
    f32 *q;

    anim = func_8000522C(key->unk2, key->unk4);
    q = anim + 1;
    if (anim != obj->unk2C->anim) {
        obj->unk2C->time = 0.0f;
        obj->unk2C->anim = anim;
    }
    n = key->unk0 & 0x7FFF;
    if (n != 0) {
        len = n;
    } else {
        len = *anim - 1.0f;
    }
    if (len != 0.0f) {
        f32 cur;

        cur = (*anim - 1.0f) / len * obj->unk2C->time;
        if (*anim - 1.0f < cur) {
            cur = *anim - 1.0f;
        }
        n = cur;
        p = anim + (n * 6 + 1);
        q = anim + (n * 6 + 7);
        frac = cur - n;
    } else {
        frac = 0.0f;
        q = p = anim + 1;
    }
    if (frac != 0.0f) {
        obj->unk2C->rot[0] = (*p + func_80015214(*q - *p) * frac) / 0.0439453125;
        p++;
        q++;
        obj->unk2C->rot[1] = (*p + func_80015214(*q - *p) * frac) / 0.0439453125;
        p++;
        q++;
        obj->unk2C->rot[2] = (*p + func_80015214(*q - *p) * frac) / 0.0439453125;
        p++;
        q++;
        obj->unk2C->pos[0] = *p + (*q - *p) * frac;
        p++;
        q++;
        obj->unk2C->pos[1] = *p + (*q - *p) * frac;
        p++;
        q++;
        obj->unk2C->pos[2] = *p + (*q - *p) * frac;
    } else {
        obj->unk2C->rot[0] = p[0] / 0.0439453125;
        obj->unk2C->rot[1] = p[1] / 0.0439453125;
        obj->unk2C->rot[2] = p[2] / 0.0439453125;
        obj->unk2C->pos[0] = p[3];
        obj->unk2C->pos[1] = p[4];
        obj->unk2C->pos[2] = p[5];
    }
    {
        func_8000DEC8_StructSub *sub = obj->unk2C;

        if (len <= sub->time) {
            len = key->unk0 & 0x8000;
            if (len != 0.0f) {
                sub->time = 0.0f;
            }
            return 1;
        }
        if (0) { }
        sub->time += 1.0f;
        return 0;
    }
}
