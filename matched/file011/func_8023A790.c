#include "common.h"
struct func_8023A2BC_Struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B[0x6A - 0x1B];
    u8 unk6A;
    u8 unk6B;
};
extern struct func_8023A2BC_Struct D_80240880;
#define B ((u8 *)&D_80240880)
extern s32 D_8008DA88[];
extern u8 func_80006214(s32);
extern void (*D_80216D10[])(void *, s32);
extern void func_80146208(void *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern s32 D_8023E548;
typedef struct func_8023A790_StructEntry {
    u8 pad0[0x38];
    u8 active;
    u8 pad39[0x18];
    u8 value;
} func_8023A790_StructEntry;
void func_8023A790(s32 arg0) {
    u8 q;
    u8 output;
    u8 saved;
    s32 colors;
    u8 off;
    u8 n;

    off = B[0x20] * 4;
    colors = D_8023E548;
    saved = func_80006214(arg0);
    for (n = 0; n < 4; n++) {
    u8 r;
    u8 idx;
    q = ((func_8023A790_StructEntry *)(B + off + (s32)n))->value / 10;
    r = ((func_8023A790_StructEntry *)(B + off + (s32)n))->value % 10;
    q = (s32)q % 4;
    idx = func_80006214(arg0);
    func_80146208((void *)arg0, &output, 6, 0xE1, (s16)((s32)n * 0x14 + 0x51), 0x10, 0x10, 0, 0, 0xFF, 0x20B, ((u8 *)&colors)[q]);
    func_80146208((void *)arg0, &output, 6, 0xF2, (s16)((s32)n * 0x14 + 0x51), 0x10, 0x10, 0, 0, 0xFF, 0x20B, ((u8 *)&colors)[r]);
    if (((func_8023A790_StructEntry *)(B + off + (s32)n))->active == 0) {
        ((u8 *)D_8008DA88[idx + 1])[0x22] = 0;
        ((u8 *)D_8008DA88[idx])[0x22] = ((u8 *)D_8008DA88[idx + 1])[0x22];
    }
    if (B[0x22] == B[0x20] && (s32)n >= B[0x23] - B[0x20] * 4 - 1) {
        break;
    }
    }
    *(s32 *)(B + 8) = D_8008DA88[saved];
}
