#include "common.h"
extern s32 D_801EA628;
extern s32 D_801EA62C;
extern s32 D_801EA630;
void *func_801BF6B0(s32 arg0);
extern void func_801CCE88(s32, s32, s32, s32);


typedef struct func_801E2980_StructB {
    /* 0x00 */ u8 pad0[8];
    /* 0x08 */ f32 f8;
} func_801E2980_StructB;

typedef struct func_801E2980_StructA {
    /* 0x00 */ u8 pad0[0x22];
    /* 0x22 */ u8 b22;
    /* 0x23 */ u8 pad23[0xD];
    /* 0x30 */ func_801E2980_StructB *p30;
} func_801E2980_StructA;

typedef struct func_801E2980_StructG {
    /* 0x00 */ u8 pad0[0x20];
    /* 0x20 */ func_801E2980_StructA *p20;
} func_801E2980_StructG;

extern func_801E2980_StructG D_8008DA88;
extern u8 func_8038D8B8[];
extern s32 D_80006214(s32);

s32 func_801E2980() {
    f32 f;
    u8 pad[0x18];
    f32 f2;
    f32 f3;
    s32 t;
    s32 sw;
    func_801E2980_StructB *p;

    t = D_801EA628;
    switch (t) {
    case 0:
    {
        if (++D_801EA62C >= 15) {
            D_801EA62C = 0;
            D_801EA628 = 1;
        } else {
            D_801EA62C %= 15;
        }
    }
        break;
    case 1:
    {
        f = (f32)D_801EA62C / 25.0f;
        func_801CCE88(0, (u32)(255.0f * f) & 0xFF, (u32)(103.0f * f) & 0xFF, (u32)(128.0f * f) & 0xFF);
        func_801CCE88(1, (u32)(113.0f * f) & 0xFF, (u32)((1.0f - 1.0f) * f) & 0xFF, (u32)(246.0f * f) & 0xFF);
        if ((t = ++D_801EA62C) >= 25) {
            D_801EA62C = 0;
            D_801EA628 = 2;
        } else {
            D_801EA62C = t % 25;
        }
    }
        break;
    case 2:
    {
        f2 = (f32)D_801EA62C / 25.0f;
        func_801CCE88(0, (u32)((-255.0f * f2) + 255.0f) & 0xFF, (u32)((-103.0f * f2) + 103.0f) & 0xFF, (u32)((-128.0f * f2) + 128.0f) & 0xFF);
        func_801CCE88(1, (u32)((-113.0f * f2) + 113.0f) & 0xFF, (u32)((1.0f - 1.0f) * f2) & 0xFF, (u32)((-246.0f * f2) + 246.0f) & 0xFF);
        if ((t = ++D_801EA62C) >= 25) {
            D_801EA62C = 0;
            D_801EA628 = 0;
        } else {
            D_801EA62C = t % 25;
        }
    }
    break;
    }
    if (*(s32 *)((u8 *)func_801BF6B0(3) + 0xC) >= 2) {
        D_80006214(*(s32 *)(func_8038D8B8 + 0x14));
        sw = D_801EA628;
        switch (sw) {
        case 0:
        D_801EA630 = 0;
        D_8008DA88.p20->b22 = 0;
        break;
        case 1:
        case 2:
        f3 = (f32)D_801EA630 / 50.0f;
        if (D_8008DA88.p20->p30 != NULL) {
            D_8008DA88.p20->p30->f8 = (-30.0f * f3) + 30.0f;
        }
        D_801EA630++;
        D_8008DA88.p20->b22 = 1;
        break;
        }
    }
}
