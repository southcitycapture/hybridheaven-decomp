#include "context.h"

typedef struct func_80374F04_StructObj {
    u8 pad0[0x24];
    struct func_80374F04_StructObj *unk24;
    u8 pad28[0x2C - 0x28];
    void *unk2C;
    u8 pad30[0x5C - 0x30];
    u8 *unk5C;
} func_80374F04_StructObj;

typedef struct func_80374F04_StructPos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80374F04_StructPos;

typedef struct func_80374F04_StructEnt {
    u8 unk0;
    u8 unk1;
    u8 pad2[2];
    u16 unk4;
    u8 pad6[2];
    u16 *unk8;
    u16 *unkC;
    u16 *unk10;
} func_80374F04_StructEnt;

typedef struct func_80374F04_StructCam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80374F04_StructCam;

typedef struct func_80374F04_StructCamOwner {
    u8 pad0[0x2C];
    func_80374F04_StructCam *unk2C;
} func_80374F04_StructCamOwner;

typedef struct func_80374F04_StructNew {
    u8 pad0[0x2C];
    func_80374F04_StructObj *unk2C;
    u8 pad30[4];
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    s16 unk40;
    s16 unk42;
    f32 unk44;
    f32 unk48;
    s8 unk4C;
    u8 pad4D[3];
    f32 unk50;
    func_80374F04_StructEnt *unk54;
    u16 *unk58;
    u16 unk5C;
    u16 unk5E;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
} func_80374F04_StructNew;

typedef struct func_80374F04_StructGlobal {
    u8 pad0[0x1B];
    u8 unk1B;
    u8 pad1C[0xDC - 0x1C];
    func_80374F04_StructObj *unkDC;
    u8 padE0[0xE8 - 0xE0];
    func_80374F04_StructCamOwner *unkE8;
    func_80374F04_StructObj *unkEC;
    u8 padF0[0x1118 - 0xF0];
    func_80374F04_StructNew *unk1118;
} func_80374F04_StructGlobal;

typedef struct func_80374F04_StructSide {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x374 - 0x2DA];
    s8 unk374;
} func_80374F04_StructSide;

#define G ((func_80374F04_StructGlobal *)D_801BBBF0)
#define NEW (*(func_80374F04_StructNew **)(D_801BBBF0 + 0x1118))

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387C64[];
extern func_80374F04_StructEnt *func_80374DF0(u8, func_80374F04_StructObj *);
extern func_80374F04_StructNew *func_80005670(func_80374F04_StructObj *, u8 *, func_80374F04_StructPos *);

void func_80374F04(func_80374F04_StructObj *arg0, f32 arg1) {
    func_80374F04_StructObj *opp;
    s32 r;
    u8 *self;
    u8 *other;
    func_80374F04_StructSide *side;
    s32 unused;
    func_80374F04_StructPos *pos;
    func_80374F04_StructEnt *ent;
    u16 *val;
    u8 cnt;
    u8 flag;

    opp = (arg0 != G->unkDC) ? G->unkDC : G->unkEC;
    self = arg0->unk5C;
    other = opp->unk5C;
    side = (arg0 == G->unkDC) ? (func_80374F04_StructSide *)D_801BC03C : (func_80374F04_StructSide *)D_801BC3D8;
    if (G->unk1B != 0 && NEW == NULL) {
        if (side->unk2D9 < 0x25) {
            ent = func_80374DF0(0, arg0);
        } else {
            ent = func_80374DF0(side->unk2D9, arg0);
        }
        if (ent != NULL) {
            if (ent->unk1 & 1) {
                flag = 1;
            } else {
                flag = 0;
            }
            if (self[0x74] == 3 && other[0x74] == 0) {
                val = ent->unkC;
                r = func_80374E88((s32)arg0, val, flag);
                cnt = r;
                if (r == 0) {
                    return;
                }
                goto found;
            }
            val = ent->unk8;
            r = func_80374E88((s32)arg0, val, flag);
            cnt = r;
            if (r != 0) goto found;
            val = ent->unkC;
            r = func_80374E88((s32)arg0, val, flag);
            cnt = r;
            if (r != 0) goto found;
            val = ent->unk10;
            r = func_80374E88((s32)arg0, val, flag);
            cnt = r;
            if (r == 0) return;
found:
            if (r) {}
            pos = arg0->unk24->unk2C;
            NEW = func_80005670(arg0, D_80387C64, pos);
            if (NEW != NULL) {
                NEW->unk2C = arg0;
                NEW->unk34 = pos->unk4;
                NEW->unk38 = pos->unk8;
                NEW->unk3C = pos->unkC;
                NEW->unk40 = pos->unk12;
                if (side->unk2D8 == 5) {
                    NEW->unk40 += 0x1000;
                    NEW->unk40 &= 0x1FFF;
                }
                NEW->unk44 = func_8001EAD0(NEW->unk40);
                NEW->unk48 = func_8001EB64(NEW->unk40);
                NEW->unk4C = cnt - 1;
                NEW->unk50 = arg1;
                NEW->unk54 = ent;
                NEW->unk58 = val;
                NEW->unk42 = 0;
                if (ent->unk1 & 8) {
                    NEW->unk5C = (u32)((u32)ent->unk4 * (side->unk374 + 2.5));
                } else {
                    NEW->unk5C = ent->unk4;
                }
                NEW->unk5E = 0;
                NEW->unk60 = G->unkE8->unk2C->unk30;
                NEW->unk64 = G->unkE8->unk2C->unk34;
                NEW->unk68 = G->unkE8->unk2C->unk38;
                NEW->unk6C = G->unkE8->unk2C->unk3C;
                NEW->unk70 = G->unkE8->unk2C->unk40;
                NEW->unk74 = G->unkE8->unk2C->unk44;
                NEW->unk78 = 35.0f;
            }
        }
    }
}
