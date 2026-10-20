#include "context.h"

typedef struct func_801E6334_C { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_801E6334_C;
typedef struct func_801E6334_B { u8 pad0[0x2C]; func_801E6334_C *unk2C; } func_801E6334_B;
typedef struct func_801E6334_A { u8 pad0[8]; struct func_801E6334_A *unk8; u8 pad1[0x18]; func_801E6334_B *unk24; } func_801E6334_A;
typedef struct func_801E6334_R { u8 pad0[8]; func_801E6334_A *unk8; } func_801E6334_R;

extern f32 D_801E96C0;
extern f32 D_801E96C4;
extern f32 D_801E96C8;
#define P ((func_801E6334_R *)D_801DAB14)

s32 func_801E6334(s32 arg0, s32 arg1) {
    func_801E6334_C *c;
    func_801E6334_R **pp;
    if (P->unk8->unk8->unk24->unk2C->unk4 < -240.0f) {
        func_801CF450(0);
        pp = (func_801E6334_R **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801E96C0;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801E96C4;
        func_801CC470(1, 0x0410000F, 0, 0x1001, 1.0f);
        return 0x1C;
    }
    if (func_801CF418(0x04100016, 0xB) || func_801CF418(0x04100016, 0x1E)) {
        c = P->unk8->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x676, D_801E96C8, 1.0f);
    }
    return 0x1B;
}
