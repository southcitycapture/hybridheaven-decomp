#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_80377D68 func_80377D68_ctx
#define func_80376ADC LP(fA, __LINE__)
#include "context.h"
#undef func_80377D68
#undef func_80376ADC

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8 pad3C[4];
} func_80377D68_Struct40;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    void *unkC;
} func_80377D68_Struct10;

typedef struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 pad7C[4];
    u8 unk80;
    u8 unk81;
    u8 unk82;
    u8 unk83;
    u8 pad84[4];
    void *unk88;
    u8 pad8C[8];
    u8 unk94;
} func_80377D68_Obj;

typedef struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80377D68_Gfx;

typedef struct {
    u8 pad0[0x30];
    func_80377D68_Gfx *unk30;
} func_80377D68_Node;

extern void func_80006214(void *);
extern s32 func_80146088();
extern func_80377D68_Node *D_8008DA88[];
extern u8 D_80388770[];
extern func_80377D68_Struct10 D_80388814;
extern u8 D_80388878[];
extern u8 D_803888D8[];
extern f32 D_803893B0;
extern func_80377D68_Struct40 D_80389EF8[];
extern func_80377D68_Struct10 D_8038A6F8[];

s32 func_80377D68(func_80377D68_Obj *arg0, u16 arg1, s32 arg2, s32 arg3) {
    func_80377D68_Struct40 *s0;
    func_80377D68_Struct10 *s3;
    f32 f;
    u16 fp;
    u16 v1;
    s32 i;
    s32 flags;
    s32 a3;
    u8 ret;

    fp = (*(u16 **)D_80171CEC[arg1])[0];
    v1 = (*(u16 **)D_80171CEC[arg1])[1];
    s3 = D_8038A6F8;
    s0 = D_80389EF8;
    ret = 0;
    flags = 0x30F;
    if (arg0->unk88 != D_80388770) {
        flags = 0x6030F;
    }
    if (arg0->unk88 == D_80388770) {
        a3 = (s32)D_803888D8 | 0x40000000;
    } else {
        a3 = (s32)D_80388878 | 0x40000000;
    }
    if (arg0->unk94 > 0x20) {
        arg0->unk94 = 0x20;
    }
    i = 0;
    if (i < arg0->unk94) {
        f = D_803893B0;
        do {
        s0->unk0 = arg0->unk6C;
        s0->unk4 = arg0->unk70;
        s0->unk8 = arg0->unk74;
        s0->unkC = s0->unkE = s0->unk10 = 0;
        s0->unk18 = fp;
        s0->unk20 = v1;
        s0->unk1C = arg2;
        s0->unk14 = flags;
        s0->unk30 = f;
        s0->unk34 = f;
        s0->unk38 = f;
        *s3 = D_80388814;
        s3->unk8 = 0x1000;
        s3->unkC = s0;
        ret += func_80146088(arg0, s3, arg3);
        i++;
        s0++;
        s3++;
        } while (i < arg0->unk94);
    }
    func_80006214(arg0);
    for (i = 0; i < arg0->unk94; i++) {
        func_80377D68_Gfx *g = D_8008DA88[i]->unk30;

        g->unk30 = a3;
        g->unk48 = arg0->unk78;
        g->unk49 = arg0->unk79;
        g->unk4A = arg0->unk7A;
        g->unk4B = arg0->unk7B;
        g->unk4C = arg0->unk80;
        g->unk4D = arg0->unk81;
        g->unk4E = arg0->unk82;
        g->unk4F = arg0->unk83;
    }
    return ret;
}
