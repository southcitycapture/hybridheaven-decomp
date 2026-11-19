#include "common.h"
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_8036445C_StructA0 ACAT(SA0_, __LINE__)
#define func_8036445C_StructA1 ACAT(SA1_, __LINE__)
#define arg0_ ACAT(P0_, __LINE__)
#define arg1_ ACAT(P1_, __LINE__)
#define SA0_109 func_8036445C_StructA0
#define SA0_114 func_8036445C_StructA0
#define SA1_123 func_8036445C_StructA1
#define SA1_127 func_8036445C_StructA1
#define P0_141 arg0_
#define P1_141 arg1_
#define Z0 *q0)(int
#define Z1 *q1)(int
#define SA0_172 Z0
#define SA0_188 Z0
#define SA0_247 Z0
#define SA0_268 Z0
#define SA0_281 Z0
#define SA0_324 Z0
#define SA0_376 Z0
#define SA0_404 Z0
#define SA0_412 Z0
#define SA0_432 Z0
#define SA0_452 Z0
#define SA0_461 Z0
#define SA0_487 Z0
#define SA0_524 Z0
#define SA0_525 Z0
#define SA0_529 Z0
#define SA0_544 Z0
#define SA0_545 Z0
#define SA0_546 Z0
#define SA0_547 Z0
#define SA0_550 Z0
#define SA0_573 Z0
#define SA0_598 Z0
#define SA0_616 Z0
#define SA0_623 Z0
#define SA0_644 Z0
#define SA0_668 Z0
#define SA0_697 Z0
#define SA0_727 Z0
#define SA0_728 Z0
#define SA0_730 Z0
#define SA0_731 Z0
#define SA1_172 Z1
#define SA1_247 Z1
#define SA1_268 Z1
#define SA1_281 Z1
#define SA1_324 Z1
#define SA1_376 Z1
#define SA1_404 Z1
#define SA1_412 Z1
#define SA1_432 Z1
#define SA1_452 Z1
#define SA1_461 Z1
#define SA1_487 Z1
#define SA1_524 Z1
#define SA1_525 Z1
#define SA1_529 Z1
#define SA1_544 Z1
#define SA1_545 Z1
#define SA1_547 Z1
#define SA1_550 Z1
#define SA1_573 Z1
#define SA1_598 Z1
#define SA1_616 Z1
#define SA1_623 Z1
#define SA1_644 Z1
#define SA1_668 Z1
#define SA1_697 Z1
#define SA1_727 Z1
#define SA1_728 Z1
#define SA1_730 Z1
#define SA1_731 Z1
#define P0_172
#define P0_188
#define P0_247
#define P0_268
#define P0_281
#define P0_324
#define P0_376
#define P0_404
#define P0_412
#define P0_432
#define P0_452
#define P0_461
#define P0_487
#define P0_524
#define P0_525
#define P0_529
#define P0_544
#define P0_545
#define P0_546
#define P0_547
#define P0_550
#define P0_573
#define P0_598
#define P0_616
#define P0_623
#define P0_644
#define P0_668
#define P0_697
#define P0_727
#define P0_728
#define P0_730
#define P0_731
#define P1_172
#define P1_247
#define P1_268
#define P1_281
#define P1_324
#define P1_376
#define P1_404
#define P1_412
#define P1_432
#define P1_452
#define P1_461
#define P1_487
#define P1_524
#define P1_525
#define P1_529
#define P1_544
#define P1_545
#define P1_547
#define P1_550
#define P1_573
#define P1_598
#define P1_616
#define P1_623
#define P1_644
#define P1_668
#define P1_697
#define P1_727
#define P1_728
#define P1_730
#define P1_731
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
typedef struct func_8036445C_StructAnim {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad0E[0xE];
    s32 unk1C;
    u8 pad20[2];
    u16 unk22;
    u8 pad24[0x7C - 0x24];
    void *unk7C;
    s16 unk80;
    s16 unk82;
    u8 pad84[0x9C - 0x84];
    u8 unk9C;
} func_8036445C_StructAnim;
typedef struct func_8036445C_StructA0 {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8036445C_StructAnim *unk5C;
} func_8036445C_StructA0;
#define arg0 ((func_8036445C_StructA0 *)arg0_)
typedef struct func_8036445C_StructJ {
    u8 pad0[0x12];
    s16 unk12;
} func_8036445C_StructJ;
typedef struct func_8036445C_StructK {
    u8 pad0[0x2C];
    func_8036445C_StructJ *unk2C;
} func_8036445C_StructK;
typedef struct func_8036445C_StructA1 {
    func_8036445C_StructK *unk0;
    u8 pad4[0x4C - 4];
    struct { u8 pad[0x22]; u8 unk22; } *unk4C;
} func_8036445C_StructA1;
#define arg1 ((func_8036445C_StructA1 *)arg1_)

extern s32 func_8013A334(void *, s32, s32, s32);
#undef arg0
#undef arg1
#undef arg0_
#undef arg1_

typedef struct func_80367518_StructSource {
    u16 unk0;
    u8 pad2[0x22];
    s32 unk24;
    s32 unk28;
    u16 unk2C;
} func_80367518_StructSource;

typedef struct func_80367518_StructLink {
    u8 pad0[0x2C];
    func_80367518_StructSource *unk2C;
} func_80367518_StructLink;

typedef struct func_80367518_StructArg {
    u8 pad0[0x4C];
    func_80367518_StructLink *unk4C;
    u8 pad50[0xC];
    s32 unk5C;
} func_80367518_StructArg;

typedef struct func_80367518_StructResult {
    u8 pad0[0x2C];
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    u16 unk38;
    u16 unk3A;
    u8 pad3C[4];
    s32 unk40;
    s32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
} func_80367518_StructResult;

typedef struct func_80367518_StructGlobal {
    u8 pad0[0x1038];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_80367518_StructGlobal;
extern void *func_80005670(void *, void *);
extern u8 D_803868E8[];
#define GL ((func_80367518_StructGlobal *)&D_801BBBF0)
extern f64 D_8038AA08;

void func_80367518(func_80367518_StructArg *arg0, func_80367518_StructArg *arg1) {
    s32 sp34;
    func_80367518_StructResult *sp30;
    func_80367518_StructSource *temp_v1;
    f32 v[3];
    f64 temp_fv0;

    sp34 = arg0->unk5C;
    sp30 = func_80005670(arg0, D_803868E8);
    if (sp30 != NULL) {
        func_8013A334(v, (s32)arg1, sp34, 0x13);
        sp30->unk2C = v[0];
        sp30->unk30 = v[1];
        sp30->unk34 = v[2];
        temp_v1 = arg1->unk4C->unk2C;
        sp30->unk38 = temp_v1->unk0;
        sp30->unk3A = temp_v1->unk2C;
        sp30->unk40 = temp_v1->unk28;
        sp30->unk44 = temp_v1->unk24;
        sp30->unk48 = GL->unk1038;
        temp_fv0 = (f64) GL->unk103C;
        sp30->unk4C = (0.1 < temp_fv0) ? 0.1 : temp_fv0;
        sp30->unk50 = GL->unk1040;
    }
}
