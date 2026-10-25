#define func_801F1D74 D_801F1D74
#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern struct func_801F38B8_Base D_801BBBF0;
struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};
struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};
struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};
#undef func_801F1D74

typedef struct {
    u8 pad0[8];
    f32 unk8;
} func_801F1D74_StructF;

typedef struct {
    u8 pad0[0x2C];
    func_801F1D74_StructF *unk2C;
} func_801F1D74_StructE0;

typedef struct {
    u8 pad0[0x24];
    void *unk24;
    u8 unk28;
    u8 pad29[0xB7];
    func_801F1D74_StructE0 *unkE0;
} func_801F1D74_StructG;

typedef struct {
    u8 pad0[0x30];
    func_801F1D74_StructF *unk30;
} func_801F1D74_Struct24;

typedef struct {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_801F1D74_Struct38;

typedef struct {
    u8 pad0[0x24];
    func_801F1D74_Struct24 *unk24;
    u8 pad28[0x10];
    func_801F1D74_Struct38 *unk38;
    u8 pad3C[0x54];
    s16 unk90;
} func_801F1D74_Arg0;

extern void func_801F1FD0();
extern void func_801F2438();
extern void func_801F2A20();
extern void func_801F2B44();

#define GG ((func_801F1D74_StructG *)&D_801BBBF0)

void func_801F1D74(func_801F1D74_Arg0 *arg0, s32 arg1) {
    func_801F1D74_Struct38 *p;
    f64 cur;
    s32 kind;

    GG->unk28 = GG->unk28 & ~(u8)((arg0->unk38->unk14 >> 16) >> 12);
    p = arg0->unk38;
    cur = arg0->unk24->unk30->unk8;
    if (cur == (f32)p->unk8 / 10.0 + 0.5) {
        if ((f32)arg0->unk90 < GG->unkE0->unk2C->unk8) {
            func_800058DC((s32)arg0, func_801F2A20);
            return;
        }
        if (arg0 == GG->unk24) {
            kind = p->unk18 & 0xFF;
            if (kind == 2) {
                func_80020718(0x177);
            } else if (kind == 1) {
                func_80020718(0x178);
            } else {
                func_80020718(0x1FA);
            }
            func_801518D4(0, 7, 6);
            func_800058DC((s32)arg0, func_801F1FD0);
            return;
        }
    }
    if (cur == (f32)(s16)(p->unk10 >> 16) + 0.5) {
        if (GG->unkE0->unk2C->unk8 < (f32)arg0->unk90) {
            func_800058DC((s32)arg0, func_801F2B44);
            return;
        }
        if (arg0 == GG->unk24) {
            kind = p->unk18 & 0xFF;
            if (kind == 1) {
                func_80020718(0x177);
            } else if (kind == 2) {
                func_80020718(0x178);
            } else {
                func_80020718(0x1FA);
            }
            func_801518D4(0, 7, 6);
            func_800058DC((s32)arg0, func_801F2438);
        }
    }
}
