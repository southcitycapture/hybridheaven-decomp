#include "common.h"


extern s32 func_80005670();
extern u8 D_801BC3D8[];
extern u8 D_803897CC[];
extern s32 D_8038CFB0;

s32 func_8037FFF0(s32 arg0) {
    if (*(u16 *)&D_801BC3D8[0x3B2] == 0) {
        func_80005670(arg0, D_803897CC);
        D_8038CFB0 = arg0;
        *(u16 *)&D_801BC3D8[0x3B2] = 1;
        return 0;
    }
    if (*(u16 *)&D_801BC3D8[0x3B2] == 2) {
        return 1;
    }
    return 0;
}

#define D_8038CFB0 D_8038CFB0__func_8038005C

typedef struct func_8038005C_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_8038005C_Struct;

extern s32 func_80006214(void *);
extern s32 func_80147250(s32, s32, s32, s32, s32);
extern s32 D_8008DA88[];
extern void *D_8038CFB0;

void func_8038005C(func_8038005C_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4)
{
  s32 *temp_s3;
  s32 *temp_v0;
  s32 *temp_s2;
  s32 var_s0;
  temp_v0 = *((s32 **) (((u8 *) D_8038CFB0) + 0x5C));
  temp_s3 = (s32 *) temp_v0[1];
 func_80006214(D_8038CFB0); temp_s2 = (s32 *) D_8008DA88; var_s0 = 1; if (arg0->unk94 >= 2) { do {
      if (temp_s3[var_s0] >= 0)
      {
        func_80147250(temp_s2[var_s0], arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF, arg4);
      }
      var_s0 = (var_s0 + 1) & 0xFF;
    }
    while (var_s0 < arg0->unk94);
  }
}
#undef D_8038CFB0

/* hh-block asm/nonmatchings/file057/8037FFF0/_mrg_keep_text_func_80380140.s {"functions":["func_80380140"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/_mrg_keep_text_func_80380140.s")

#define D_80389820 D_80389820__func_8038047C
#define D_8038CFB4 D_8038CFB4__func_8038047C
#define func_800058DC func_800058DC__func_8038047C
#define func_80020744 func_80020744__func_8038047C
#define func_803805A0 func_803805A0__func_8038047C
#define func_80380B30_SA func_80380B30_SA__func_8038047C
#define func_80380B30_SB func_80380B30_SB__func_8038047C
extern struct func_80380B30_SA *D_8038CFB4;
extern void func_80020744();
void func_803805A0();
extern s32 func_800058DC();
typedef struct func_80380B30_SB { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[0x20]; u32 unk30; } func_80380B30_SB;
typedef struct func_80380B30_SA { u8 pad[0x2C]; func_80380B30_SB *unk2C; } func_80380B30_SA;
extern void (*D_803897C0)(void *);

typedef struct func_8038047C_StructData {
    u8 pad0[4];
    s32 *entries;
    u8 pad8[4];
    u16 count;
} func_8038047C_StructData;

typedef struct func_8038047C_StructSource {
    u8 pad0[0x24];
    s32 value;
    u8 pad28[0x34];
    func_8038047C_StructData *data;
} func_8038047C_StructSource;

typedef struct func_8038047C_StructState {
    u8 pad0[0x24];
    s32 flags;
    u8 pad28[8];
    s32 callback;
    u8 pad34[0x14];
    u8 r, g, b, a;
} func_8038047C_StructState;

typedef struct func_8038047C_StructObject {
    u8 pad0[0x2C];
    func_8038047C_StructState *state;
} func_8038047C_StructObject;

typedef struct func_8038047C_StructArg {
    u8 pad0[0x90];
    s16 unk90;
    u8 pad92[2];
    u8 unk94;
} func_8038047C_StructArg;

extern u8 D_80389820[];

void func_8038047C(func_8038047C_StructArg *arg0, s32 arg1) {
    s32 pad1;
    func_8038047C_StructSource *src;
    func_8038047C_StructData *data;
    s32 *entries;

    src = (func_8038047C_StructSource *)D_8038CFB0;
    data = src->data;
    entries = data->entries;
    D_8038CFB4 = (void *)src->value;
    arg0->unk90 = 0;
    arg0->unk94 = data->count;
    func_80006214((void *)D_8038CFB0);
    for (arg1 = 1; arg1 < arg0->unk94; arg1 = (u8)(arg1 + 1)) {
        if (entries[arg1] >= 0) {
            func_8038047C_StructObject **object;
            func_8038047C_StructState *state;
            object = &((func_8038047C_StructObject **)D_8008DA88)[arg1];
            state = (*object)->state;
            state->flags |= 0x100;
            (*object)->state->callback = (s32)D_80389820 | 0x40000000;
            (*object)->state->r = 0;
            (*object)->state->g = 0;
            (*object)->state->b = 0;
            (*object)->state->a = 0xFF;
        }
    }
    func_80020744(0x138, arg1);
    func_800058DC(arg0, func_803805A0);
}
#undef D_80389820
#undef D_8038CFB4
#undef func_800058DC
#undef func_80020744
#undef func_803805A0
#undef func_80380B30_SA
#undef func_80380B30_SB


typedef struct func_803805A0_StructA {
    u8 pad0[0x5C];
    struct func_803805A0_StructA *unk5C;
} func_803805A0_StructA;
typedef struct func_803805A0_StructP {
    u8 pad0[0x90];
    s16 unk90;
    u8 pad1[2];
    u8 unk94;
} func_803805A0_StructP;
typedef struct func_803805A0_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x30 - 0x24];
    u32 unk30;
} func_803805A0_StructF;
typedef struct func_803805A0_StructO {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x24 - 0x23];
    u32 unk24;
    u8 pad2[4];
    func_803805A0_StructF *unk2C;
    u32 unk30;
} func_803805A0_StructO;
typedef struct func_803805A0_StructD {
    u8 pad0[0x14];
    s32 unk14;
    u16 unk18;
    u8 pad1[2];
    s32 unk1C;
} func_803805A0_StructD;
typedef struct func_803805A0_StructE {
    u8 pad0[0x28];
    s32 unk28;
} func_803805A0_StructE;

extern s32 func_8012C6B4();
extern func_803805A0_StructO *func_80005E44();
extern void func_80020744();
extern void func_80148DDC(f32 *, s32, u16);
extern func_803805A0_StructD D_8038CF70;
extern u8 D_803897E0[];
extern u8 D_80389808[];
extern u8 D_80389880[];
#define func_803807D8 func_803807D8__decl198
extern u8 func_803807D8[];

void func_803805A0(func_803805A0_StructP *arg0, s32 arg1) {
    s32 a, b, c;
    s32 *sp70;
    func_803805A0_StructO *o;
    s32 i;
    f32 sp5C[3];
    s32 v;

    v = *(s32 *)((u8 *)D_8038CFB0 + 0x5C);
    sp70 = *(s32 **)(v + 4);
    a = func_8012C6B4(0x100) & 0xFF;
    b = func_8012C6B4(0x100) & 0xFF;
    c = func_8012C6B4(0x100) & 0xFF;
    func_8038005C((void *)arg0, a, b, c, func_8012C6B4(0x100));
    if (arg0->unk90++ >= 0xB) {
        (*(func_803805A0_StructO **)D_8008DA88)->unk22 = 0;
        func_80006214((void *)D_8038CFB0);
        i = 1;
        while (i < arg0->unk94) {
            if (sp70[i] < 0) {
            } else {
                v = func_80005670(arg0, D_803897E0);
                D_8038CF70.unk14 = 0x301;
                D_8038CF70.unk18 = *(u16 *)((func_803805A0_StructO *)D_8008DA88[i])->unk2C;
                D_8038CF70.unk1C = ((func_803805A0_StructE *)((func_803805A0_StructO *)D_8008DA88[i])->unk2C)->unk28;
                o = func_80005E44(v, D_80389808);
                o->unk24 = 0x80000900;
                o->unk2C->unk18 = ((func_803805A0_StructO *)D_8008DA88[0])->unk2C->unk18;
                o->unk2C->unk1C = ((func_803805A0_StructO *)D_8008DA88[0])->unk2C->unk1C;
                o->unk2C->unk20 = ((func_803805A0_StructO *)D_8008DA88[0])->unk2C->unk20;
                o->unk2C->unk30 = (u32)D_80389880 | 0x40000000;
                func_80148DDC(sp5C, D_8038CFB0, i);
                o->unk2C->unk4 = sp5C[0];
                o->unk2C->unk8 = sp5C[1];
                o->unk2C->unkC = sp5C[2];
            }
            i = (u8)(i + 1);
        }
        func_80020744(0x139);
        func_800058DC(arg0, func_803807D8);
    }
}
#undef func_803807D8

#define func_800058DC func_800058DC__func_803807D8
#define func_80129FB8 func_80129FB8__func_803807D8
#define func_8038005C_Struct func_8038005C_Struct__func_803807D8
#define func_8038092C func_8038092C__func_803807D8
#define func_8038092C_Struct0 func_8038092C_Struct0__func_803807D8
extern s32 func_800058DC();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
typedef struct func_8038005C_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_8038005C_Struct;
typedef struct func_8038092C_Struct0 { u8 pad[0x90]; s16 unk90; } func_8038092C_Struct0;
void func_8038092C(func_8038092C_Struct0 *arg0, s32 arg1);


void func_803807D8(func_8038005C_Struct *arg0, s32 arg1) {
    u8 i;
    u8 v;
    u8 c;
    f32 sp[3];
    for (i = 0; i < 5; i++) {
        c = func_8012C6B4(arg0->unk94);
        func_80148DDC(sp, D_8038CFB0, c);
        v = func_8012C6B4(10);
        func_80129FB8(sp[0], sp[1], sp[2], 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 255, 255, 0, 255, 0, 0, v * 4 + 0x80, -v, (f32)((u32)v * 0.03), 1, 0);
    }
    func_800058DC(arg0, func_8038092C);
}
#undef func_800058DC
#undef func_80129FB8
#undef func_8038005C_Struct
#undef func_8038092C
#undef func_8038092C_Struct0

extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_800058DC();
extern void func_80380AF4();
extern f64 D_8038BDF8;
extern f64 D_8038BE00;
extern struct func_80380B30_SA *D_8038CFB4;

typedef struct func_8038092C_Struct { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8038092C_Struct;
typedef struct func_8038092C_Struct0 { u8 pad[0x90]; s16 unk90; } func_8038092C_Struct0;

void func_8038092C(func_8038092C_Struct0 *arg0, s32 arg1) {
    f64 k2;
    f64 k0;
    s8 i;
    s8 a;
    s32 b, c;
    s32 d;
    func_8038092C_Struct *v;
    k2 = D_8038BDF8;
    for (k0 = D_8038BE00, i = 0; i < 1; i++) {
        a = func_8012C6B4(10);
        b = func_8012C6B4(100);
        c = func_8012C6B4(100);
        d = func_8012C6B4(100);
        v = *(func_8038092C_Struct **)((u8 *)D_8038CFB4 + 0x2C);
        func_80129FB8((f32)(((f64)(f32)(b - 0x32) * k0) + (f64)v->unk4),
                      (f32)(((f64)(f32)c * k0) + (f64)v->unk8),
                      (f32)(((f64)(f32)(d - 0x32) * k0) + (f64)v->unkC),
                      0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0, 0xFF, 0, 0, a * 4 + 0x50, -2, (f32)((f64)a * k2), 0, 0);
    }
    if (arg0->unk90++ >= 0x1A) {
        func_800058DC(arg0, func_80380AF4);
    }
}


extern void func_80005700();

struct func_80380AF4_Struct {
    u8 pad[8];
    s32 unk8;
};

void func_80380AF4(struct func_80380AF4_Struct *arg0, s32 arg1) {
    if (arg0->unk8 == 0) {
        func_80005700();
        *(s16 *)&D_801BC3D8[0x3B2] = 2;
    }
}

typedef struct func_80380B30_SB { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[0x20]; u32 unk30; } func_80380B30_SB;
typedef struct func_80380B30_SA { u8 pad[0x2C]; func_80380B30_SB *unk2C; } func_80380B30_SA;
typedef struct func_80380B30_S { u8 pad0[0x24]; func_80380B30_SA *unk24; u8 pad28[0x14]; u16 unk3C; u8 unk3E; u8 pad3F; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x44]; s16 unk90; u8 unk92; u8 pad93; f32 unk94; f32 unk98; } func_80380B30_S;
extern s32 func_801472C0(s32, u8, u8, s32, s32);
extern f64 D_8038BE08;
extern f64 D_8038BE10;
extern f64 D_8038BE18;
extern u8 func_80380CD8[];

void func_80380B30(func_80380B30_S *arg0, s32 arg1)
{
  u8 c;
  f32 f;
  f64 k;
  s32 r;
  func_80380B30_SA *p;
  arg0->unk3E = 1;
  r = func_8012C6B4(0x50);
  k = D_8038BE08;
  f = (f32) ((((f64) ((f32) r)) * D_8038BE10) + 1.0);
  arg0->unk98 = f;
  arg0->unk44 = f;
  arg0->unk24->unk2C->unk30 = ((u32) D_80389880) | 0x40000000;
  arg0->unk40 = (f32) (((f64) (arg0->unk24->unk2C->unk4 - D_8038CFB4->unk2C->unk4)) * k);
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
  arg0->unk48 = (f32) (((f64) (arg0->unk24->unk2C->unkC - D_8038CFB4->unk2C->unkC)) * k);
  arg0->unk90 = func_8012C6B4(0x300) + 0x100;
  arg0->unk3C = func_8012C6B4(0x3C) + 0x1E;
  arg0->unk94 = (f32) (((f64) ((f32) arg0->unk3C)) * D_8038BE18);
  arg0->unk92 = func_8012C6B4(8);
  c = func_8012C6B4(0x3C) + 0x8C;
  func_80147250((s32) arg0->unk24, 0, 0, 0, 0xFF);
  func_801472C0((s32) arg0->unk24, c, c, c & 0xFF, 0xFF);
  func_800058DC(arg0, func_80380CD8);
}

/* hh-block asm/nonmatchings/file057/8037FFF0/_mrg_keep_tail_59af4419c01b4a61.s {"functions":["func_80380CD8"],"rodata":[],"rodata_bytes":[2151202296,8583704,88]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/_mrg_keep_tail_59af4419c01b4a61.s")


extern void (*D_803897C0)(void *);

typedef struct func_80381230_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x92 - 0x34];
    s16 unk92;
} func_80381230_StructA;

typedef struct func_80381230_StructB {
    u8 pad0[0x4B];
    u8 unk4B;
} func_80381230_StructB;

typedef struct func_80381230_StructC {
    u8 pad0[0x30];
    func_80381230_StructB *unk30;
} func_80381230_StructC;

void func_80381230(func_80381230_StructA *arg0, func_80381230_StructC **arg1)
{
  s32 var_v0;
  func_80381230_StructB *temp_v1;
  temp_v1 = (*arg1)->unk30;
  var_v0 = temp_v1->unk4B;
  var_v0 += arg0->unk92;
  if (var_v0 < 0)
  {
    var_v0 = 0;
  }
  if (var_v0 >= 0x100)
  {
    var_v0 = 0xFF;
  }
  temp_v1->unk4B = var_v0;
  if (D_803897C0 != 0)
  {
    if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
    D_803897C0(arg0);
  }
  if ((arg0->unk30 & 0x20) || (var_v0 == 0))
  {
    func_80005700();
  }
}


struct func_803812C0_Struct2 {
    u8 pad0[0x48];
    u8 unk48;
};

struct func_803812C0_Struct1 {
    u8 pad0[0x30];
    struct func_803812C0_Struct2 *unk30;
};

struct func_803812C0_Struct0 {
    u8 pad0[0x44];
    f32 unk44;
    u8 pad1[0x94 - 0x48];
    f32 unk94;
};

void func_803812C0(struct func_803812C0_Struct0 *arg0, struct func_803812C0_Struct1 **arg1) {
    s32 var_v0;

    arg0->unk44 = (f32) (arg0->unk44 + arg0->unk94);
    var_v0 = (*arg1)->unk30->unk48 - 5;
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }
    (*arg1)->unk30->unk48 = (u8) var_v0;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8037FFF0[] = {
    0x25, 0x6D, 0x25, 0x70, 0xA3, 0xCB, 0xA3, 0xE5, 0xA3, 0xE5, 0xA3, 0xF0, 0x20, 0xA3, 0xF4, 0xA3,
    0xE8, 0xA3, 0xE9, 0xA3, 0xF3, 0x20, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xED, 0xA3, 0xE2, 0xA3, 0xEF,
    0xA1, 0xA9, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70, 0x25, 0x64, 0x2E, 0x25, 0x73, 0x00, 0x00, 0x00,
    0x25, 0x6D, 0x25, 0x70, 0xA3, 0xD9, 0xA3, 0xC5, 0xA3, 0xD3, 0x20, 0x25, 0x6D, 0x25, 0x70, 0xA3,
    0xCE, 0xA3, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70,
    0xA3, 0xD2, 0xA3, 0xE5, 0xA3, 0xF0, 0xA3, 0xEC, 0xA3, 0xE1, 0xA3, 0xE3, 0xA3, 0xE5, 0x20, 0xA3,
    0xF7, 0xA3, 0xE9, 0xA3, 0xF4, 0xA3, 0xE8, 0x20, 0xA3, 0xF7, 0xA3, 0xE8, 0xA3, 0xE9, 0xA3, 0xE3,
    0xA3, 0xE8, 0x20, 0xA3, 0xE3, 0xA3, 0xEF, 0xA3, 0xED, 0xA3, 0xE2, 0xA3, 0xEF, 0xA1, 0xA9, 0x00,
    0xA3, 0xC5, 0xA3, 0xCD, 0xA3, 0xD0, 0xA3, 0xD4, 0xA3, 0xD9, 0x00, 0x00, 0xA3, 0xC3, 0xA3, 0xCF,
    0xA3, 0xCD, 0xA3, 0xC2, 0xA3, 0xCF, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70, 0xA3, 0xD9, 0xA3, 0xC5,
    0xA3, 0xD3, 0x20, 0x25, 0x6D, 0x25, 0x70, 0xA3, 0xCE, 0xA3, 0xCF, 0x00, 0x25, 0x6D, 0x25, 0x70,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70, 0x25, 0x73, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70, 0x25, 0x73, 0xA3, 0xB1, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x6D, 0x25, 0x70, 0x25, 0x73, 0xA3, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70,
    0x25, 0x73, 0xA3, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA5, 0xED, 0xA5, 0xDC, 0xA5, 0xC3, 0xA5, 0xC8, 0xC7, 0xFA, 0xC8, 0xAF, 0xA5, 0xA8, 0xA5, 0xD5,
    0xA5, 0xA7, 0xA5, 0xAF, 0xA5, 0xC8, 0xB4, 0xB0, 0xCE, 0xBB, 0x0A, 0x00, 0x2D, 0x2D, 0x2D, 0x2D,
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0xC7, 0xCB, 0xCA,
    0xD2, 0xBE, 0xC3, 0xB5, 0xEE, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00,
};
/* hh-owned-pool func_803807D8 8038BDEC 8038BDF8 */
