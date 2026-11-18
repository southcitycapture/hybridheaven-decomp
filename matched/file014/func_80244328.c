#include "common.h"
typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802455D8_Sub;
typedef struct {
    u8 pad0[0x2C];
    func_802455D8_Sub *unk2C;
} func_802455D8_Mid;
extern func_802455D8_Mid *D_801BBCD0;
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_802438E4_Table D_8024850C;
extern s16 D_8024AB46;
extern void func_800058DC(void *, void *);
extern void func_80010454(s32, void *, s32);
extern void func_80010550(s32, void *);
extern s32 func_8012CF10(s32, void *, struct func_802438E4_Table, s32, s32);
extern void func_8013A334(f32 *, s32, void *, s32);
struct func_80242890_Struct_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_80242890_Struct_Mid {
    u8 pad0[0x2C];
    struct func_80242890_Struct_Sub *unk2C;
};
struct func_80242890_Struct_Obj {
    u8 pad0[0x24];
    struct func_80242890_Struct_Mid *unk24;
};
s32 func_80242890(struct func_80242890_Struct_Obj *arg0);
extern void func_80244518();
extern void func_8037BB4C(s16, f32, f32, s16);


typedef struct { u8 pad0[0x12]; s16 unk12; } func_80244328_StructQ;
typedef struct { u8 pad0[0x2C]; func_80244328_StructQ *unk2C; } func_80244328_StructM;
typedef struct { u8 pad0[0x6A]; u8 unk6A; } func_80244328_StructR;
typedef struct { u8 pad0[0x2C]; func_80244328_StructR *unk2C; } func_80244328_StructN;
typedef struct { u8 pad0[0x18]; func_80244328_StructN *unk18; } func_80244328_StructA1;
typedef struct { u8 pad0[0x78]; s16 unk78; } func_80244328_StructC;
typedef struct { u8 pad0[0x24]; func_80244328_StructM *unk24; u8 pad1[0x34]; func_80244328_StructC *unk5C; u8 pad2[0x34]; s16 unk94; } func_80244328_StructA0;

typedef struct { f32 v[3]; func_80244328_StructC *p; func_80244328_StructA0 *a0; } func_80244328_StructExtendedStack;
#define func_80244328_Arg0 (((func_80244328_StructExtendedStack *)&s)->a0)

void func_80244328(arg0, arg1)
    s32 arg1;
    func_80244328_StructA0 *arg0;
{
    struct func_80244328_StructStack { f32 v[3]; func_80244328_StructC *p; } s;
    func_802455D8_Sub *q;
    func_80244328_StructA0 *o;
    f32 a, b, c;

    s.p = arg0->unk5C;
    func_80244328_Arg0 = arg0;
    if (func_80242890((struct func_80242890_Struct_Obj *)arg0) != 0) return;
    func_8013A334(s.v, arg1, s.p, 0xC);
    o = func_80244328_Arg0;
    if (o->unk94 != 0) {
        q = ((func_802455D8_Mid *)D_801BBCD0)->unk2C;
        if (q->unk8 < s.v[1]) { a = -(q->unk8 - s.v[1]); } else { a = q->unk8 - s.v[1]; }
        if (q->unk4 < s.v[0]) { b = -(q->unk4 - s.v[0]); } else { b = q->unk4 - s.v[0]; }
        if (q->unkC < s.v[2]) { c = -(q->unkC - s.v[2]); } else { c = q->unkC - s.v[2]; }
        if (30.0f > (f32)c + (f32)(b + a)) {
            o->unk94 = 0;
            func_8037BB4C((s16)(o->unk24->unk2C->unk12 + 0x800), 2.0f, 2.0f, D_8024AB46);
        }
    }
    func_80010454(arg1, s.p, 0xE3F001);
    if (func_8012CF10(arg1, s.p, D_8024850C, 0xA, 0x1C0FFE) == 0) {
        func_80010454(arg1, s.p, 0x1C0FFE);
        func_80010550(arg1, s.p);
        if (((func_80244328_StructA1 *)arg1)->unk18->unk2C->unk6A != 0) {
            s.p->unk78 = 1;
            func_80244328_Arg0->unk94 = 0x40;
            func_800058DC((void *)func_80244328_Arg0, func_80244518);
        }
    }
}
#undef func_80244328_Arg0
