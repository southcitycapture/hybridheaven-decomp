#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_80378020_Struct {
    u8 pad0[0x76];
    u16 unk76;
    u16 unk78;
    u16 unk7A;
    u16 unk7C;
    u16 unk7E;
    u16 unk80;
    u8 pad82[0xC];
    u16 unk8E;
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
    u8 pad9A[0x238];
    void *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[3];
    u8 unk2DF;
    u8 unk2E0[1];
};

extern u8 D_80240730[];
extern u16 D_803891FA[];
extern u16 D_803892C0[];
extern u16 D_80389386[];
extern u16 D_8038944C[];
extern u16 D_80389512[];
extern u16 D_803895D8[];
u16 func_80376D10();

u8 func_80378020(void) {
    struct func_80378020_Struct *self;
    struct func_80378020_Struct *other;
    s32 limit;
    u8 result;
    u8 flag;
    u16 a3;
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    u16 t4;
    u16 i;
    s32 var_v0;
    u16 *levels;
    u16 *points;

    a3 = 0;
    t0 = 0;
    t1 = 0;
    t2 = 0;
    t3 = 0;
    t4 = 0;
    result = 0;
    if (D_801BBBF0[0x1030] == 0) {
        self = (struct func_80378020_Struct *)&D_801BC03C;
    } else {
        self = (struct func_80378020_Struct *)&D_801BC3D8;
    }
    if (D_801BBBF0[0x1030] == 0) {
        other = (struct func_80378020_Struct *)&D_801BC3D8;
    } else {
        other = (struct func_80378020_Struct *)&D_801BC03C;
    }
    if (*(u16 *)&D_801BBBF0[0x2C] == 10) {
        return 0;
    }
    if (*(u16 *)&D_801BBBF0[0x2C] == 11) {
        return 0;
    }
    if (other->unk2D8 == 13) {
        if (other->unk2DB != 0) {
            flag = 0;
        } else {
            flag = 1;
        }
    } else if (other->unk2D8 == 18) {
        if (other->unk2DA != 0) {
            flag = 0;
        } else {
            flag = 1;
        }
    } else if (other->unk2D8 == 15) {
        flag = 1;
    } else if (other->unk2D8 == 14) {
        flag = 1;
    } else if (other->unk2D8 == 17) {
        flag = 1;
    } else if (other->unk2D8 == 16) {
        if (other->unk2DA != 0) {
            flag = 1;
        } else {
            flag = 0;
        }
    } else {
        return 0;
    }
    if (self->unk2D8 < 2 || self->unk2D8 == 10) {
        var_v0 = 2 - flag;
        for (i = 0; i < self->unk2DF; i++) {
            if (self->unk2E0[i] < 6) {
                t0 = var_v0;
            } else if (self->unk2E0[i] == 6) {
                a3 = var_v0;
            } else if (self->unk2E0[i] < 10) {
                t2 = var_v0;
            } else if (self->unk2E0[i] < 13) {
                t1 = var_v0;
            } else if (self->unk2E0[i] < 16) {
                t4 = var_v0;
            } else {
                t3 = var_v0;
            }
        }
    } else {
        for (i = 0; i < 6; i++) {
            if (((u8 *)self->unk2D4)[0xC] & (1 << i)) {
                switch (i) {
                case 0: a3 = 2 - flag; break;
                case 1: t0 = 2 - flag; break;
                case 2: t1 = 2 - flag; break;
                case 3: t2 = 2 - flag; break;
                case 4: t3 = 2 - flag; break;
                case 5: t4 = 2 - flag; break;
                }
            }
        }
    }
    levels = &other->unk8E;
    points = &other->unk76;
    if (points[0] < 0xFFFD) {
        points[0] = points[0] + a3;
    }
    if (points[1] < 0xFFFD) { points[1] = points[1] + t0; }
    if (points[2] < 0xFFFD) { points[2] = points[2] + t1; }
    if (points[3] < 0xFFFD) { points[3] = points[3] + t2; }
    if (points[4] < 0xFFFD) { points[4] = points[4] + t3; }
    if (points[5] < 0xFFFD) { points[5] = points[5] + t4; }
    if (points[0] >= D_803891FA[levels[0]] && levels[0] < func_80376D10() + 1) {
        {
            result = 1;
            levels[0]++;
            D_80240730[0x1A]++;
            D_80240730[0x22]++;
        }
    } else { skip0:; }
    if (points[1]>= D_803892C0[levels[1]] && levels[1] < func_80376D10() + 1) {
        {
            result |= 2;
            levels[1]++;
            D_80240730[0x1B]++;
            D_80240730[0x22]++;
        }
    } else { skip1:; }
    if (points[2]>= D_80389386[levels[2]] && levels[2] < func_80376D10() + 1) {
        {
            result |= 4;
            levels[2]++;
            D_80240730[0x1C]++;
            D_80240730[0x22]++;
        }
    } else { skip2:; }
    if (points[3]>= D_8038944C[levels[3]] && levels[3] < func_80376D10() + 1) {
        {
            result |= 8;
            levels[3]++;
            D_80240730[0x1D]++;
            D_80240730[0x22]++;
        }
    } else { skip3:; }
    if (points[4]>= D_80389512[levels[4]] && levels[4] < func_80376D10() + 1) {
        {
            result |= 0x10;
            levels[4]++;
            D_80240730[0x1E]++;
            D_80240730[0x22]++;
        }
    } else { skip4:; }
    if (points[5]>= D_803895D8[levels[5]]) {
        limit = func_80376D10(points, levels) + 1;
        if (levels[5] < limit) {
            result |= 0x20;
            levels[5]++;
            D_80240730[0x1F]++;
            D_80240730[0x22]++;
        }
    }
    return result;
}
