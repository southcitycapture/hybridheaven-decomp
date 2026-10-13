#include "context.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(s32, void *);
typedef struct func_8036F898_StructA {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036F898_StructA;
extern func_8036F898_StructA D_801BBBF0;
extern s32 func_80010550(s32, s32, void *);

typedef struct func_8036EBB8_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
    u8 pad2[0xB90 - 0xF0];
    f32 unkB90;
    u8 pad3[0xB98 - 0xB94];
    s16 unkB98;
    u8 pad4[0x1031 - 0xB9A];
    u8 unk1031;
} func_8036EBB8_StructD;

typedef struct func_8036EBB8_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 6;
    u32 b7 : 2;
    u32 b11 : 2;
    u32 b13 : 3;
    u32 b16 : 3;
    u32 b19 : 8;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad3[0x320 - 0x2F9];
    u8 unk320;
    u8 pad4[0x392 - 0x321];
    u8 unk392;
} func_8036EBB8_StructS;

typedef struct func_8036EBB8_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[2];
    f32 unk8;
} func_8036EBB8_Sub;

typedef struct func_8036EBB8_Obj5C {
    u8 pad0[0x1C];
    func_8036EBB8_Sub sub;
    u8 pad1[0x58 - 0x28];
    f32 unk58;
    f32 unk5C;
} func_8036EBB8_Obj5C;

typedef struct func_8036EBB8_Inner {
    u8 pad0[0x12];
    s16 unk12;
} func_8036EBB8_Inner;

typedef struct func_8036EBB8_Mid {
    u8 pad0[0x2C];
    func_8036EBB8_Inner *unk2C;
} func_8036EBB8_Mid;

typedef struct func_8036EBB8_Other5C {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8036EBB8_Other5C;

typedef struct func_8036EBB8_Actor {
    u8 pad0[0x24];
    func_8036EBB8_Mid *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
} func_8036EBB8_Actor;

#define DB ((func_8036EBB8_StructD *)&D_801BBBF0)

extern s32 func_802233B0();
extern s32 func_8022397C();
extern void func_80006214();
extern u16 func_80011590(u16);
extern void func_8013B808(void *, s32, s32);
extern void func_8036445C(void *, void *, u8, s32);
extern void func_80372388(void *, s32);
extern u8 D_8008DA88[];
extern void func_80222708();

void func_8036EBB8(void *arg0, s32 arg1) {
    func_8036EBB8_Actor *other;
    func_8036EBB8_Obj5C *obj;
    func_8036EBB8_Other5C *other5c;
    func_8036EBB8_StructS *st;
    s32 ang;
    f32 dist;
    func_8036EBB8_Inner *inner;
    func_8036EBB8_StructS *st2;
    s16 ofs;
    func_8036EBB8_Sub *sub;
    extern s32 func_80010550();

    if (arg0 != DB->unkDC) {
        other = DB->unkDC;
    } else {
        other = DB->unkEC;
    }
    obj = ((func_8036EBB8_Actor *)arg0)->unk5C;
    other5c = other->unk5C;
    st = (arg0 == DB->unkDC) ? (func_8036EBB8_StructS *)D_801BC03C : (func_8036EBB8_StructS *)D_801BC3D8;
    st->unk392 = 0;
    if (st->unk2 <= 0 || st->b1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DB->unk1031 == 0xF) {
        return;
    }
    if (st->b13 == 5) {
        func_8022397C(arg0);
        return;
    }
    sub = &obj->sub;
    if (st->b7 == 3) {
        dist = obj->unk5C;
    } else {
        dist = obj->unk58;
    }
    if (sub->unk4 == func_80011590(sub->unk8 * 3.0f)) {
        func_8013B808(arg0, arg1, 4);
    }
    if (sub->unk4 >= func_80011590(sub->unk8 * 3.0f)) {
        if (func_80011590(sub->unk8 * 13.0f) >= sub->unk4) {
            func_80372388(arg0, arg1);
        }
    }
    if (st->b27 != 2 && DB->unkB90 < dist * 2.0) {
        if (other5c->unk1C != 0x01900056 && other5c->unk1C != 0x01900057 &&
            other5c->unk1C != 0x01900058 && other5c->unk1C != 0x01900059) {
            inner = other->unk24->unk2C;
            if (arg0 != DB->unkDC) {
                st2 = (func_8036EBB8_StructS *)D_801BC03C;
            } else {
                st2 = (func_8036EBB8_StructS *)D_801BC3D8;
            }
            ofs = (arg0 == DB->unkDC) ? 0 : 0x1000;
            ang = (s16)(ofs + DB->unkB98);
            ang = (s16)ang;
            st2->unk320 = ((s16)(inner->unk12 - ang + 0x400) & 0x1FFF) / 2048;
            st2->unk2F8 = 4;
            func_80006214(other, ofs, inner);
            func_8036445C(other, D_8008DA88, st2->unk320, 1);
            func_80006214(arg0);
            st->b27 = 2;
        }
    }
    if (func_80010550(arg1, obj) != 0) {
        st->b16 = 0;
        func_800058DC((s32)arg0, func_80222708);
    }
}
