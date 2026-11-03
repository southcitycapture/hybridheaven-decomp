#include "common.h"
u8 func_80230494(void);
u16 func_80230500(s32 arg0, u8 arg1);
struct func_80231B28_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[0x2DB - 0x2D9];
    u8 unk2DB;
};


struct func_80230728_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x15 - 0xB];
    s8 unk15[1];
};
struct func_80230728_Ent {
    u8 pad0[0xAA];
    s16 unkAA;
    u8 unkAC;
};
struct func_80230728_Struct {
    u8 pad0[0x2D];
    s8 unk2D;
    u8 pad2E[0x38 - 0x2E];
    u32 unk38;
    u8 pad3C[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad58[0xAA - 0x58];
    s16 unkAA;
    u8 unkAC;
    u8 pad_AD[0x2D4 - 0xAD];
    struct func_80230728_Inner *unk2D4;
    u8 pad2D8[2];
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[0x399 - 0x2DC];
    u8 unk399;
};
#define func_80230494 func_80230494__func_80230728_u32
extern u32 func_80230494(void *);

#define arg0 ((struct func_80230728_Struct *)a0)
#define arg1 ((struct func_80230728_Struct *)a1)
#define func_80231B28_Struct func_80231B28_Struct__func_80231B28
void func_80230728(struct func_80231B28_Struct *a0, struct func_80231B28_Struct *a1) {
    s16 pad;
    s16 s;
    s16 dy;
    s16 x;
    u16 r;
    u32 r2;
    struct func_80230728_Inner *q;
    struct func_80230728_Ent *ent;
    s32 d;

    r = func_80230500((s32)arg0, 1);
    dy = (s16)(arg0->unk52 - arg1->unk52);
    s = (*(s16 *)((u8 *)arg0 + arg1->unk2D4->unkA * 6 + 0xAA)) + (arg0->unk54 - arg1->unk54) * 1
        + ((arg0->unk56 & 0x3F00) >> 8) + arg0->unk2D + dy + r;
    s = (s32)((f32)s * (f32)arg0->unk399 / 100.0f + 0.5);
    r2 = func_80230494(arg1);
    q = arg1->unk2D4;
    ent = (struct func_80230728_Ent *)((u8 *)arg1 + q->unkA * 6);
    x = q->unk15[arg1->unk38 << 6 >> 29] + q->unk4 + (ent->unkAA * r2);
    x = (s32)((f32)(0x64 - (ent->unkAC * 2)) * (f32)x / 100.0f);
    if (x < s) {
        arg0->unk2DA = 1;
        arg0->unk2DB = 1;
        arg1->unk2DA = 1;
        if (arg0->unk399 >= 6) {
            arg0->unk399 -= 5;
        }
    } else {
        arg0->unk2DA = 0;
        arg0->unk2DB = 0;
        arg1->unk2DA = 1;
        if (arg0->unk399 < 0xEB) {
            arg0->unk399 += 0x14;
        } else {
            arg0->unk399 = 0xFF;
        }
    }
}
#undef func_80231B28_Struct
#undef func_80230494
