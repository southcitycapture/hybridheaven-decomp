#include "context.h"

typedef struct func_80248FA0_StructB { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; } func_80248FA0_StructB;
typedef struct func_80248FA0_StructA { u8 pad0[0x30]; func_80248FA0_StructB *unk30; } func_80248FA0_StructA;
typedef struct func_80248FA0_Struct { u8 pad0[0x24]; func_80248FA0_StructA *unk24; u8 pad28[0x70]; u16 unk98; } func_80248FA0_Struct;
extern void func_801FCA4C(f32, f32, s32, s32, u16);
extern void func_801FCAE0(f32, f32, s32, u16);

void func_80248FA0(func_80248FA0_Struct *arg0) {
    func_80248FA0_StructB *b;
    s32 v;
    s32 pad1;
    s32 pad2;
    s32 pad3;
    s32 pad4;
    u16 sp26;

    if (D_8025C7E8 != 0) {
        v = arg0->unk98;
        if (v == 0) goto a0;
        if (v == 1) goto a1;
        if (v == 2) goto a2;
        if (v != 3) goto end;
        if (1) goto a3;
a0:     sp26 = 0x5C8;
        if (1) goto end;
a1:     sp26 = 0x5C9;
        if (1) goto end;
a2:     sp26 = 0x5CA;
        if (1) goto end;
a3:     sp26 = 0x5CB;
        if (1) goto end;
    } else {
        v = arg0->unk98;
        if (v == 0) goto b0;
        if (v == 1) goto b1;
        if (v == 2) goto b2;
        if (v != 3) goto end;
        if (1) goto b3;
b0:     sp26 = 0x6CA;
        if (1) goto end;
b1:     sp26 = 0x6CB;
        if (1) goto end;
b2:     sp26 = 0x6CC;
        if (1) goto end;
b3:     sp26 = 0x6CD;
    }
end:
    b = arg0->unk24->unk30;
    func_801FCA4C(b->unk4, b->unk8, b->unkC, 0x442F0000, sp26);
    b = arg0->unk24->unk30;
    func_801FCAE0(b->unk4, b->unk8, b->unkC, sp26);
}
