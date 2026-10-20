#include "context.h"
typedef struct func_8037B4E4_V { s32 a; s32 b; s32 c; } func_8037B4E4_V;
typedef struct func_8037B4E4_S { u8 pad[0x1C]; s32 unk1C; u8 pad2[2]; u16 unk22; } func_8037B4E4_S;
typedef struct func_8037B4E4_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x2C]; func_8037B4E4_S *unk5C; } func_8037B4E4_O;
extern void func_80011140(s32, void *, func_8037B4E4_V, s32);
extern func_8037B4E4_V D_80388A44;
extern func_8037B4E4_V D_80388A38;
extern s16 D_80216BF8;
struct func_8037BAEC_StructBBBF0;
extern struct func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037B4E4_B { u8 pad[0xEF0]; u16 unkEF0; } func_8037B4E4_B;
extern u8 func_801E5010[];
void func_800058DC(void *, void *);

void func_8037B4E4(func_8037B4E4_O *arg0, s32 arg1) {
    func_8037B4E4_S *s = arg0->unk5C;
    if (s->unk22 & 0x10) {
        func_80011140(arg1, s, D_80388A44, 0xF);
    } else {
        func_80011140(arg1, s, D_80388A38, 0xF);
    }
    if (s->unk1C == 0x01680017) {
        arg0->unk2C |= 0x40;
        arg0->unk2C |= 0x20;
        arg0->unk2C |= 0x80;
        D_80216BF8 = 0x5A;
        ((func_8037B4E4_B *)&D_801BBBF0)->unkEF0 |= 0x2000;
        ((func_8037B4E4_B *)&D_801BBBF0)->unkEF0 &= 0xEFFF;
        func_800058DC(arg0, func_801E5010);
    }
}
