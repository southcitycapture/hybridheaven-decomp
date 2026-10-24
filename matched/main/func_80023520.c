#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define arg2 LP(A2, __LINE__)
#define A2_64 arg2
#define A2_78 arg2
#define A2_81 arg2
#define A2_88 arg2
#define A2_376 arg2, ...
#include "context.h"
#undef arg2

typedef struct func_80023520_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7;
    u8 *unk8;
    u8 padC[2];
    u8 unkE, unkF;
    u8 pad10[4];
    s32 unk14;
    u8 pad18[8];
    u8 unk20, unk21, unk22, unk23, unk24, unk25;
    u8 pad26[2];
    s32 unk28;
    s16 unk2C, unk2E, unk30, unk32, unk34, unk36;
    u8 pad38[0x10];
    u8 unk48;
    u8 pad49[3];
    u16 unk4C;
    u8 pad4E[0x2F];
    u8 unk7D;
    u8 pad7E[6];
    s32 unk84;
    u8 pad88[2];
    s16 unk8A;
    u8 pad8C[0xE];
    u16 unk9A;
    u8 pad9C[0x1A];
    u16 unkB6;
} func_80023520_Struct;

extern void func_80024780(u8);
extern void func_80025768(void);
extern void func_8002507C(void);
extern void func_80028F60(s32, void *, s32);
extern void (*D_80047B10[])(u8);
extern void (*D_80047BD0[])(u8);
extern u8 *D_800CBDA0;
#define PZ ((func_80023520_Struct *)D_800CBDA4)

void func_80023520(void) {
    u8 first[4];
    s32 code;
    u8 value;

    first[2] = 0;
    if (PZ->unk22 == 0) {
        first[2] = 1;
    } else if (PZ->unkE != 0) {
        PZ->unkF = 0;
        PZ->unkE = 0;
        func_80034EE0(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C);
    }
    D_800CBDA0 = PZ->unk8;
    value = *D_800CBDA0++;
    code = value;
    while (value >= 0xD0) {
        if (D_800CBAB4 >= 0x10) {
            D_80047BD0[code](value);
        } else {
            D_80047B10[code](value);
        }
        switch (code) {
        case 0xF2:
        case 0xF3:
            PZ->unk8 = D_800CBDA0;
            return;
        case 0xFF:
            return;
        }
        value = *D_800CBDA0++;
        code = value;
    }
    PZ->unk84 = PZ->unk28;
    if (code < 0x68) {
        PZ->unk25 = value;
    } else {
        PZ->unk25 = code - 0x68;
    }
    if (PZ->unk25 >= 0x48) {
        if (PZ->unk25 == 0x67) {
            PZ->unk25 = *D_800CBDA0;
            D_800CBDA0++;
        }
        PZ->unk6 |= 4;
        func_80024780(value);
        PZ->unk25 = 0x3C;
    } else {
        PZ->unk6 &= 0xFB;
    }
    PZ->unk28 = PZ->unk25 << 8;
    PZ->unk28 += PZ->unk2C;
    PZ->unk28 += PZ->unk2E;
    PZ->unk28 += PZ->unk30;
    PZ->unk28 += PZ->unk32;
    PZ->unk28 += PZ->unk34;
    if (code < 0x68) {
        PZ->unk20 = *D_800CBDA0;
        D_800CBDA0++;
    }
    PZ->unk21 = PZ->unk20;
    value = *D_800CBDA0++;
    if (value < 0x80) {
        PZ->unk23 = value;
        value = *D_800CBDA0++;
    }
    PZ->unk22 = PZ->unk23;
    if (PZ->unk22 == 0) {
        PZ->unk24 = 0;
    } else {
        PZ->unk24 = (PZ->unk21 * PZ->unk22) >> 7;
        if (PZ->unk24 == 0) {
            PZ->unk24 = 1;
        }
    }
    PZ->unk48 = value & 0x7F;
    PZ->unk8 = D_800CBDA0;
    if (D_800CBAB4 < 0x10) {
        if (PZ->unk8A == 0) {
            PZ->unk7D = 0;
        } else {
            func_80025768();
        }
        PZ->unk36 = 0;
        if (PZ->unk9A != 0) {
            func_8002507C();
        }
        func_80023BF4();
        if (first[2] == 0) {
            PZ->unkB6 = 0xFFFF;
            func_80024180();
            PZ->unkE = 1;
            func_80028F60(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, PZ->unk14);
            return;
        }
        PZ->unk6 |= 1;
        if (PZ->unk4C != 0) {
            func_80024358();
        }
        if (PZ->unk6 & 1) {
            func_80023D04();
        }
    }
}
