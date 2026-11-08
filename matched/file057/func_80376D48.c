#include "common.h"
struct func_8037865C_Struct {
    u8 pad4[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x3D];
    u16 unk48;
    u8 pad4A[8];
    u8 unk52;
    u8 unk53;
    u8 unk54;
    u8 unk55;
};
extern struct func_8037865C_Struct D_8017DC40;
extern u8 D_801BBBF0[];
extern u8 D_801BC3D8[];
extern u8 D_80388410[];
s32 func_80376D10(void);


struct func_80376D48_Player {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 pad5;
    u16 unk6;
    u16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u8 padE[0x32];
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
    u16 unk50;
    u8 unk52;
    u8 unk53;
    u8 unk54;
    u8 unk55;
};

struct func_80376D48_Stats {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
};

extern struct func_80376D48_Stats *D_801BC70C;
extern s16 D_801BC3E0;
extern u16 D_801BC42A;
extern u16 D_801BC430;
extern u16 D_801BC432;
extern u16 D_801BC434;

struct func_80376D48_Global {
    u8 pad0[0x44C];
    s16 unk44C;
    s16 unk44E;
    u8 pad450[0x398];
    s16 unk7E8;
    u8 pad7EA[0x332];
    struct func_80376D48_Stats *unkB1C;
};

struct func_80376D48_Battle {
    u8 pad0[8];
    s16 unk8;
    u8 padA[0x48];
    u16 unk52;
    u8 pad54[4];
    u16 unk58;
    u16 unk5A;
    u16 unk5C;
    u8 pad5E[0x2D6];
    struct func_80376D48_Stats *unk334;
};

struct func_80376D48_Tables {
    u16 unk0[99];
    u16 unkC6[99];
    u16 unk18C[99];
    u16 unk252[99];
    u16 unk318[99];
    u16 unk3DE[99];
    u16 unk4A4[99];
    u16 unk56A[99];
    u16 unk630[99];
    u16 unk6F6[99];
    u16 unk7BC[99];
    u16 unk882[99];
};

#define P (*(struct func_80376D48_Player *)&D_8017DC40)
#define G (*(struct func_80376D48_Global *)D_801BBBF0)
#define B (*(struct func_80376D48_Battle *)D_801BC3D8)
#define T (*(struct func_80376D48_Tables *)D_80388410)

u8 func_80376D48(void) {
    u8 result;
    u16 gain;
    s32 initialGain;
    u16 sum;
    s32 experienceGain;
    u16 statSum;

    result = 0;
    initialGain = (u16)(u32)(((f32)(u32)G.unkB1C->unk8 * (f32)G.unk7E8 / (f32)(u32)P.unk0) + 0.5);
    if (initialGain == 0) {
        initialGain = 1;
    }
    if (initialGain + P.unk6 >= 0x10000U) {
        initialGain = (u16)(0xFFFF - P.unk6);
    }
    sum = initialGain + P.unk6;
    P.unk6 = sum;
    while (P.unk6 >= T.unk630[P.unk4] && P.unk4 < func_80376D10()) {
        result = 1;
        if (T.unk6F6[P.unk4] == 0) {
            gain = 1;
        } else {
            gain = T.unk6F6[P.unk4];
        }
        if (P.unk0 + gain >= 10000) {
            gain = (u16)(9999 - P.unk0);
        }
        P.unk2 += gain;
        statSum = P.unk0 + gain;
        P.unk0 = statSum;
        G.unk44C += gain;
        G.unk44E += gain;
        P.unk4++;
    }

    experienceGain = (u16)(u32)(((f32)(u32)D_801BC70C->unkA * (f32)D_801BC3E0 / (f32)(u32)P.unk8) + 0.5);
    if (experienceGain == 0) {
        experienceGain = 1;
    }
    if (P.unkC + experienceGain >= 0x10000U) {
        experienceGain = (u16)(0xFFFF - P.unkC);
    }
    sum = P.unkC + experienceGain;
    P.unkC = sum;
    while (P.unkC >= T.unk7BC[P.unkA] && P.unkA < func_80376D10()) {
        if (T.unk7BC[P.unkA] == 0) {
            gain = 1;
        } else {
            gain = T.unk882[P.unkA];
        }
        if (P.unk8 + gain >= 10000U) {
            gain = 9999 - P.unk8;
        }
        P.unk8 += gain;
        P.unkA++;
        result |= 2;
    }

    experienceGain = (u16)(u32)(((f32)(u32)D_801BC70C->unk0 * (f32)(u32)D_801BC430 / (f32)(u32)P.unk40) + 0.5);
    if (experienceGain == 0) {
        experienceGain = 1;
    }
    if (P.unk4A + experienceGain >= 0x10000U) {
        experienceGain = (u16)(0xFFFF - P.unk4A);
    }
    sum = P.unk4A + experienceGain;
    P.unk4A = sum;
    while (P.unk4A >= T.unk0[P.unk52] && P.unk52 < func_80376D10()) {
        if (T.unkC6[P.unk52] == 0) {
            gain = 1;
        } else {
            gain = T.unkC6[P.unk52];
        }
        if (P.unk40 + gain >= 10000U) {
            gain = 9999 - P.unk40;
        }
        P.unk40 += gain;
        P.unk52++;
        result |= 4;
    }

    experienceGain = (u16)(u32)(((f32)(u32)D_801BC70C->unk2 * (f32)(u32)D_801BC432 / (f32)(u32)P.unk42) + 0.5);
    if (experienceGain == 0) {
        experienceGain = 1;
    }
    if (P.unk4C + experienceGain >= 0x10000U) {
        experienceGain = (u16)(0xFFFF - P.unk4C);
    }
    sum = P.unk4C + experienceGain;
    P.unk4C = sum;
    while (P.unk4C >= T.unk18C[P.unk53] && P.unk53 < func_80376D10()) {
        if (T.unk252[P.unk53] == 0) {
            gain = 1;
        } else {
            gain = T.unk252[P.unk53];
        }
        if (P.unk42 + gain >= 10000U) {
            gain = 9999 - P.unk42;
        }
        P.unk42 += gain;
        P.unk53++;
        result |= 8;
    }

    experienceGain = (u16)(u32)(((f32)(u32)D_801BC70C->unk6 * (f32)(u32)D_801BC434 / (f32)(u32)P.unk46) + 0.5);
    if (experienceGain == 0) {
        experienceGain = 1;
    }
    if (P.unk50 + experienceGain >= 0x10000U) {
        experienceGain = (u16)(0xFFFF - P.unk50);
    }
    sum = P.unk50 + experienceGain;
    P.unk50 = sum;
    while (P.unk50 >= T.unk4A4[P.unk55] && P.unk55 < func_80376D10()) {
        if (T.unk56A[P.unk55] == 0) {
            gain = 1;
        } else {
            gain = T.unk56A[P.unk55];
        }
        if (P.unk46 + gain >= 10000U) {
            gain = 9999 - P.unk46;
        }
        P.unk46 += gain;
        P.unk55++;
        result |= 0x10;
    }

    experienceGain = (u16)(u32)(((f32)(u32)D_801BC70C->unk4 * (f32)(u32)D_801BC42A / (f32)(u32)P.unk44) + 0.5);
    if (experienceGain == 0) {
        experienceGain = 1;
    }
    if (P.unk4E + experienceGain >= 0x10000U) {
        experienceGain = (u16)(0xFFFF - P.unk4E);
    }
    sum = P.unk4E + experienceGain;
    P.unk4E = sum;
    while (P.unk4E >= T.unk318[P.unk54] && P.unk54 < func_80376D10()) {
        if (T.unk3DE[P.unk54] == 0) {
            gain = 1;
        } else {
            gain = T.unk3DE[P.unk54];
        }
        if (P.unk44 + gain >= 10000U) {
            gain = 9999 - P.unk44;
        }
        P.unk44 += gain;
        P.unk54++;
        result |= 0x20;
    }
    return result;
}
