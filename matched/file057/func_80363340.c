#include "common.h"
extern void D_8013AE20(void *, s32, s32);
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s8 D_80360588(s32, s32);
extern f32 D_8036153C(void *);
extern void func_800058DC();
extern void func_802237B0();
void func_8035FEC0(s32 arg0);
extern void *func_8035FFA8(void *arg0);
typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;
typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;
void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1);
typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;
void func_80360400(struct func_80360588_Struct *arg0, s32 arg1, s32 arg2);
typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;
typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;
typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;
void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2);
extern void func_803622EC();
typedef struct func_80363904_Struct {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_80363904_Struct;
void func_80363904(func_80363904_Struct *arg0);
extern void func_80364D2C();
extern void func_803673B4(void *, s32, s32);


typedef struct func_80363340_StructFlags {
    u8 pad0[2];
    u16 unk2;
} func_80363340_StructFlags;

typedef struct func_80363340_StructValue {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_80363340_StructValue;

typedef struct func_80363340_StructSub {
    u8 pad0[0x1C];
    func_80363340_StructValue unk1C;
    u8 pad28[0x7C - 0x28];
    s32 unk7C;
    u16 unk80;
    u8 pad82[2];
    u8 unk84;
} func_80363340_StructSub;

typedef struct func_80363340_StructActor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80363340_StructSub *unk5C;
    u8 pad60[8];
    func_80363340_StructFlags *unk68;
} func_80363340_StructActor;

typedef struct func_80363340_StructState {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x10 - 4];
    f32 unk10;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30a : 1;
    u32 bits30 : 2;
    u32 pad30b : 6;
    u32 mode : 2;
    u32 pad30c : 21;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA;
    u8 unk2DB;
    u8 pad2DC[0x2E8 - 0x2DC];
    u8 unk2E8;
    u8 pad2E9[0x300 - 0x2E9];
    u16 unk300;
    u8 pad302[0x314 - 0x302];
    func_80360588_Struct unk314;
    u8 unk320;
    u8 pad321[0x32C - 0x321];
    u8 unk32C;
    u8 pad32D[0x375 - 0x32D];
    u8 unk375;
    u8 unk376;
    u8 pad377[0x392 - 0x377];
    u8 unk392;
} func_80363340_StructState;

typedef struct func_80363340_StructEffect {
    u8 pad0[0x5C];
    u16 unk5C;
} func_80363340_StructEffect;

typedef struct func_80363340_StructGlobals {
    u8 pad0[0x1B];
    u8 unk1B;
    u8 pad1C[0xDC - 0x1C];
    func_80363340_StructActor *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80363340_StructActor *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
    u8 pad1031[0x1118 - 0x1031];
    func_80363340_StructEffect *unk1118;
} func_80363340_StructGlobals;

#define G ((func_80363340_StructGlobals *)D_801BBBF0)
extern s32 func_801DB480(void *, s32, f32, u8);
extern void func_802254F8(void *, s32, u8);
extern void func_80361910(void *, s32, void *, void *, void *);
extern void func_80374F04(void *, f32);

void func_80363340(func_80363340_StructActor *arg0, volatile s32 arg1) {
    func_80363340_StructFlags *flags;
    func_80363340_StructActor *other;
    func_80363340_StructSub *volatile sub;
    s32 pad50;
    s32 pad4C;
    func_80363340_StructState *opponent;
    func_80363340_StructValue *value;
    s32 pad40;
    s32 pad3C;
    s32 pad38;
    s32 pad34;
    s32 pad30;
    s32 cachedArg;
    func_80363340_StructValue *entry;
    func_80363340_StructState *state;
    f32 speed;
    s32 mode;

    flags = arg0->unk68;
    if (arg0 == G->unkDC) {
        other = G->unkEC;
    } else {
        other = G->unkDC;
    }
    sub = arg0->unk5C;
    if (arg0 == G->unkDC) {
        state = (func_80363340_StructState *)D_801BC03C;
    } else {
        state = (func_80363340_StructState *)D_801BC3D8;
    }
    if (arg0 != G->unkDC) {
        opponent = (func_80363340_StructState *)D_801BC03C;
    } else {
        opponent = (func_80363340_StructState *)D_801BC3D8;
    }
    if (arg0 == G->unkDC) {
        G->unk1030 = 0;
    } else {
        G->unk1030 = 1;
    }
    value = func_8035FFA8(state);
    if (G->unk1B != 0 && !(flags->unk2 & 0x8000) && arg0->unk36 != 0x11D && (entry = (func_80363340_StructValue *)sub, G->unk1118 == NULL) && (entry = &((func_80363340_StructSub *)entry)->unk1C, entry->unk4 == 1) && state->unk300 >= 100) {
        func_80374F04(arg0, 1.0f);
        if (G->unk1118 != NULL) {
            G->unk1118->unk5C = (u32)((f32)(u32)value->unk6 * entry->unk8 + 5.0f);
        }
    } else {
        func_802237B0(arg0, 1);
    }
    func_80361910(arg0, arg1, value, state, opponent);
    if (state->unk2E8 >= 2 && state->unk32C == 0) {
        state->unk32C = 1;
        func_80361B50((s32)arg0, arg1, (func_80361B50_Struct *)state);
        func_802254F8(arg0, 5, (u8)(u32)(D_8036153C(arg0) * 7.0f));
        func_8035FEC0((s32)arg0);
        opponent->unk320 = D_80360588((s32)arg0, arg1);
        if (opponent->unk2D8 == 13 && opponent->unk2DB != 0) {
            func_803673B4(arg0, arg1, 10);
        } else {
            func_800058DC(other, func_80364D2C);
        }
    }
    func_80360400(&state->unk314, (s32)arg0, arg1);
    if (state->unk2D9 < 14) {
        speed = state->unk18;
    } else {
        speed = state->unk1C;
    }
    cachedArg = arg1;
    if ((f64)speed == 0.0) {
        speed = state->unk10;
    }
    mode = state->mode == 3 ? 1 : 0;
    if (func_801DB480(arg0, cachedArg, speed, mode) != 0) {
        cachedArg = arg1;
        if (state->unk2E8 >= 2) {
            func_80361B50((s32)arg0, cachedArg, (func_80361B50_Struct *)state);
            D_8013AE20(arg0, arg1, 0);
            func_802254F8(arg0, 5, (u8)(u32)(D_8036153C(arg0) * 7.0f));
            func_80361B7C((func_80361B7C_StructA *)opponent, (func_80361B7C_StructB *)sub, (func_80361B7C_StructC *)value);
            if (opponent->bits30 != 0 || opponent->unk2 <= 0 || state->unk375 >= state->unk376) {
                func_800058DC(arg0, func_803622EC);
            } else {
                func_80363904((func_80363904_Struct *)arg0);
            }
        } else {
            func_80360020((func_80360020_Struct0 *)arg0, (func_80360020_Struct1 *)state);
            mode = 2;
            sub->unk80 = mode;
            sub->unk7C = *(s32 *)((u8 *)value + 0x18);
            sub->unk84 = mode;
            if (opponent->bits30 != 0 || opponent->unk2 <= 0 || state->unk375 >= state->unk376) {
                func_800058DC(arg0, func_803622EC);
            } else {
                func_80363904((func_80363904_Struct *)arg0);
            }
        }
    }
    state->unk392 = 4;
}
