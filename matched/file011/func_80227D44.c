#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BCC21;
struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};
extern struct func_8022811C_Glob D_801BEC68;
extern void func_80146BE0(s16, s32);
extern void func_80146CD4(s16, s32);
extern s32 func_80147598();
u8 func_802269CC(void);
struct func_80227484_Struct2 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 pad[0x2E];
    f32 unk34;
};
struct func_80227484_Struct1 {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_80227484_Struct2 *unk30;
};
struct func_80227484_List {
    struct func_80227484_Struct1 *e[1];
};
struct func_80227484_Struct3 {
    u8 pad[8];
    s16 unk8;
    s16 unkA;
    u8 pad2[0x36];
    s16 unk42;
    u8 pad3[6];
    s16 unk4A;
};
void func_80227484(struct func_80227484_List *arg0, struct func_80227484_Struct3 *arg1, s8 arg2);
typedef struct func_802277A0_Ent {
    u8 pad[0x22];
    u8 unk22;
} func_802277A0_Ent;
typedef struct func_802277A0_Struct {
    u8 pad0[4];
    s16 unk4;
    u8 pad6[0x46];
    s16 unk4C;
} func_802277A0_Struct;
void func_802277A0(u8 *arg0, func_802277A0_Ent **arg1, func_802277A0_Struct *arg2);
struct func_80227A80_Inner { s16 unk0; s16 unk2; s16 unk4; };
struct func_80227A80_Outer { u8 pad[0x30]; struct func_80227A80_Inner *unk30; };
void func_80227A80(u8 *arg0, struct func_80227A80_Outer *arg1, struct func_80227A80_Outer *arg2, u8 arg3);

extern void func_8014677C(void *, u8, u16);
extern f32 func_80146A9C(void *, u8);

struct func_80227D44_StructState {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 padC[0x34];
    s16 unk40;
    s16 unk42;
    s16 unk44;
    u16 unk46;
    u8 pad48[2];
    s16 unk4A;
    s16 unk4C;
    u8 pad4E[0x10];
    u16 unk5E;
    u16 unk60;
};

struct func_80227D44_StructInner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_80227D44_StructEntry {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_80227D44_StructInner *unk30;
};

#define TABLE_80227D44 ((u8 *) &D_801BEC68)
#define state ((struct func_80227D44_StructState *) arg2)
#define list ((struct func_80227D44_StructEntry **) arg1)

void func_80227D44(void *arg0, void *arg1, void *arg2) {
    struct func_80227D44_StructEntry *sp3C;
    struct func_80227D44_StructEntry *sp38;
    s32 sp34;
    s16 sp32;
    u16 sp30;
    u16 sp2E;
    s8 sp2D;
    u8 *table;

    if (arg2 == (void *)((s32) D_801BBBF0 + 0x44C)) {
        table = TABLE_80227D44;
        sp3C = list[table[1]];
        sp38 = list[table[2]];
        sp34 = (s32) list[table[0xB]];
        sp30 = 6;
        sp2E = 7;
        sp2D = 0;
    } else {
        table = TABLE_80227D44;
        sp3C = list[table[0xE]];
        sp38 = list[table[0xF]];
        sp34 = (s32) list[table[0x18]];
        sp30 = 0x13;
        sp2E = 0x14;
        sp2D = 1;
    }

    state->unk2 -= state->unk40;
    if (state->unk2 < 0) {
        state->unk2 = 0;
    } else if (state->unk0 < state->unk2) {
        state->unk2 = state->unk0;
    }
    state->unk40 = 0;
    func_80227484((struct func_80227484_List *) arg1, (struct func_80227484_Struct3 *) state, sp2D);

    state->unkA -= state->unk42;
    if (state->unkA < 0) {
        state->unkA = 0;
    } else if (state->unk8 < state->unkA) {
        state->unkA = state->unk8;
    }
    state->unk42 = 0;
    state->unk6 -= state->unk44;
    if (state->unk6 < 0) {
        state->unk6 = 0;
    } else if (state->unk4 < state->unk6) {
        state->unk6 = state->unk4;
    }
    state->unk44 = 0;
    if (state->unk6 < state->unk4C) {
        state->unk4C -= 4;
    } else {
        state->unk4C = state->unk6;
    }
    if (D_801BCC21 == 5) {
        if (state->unkA < state->unk4A) {
            state->unkA += state->unk60;
        } else {
            state->unkA += state->unk60;
        }
        if (state->unk8 < state->unkA) {
            state->unk4A = state->unk8;
            state->unkA = state->unk8;
        }
        if (state->unk6 >= state->unk4C) {
            state->unk6 += state->unk5E;
            if (state->unk4 < state->unk6) {
                state->unk6 = state->unk4;
            }
        }
    }
    if (state->unk6 == state->unk4) {
        sp3C->unk30->unk4 = 0x77;
        if (sp2D == 0) {
            sp3C->unk22 = 1;
        } else {
            sp3C->unk22 = func_802269CC();
        }
        sp38->unk22 = 0;
    } else if (sp2D == 0) {
        sp3C->unk22 = sp38->unk22 = 1;
    } else {
        sp3C->unk22 = sp38->unk22 = func_802269CC();
    }
    func_80227A80((u8 *) state, (struct func_80227A80_Outer *) sp3C, (struct func_80227A80_Outer *) sp38, (u8) sp2D);
    func_802277A0(arg0, (func_802277A0_Ent **) arg1, (func_802277A0_Struct *) state);
    if (func_80147598() != 0) {
        sp32 = (s16) ((func_80146A9C(state, (u8) sp2D) / (f32) state->unk0) * 8192.0f);
        func_80146CD4(sp32, sp2D);
        func_80146BE0(sp32, sp34);
    }
    if ((sp2D == 0) && (func_80147598() == 0)) {
        func_8014677C(arg1, ((u8 *) &D_801BEC68)[sp30], state->unk46);
        func_8014677C(arg1, ((u8 *) &D_801BEC68)[sp2E], (u16) state->unk0);
    }
}
