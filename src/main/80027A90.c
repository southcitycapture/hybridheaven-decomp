#include "common.h"

#define D_800CBE60 D_800CBE60__func_80027A90
#define D_800CBFC0 D_800CBFC0__func_80027A90
#define func_800266B0 func_800266B0__func_80027A90
#define func_80027EB0 func_80027EB0__func_80027A90
#define func_80027EF4 func_80027EF4__func_80027A90
#define func_800294D0 func_800294D0__func_80027A90
extern u8 D_800CBE60[];
extern void func_800266B0(void *, void *, s32);
void func_80027EB0(void);
void func_80027EF4(void);
extern void func_800294D0(s32, void *);
extern u8 D_800CBFC0;

struct func_80027A90_Struct { s32 unk0; void *unk4; s32 unk8; };

s32 func_80027A90(struct func_80027A90_Struct *arg0, s32 arg1) {
    s32 v1;
    s32 m;
    u8 *t0;
    s32 s0;

    t0 = D_800CBE60 + (arg0->unk8 << 6);
    if (!(arg0->unk0 & 8)) {
        return 5;
    }
    func_80027EB0();
    *(s32 *)(D_800CBE60 + (arg0->unk8 << 6) + 0x3C) = 1;
    t0 += arg0->unk8;
    for (v1 = 0; v1 < 0x20; v1++) {
        t0[v1 + 6] = arg1;
    }
    D_800CBFC0 = 0xFE;
    func_800294D0(1, D_800CBE60 + (arg0->unk8 << 6));
    func_800266B0(arg0->unk4, 0, 1);
    func_800294D0(0, D_800CBE60 + (arg0->unk8 << 6));
    func_800266B0(arg0->unk4, 0, 1);
    s0 = t0[2];
    if ((s0 = (s32)(u64)(s0 & 0xC0)) == 0) {
        if (arg1 == 0) {
            if (t0[0x26] != 0) {
                s0 = 4;
            }
        } else if ((u8)(u32)(u64)(u32)(u64)t0[0x26] != 0xEB) {
            s0 = 4;
        }
    }
    func_80027EF4();
    return s0;
}
#undef D_800CBE60
#undef D_800CBFC0
#undef func_800266B0
#undef func_80027EB0
#undef func_80027EF4
#undef func_800294D0

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80027BF8.s")


struct func_80027D04_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 pad[0x65 - 0xC];
    u8 unk65;
};

extern s32 func_80027BF8(s32, void *);
extern s32 func_80032D40(void *, s32);
extern s32 func_80034060(s32, s32, s32, void *);
extern u8 D_800CBE60[];

s32 func_80027D04(s32 arg0, struct func_80027D04_Struct *arg1, s32 arg2) {
    u8 buf[0x24];
    s32 ret;

    arg1->unk4 = arg0;
    arg1->unk8 = arg2;
    arg1->unk65 = 0xFF;
    arg1->unk0 = 0;
    ret = func_80032D40(arg1, 0xFE);
    if (ret == 2) {
        ret = func_80032D40(arg1, 0x80);
    }
    if (ret != 0) {
        return ret;
    }
    ret = func_80034060(arg0, arg2, 0x400, buf);
    if (ret == 2) {
        ret = 4;
    }
    if (ret != 0) {
        return ret;
    }
    if (buf[0x1F] == 0xFE) {
        return 0xB;
    }
    ret = func_80032D40(arg1, 0x80);
    if (ret == 2) {
        ret = 4;
    }
    if (ret != 0) {
        return ret;
    }
    ret = func_80034060(arg0, arg2, 0x400, buf);
    if (ret == 2) {
        ret = 4;
    }
    if (ret != 0) {
        return ret;
    }
    if (buf[0x1F] != 0x80) {
        return 0xB;
    }
    if (!(arg1->unk0 & 8)) {
        func_80027BF8(arg2, D_800CBE60 + (arg2 << 6));
    }
    arg1->unk0 = 8;
    return 0;
}


extern void func_80026300(void *, s32, s32);
extern void func_80030610(void *, void *, s32);
extern s32 D_80049950;
extern u8 D_800CBF60[];
extern u8 D_800CBF68[];

void func_80027E60(void) {
    D_80049950 = 1;
    func_80030610(D_800CBF68, D_800CBF60, 1);
    func_80026300(D_800CBF68, 0, 0);
}


extern void func_800266B0(void *, void *, s32);

void func_80027EB0(void) {
    s32 sp1C;

    if (D_80049950 == 0) {
        func_80027E60();
    }
    func_800266B0(D_800CBF68, &sp1C, 1);
}



void func_80027EF4(void) {
    func_80026300(D_800CBF68, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80027F20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80028090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80027A90/func_80028160.s")

