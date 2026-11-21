#include "common.h"
extern s16 D_80388A68;
void func_800058DC(void *, void *);
typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
extern void func_80011140(s32, s32, func_8037AA80_Struct, s32);
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
extern void func_8013A28C(s32, func_8037A320_StructE);
extern void func_801518D4(s32, s32, s32);
typedef struct func_8037A320_StructP {
    u8 pad[0x1C];
    func_8037A320_StructE e;
} func_8037A320_StructP;
typedef struct func_8037A320_StructA {
    u8 pad[0x30];
    u32 unk30;
    u8 pad2[0xC];
    f32 unk40;
    u8 pad3[4];
    f32 unk48;
    u8 pad4[0x10];
    func_8037A320_StructP *unk5C;
} func_8037A320_StructA;
typedef struct func_8037B4E4_S { u8 pad[0x1C]; s32 unk1C; u8 pad2[2]; u16 unk22; } func_8037B4E4_S;
typedef struct func_8037B4E4_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x2C]; func_8037B4E4_S *unk5C; } func_8037B4E4_O;
void func_8037B4E4(func_8037B4E4_O *arg0, s32 arg1);
void func_8037B5FC(void *arg0, s32 arg1);


typedef struct func_8037B240_StructState { u16 unk0, unk2; } func_8037B240_StructState;
typedef struct func_8037B240_StructResult {
    u8 pad[0x94]; s16 unk94; u8 unk96, unk97;
} func_8037B240_StructResult;
typedef struct func_8037B240_StructEntry {
    u32 w0; s16 h4; u16 h6; f32 w8;
} func_8037B240_StructEntry;
extern u16 D_8017DC40[2];
extern u8 D_802176F0[];
extern func_8037AA80_Struct D_80388A20;
extern func_8037AA80_Struct D_80388A2C;
extern u8 D_8038A93D;
extern func_8037B240_StructResult *func_80005670(void *, void *);

void func_8037B240(func_8037A320_StructA *arg0, s32 arg1) {
    struct func_8037B240_StructLocals {
        u8 pad[4];
        func_8037A320_StructP *parent;
    } locals;
    func_8037A320_StructP **parent = &locals.parent;
    func_8037B240_StructEntry *eLocal;
    func_8037B240_StructResult *result;
#define p (*parent)

    p = arg0->unk5C;
    if ((f64)(u32)D_8017DC40[0] * 0.05 < (f64)D_80388A68) {
        func_801518D4(0, 7, 6);
        if (0 < (u32)D_8038A93D) {
            func_80011140(arg1, (s32)p, D_80388A2C, 15);
        } else {
            func_80011140(arg1, (s32)p, D_80388A20, 15);
        }
    } else {
        func_801518D4(0, 3, 5);
        if (0 < (u32)D_8038A93D) {
            func_80011140(arg1, (s32)p, D_80388A2C, 5);
        } else {
            func_80011140(arg1, (s32)p, D_80388A20, 5);
        }
    }
    eLocal = (func_8037B240_StructEntry *)p;
    eLocal = (func_8037B240_StructEntry *)&((func_8037A320_StructP *)eLocal)->e;
    if (eLocal->w0 == 0x01680037) {
        result = func_80005670(arg0, D_802176F0);
        if (result != NULL) {
            result->unk94 = D_80388A68;
            result->unk96 = 0;
            result->unk97 = 0;
        }
        if (D_8017DC40[1] > D_80388A68) {
            D_8017DC40[1] -= D_80388A68;
            func_800058DC(arg0, func_8037B4E4);
            return;
        }
        eLocal->w0 = 0x01680038;
        if (eLocal->h6 & 0x10) {
            eLocal->h6 = 0x10;
        } else {
            eLocal->h6 = 0;
        }
        eLocal->h4 = 0;
        eLocal->w8 = 8.0f;
        func_8013A28C(arg1, *(func_8037A320_StructE *)eLocal);
        D_8017DC40[1] = 0;
        func_800058DC(arg0, func_8037B5FC);
    }
}
