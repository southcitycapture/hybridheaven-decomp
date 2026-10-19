#include "context.h"

typedef struct func_8012E114_StructG {
    u8 pad0[0xF5];
    u8 unkF5;
    u8 pad1[0x238 - 0xF6];
    f32 unk238;
    f32 unk23C;
    f32 unk240;
    u8 pad2[0xEF0 - 0x244];
    u16 unkEF0;
} func_8012E114_StructG;
typedef struct func_8012E114_StructD { u8 pad[0x98]; f32 unk98; f32 unk9C; f32 unkA0; f32 unkA4; f32 unkA8; f32 unkAC; } func_8012E114_StructD;
typedef struct func_8012E114_StructC { u8 pad[0x2C]; func_8012E114_StructD *unk2C; } func_8012E114_StructC;
typedef struct func_8012E114_StructB { u8 pad[0x22]; u8 unk22; } func_8012E114_StructB;
typedef struct func_8012E114_StructA { func_8012E114_StructB *unk0; u8 pad[0x14]; func_8012E114_StructC *unk18; } func_8012E114_StructA;
typedef struct func_8012E114_StructP { u8 pad[0x74]; u8 unk74; } func_8012E114_StructP;
typedef struct func_8012E114_StructO { u8 pad[0x5C]; func_8012E114_StructP *unk5C; } func_8012E114_StructO;

extern void func_8013C608(s32);
extern void func_8012E774();
extern void func_8012DF38(s32, s32);
extern void func_801DE7EC(void *, s32);
extern void func_801C4A5C(void *, s32);

void func_8012E114(func_8012E114_StructO *arg0, func_8012E114_StructA *arg1) {
    func_8012E114_StructP *sp24;
    u8 t;

    sp24 = arg0->unk5C;
    func_8012E774(arg0);
    if (!(((func_8012E114_StructG *)D_801BBBF0)->unkEF0 & 0x10)) {
        func_801C4A5C(arg0, 0);
    }
    ((func_8012E114_StructG *)D_801BBBF0)->unk238 = 0.0f;
    ((func_8012E114_StructG *)D_801BBBF0)->unk23C = 0.0f;
    ((func_8012E114_StructG *)D_801BBBF0)->unk240 = 0.0f;
    if (((func_8012E114_StructG *)D_801BBBF0)->unkF5 != 0) {
        func_8012DF38((s32)arg1, (s32)sp24);
        if ((arg1->unk0->unk22 != 0) && ((t = sp24->unk74, (t == 0)) || (t == 2))) {
            ((func_8012E114_StructG *)D_801BBBF0)->unk238 = (f32)((f64)(arg1->unk18->unk2C->unkA4 + arg1->unk18->unk2C->unk98) * 0.5);
            ((func_8012E114_StructG *)D_801BBBF0)->unk23C = (f32)((f64)(arg1->unk18->unk2C->unkA8 + arg1->unk18->unk2C->unk9C) * 0.5);
            ((func_8012E114_StructG *)D_801BBBF0)->unk240 = (f32)((f64)(arg1->unk18->unk2C->unkAC + arg1->unk18->unk2C->unkA0) * 0.5);
        }
        func_8013C608((s32)arg0);
        func_801DE7EC(arg0, (s32)arg0->unk5C);
    }
}
