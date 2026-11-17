#include "common.h"
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern func_801F63E0_Struct3 D_8021AFF8;
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_8021B018;
extern s32 func_80010550();
extern s32 func_8013A1B4();
extern void (*D_80216D10[])(void *, s32);
s32 func_801DBE94(void *arg0, s32 arg1);
typedef struct func_801F4284_SubStruct {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F4284_SubStruct;
typedef struct func_801F4284_Struct {
    u8 pad0[0x38];
    func_801F4284_SubStruct *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
} func_801F4284_Struct;
void func_801F4284(func_801F4284_Struct *arg0);
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};
void func_801F6008(struct func_801F6008_Struct *arg0, s32 arg1);
extern void func_801F60D8();
void func_801F63E0(struct func_801F6008_Struct *arg0, s32 arg1);
typedef struct func_801F6534_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 unk9C;
    u8 pad9D[0xAE - 0x9D];
    u8 unkAE;
    u8 unkAF;
} func_801F6534_Struct;
void func_801F6534(func_801F6534_Struct *arg0, s32 arg1);
struct func_801F6820_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0xAE - 0x9E];
    u8 unkAE;
    u8 unkAF;
};
void func_801F6820(struct func_801F6820_Struct *arg0, s32 arg1);
typedef struct func_801F6A3C_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0x10];
    u8 unkAE;
    u8 unkAF;
} func_801F6A3C_Struct;
void func_801F6A3C(func_801F6A3C_Struct *arg0, s32 arg1);
typedef struct func_801F60D8_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[1];
    u8 unk93;
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 pad9C[0xAE - 0x9C];
    u8 unkAE;
    s8 unkAF;
} func_801F60D8_Obj;
void func_801F6C58(func_801F60D8_Obj *arg0, s32 arg1);


typedef struct func_801F4D30_StructInner {
    u16 pad0;
    u16 id;
    u8 pad4[0x14];
    u32 flags;
} func_801F4D30_StructInner;
typedef struct func_801F4D30_Struct {
    u8 pad0[0x2C];
    u32 flags;
    u8 pad30[8];
    func_801F4D30_StructInner *inner;
    s16 timer;
    u8 pad3E[0xE];
    s8 a, b, c, d, e;
    u8 pad51[3];
    s32 field54;
    u8 pad58[4];
    void *sub;
    u8 pad60[0x30];
    s16 field90;
    u8 field92, field93;
    u8 pad94[6];
    s16 field9A;
    u8 field9C;
    u8 pad9D[0x11];
    u8 fieldAE;
    u8 padAF;
    void *callback;
} func_801F4D30_Struct;
extern func_801F63E0_Struct3 D_80216EF4;
extern func_801F4AA0_Struct D_80216F00;
extern func_801F4AA0_Struct D_80216E7C;
extern func_801F63E0_Struct3 D_80216E88;
extern func_801F63E0_Struct3 D_8021AFE8;
extern f32 D_80218C94;
extern f32 D_80218C98;
extern f32 D_80218C9C;

void func_801F4D30(func_801F4D30_Struct *arg0, s32 arg1)
{
    struct func_801F5230_StructB *sub;
    u16 id;
    u32 value;
    func_801F4D30_StructInner *inner;

    sub = arg0->sub;
    id = arg0->inner->id;
    ((struct func_801F5230_StructB *)sub)->unk78 = 1;
    arg0->flags |= 0xB00;
    arg0->a = 5;
    arg0->b = 0x12;
    arg0->c = 5;
    arg0->d = 0;
    arg0->e = 0;
    arg0->field54 = 0xE0;
    arg0->field90 = 100;
    arg0->field92 = 0;
    arg0->timer = 0;
    if (arg0->fieldAE == 0) arg0->fieldAE = 20;
    inner = arg0->inner;
    value = (inner->flags >> 8) & 0xFF;
    if (value == 0) {
        arg0->field9A = 40;
        inner = *(func_801F4D30_StructInner *volatile *)&arg0->inner;
    }
    else arg0->field9A = value;
    value = (inner->flags >> 8) & 0xFF;
    if (value == 0) arg0->field9C = 40;
    else arg0->field9C = value;
    D_8021AFE8 = D_80216E88;
    D_8021AFF8 = D_80216EF4;
    D_8021AFE8.w0 = func_801DBE94(arg0, 2);
    D_8021AFF8.w0 = func_801DBE94(arg0, 1);
    if (id == 0x57 || id == 0x58 || id == 0x59) D_8021B018 = D_80216F00;
    switch ((arg0->inner->flags >> 16) & 0xFF) {
    case 0:
    case 1:
        arg0->callback = func_801F60D8;
        break;
    case 2:
        *(f32 *)&D_8021AFE8.w2 = D_80218C94;
        arg0->field90 = 300;
        arg0->callback = func_801F60D8;
        break;
    case 3:
        *(f32 *)&D_8021AFF8.w2 = D_80218C98;
        arg0->field90 = 300;
        arg0->callback = func_801F63E0;
        break;
    case 5:
        arg0->field93 = 0;
        arg0->timer = 40;
        arg0->callback = func_801F6C58;
        break;
    case 6:
        arg0->timer = 5;
        arg0->field93 = 0;
        arg0->callback = func_801F6C58;
        break;
    case 7:
        arg0->field93 = 0;
        func_8013A1B4(arg1, D_80216E7C, 0x1FFFFF);
        func_80010550(arg1, sub);
        arg0->callback = func_801F6008;
        break;
    case 8:
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->field90 = 200;
        arg0->callback = func_801F6534;
        break;
    case 9:
        *(f32 *)&D_8021AFE8.w2 = D_80218C9C;
        arg0->field90 = 300;
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->callback = func_801F6534;
        break;
    case 10:
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->callback = func_801F6820;
        break;
    case 11:
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->callback = func_801F6A3C;
        break;
    default:
        arg0->callback = func_801F60D8;
        break;
    }
}
