#include "context.h"

typedef struct func_80234934_Ent {
    s16 unk0;
    s16 unk2;
    void *unk4;
    u8 unk8;
    u8 pad[3];
} func_80234934_Ent;

typedef struct func_80234934_Obj {
    u8 pad[0x98];
    s32 unk98;
    u8 pad2[0x6];
    s8 unkA2;
    s8 unkA3;
} func_80234934_Obj;

typedef struct func_80234934_Tgt {
    u8 pad[0x22];
    u8 unk22;
} func_80234934_Tgt;

extern u8 func_8013C8F0(s32, u8);
extern void *func_8013D16C(u8, s32);
extern void func_8037F58C(s32);
extern u8 D_80240530[];
extern u8 D_80240540[];

#define E ((func_80234934_Ent *)D_802407E8 + i)

void func_80234934(func_80234934_Obj *arg0, func_80234934_Tgt **arg1) {
    s16 sp76;
    s32 x;
    s16 y;
    u8 i;
    u8 k;
    s32 h;

    h = arg0->unk98;
    func_8037F58C(h);
    for (i = 0; i < arg0->unkA3; i++) {
        E->unk8 = func_8013C8F0(h, i);
        if (i == 0) {
            E->unk4 = D_80240530;
        } else if (i == 1) {
            E->unk4 = D_80240540;
        } else {
            E->unk4 = func_8013D16C(i - 2, h);
        }
        x = (s16)((arg0->unkA2 * -0x118) + 0xA0);
        y = (arg0->unkA3 * -9) + (i * 0x12) + 0x85;
        E->unk0 = x;
        E->unk2 = y;
        k = func_80006214(arg0);
        func_80146208((s32)arg0, (s8 *)&sp76, 0x26, (s16)x, y, 0x10, 0x10, 0, 0, 0xFF, 0x220, 3);
        arg1[k]->unk22 = 0;
    }
}
