#include "common.h"
extern u8 D_8008DC18[];
extern s8 D_801BBBF0;
typedef struct func_80141268_StructG {
    u8 unk0;
    u8 pad1[7];
    u16 unk8;
    u16 unkA;
    u8 padC[0x11];
    u8 unk1D;
} func_80141268_StructG;
#define G ((func_80141268_StructG *)&D_801BBBF0)
extern u8 *func_8014C294(void);
extern s32 func_8014C2A0(void);


typedef struct func_80141F28_Struct {
    u8 pad0[2];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u8 padC[2];
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 unk16;
    u8 unk17;
    s8 unk18;
    s8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
    u8 unk1D;
    u8 pad1E[0x39D - 0x1E];
    u8 unk39D;
} func_80141F28_Struct;
extern void func_80144C40(u8 **);
extern void func_80126968(u8 *, s32);
extern void D_8014B8DC(u8 *);

#undef G
#define G (*(func_80141F28_Struct *)&D_801BBBF0)
#define W (arg0[k++])

#define arg0 ((u8 *)arg)
void func_80141F28(s32 arg) {
    u8 *buf;
    s32 i;
    s32 n;
    u16 sum;
    s32 k;

    for (i = 0; i < 0xD00;) {
        arg0[i++] = 0;
    }
    buf = arg0;
    func_80144C40(&buf);
    buf = D_8008DC18 + 8;
    n = 100;
    k = 0x300;
    for (i = 0; i < n; i++) {
        arg0[k++] = buf[i];
    }
    D_8014B8DC(arg0 + k);
    buf = func_8014C294();
    n = func_8014C2A0();
    for (i = 0; i < n; i++) {
        arg0[k++] = buf[i];
    }
    func_80126968(arg0 + k, n);
    W = G.unk2 >> 8;
    W = G.unk2 & 0xFF;
    W = G.unk4 >> 8;
    W = G.unk4 & 0xFF;
    W = G.unk6 >> 8;
    W = G.unk6 & 0xFF;
    W = G.unkE >> 8;
    W = G.unkE & 0xFF;
    W = G.unk10 >> 8;
    W = G.unk10 & 0xFF;
    W = G.unk12 >> 8;
    W = G.unk12 & 0xFF;
    W = G.unk14 >> 8;
    W = G.unk14 & 0xFF;
    W = G.unk16 >> 8;
    W = G.unk16 & 0xFF;
    W = G.unk18 >> 8;
    W = G.unk18 & 0xFF;
    W = G.unk8 >> 8;
    W = G.unk8 & 0xFF;
    W = G.unk19;
    W = G.unk17;
    W = G.unk39D;
    W = G.unkA >> 8;
    W = G.unkA & 0xFF;
    W = G.unk1A;
    W = G.unk1B;
    W = G.unk1C;
    arg0[k] = G.unk1D;
    sum = 0;
    for (i = 0; i < 0xCFF; i++) {
        sum += arg0[i];
    }
    *(arg0 + i) = sum;
}
