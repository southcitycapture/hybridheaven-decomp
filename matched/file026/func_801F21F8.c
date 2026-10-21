#include "context.h"

extern s32 D_801FB7F8;
extern f32 D_801FCECC, D_801FCED0, D_801FCED4, D_801FCED8, D_801FCEDC;
extern f32 D_801FCEE0, D_801FCEE4, D_801FCEE8, D_801FCEEC, D_801FCEF0, D_801FCEF4;

struct func_801F21F8_Leaf {
    u8 pad4[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F21F8_Node {
    u8 pad0[8];
    struct func_801F21F8_Node *unk8;
    u8 pad0C[0x24 - 0xC];
    struct func_801F21F8_Node *unk24;
    u8 pad28[4];
    struct func_801F21F8_Leaf *unk2C;
};
struct func_801F21F8_Root {
    u8 pad0[8];
    struct func_801F21F8_Node *unk8;
};
struct func_801F21F8_Cam {
    u8 pad[0x30];
    f32 f[6];
};
extern s32 D_801CC470(s32, s32, s32, s32, f32);
#define R ((struct func_801F21F8_Root *)D_801DAB14)

s32 func_801F21F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0282651F) != 0) {
        func_8038BD50(D_801FCECC, D_801FCED0, -20.5f);
        D_8038BD88(D_801FCED4, D_801FCED8, -2.0f);
        R->unk8->unk24->unk2C->unk4 = -7.0f;
        R->unk8->unk24->unk2C->unk8 = 0.0f;
        R->unk8->unk24->unk2C->unkC = 5.0f;
        R->unk8->unk24->unk2C->unk12 = 0x1000;
        D_801CC470(0, 0x02A8000F, 0, 0, 3.0f);
        R->unk8->unk8->unk24->unk2C->unk4 = D_801FCEDC;
        R->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        R->unk8->unk8->unk24->unk2C->unkC = -10.0f;
        R->unk8->unk8->unk24->unk2C->unk12 = 0;
        D_801CC470(1, 0x02A80010, 0, 0, 3.0f);
        D_801FB7F8 = 0;
        D_8038C158();
        return 0xC;
    }
    {
        struct func_801F21F8_Cam *c;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[0] += D_801FCEE0;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[1] += D_801FCEE4;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[2] += D_801FCEE8;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[3] += D_801FCEEC;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[4] += D_801FCEF0;
        c = (struct func_801F21F8_Cam *)D_801BBBF0.unkE8->unk2C;
        c->f[5] += D_801FCEF4;
    }
    return 0xB;
}
