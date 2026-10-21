#include "context.h"

typedef struct func_80148500_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad92[6];
    void *unk98;
    u8 pad9C[4];
    s16 unkA0;
} func_80148500_Struct;

typedef struct func_80148500_Rec {
    u8 pad0[2];
    u16 unk2;
    u8 unk4;
    u8 unk5;
} func_80148500_Rec;

typedef struct func_80148500_Obj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_80148500_Inner *unk30;
} func_80148500_Obj;

struct func_80148500_Inner {
    u8 pad0[0x12];
    s16 unk12;
};

typedef struct func_80148500_Blk {
    u8 pad[0x44C];
} func_80148500_Blk;

extern u8 func_8013D4A0(u8, s32);
extern s32 func_80147E34(void *, u16, u8, f32, f32, f32, s32);

void func_80148500(func_80148500_Struct *arg0) {
    void *cur;
    u8 sp33;
    s32 var_v0;
    func_80148500_Rec *r;
    s16 h;

    cur = arg0->unk98;
    if (cur == (void *)((func_80148500_Blk *)D_801BBBF0 + 1)) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    sp33 = func_8013D4A0(D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6], var_v0 & 0xFF);
    D_80181D5C = func_80147E34(arg0, ((func_80148500_Rec *)(D_80181ABC + arg0->unk91 * 0x78 + arg0->unk90 * 6))->unk2, ((func_80148500_Rec *)(D_80181ABC + arg0->unk91 * 0x78 + arg0->unk90 * 6))->unk4, 225.0f, 88.0f, 0.0f, 1);
    D_80181D60 = func_80147E34(arg0, ((func_80148500_Rec *)(D_80181ABC + arg0->unk91 * 0x78 + arg0->unk90 * 6))->unk2, ((func_80148500_Rec *)(D_80181ABC + arg0->unk91 * 0x78 + arg0->unk90 * 6))->unk5, 225.0f, 88.0f, 0.0f, 2);
    h = arg0->unkA0;
    ((func_80148500_Obj *)D_80181D5C)->unk30->unk12 = h;
    ((func_80148500_Obj *)D_80181D60)->unk30->unk12 = h;
    if ((sp33 == 0) || (func_80148270((func_80148270_Struct *)arg0) == 0)) {
        ((func_80148500_Obj *)D_80181D5C)->unk22 = 0;
        ((func_80148500_Obj *)D_80181D60)->unk22 = 0;
    }
}
