#include "context.h"

typedef struct func_801F8B50_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801F8B50_StructE;

typedef struct func_801F8B50_StructD {
    u8 pad0[0x2C];
    func_801F8B50_StructE *unk2C;
} func_801F8B50_StructD;

typedef struct func_801F8B50_StructC {
    u8 pad0[0x24];
    func_801F8B50_StructD *unk24;
} func_801F8B50_StructC;

typedef struct func_801F8B50_StructB {
    u8 pad0[0x8];
    func_801F8B50_StructC *unk8;
} func_801F8B50_StructB;

typedef struct func_801F8B50_StructA {
    u8 pad0[0x8];
    func_801F8B50_StructB *unk8;
} func_801F8B50_StructA;

extern f32 D_801FD3E8;
extern f32 D_801FD3EC;

s32 func_801F8B50(s32 arg0, s32 arg1) {
    func_801F8B50_StructD *temp_v0;

    temp_v0 = ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801FD3E8;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FD3EC;
        ((func_801F8B50_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(1, 0x02A80004, 0, 0x1100, 1.0f);
        return 2;
    }
    return 1;
}
