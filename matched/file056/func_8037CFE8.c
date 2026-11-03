#include "common.h"
typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8037D1DC_DC;
typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_8037D1DC_E0S;
typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E0S *unk2C;
} func_8037D1DC_E0;
typedef struct {
    u8 pad0[0x24];
    f32 unk24;
} func_8037D1DC_E8S;
typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E8S *unk2C;
} func_8037D1DC_E8;
typedef struct {
    u8 pad0[0xDC];
    func_8037D1DC_DC *unkDC;
    func_8037D1DC_E0 *unkE0;
    u8 padE4[4];
    func_8037D1DC_E8 *unkE8;
    u8 padEC[0xEF0 - 0xEC];
    u16 unkEF0;
} func_8037D1DC_Glob;
extern func_8037D1DC_Glob D_801BBBF0;
extern f32 func_8002FC20(f32);
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037D1DC_Arg;
typedef struct {
    u8 pad0[0x1C];
    func_8037D1DC_Arg unk1C;
} func_8037D1DC_S1;


typedef struct func_8037CFE8_StructB { u8 pad[0x24]; s32 f24; u8 pad2[0x34]; func_8037D1DC_S1 *f5C; } func_8037CFE8_StructB;

extern f32 D_803898E4;
extern void func_801BF1A0(s32, void *);
extern void func_80005700(s32);

void func_8037CFE8(s32 arg0, s32 arg1) {
    f32 pos[4];
    func_8037D1DC_E0S *p;
    func_8037D1DC_S1 *q;
    f32 dx, dy, dz;

    if (D_801BBBF0.unkDC != NULL && ((func_8037CFE8_StructB *)D_801BBBF0.unkDC)->f24 != 0 && D_801BBBF0.padEC[9] != 0) {
        q = ((func_8037CFE8_StructB *)D_801BBBF0.unkDC)->f5C;
        if (q->unk1C.unk0 == 0x1680015 || *(u32 *)&q->unk1C == 0x1680017) {
            pos[0] = 37.0f;
            pos[1] = D_803898E4;
            pos[2] = 308.0f;
            p = D_801BBBF0.unkE0->unk2C;
            dz = p->unkC - pos[2];
            dx = p->unk4 - pos[0];
            dy = p->unk8 - pos[1];
            if ((f64)func_8002FC20(dz * dz + (dx * dx + dy * dy)) < 5.0) {
                D_801BBBF0.unkEF0 |= 0x4000;
                func_801BF1A0(0, &D_801BBBF0);
                func_80005700(arg0);
            }
        }
    }
}
