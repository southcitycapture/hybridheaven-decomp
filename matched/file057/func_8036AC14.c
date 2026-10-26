#include "common.h"
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } HHAnimEarly;
#define LP2(a, b) a##_##b
#define LP(a, b) LP2(a, b)
#define func_8036D30C_Anim LP(HC, __LINE__)
#define HC_58 HHAnimEarly
#define HC_63 HHAnimEarly
#define HC_195 func_8036D30C_Anim
#define HC_200 func_8036D30C_Anim
#define HC_203 func_8036D30C_Anim
#define HC_226 func_8036D30C_Anim
#define HC_228 func_8036D30C_Anim
#define HC_259 func_8036D30C_Anim
#define HC_306 func_8036D30C_Anim
extern u8 D_8008DA88[];
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8038CC62;
extern void func_800058DC(s32, void *);                    /* extern */
extern void func_80006214(void *);
extern void func_802237B0(void *, s32);
s32 func_80369CF4(struct func_80369C7C_Obj1 *arg0, s16 arg1);
s32 func_8036AA8C(void *arg0);
s32 func_8036AB2C(void *arg0);
void func_8036B14C(s32 arg0, s32 arg1);
extern void func_8036BA40(void *, void *);
typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;
extern void func_8036D938();
struct func_8036D938_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
};

#undef func_8036D30C_Anim

typedef struct func_8036AC14_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x31 - 0x14];
    u8 b31_7 : 1;
    u8 b31_65 : 2;
    u8 b31_rest : 5;
    u8 b32_hi : 3;
    u8 b32_rest : 5;
    u8 pad33[0x2D8 - 0x33];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
    u8 unk2DB;
} func_8036AC14_Struct;
extern void func_80374F04(void *, f32);
extern void func_8036B264(s32, s32);

#define WRAP(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))

void func_8036AC14(struct func_80369C7C_Obj1 *arg0, struct func_80369C7C_Obj2 **arg1) {
    struct func_80369C7C_Obj1 *sp5C;
    s32 pad[2];
    func_8036AC14_Struct *s1;
    func_8036AC14_Struct *s2;
    struct func_80369C7C_Obj3 *o1;
    struct func_80369C7C_Obj3 *o2;
    s16 a;
    s16 b;
    s16 t;
    s16 e;
    s16 c;
    s16 d;
    s32 v;
    s32 pad2[1];

    if (arg0 != D_801BBBF0.unkDC) {
        sp5C = D_801BBBF0.unkDC;
    } else {
        sp5C = D_801BBBF0.unkEC;
    }
    if (arg0 == D_801BBBF0.unkDC) {
        s1 = (func_8036AC14_Struct *)D_801BC03C;
    } else {
        s1 = (func_8036AC14_Struct *)D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        s2 = (func_8036AC14_Struct *)D_801BC03C;
    } else {
        s2 = (func_8036AC14_Struct *)D_801BC3D8;
    }
    o1 = (*arg1)->unk2C;
    o2 = sp5C->unk24->unk2C;
    t = s1->unk10 * 128.0f;
    a = ABS(WRAP(t));
    b = o2->unk12;
    func_802237B0(arg0, 1);
    D_8038CC62 = 0;
    if (s1->unk2D8 == 5) {
        b += 0x1000;
        b &= 0x1FFF;
    }
    c = o1->unk12;
    d = c - b;
    e = WRAP(d);
    if (e < -a) {
        o1->unk12 = (s16)(c + a) & 0x1FFF;
    } else if (a < e) {
        o1->unk12 = (s16)(c - a) & 0x1FFF;
    } else {
        o1->unk12 = b;
    }
    if (b == o1->unk12) {
        s1->b32_hi = 0;
        if (func_80369CF4(arg0, o2->unk12) != 0) {
            v = 3;
        } else {
            v = 2;
        }
        s2->b31_65 = v;
        s1->b31_65 = v;
        if (s2->unk2D8 == 0xF && s2->unk2DB != 0) {
            s1->unk2DA = 0;
            s2->unk2DB = 1;
            func_80006214(sp5C);
            func_8036BA40(sp5C, D_8008DA88);
            func_80006214(arg0);
            func_800058DC((s32)arg0, func_8036B14C);
            return;
        }
        func_800058DC((s32)arg0, func_8036B264);
        if ((s2->unk2D8 == 0xE || s2->unk2D8 == 0xE) && s2->unk2DB != 0) {
            if (func_8036AA8C(sp5C) != 0) {
                if (func_8036AB2C(sp5C) != 0) {
                    s1->unk2DA = 0;
                    s2->unk2DB = 1;
                    func_80006214(sp5C);
                    func_8036D938((struct func_8036D938_StructArg *)sp5C, (s32)D_8008DA88);
                    func_80006214(arg0);
                    return;
                }
            }
        }
        func_80374F04(arg0, 1.0f);
        s1->unk2DA = 1;
        s2->unk2DB = 0;
        func_800058DC((s32)sp5C, func_8036B264);
    }
}
