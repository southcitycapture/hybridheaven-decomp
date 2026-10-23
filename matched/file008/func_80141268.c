#include "context.h"

extern s32 func_80108280(void);
extern s32 D_80141568(u8, void *);
extern s32 D_80141628(u8, u8);
extern u16 D_8017DC88;
extern u16 D_801BBBF8;
extern u16 D_801BBBFA;
extern u8 D_801BBC0D;

typedef struct func_80141268_StructData {
    u8 pad[4];
    u8 unk4, unk5, unk6, unk7;
    u16 unk8;
    u8 unkA, unkB;
} func_80141268_StructData;

typedef struct func_80141268_StructRec {
    u8 a, b, c, d;
    u16 e;
    u8 f, g;
} func_80141268_StructRec;

typedef struct func_80141268_StructH {
    u8 hdr[4];
    func_80141268_StructRec rec[1];
} func_80141268_StructH;

typedef struct func_80141268_StructG {
    u8 unk0;
    u8 pad1[7];
    u16 unk8;
    u16 unkA;
    u8 padC[0x11];
    u8 unk1D;
} func_80141268_StructG;

#define G ((func_80141268_StructG *)&D_801BBBF0)
#define P1 ((func_80141268_StructData *)(D_801BEB80 + (u8)D_801BEC05 * 8))
#define P2 ((func_80141268_StructData *)(D_801BEBA8 + (u8)D_801BEC05 * 8))

s32 func_80141268(void) {
    u8 result;
    s32 v;
    func_80141268_StructRec *r;

    if ((u8)D_801BEC02 == 1) {
        v = D_80141628(1, (u8)D_801BEC05);
        result = v;
        if (v == 0) {
            P1->unk4 = 1;
            P1->unk5 = 1;
            if (G->unk0 == 0) {
                P1->unk6 = func_80108280() >> 8;
            } else {
                P1->unk6 = 0xFF;
            }
            P1->unk7 = D_8017DC88;
            P1->unk8 = G->unkA;
            P1->unkA = G->unk8 & 0xFF;
            P1->unkB = G->unk1D;
            v = D_80141568(1, D_801BEB84);
            result = v;
        }
        if (v == 0) {
            r = &((func_80141268_StructH *)D_801BEB80)->rec[(u8)D_801BEC05 - (u8)D_801BEC04];
            func_8014307C(0, result, r);
        }
    }
    if ((u8)D_801BEC02 == 2) {
        v = D_80141628(2, (u8)D_801BEC05);
        result = v;
        if (v == 0) {
            P2->unk4 = 1;
            P2->unk5 = 1;
            if (*(u8 *)&D_801BBBF0 == 0) {
                P2->unk6 = func_80108280() >> 8;
            } else {
                P2->unk6 = 0xFF;
            }
            P2->unk7 = D_8017DC88;
            P2->unk8 = D_801BBBFA;
            P2->unkA = D_801BBBF8 & 0xFF;
            P2->unkB = D_801BBC0D;
            v = D_80141568(2, D_801BEBAC);
            result = v;
        }
        if (v == 0) {
            r = &((func_80141268_StructH *)D_801BEBA8)->rec[(u8)D_801BEC05 - (u8)D_801BEC04];
            func_8014307C(0, result, r);
        }
    }
    return result;
}
