#include "common.h"

extern f32 D_80258B90;
extern f32 D_80258BB0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_80258B98;
extern f64 D_80258BA0;
extern f64 D_80258BA8;
extern s32 D_80010550(s32, s32, void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern s32 func_80011198(s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_8013A1B4();
extern s32 func_801C2FF8(void);
extern s32 func_801C3B5C();
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_80258780[];
extern u8 D_802587C0[];
extern u8 D_80258940[];
extern u8 D_802589C0[];
extern u8 D_80258A00[];
#define func_80245CE4 func_80245CE4__decl
extern u8 func_80245CE4[];
#define func_80246020 func_80246020__decl
extern u8 func_80246020[];
extern void *D_8025A2A0;
extern void *D_8025A2A4;
extern void func_80005700(void *);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801C2F0C(s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_80245588();
extern void func_80245758();
extern void func_80245988(void *arg0, s32 arg1);
#define func_802459C8 func_802459C8__decl
extern void func_802459C8(void);
extern void func_80245C60();
extern void func_80246598(void *, s32);
extern void func_802466A4(void *arg0, void **arg1);
extern void func_80246760();
extern void func_802467FC(void *arg0, s32 arg1);
extern void func_80246874(void *arg0, s32 arg1);
extern void func_80246920();
extern void func_802469F8();
extern void func_80246D34();
extern void func_80246E34();
extern void func_80246EB8();
extern void func_802470E0();
extern void func_8024723C(void *arg0, s32 arg1);
extern void func_80247284(void *arg0, s32 arg1);
extern void func_802472D4();
extern void func_80247498();
extern void func_80247568();
extern void func_8024763C();
extern void func_8024770C();

#define D_80164F40 D_80164F40__func_80244C10
#define D_8017AD28 D_8017AD28__func_80244C10
#define D_801BBBF0 D_801BBBF0__func_80244C10
#define D_80252924 D_80252924__func_80244C10
#define D_80252938 D_80252938__func_80244C10
#define D_802529E0 D_802529E0__func_80244C10
#define func_80005670 func_80005670__func_80244C10
#define func_80005E44 func_80005E44__func_80244C10
#define func_80006214 func_80006214__func_80244C10
#define func_8000C3B0 func_8000C3B0__func_80244C10
#define func_80126CC0 func_80126CC0__func_80244C10
#define func_80126EAC func_80126EAC__func_80244C10
#define func_8012C89C func_8012C89C__func_80244C10
#define func_802453F0 func_802453F0__func_80244C10
#define func_802453FC func_802453FC__func_80244C10
#define func_802453FC_Struct func_802453FC_Struct__func_80244C10
#define func_802453FC_StructA func_802453FC_StructA__func_80244C10
#define func_802453FC_StructB func_802453FC_StructB__func_80244C10
typedef struct { u8 pad0[0x40]; f32 f40; u8 pad44[4]; f32 f48; } func_802453FC_StructB;
typedef struct { u8 pad[0xDC]; func_802453FC_StructB *p; u8 pad2[0x1E8-0xE0]; f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC; } func_802453FC_Struct;
extern func_802453FC_Struct D_801BBBF0;
extern void func_802453F0(s32 arg0, s32 arg1);
typedef struct { u8 pad[0x3C]; s16 h3C; } func_802453FC_StructA;
extern void func_802453FC(func_802453FC_StructA *arg0, s32 arg1);

typedef struct func_80244C10_StructData {
    u8 pad0[4];
    f32 x, y, z;
    s16 rx, ry, rz;
    u8 pad16[2];
    f32 sx, sy, sz;
    u32 flags;
    u8 pad28[8];
    void *data;
    u8 pad34[0x14];
    u8 c0, c1, c2, c3, c4, c5, c6, c7;
} func_80244C10_StructData;
typedef struct func_80244C10_StructObj {
    u8 pad[0x30];
    func_80244C10_StructData *p;
} func_80244C10_StructObj;
typedef struct func_80244C10_StructState {
    u8 pad[0x94];
    f32 x, y, z, scale;
} func_80244C10_StructState;
typedef struct func_80244C10_StructMsg { s32 a, b, c, d; } func_80244C10_StructMsg;
extern void *func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void *func_8000C3B0(void *);
extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8012C89C(void *, s32, s32, s32);
extern func_80244C10_StructMsg D_80164F40;
extern u8 D_8017AD28[];
extern u8 D_80252924[];
extern u8 D_80252938[];
extern u8 D_802529E0[];

#define SCALE(i) \
    arg1[i]->p->sz = 1.0f; \
    arg1[i]->p->sx = arg1[i]->p->sy = arg1[i]->p->sz;
#define POS(i) \
    arg1[i]->p->x = arg0->x; \
    arg1[i]->p->y = arg0->y; \
    arg1[i]->p->z = arg0->z;
#define COLOR(i) \
    arg1[i]->p->c4 = ((u8 *)&D_801BBBF0)[0xF32]; \
    arg1[i]->p->c5 = ((u8 *)&D_801BBBF0)[0xF33]; \
    arg1[i]->p->c6 = ((u8 *)&D_801BBBF0)[0xF34]; \
    arg1[i]->p->c7 = ((u8 *)&D_801BBBF0)[0xF35];

extern const f32 D_80258A5C__load_func_80244C10;
extern const f32 D_80258A60__load_func_80244C10;
extern const f32 D_80258A64__load_func_80244C10;
extern const f32 D_80258A68__load_func_80244C10;
extern const f64 D_80258A70__load_func_80244C10;
void func_80244C10(func_80244C10_StructState *arg0, func_80244C10_StructObj **arg1) {
    func_80244C10_StructMsg msg;
    f32 scale;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x74) == 0) {
            D_8025A2A0 = func_80005670(arg0, D_80252924);
            D_8025A2A4 = func_80005670(arg0, D_80252938);
            arg0->x = -300.0f;
            arg0->y = -125.0f;
            arg0->z = 378.0f;
            arg0->scale = D_80258A5C__load_func_80244C10;
            msg = D_80164F40;
            msg.b = 0x80000C00;
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            msg.b = 0x80000600;
            func_80005E44(arg0, &msg);
            msg.b = 0x80000C00;
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80006214(arg0);
            func_8012C89C(arg0, 0, 0x2D2, 0);
            arg1[0]->p->data = D_8017AD28;
            SCALE(0)
            POS(0)
            arg1[0]->p->ry = 0;
            func_8012C89C(arg0, 1, 0x2D4, 5);
            arg1[1]->p->data = D_8017AD28;
            SCALE(1)
            POS(1)
            arg1[1]->p->ry = 0x1000;
            func_8012C89C(arg0, 2, 0x2D4, 6);
            arg1[2]->p->data = D_8017AD28;
            SCALE(2)
            POS(2)
            arg1[2]->p->ry = 0x1000;
            func_8012C89C(arg0, 3, 0x289, 7);
            arg1[3]->p->flags = 0x13;
            arg1[3]->p->data = func_8000C3B0(arg1[3]);
            SCALE(3)
            arg1[3]->p->x = -300.0f;
            arg1[3]->p->y = -125.0f;
            arg1[3]->p->z = D_80258A60__load_func_80244C10;
            arg1[3]->p->ry = 0;
            arg1[3]->p->flags |= 0x400;
            COLOR(3)
            func_8012C89C(arg0, 4, 0x289, 8);
            arg1[4]->p->flags = 0x13;
            arg1[4]->p->data = func_8000C3B0(arg1[4]);
            SCALE(4)
            arg1[4]->p->x = -300.0f;
            arg1[4]->p->y = -125.0f;
            arg1[4]->p->z = D_80258A64__load_func_80244C10;
            arg1[4]->p->ry = 0;
            arg1[4]->p->flags |= 0x400;
            COLOR(4)
            func_8012C89C(arg0, 5, 0x2D4, 7);
            scale = D_80258A68__load_func_80244C10;
            arg1[5]->p->flags |= 0x100;
            arg1[5]->p->data = (void *)((u32)D_802529E0 | 0x40000000);
            arg1[5]->p->sx = scale;
            arg1[5]->p->sy = (f64)arg0->scale * D_80258A70__load_func_80244C10;
            arg1[5]->p->sz = scale;
            arg1[5]->p->x = arg0->x;
            arg1[5]->p->y = (f64)arg0->y + 9.5;
            arg1[5]->p->z = arg0->z;
            arg1[5]->p->rx = 0;
            arg1[5]->p->ry = 0;
            arg1[5]->p->rz = 0;
            arg1[5]->p->c0 = 0;
            arg1[5]->p->c1 = 0xFF;
            arg1[5]->p->c2 = 0xFF;
            arg1[5]->p->c3 = 0x80;
            func_8012C89C(arg0, 6, 0x2D4, 0);
            arg1[6]->p->data = D_8017AD28;
            SCALE(6)
            arg1[6]->p->x = arg0->x + 2.0f;
            arg1[6]->p->y = arg0->y;
            arg1[6]->p->z = arg0->z;
            arg1[6]->p->ry = 0;
            func_8012C89C(arg0, 7, 0x2D4, 1);
            arg1[7]->p->data = D_8017AD28;
            SCALE(7)
            arg1[7]->p->x = arg0->x - 2.0f;
            arg1[7]->p->y = arg0->y;
            arg1[7]->p->z = arg0->z;
            arg1[7]->p->ry = 0;
            func_801339D0(0x73);
            func_801339D0(0x77);
            func_800058DC(arg0, func_802453FC);
            return;
        }
        func_800058DC(arg0, func_802453F0);
    }
}
#undef SCALE
#undef POS
#undef COLOR
#undef D_80164F40
#undef D_8017AD28
#undef D_801BBBF0
#undef D_80252924
#undef D_80252938
#undef D_802529E0
#undef func_80005670
#undef func_80005E44
#undef func_80006214
#undef func_8000C3B0
#undef func_80126CC0
#undef func_80126EAC
#undef func_8012C89C
#undef func_802453F0
#undef func_802453FC
#undef func_802453FC_Struct
#undef func_802453FC_StructA
#undef func_802453FC_StructB


void func_802453F0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



/* hh-block asm/nonmatchings/file015/80244C10/_ro_func_802453FC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_802453FC.s","D_80258780"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_func_802453FC.s")

#define func_80245588 func_80245588__func_802453FC

typedef struct { u8 pad0[0x40]; f32 f40; u8 pad44[4]; f32 f48; } func_802453FC_StructB;
typedef struct { u8 pad[0xDC]; func_802453FC_StructB *p; u8 pad2[0x1E8-0xE0]; f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC; } func_802453FC_Struct;
typedef struct { u8 pad[0x3C]; s16 h3C; } func_802453FC_StructA;
extern func_802453FC_Struct D_801BBBF0;

extern void func_80245588();

extern const f32 D_80258A78__load_func_802453FC;
extern const f32 D_80258A7C__load_func_802453FC;
extern const f32 D_80258A80__load_func_802453FC;
extern const f32 D_80258A84__load_func_802453FC;
extern const f32 D_80258A88__load_func_802453FC;
extern const f32 D_80258A8C__load_func_802453FC;
extern const f32 D_80258A90__load_func_802453FC;
extern const f32 D_80258A94__load_func_802453FC;
extern const f32 D_80258A98__load_func_802453FC;
extern const f32 D_80258A9C__load_func_802453FC;
extern const f32 D_80258AA0__load_func_802453FC;
extern const f32 D_80258AA4__load_func_802453FC;
void func_802453FC(func_802453FC_StructA *arg0, s32 arg1) {
    if (func_801C3D20((D_80258A78__load_func_802453FC), D_80258A7C__load_func_802453FC, 20.0f) != 0 || func_801C3D20((D_80258A80__load_func_802453FC), D_80258A84__load_func_802453FC, 20.0f) != 0 || func_801C3D20((D_80258A88__load_func_802453FC), D_80258A8C__load_func_802453FC, 20.0f) != 0) {
        func_80133980(0x74);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.p->f40 = 0.0f;
        D_801BBBF0.p->f48 = 0.0f;
        D_801BBBF0.f1E8 = (D_80258A90__load_func_802453FC);
        D_801BBBF0.f1EC = (D_80258A94__load_func_802453FC);
        D_801BBBF0.f1F0 = D_80258A98__load_func_802453FC;
        D_801BBBF0.f1F4 = (D_80258A9C__load_func_802453FC);
        D_801BBBF0.f1F8 = (D_80258AA0__load_func_802453FC);
        D_801BBBF0.f1FC = D_80258AA4__load_func_802453FC;
        func_8011AAF4(D_80258780, 0x218, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        func_801FBB30();
        arg0->h3C = 0;
        func_800058DC(arg0, func_80245588);
    }
}
#undef func_80245588



/* hh-block asm/nonmatchings/file015/80244C10/_ro_func_80245588.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_80245588.s","D_802587C0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_func_80245588.s")

#define func_80245758 func_80245758__func_80245588

extern void func_80245758();

typedef struct func_80245588_StructObj {
    u8 pad[0x3C];
    u16 counter;
} func_80245588_StructObj;

typedef union func_80245588_StructData {
    u8 storage[0x20];
    struct {
        f32 x, y, z;
        s16 type;
        s32 id;
        f32 scale;
        s16 a, b;
    } first;
    struct {
        s16 type;
        s32 id;
        f32 scale;
        s16 a;
    } second;
} func_80245588_StructData;

extern const f32 D_80258AA8__load_func_80245588;
extern const f32 D_80258AAC__load_func_80245588;
extern const f32 D_80258AB0__load_func_80245588;
extern const f32 D_80258AB4__load_func_80245588;
extern const f32 D_80258AB8__load_func_80245588;
extern const f32 D_80258ABC__load_func_80245588;
extern const f32 D_80258AC0__load_func_80245588;
extern const f32 D_80258AC4__load_func_80245588;
void func_80245588(func_80245588_StructObj *arg0, s32 arg1)
{
  func_80245588_StructData data;
  u16 temp_v0;
  if (func_801C2FF8() != 0)
  {
    temp_v0 = arg0->counter;
    arg0->counter = temp_v0 + 1;
    if (temp_v0 >= 12)
    {
      if (temp_v0 == 12)
      {
        data.first.type = 0x1100;
        data.first.id = 0x0168003F;
        data.first.a = 0;
        data.first.b = 0;
        data.first.x = -304.0f;
        data.first.y = D_80258AA8__load_func_80245588;
        data.first.z = 0.0f;
        data.first.scale = D_80258AAC__load_func_80245588;
        func_801C2F0C(2, &data);
      }
      if (!D_801BBBF0.f1EC)
      {
      }
      if (func_801C3B5C() == 4)
      {
        data.second.type = 0x1000;
        data.second.id = 0x01680041;
        data.second.a = 10;
        data.second.scale = 1.0f;
        func_801C2F0C(3, &data);
        D_801BBBF0.f1E8 = (D_80258AB0__load_func_80245588);
        D_801BBBF0.f1EC = (D_80258AB4__load_func_80245588);
        D_801BBBF0.f1F0 = D_80258AB8__load_func_80245588;
        D_801BBBF0.f1F4 = (D_80258ABC__load_func_80245588);
        D_801BBBF0.f1F8 = (D_80258AC0__load_func_80245588);
        D_801BBBF0.f1FC = D_80258AC4__load_func_80245588;
        func_8011AAF4(D_802587C0, 0x24C, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->counter = 0;
        func_80020718(7);
        func_800058DC(arg0, func_80245758);
      }
    }
  }
}
#undef func_80245758



/* hh-block asm/nonmatchings/file015/80244C10/_ro_func_80245758.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_80245758.s","D_80258800"],[".rodata","asm/nonmatchings/file015/80244C10/func_80245758.s","D_80258840"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_func_80245758.s")

#define func_80245988 func_80245988__func_80245758

extern u8 D_80258800[], D_80258840[];

void func_80245988(void *arg0, s32 arg1);

typedef struct { u8 pad[4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[2]; s16 s12; } func_80245758_StructB;
typedef struct { u8 pad[0x2C]; func_80245758_StructB *p; } func_80245758_StructA;

extern const f32 D_80258AC8__load_func_80245758;
extern const f32 D_80258ACC__load_func_80245758;
extern const f32 D_80258AD0__load_func_80245758;
extern const f32 D_80258AD4__load_func_80245758;
extern const f32 D_80258AD8__load_func_80245758;
extern const f32 D_80258ADC__load_func_80245758;
extern const f32 D_80258AE0__load_func_80245758;
extern const f32 D_80258AE4__load_func_80245758;
extern const f32 D_80258AE8__load_func_80245758;
extern const f32 D_80258AEC__load_func_80245758;
extern const f32 D_80258AF0__load_func_80245758;
extern const f32 D_80258AF4__load_func_80245758;
extern const f32 D_80258AF8__load_func_80245758;
extern const f32 D_80258AFC__load_func_80245758;
extern const f32 D_80258B00__load_func_80245758;
void func_80245758(func_802453FC_StructA *arg0, s32 arg1) {
    s32 v = *(u16 *)&arg0->h3C;
    (*(u16 *)&arg0->h3C)++;
    if (v == 0) {
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->f4 = (D_80258AC8__load_func_80245758);
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->fC = D_80258ACC__load_func_80245758;
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->s12 = 0x1000;
    }
    if (v == 0x32) {
        D_801BBBF0.f1E8 = (D_80258AD0__load_func_80245758);
        D_801BBBF0.f1EC = (D_80258AD4__load_func_80245758);
        D_801BBBF0.f1F0 = D_80258AD8__load_func_80245758;
        D_801BBBF0.f1F4 = -278.0f;
        D_801BBBF0.f1F8 = (D_80258ADC__load_func_80245758);
        D_801BBBF0.f1FC = D_80258AE0__load_func_80245758;
        func_8011AAF4(D_80258800, 0x271, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        func_80020718(0x1B5);
        func_800208C4(0x7C);
        func_80133980(0x77);
    }
    if (v >= 0x6E && D_8011AAF4(D_80258840, 0x27D, arg0, 0, 2, D_80258AE4__load_func_80245758, (D_80258AE8__load_func_80245758), (D_80258AEC__load_func_80245758), D_80258AF0__load_func_80245758, D_80258AF4__load_func_80245758, (D_80258AF8__load_func_80245758), (D_80258AFC__load_func_80245758), D_80258B00__load_func_80245758, 0.0f, 35.0f, -1, -1) == 0) {
        arg0->h3C = 0;
        func_800058DC(arg0, func_80245988);
    }
}
#undef func_80245988



void func_80245988(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = ((u16 *)arg0)[0x3C / 2];
    ((u16 *)arg0)[0x3C / 2] = temp_v0 + 1;
    if (temp_v0 == 0xA0) {
        ((u16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_802459C8);
    }
}

#undef func_802459C8


#define D_80258880 D_80258880__func_802459C8
#define D_802588C0 D_802588C0__func_802459C8
#define D_80258B04 D_80258B04__func_802459C8
#define D_80258B08 D_80258B08__func_802459C8
#define D_80258B0C D_80258B0C__func_802459C8
#define D_80258B10 D_80258B10__func_802459C8
#define D_80258B14 D_80258B14__func_802459C8
#define D_80258B18 D_80258B18__func_802459C8
#define D_80258B1C D_80258B1C__func_802459C8
#define D_80258B20 D_80258B20__func_802459C8
#define func_80245BCC func_80245BCC__func_802459C8
extern void func_80245BCC(void *arg0, s32 arg1);

extern u8 D_80258880[];
extern u8 D_802588C0[];
extern f32 D_80258B04;
extern f32 D_80258B08;
extern f32 D_80258B0C;
extern f32 D_80258B10;
extern f32 D_80258B14;
extern f32 D_80258B18;
extern f32 D_80258B1C;
extern f32 D_80258B20;

typedef struct func_802459C8_StructObj {
    u8 pad[0x3C];
    u16 counter;
} func_802459C8_StructObj;

typedef struct func_802459C8_StructData {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    u8 pad[0xC];
} func_802459C8_StructData;

void func_802459C8(func_802459C8_StructObj *arg0, s32 arg1) {
    s32 count;
    u16 old;
    func_802459C8_StructData data;

    old = arg0->counter;
    arg0->counter = old + 1;
    count = old;
    func_8011AAF4(D_80258880, 0x2A2, arg0, 0, 2,
        D_80258B04, D_801BBBF0.f1E8, D_801BBBF0.f1EC,
        D_801BBBF0.f1F0, D_80258B08, D_801BBBF0.f1F4,
        D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
    if (count == 30) {
        func_80133980(0x73);
        return;
    }
    if (count == 180) {
        D_801BBBF0.f1E8 = D_80258B0C;
        D_801BBBF0.f1EC = D_80258B10;
        D_801BBBF0.f1F0 = D_80258B14;
        D_801BBBF0.f1F4 = D_80258B18;
        D_801BBBF0.f1F8 = D_80258B1C;
        D_801BBBF0.f1FC = D_80258B20;
        func_8011AAF4(D_802588C0, 0x2B1, arg0, 0, 1,
            0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC,
            D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4,
            D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        data.unk0 = 0;
        data.unk4 = 0x04100043;
        data.unk8 = 4.0f;
        func_801C2F0C(4, &data);
        func_801C3B5C();
        func_80020718(0x667);
        func_800058DC(arg0, func_80245BCC);
    }
}
#undef D_80258880
#undef D_802588C0
#undef D_80258B04
#undef D_80258B08
#undef D_80258B0C
#undef D_80258B10
#undef D_80258B14
#undef D_80258B18
#undef D_80258B1C
#undef D_80258B20
#undef func_80245BCC
#define func_802459C8 func_802459C8__decl

#define func_80245C60 func_80245C60__func_80245BCC
#define func_80246598 func_80246598__func_80245BCC
#define func_8024770C func_8024770C__func_80245BCC

struct func_80245BCC_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
};

extern void func_80246598(void *, s32);
extern void func_8024770C();
extern void func_80245C60();

void func_80245BCC(void *arg0, s32 arg1) {
    struct func_80245BCC_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100022;
        sp18.unkC = 6;
        sp18.unk8 = 1.5f;
        func_801C2F0C(5, &sp18);
        func_800058DC(D_8025A2A4, func_8024770C);
        ((s16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_80245C60);
    }
    func_80246598(arg0, arg1);
}
#undef func_80245C60
#undef func_80246598
#undef func_8024770C



void func_80245C60(func_80245588_StructObj *arg0, s32 arg1) {
    if (arg0->counter++ == 5) {
        func_80133980(0x77);
    }
    if (func_801C3B5C() == 4) {
        arg0->counter = 0;
        func_800058DC(arg0, func_80245CE4);
    }
    func_80246598(arg0, arg1);
}








#undef func_80245CE4
/* hh-block asm/nonmatchings/file015/80244C10/_ro_named_6a65fa1dc653af1b.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_802459C8.s","D_80258880"],[".rodata","asm/nonmatchings/file015/80244C10/func_802459C8.s","D_802588C0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_named_6a65fa1dc653af1b.s")

/* hh-block asm/nonmatchings/file015/80244C10/_ro_named_cdaff0b0bf420be6.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_80245CE4.s","D_80258900"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_named_cdaff0b0bf420be6.s")

#define D_801BBBF0 D_801BBBF0__func_80245CE4
#define D_801C2F0C D_801C2F0C__func_80245CE4
#define D_80258900 D_80258900__func_80245CE4
#define D_80258B24 D_80258B24__func_80245CE4
#define D_80258B28 D_80258B28__func_80245CE4
#define D_80258B2C D_80258B2C__func_80245CE4
#define D_80258B30 D_80258B30__func_80245CE4
#define D_80258B34 D_80258B34__func_80245CE4
#define func_802453FC_Struct func_802453FC_Struct__func_80245CE4
#define func_802453FC_StructB func_802453FC_StructB__func_80245CE4
#define func_80245E8C func_80245E8C__func_80245CE4
#define func_80245E8C_Struct func_80245E8C_Struct__func_80245CE4
#define func_80246598 func_80246598__func_80245CE4
#define HZC2(a, b) a##b
#define HZC(a, b) HZC2(a, b)
typedef struct { u8 pad0[0x40]; f32 f40; u8 pad44[4]; f32 f48; } func_802453FC_StructB;
typedef struct { u8 pad[0xDC]; func_802453FC_StructB *p; u8 pad2[0x1E8-0xE0]; f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC; } func_802453FC_Struct;
extern func_802453FC_Struct D_801BBBF0;
typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad3E[2]; f32 f40; } func_80245E8C_Struct;
void func_80245E8C(func_80245E8C_Struct *arg0, s32 arg1);
extern void func_80246598(void *, s32);

extern s32 D_801C2F0C(s32, void *);
extern u8 D_80258900[];
extern f32 D_80258B24;
extern f32 D_80258B28;
extern f32 D_80258B2C;
extern f32 D_80258B30;
extern f32 D_80258B34;
typedef struct { u8 pad[0x3C]; u16 h3C; } func_80245CE4_Struct;
typedef struct { s16 a; s32 b; f32 c; u8 post[0x14]; } func_80245CE4_Msg;

void func_80245CE4(func_80245CE4_Struct *arg0, s32 arg1) {
    func_80245CE4_Msg sp;

    if (arg0->h3C == 0x14 || arg0->h3C == 0x20) {
        func_80020718(0x1B8);
    }
    if (arg0->h3C == 5) {
        sp.a = 0x1000;
        sp.b = 0x4100023;
        sp.c = 1.0f;
        D_801C2F0C(4, &sp);
    }
    if (arg0->h3C++ >= 0x10 && func_801C3B5C() == 4) {
        D_801BBBF0.f1E8 = D_80258B24;
        D_801BBBF0.f1EC = D_80258B28;
        D_801BBBF0.f1F0 = D_80258B2C;
        D_801BBBF0.f1F4 = -278.0f;
        D_801BBBF0.f1F8 = D_80258B30;
        D_801BBBF0.f1FC = D_80258B34;
        func_8011AAF4(D_80258900, 0x309, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->h3C = 0;
        func_80020718(0x1B5);
        func_800058DC(arg0, func_80245E8C);
    }
    func_80246598(arg0, arg1);
}
#undef HZC2
#undef HZC
#undef D_801BBBF0
#undef D_801C2F0C
#undef D_80258900
#undef D_80258B24
#undef D_80258B28
#undef D_80258B2C
#undef D_80258B30
#undef D_80258B34
#undef func_802453FC_Struct
#undef func_802453FC_StructB
#undef func_80245E8C
#undef func_80245E8C_Struct
#undef func_80246598
#define func_80245CE4 func_80245CE4__decl



/* hh-block asm/nonmatchings/file015/80244C10/_ro_func_80245E8C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_80245E8C.s","D_80258940"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_func_80245E8C.s")

typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad3E[2]; f32 f40; } func_80245E8C_Struct;
typedef struct { s16 a; s32 b; f32 c; s16 d; u8 pad[8]; } func_80245E8C_Msg;


extern const f32 D_80258B38__load_func_80245E8C;
extern const f32 D_80258B3C__load_func_80245E8C;
extern const f32 D_80258B40__load_func_80245E8C;
extern const f32 D_80258B44__load_func_80245E8C;
extern const f32 D_80258B48__load_func_80245E8C;
extern const f32 D_80258B4C__load_func_80245E8C;
void func_80245E8C(func_80245E8C_Struct *arg0, s32 arg1) {
    u16 t;
    u8 padx[4];
    func_80245E8C_Msg m;
    t = arg0->h3C;
    arg0->h3C = t + 1;
    if (t == 0x1E) {
        func_80133980(0x73);
        m.a = 0x1100;
        m.b = 0x01680041;
        m.c = 1.0f;
        m.d = 0xA;
        func_801C2F0C(5, &m);
    }
    if (t >= 0x5A && func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        D_801BBBF0.f1E8 = -330.0f;
        D_801BBBF0.f1EC = (D_80258B38__load_func_80245E8C);
        D_801BBBF0.f1F0 = D_80258B3C__load_func_80245E8C;
        D_801BBBF0.f1F4 = (D_80258B40__load_func_80245E8C);
        D_801BBBF0.f1F8 = (D_80258B44__load_func_80245E8C);
        D_801BBBF0.f1FC = D_80258B48__load_func_80245E8C;
        func_8011AAF4(D_80258940, 0x337, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->h3C = 0;
        arg0->f40 = D_80258B4C__load_func_80245E8C;
        func_800058DC(arg0, func_80246020);
    }
}

#undef func_80246020


#define D_801BBBF0 D_801BBBF0__func_80246020
#define D_80258980 D_80258980__func_80246020
#define D_80258B50 D_80258B50__func_80246020
#define D_80258B58 D_80258B58__func_80246020
#define D_80258B60 D_80258B60__func_80246020
#define D_80258B64 D_80258B64__func_80246020
#define D_80258B68 D_80258B68__func_80246020
#define D_80258B6C D_80258B6C__func_80246020
#define D_80258B70 D_80258B70__func_80246020
#define D_80258B74 D_80258B74__func_80246020
#define D_80258B78 D_80258B78__func_80246020
#define func_80010550 func_80010550__func_80246020
#define func_802461CC func_802461CC__func_80246020

struct func_80246020_Struct_A { u8 pad[0x3C]; u16 unk3C; u8 pad2[2]; f32 unk40; f32 unk44; };
struct func_80246020_Struct_S { u8 pad[0x4]; f32 unk4; };
struct func_80246020_Struct_P { u8 pad[0x30]; struct func_80246020_Struct_S *unk30; };
struct func_80246020_Struct_B { u8 pad[0xC]; struct func_80246020_Struct_P *unkC; struct func_80246020_Struct_P *unk10; };
struct func_80246020_Struct_G { u8 pad[0x1E8]; f32 f[6]; };
extern u8 D_80258980[];
extern struct func_80246020_Struct_G D_801BBBF0;
extern f64 D_80258B50;
extern f64 D_80258B58;
extern f32 D_80258B60;
extern f32 D_80258B64;
extern f32 D_80258B68;
extern f32 D_80258B6C;
extern f32 D_80258B70;
extern f32 D_80258B74;
extern f32 D_80258B78;
extern u8 func_802461CC[];
extern s32 func_80010550();

void func_80246020(struct func_80246020_Struct_A *arg0, struct func_80246020_Struct_B *arg1) {
    u16 t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t >= 0xF) {
        if (t == 0xF) {
            func_80020718(0x1B9);
        }
        arg1->unkC->unk30->unk4 = arg1->unkC->unk30->unk4 - arg0->unk40;
        arg1->unk10->unk30->unk4 = -arg1->unkC->unk30->unk4;
        arg0->unk40 = (f64)arg0->unk40 * D_80258B50;
        if ((f64)arg0->unk40 < D_80258B58) {
            D_801BBBF0.f[0] = D_80258B60;
            D_801BBBF0.f[1] = D_80258B64;
            D_801BBBF0.f[2] = D_80258B68;
            D_801BBBF0.f[3] = D_80258B6C;
            D_801BBBF0.f[4] = D_80258B70;
            D_801BBBF0.f[5] = D_80258B74;
            func_8011AAF4(D_80258980, 0x35D, arg0, 0, 1, 0.0f, D_801BBBF0.f[0], D_801BBBF0.f[1], D_801BBBF0.f[2], 0.0f, D_801BBBF0.f[3], D_801BBBF0.f[4], D_801BBBF0.f[5], 0.0f, 35.0f, -1, -1);
            arg0->unk3C = 0;
            arg0->unk44 = D_80258B78;
            func_800058DC(arg0, func_802461CC);
        }
    }
}
#undef D_801BBBF0
#undef D_80258980
#undef D_80258B50
#undef D_80258B58
#undef D_80258B60
#undef D_80258B64
#undef D_80258B68
#undef D_80258B6C
#undef D_80258B70
#undef D_80258B74
#undef D_80258B78
#undef func_80010550
#undef func_802461CC
#define func_80246020 func_80246020__decl



#define D_80258B80 D_80258B80__func_802461CC
#define D_80258B88 D_80258B88__func_802461CC
#define func_801C4058 func_801C4058__func_802461CC
#define func_80246388 func_80246388__func_802461CC
#define func_802461CC func_802461CC__ctx

#undef func_802461CC

typedef struct func_802461CC_StructVec {
    f32 x, y, z;
} func_802461CC_StructVec;
typedef struct func_802461CC_StructObj {
    u8 pad[0x22];
    u8 flag;
    u8 pad23[9];
    func_802461CC_StructVec *p2C;
    func_802461CC_StructVec *p30;
} func_802461CC_StructObj;
typedef struct func_802461CC_StructGlobal {
    u8 pad[0x24];
    func_802461CC_StructObj *p24;
} func_802461CC_StructGlobal;
typedef struct func_802461CC_StructState {
    u8 pad[0x3C];
    u16 count;
    u8 pad3E[6];
    f32 velocity;
    u8 pad48[0x50];
    f32 height;
    u8 pad9C[4];
    f32 scale;
} func_802461CC_StructState;
extern void func_801C4058(void *, f32, f32, s32);
extern void func_80246388();
extern const f64 D_80258B80;
extern const f64 D_80258B88;

void func_802461CC(func_802461CC_StructState *arg0, func_802461CC_StructObj **arg1) {
    s32 count;
    f32 velocity;
    f64 displacement;
    func_802461CC_StructVec *p;
    func_802461CC_StructVec *q;

    count = arg0->count++;
    func_801C4058(arg0, 0.0f, 0.0f, 11);
    if (count >= 30) {
        if (count == 30) {
            func_80020718(442);
        }
        velocity = arg0->velocity;
        displacement = D_80258B80;
        arg0->height += velocity;
        p = ((func_802461CC_StructGlobal *)D_8025A2A4)->p24->p2C;
        p->z += velocity;
        arg0->velocity -= 0.5;
        arg1[0]->p30->z = arg0->height;
        arg1[1]->p30->z = arg0->height;
        arg1[2]->p30->z = arg0->height;
        arg1[5]->p30->z = (arg0->scale * D_80258B88) + (arg0->height + 9.5);
        arg1[6]->p30->z = arg0->height;
        arg1[7]->p30->z = arg0->height;
        q = arg1[6]->p30;
        q->y -= displacement;
        p = arg1[7]->p30;
        p->y += displacement;
        if (count >= 60) {
            arg1[0]->flag = 0;
            arg0->count = 0;
            func_80133980(115);
            func_800058DC(arg0, func_80246388);
        }
    }
}
#undef D_80258B80
#undef D_80258B88
#undef func_801C4058
#undef func_80246388












/* hh-block asm/nonmatchings/file015/80244C10/_ro_named_52d9d3c431c475fc.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_80246020.s","D_80258980"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_named_52d9d3c431c475fc.s")

#define func_802463EC func_802463EC__func_80246388
#define CTX_CAT2(a, b) a##b
#define CTX_CAT(a, b) CTX_CAT2(a, b)
void func_802463EC(s32 arg0, s32 arg1);


typedef struct func_80246388_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80246388_Struct;

void func_80246388(func_80246388_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 2) {
        if (func_80133A24(0x73) != 0) {
            func_800058DC(arg0, func_802463EC);
            func_80020718(7);
        }
    }
}
#undef CTX_CAT2
#undef CTX_CAT
#undef func_802463EC



/* hh-block asm/nonmatchings/file015/80244C10/_ro_func_802463EC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_802463EC.s","D_802589C0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_func_802463EC.s")


typedef struct func_802463EC_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_802463EC_StructB;
typedef struct func_802463EC_StructA {
    u8 pad[0x2C];
    func_802463EC_StructB *p;
} func_802463EC_StructA;

extern func_802463EC_StructA *D_801BBCD0;

void func_802463EC(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 40.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 40.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_802589C0, 0x3A7, (void *)arg0, 2, 1, 0.0f, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f30, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f34, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f38, 0.0f, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f3C, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f40, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800208C4(0x26);
        func_800208C4(0x31);
        func_800058DC((void *)arg0, (void *)func_802453F0);
    }
}


struct func_80246598_Arg0 {
    u8 pad[0x98];
    f32 unk98;
    u8 pad2[4];
    f32 unkA0;
};

struct func_80246598_Sub2 {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[6];
    s16 unk12;
    u8 pad2[8];
    f32 unk1C;
};

struct func_80246598_Sub1 {
    u8 pad[0x30];
    struct func_80246598_Sub2 *unk30;
};

struct func_80246598_Arg1 {
    u8 pad[0x14];
    struct func_80246598_Sub1 *unk14;
};

void func_80246598(void *arg0, s32 arg1)
{
  struct func_80246598_Arg0 *a0 = (struct func_80246598_Arg0 *) arg0;
  struct func_80246598_Sub2 *temp_v0;
  struct func_80246598_Arg0 *new_var;
  ((struct func_80246598_Arg1 *) arg1)->unk14->unk30->unk8 = (f32) ((((f64) a0->unkA0) * 25.5) + (((f64) a0->unk98) + 9.5));
  temp_v0 = ((struct func_80246598_Arg1 *) arg1)->unk14->unk30;
  temp_v0->unk12 = (s16) (((short) (temp_v0->unk12 + 0x16)) & 0x1FFF);
  new_var = a0;
  ((struct func_80246598_Arg1 *) arg1)->unk14->unk30->unk1C = (f32) (((f64) a0->unkA0) * 0.05);
  new_var->unkA0 = (f32) (((f64) a0->unkA0) + 0.006);
  if (((f64) new_var->unkA0) > 1.0)
  {
    a0->unkA0 = 1.0f;
  }
}

#define func_802466A4 func_802466A4__func_8024666C
void func_802466A4(void *arg0, void **arg1);


void func_8024666C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_802466A4);
}
#undef func_802466A4

#define func_80246760 func_80246760__func_802466A4

struct func_802466A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_802466A4_Obj {
    u8 pad[0x2C];
    struct func_802466A4_Sub *unk2C;
};

struct func_802466A4_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern struct func_802466A4_Vec D_8025294C;

extern void func_80246760();

void func_802466A4(void *arg0, void **arg1) {
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk4 = -278.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk8 = -125.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unkC = 385.700012f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk12 = 0x1000;
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    *(s16 *) ((u8 *) arg0 + 0x90) = 0;
    func_800058DC(arg0, func_80246760);
}
#undef func_80246760

#define func_802467FC func_802467FC__func_80246760
void func_802467FC(void *arg0, s32 arg1);

struct func_80246760_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};
struct func_80246760_Vec {
    s32 x;
    s32 y;
    s32 z;
};
extern struct func_80246760_Vec D_80252958;

void func_80246760(struct func_80246760_Obj *arg0, s32 arg1)
{
  u16 temp_v0;
  unsigned int new_var;
  s32 temp;
  s32 flag;
  temp = arg0->unk5C;
  if (func_80010550(arg1, temp) != 0)
  {
    temp_v0 = arg0->unk90;
    new_var = temp_v0;
    flag = ((s32) new_var) >= 2;
    arg0->unk90 = (u16) (new_var + 1);
    temp_v0 = 0x667;
    if (flag == 0)
    {
      func_8013A1B4(arg1, D_80252958, 0xFFFFFF);
      func_80020718(temp_v0);
      func_800058DC(arg0, &func_802467FC);
    }
  }
}
#undef func_802467FC

#define func_80246874 func_80246874__func_802467FC

/* Copied exactly from context.h: the in-file build strips #include, so these must appear before use. */
void func_80246874(void *arg0, s32 arg1);
extern struct func_802466A4_Vec D_80252964;

void func_802467FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = *(s32 *) ((u8 *) arg0 + 0x5C);
    if (func_80010550(arg1, temp) != 0) {
        func_8013A1B4((void **) arg1, D_80252964, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80246874);
    }
}
#undef func_80246874

#define func_80246920 func_80246920__func_80246874

struct func_80246874_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

extern void func_80246920();
extern struct func_802466A4_Vec D_8025297C;

void func_80246874(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((struct func_80246874_Obj *) arg0)->unk5C;
    if (func_80010550(arg1, temp) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            func_8013A1B4((void **) arg1, D_8025297C, 0xFFFFFF);
            func_800058DC(arg0, func_802469F8);
            return;
        }
        ((struct func_80246874_Obj *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80246920);
    }
}
#undef func_80246920

struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};
struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};
extern struct func_80246B38_StructA *D_801BBCD8;

extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);

struct func_80246920_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

void func_80246920(struct func_80246920_Struct *arg0, volatile s32 arg1)
{
  struct func_80246920_Struct *new_var;
  unsigned int new_var2;
  new_var2 = arg0->unk5C;
  if (func_80011140(arg1, new_var2, D_8025294C, 10) != 0)
  {
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    new_var = arg0;
    if (D_801BBCD8->unk2C->unk38 < 500.0f)
    {
      func_80020718(0x1B5);
    }
    new_var->unk90 = 0;
    func_800058DC(new_var, func_80246760);
  }
}

#define func_80010550 func_80010550__func_802469F8
#define func_80246A44 func_80246A44__func_802469F8

typedef struct func_802469F8_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_802469F8_Struct;
extern void func_80246A44();

void func_802469F8(func_802469F8_Struct *arg0, s32 arg1) {
    s32 val;

    val = arg0->unk5C;
    if (func_80010550(arg1, val, arg0) != 0) {
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80246A44);
    }
}
#undef func_80010550
#undef func_80246A44

#define func_80246B38 func_80246B38__func_80246A44
struct func_80246B38_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    s16 unk90;
};
void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1);

void func_80246A44(func_802469F8_Struct *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_v0;
    s32 condition;

    sp24 = arg0->unk5C;
    condition = arg0->unk90++ >= 0x1E;
    if (condition && (func_80011140(arg1, sp24, D_8025294C, 0x14) != 0)) {
        func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
        func_800058DC(arg0, func_80246B38);
    }
}
#undef func_80246B38

#define D_801BBCD8 D_801BBCD8__func_80246B38
#define func_80246B38_Struct func_80246B38_Struct__func_80246B38
#define func_80246B38_StructA func_80246B38_StructA__func_80246B38
#define func_80246B38_StructB func_80246B38_StructB__func_80246B38
#define func_80246C20 func_80246C20__func_80246B38
struct func_80246B38_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    s16 unk90;
};
struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};
struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};




extern struct func_80246B38_StructA *D_801BBCD8;
extern void func_80246C20();

void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            arg0->unk90 = 0;
            func_80011198(arg1, temp_a1);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246C20);
            return;
        }
        func_8013A1B4((void **)arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
    }
}
#undef D_801BBCD8
#undef func_80246B38_Struct
#undef func_80246B38_StructA
#undef func_80246B38_StructB
#undef func_80246C20

#define func_80246CDC func_80246CDC__func_80246C20
struct func_80246CDC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
};
void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1);

extern struct func_802466A4_Vec D_80252970;

struct func_80246C20_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};

void func_80246C20(struct func_80246C20_Struct *arg0, volatile s32 arg1) {
    s32 t = arg0->unk5C;

    func_80011140(arg1, t, D_80252970, 0xF);
    if (arg0->unk90++ >= 0x1E) {
        func_8013A1B4(arg1, D_8025297C, 0xFFFFFF);
        func_800058DC(arg0, func_80246CDC);
    }
}
#undef func_80246CDC

#define func_80246D34 func_80246D34__func_80246CDC

extern void func_80246D34();


void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        arg0->unk90 = 0;
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80246D34);
    }
}
#undef func_80246D34

#define func_80246E34 func_80246E34__func_80246D34

struct func_80246D34_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};

extern struct func_802466A4_Vec D_80252994;
extern void func_80246E34();

void func_80246D34(struct func_80246D34_Struct *arg0, s32 arg1) {
    s32 sp2C;

    sp2C = arg0->unk5C;
    if ((arg0->unk90++ >= 0x1E) && (func_80011140(arg1, sp2C, D_80252994, 0xF) != 0)) {
        func_8013A1B4(arg1, D_80252994, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_80246E34);
    }
}
#undef func_80246E34



typedef struct func_80246E34_Struct {
    u8 pad0[0x5C];
    s32 f5C;
    u8 pad60[0x30];
    u16 f90;
} func_80246E34_Struct;

void func_80246E34(func_80246E34_Struct *arg0, s32 arg1) {
    s32 a3 = arg0->f5C;

    if (arg0->f90++ >= 5) {
        if (func_80010550(arg1, a3) != 0) {
            func_80133980(0x73);
            func_80011198(arg1, a3);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246EB8);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246EB8.s")



/* hh-block asm/nonmatchings/file015/80244C10/_ro_func_80246F44.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/80244C10/func_80246F44.s","D_80258A00"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/_ro_func_80246F44.s")

#define func_802470E0 func_802470E0__func_80246F44

extern struct func_802466A4_Vec D_802529A0;

extern void func_802470E0();

void func_80246F44(struct func_80246D34_Struct *arg0, struct func_802466A4_Obj **arg1) {
    s32 sp54;
    struct func_802466A4_Sub *s;

    sp54 = arg0->unk5C;
    s = (*arg1)->unk2C;
    if (s->unk12 >= 0x71D) {
        s->unk12 = s->unk12 - 0xB6;
    }
    if (func_80011140((s32)arg1, sp54, D_802529A0, 0x1E) != 0) {
        D_801BBBF0.f1E8 = (-307.799988f);
        D_801BBBF0.f1EC = -87.5f;
        D_801BBBF0.f1F0 = 523.599976f;
        D_801BBBF0.f1F4 = (-274.5f);
        D_801BBBF0.f1F8 = (-111.900002f);
        D_801BBBF0.f1FC = 386.600006f;
        func_8011AAF4(D_80258A00, 0x4D0, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_8013A1B4(arg1, D_802529A0, 0xFFFFFF);
        func_800058DC(arg0, func_802470E0);
    }
}
#undef func_802470E0



struct func_802470E0_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
};

void func_802470E0(struct func_802470E0_Struct *arg0, s32 arg1) {
    s32 t = arg0->unk5C;

    D_80010550(arg1, t, arg0, arg1);
    if (arg0->unk90++ >= 0x28) {
        func_80005700(D_8025A2A0);
        func_80005700(D_8025A2A4);
        func_80133980(0x73);
    }
}

#define func_80247184 func_80247184__func_8024714C
void func_80247184(void *arg0, struct func_802466A4_Obj **arg1);


void func_8024714C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x2D, 0, 4, func_80247184);
}
#undef func_80247184

#define func_8024723C func_8024723C__func_80247184

struct func_80247184_Arg0 {
    u8 pad0[0x92];
    s16 unk92;
};

extern struct func_802466A4_Vec D_802529AC;
extern void func_8024723C(void *arg0, s32 arg1);

void func_80247184(void *arg0, struct func_802466A4_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -300.0f;
    (*arg1)->unk2C->unk8 = -114.0f;
    (*arg1)->unk2C->unkC = 378.0f;
    (*arg1)->unk2C->unk12 = 0;
    func_8013A1B4((void **)arg1, D_802529AC, 0xFFFFFF);
    ((struct func_80247184_Arg0 *)arg0)->unk92 = 0;
    func_800058DC(arg0, (void *)func_8024723C);
}
#undef func_8024723C

#define func_80247284 func_80247284__func_8024723C
void func_80247284(void *arg0, s32 arg1);


void func_8024723C(void *arg0, s32 arg1) {
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_80247284);
    }
}
#undef func_80247284

#define func_802472D4 func_802472D4__func_80247284

extern void func_802472D4();

void func_80247284(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550(arg1, temp_a1) != 0) {
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_802472D4);
    }
}
#undef func_802472D4

#define func_80247380 func_80247380__func_802472D4
struct func_80247380_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x5C - 0x3E];
    s32 unk5C;
    u8 pad2[0x92 - 0x60];
    u16 unk92;
};
extern struct func_802466A4_Vec D_802529B8;
void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1);


void func_802472D4(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    s32 value = arg0->unk5C;
    if (func_80011140(arg1, value, D_802529B8, 10) != 0) {
        func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        arg0->unk92 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80247380);
    }
}
#undef func_80247380

#define func_80247498 func_80247498__func_80247380


extern void func_80247498();

void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    s32 value = arg0->unk5C;

    if (func_80010550(arg1, value) != 0) {
        if (arg0->unk92++ >= 2) {
            func_800058DC(arg0, func_80247498);
        } else {
            arg0->unk3C = 0;
            func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        }
    }
    if ((arg0->unk3C++ == 0x13) && (D_801BBCD8->unk2C->unk38 < 500.0f)) {
        func_80020718(0x1B6);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_8024770C);
    }
}
#undef func_80247498

#define func_80247568 func_80247568__func_80247498
extern struct func_802466A4_Vec D_802529C4;
extern void func_80247568();
typedef struct { u8 pad[0x3C]; s16 h3C; u8 pad2[0x1C]; s32 f5C; } func_80247498_Struct;

void func_80247498(func_80247498_Struct *arg0, s32 arg1) {
    s32 t = arg0->f5C;
    if (func_80011140(arg1, t, D_802529C4, 0xA) != 0) {
        func_8013A1B4(arg1, D_802529C4, 0xFFFFFF);
        arg0->h3C = 0;
        func_800058DC(arg0, (void *)func_80247568);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024770C);
    }
}
#undef func_80247568

#define func_8024763C func_8024763C__func_80247568

extern void func_8024763C();
typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad2[0x1E]; s32 unk5C; } func_80247568_Struct;

void func_80247568(func_80247568_Struct *arg0, s32 arg1) {
    s32 sp1C;
    s32 t;

    sp1C = arg0->unk5C;
    if (D_801BBCD8->unk2C->unk38 < 500.0f) {
        t = arg0->h3C++;
        if (t == 0x2A || t == 0x36 || t == 0x48) {
            func_80020718(0x1B7);
        }
    }
    if (func_80010550(arg1, sp1C) != 0) {
        func_80011198(arg1, sp1C);
        func_800058DC(arg0, func_8024763C);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_8024770C);
    } else {
    }
}
#undef func_8024763C

typedef struct { u8 pad[0x5C]; s32 f5C; u8 pad2[0x32]; s16 h92; } func_8024763C_Struct;

void func_8024763C(func_8024763C_Struct *arg0, s32 arg1) {
    s32 t = arg0->f5C;
    if (func_80011140(arg1, t, D_802529B8, 0xA) != 0) {
        func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        arg0->h92 = 0;
        func_800058DC(arg0, (void *)func_80247380);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024770C);
    }
}

#define func_802477B0 func_802477B0__func_8024770C
struct func_802477B0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};
void func_802477B0(struct func_802477B0_Struct *arg0, s32 arg1, s32 arg2);

typedef struct func_8024770C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024770C_Struct;

extern struct func_802466A4_Vec D_802529D0;

void func_8024770C(func_8024770C_Struct *arg0, s32 arg1)
{
  struct func_802466A4_Vec *g = &D_802529D0;
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, *g, 0xA) != 0)
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_802477B0);
  }
}
#undef func_802477B0

#define func_80010550 func_80010550__func_802477B0


extern s32 func_80010550(s32, s32, s32);

void func_802477B0(struct func_802477B0_Struct *arg0, s32 arg1, s32 arg2)
{
  s32 temp;
  if (!arg0->unk5C)
  {
  }
  temp = arg0->unk5C;
  func_80010550(arg1, temp, arg2);
}
#undef func_80010550


/* C-owned readonly prefix; private load aliases retain IDO scheduling. */
static const f32 D_80258A5C__rodata[] = {0.006000000052154064f};
static const f32 D_80258A60__rodata[] = {395.0f};
static const f32 D_80258A64__rodata[] = {395.0f};
static const f32 D_80258A68__rodata[] = {0.05000000074505806f};
static const f64 D_80258A70__rodata[] = {0.05};
static const f32 D_80258A78__rodata[] = {-365.0f};
static const f32 D_80258A7C__rodata[] = {587.5f};
static const f32 D_80258A80__rodata[] = {-375.0f};
static const f32 D_80258A84__rodata[] = {597.5f};
static const f32 D_80258A88__rodata[] = {-355.0f};
static const f32 D_80258A8C__rodata[] = {597.5f};
static const f32 D_80258A90__rodata[] = {-203.89999389648438f};
static const f32 D_80258A94__rodata[] = {-88.19999694824219f};
static const f32 D_80258A98__rodata[] = {550.5999755859375f};
static const f32 D_80258A9C__rodata[] = {-381.6000061035156f};
static const f32 D_80258AA0__rodata[] = {-87.9000015258789f};
static const f32 D_80258AA4__rodata[] = {530.5999755859375f};
static const f32 D_80258AA8__rodata[] = {503.0f};
static const f32 D_80258AAC__rodata[] = {1.2999999523162842f};
static const f32 D_80258AB0__rodata[] = {-303.6000061035156f};
static const f32 D_80258AB4__rodata[] = {-88.19999694824219f};
static const f32 D_80258AB8__rodata[] = {516.5999755859375f};
static const f32 D_80258ABC__rodata[] = {-308.79998779296875f};
static const f32 D_80258AC0__rodata[] = {-102.19999694824219f};
static const f32 D_80258AC4__rodata[] = {415.1000061035156f};
static const f32 D_80258AC8__rodata[] = {-305.0f};
static const f32 D_80258ACC__rodata[] = {503.0f};
static const f32 D_80258AD0__rodata[] = {-289.0f};
static const f32 D_80258AD4__rodata[] = {-100.5999984741211f};
static const f32 D_80258AD8__rodata[] = {418.70001220703125f};
static const f32 D_80258ADC__rodata[] = {-115.30000305175781f};
static const f32 D_80258AE0__rodata[] = {385.70001220703125f};
static const f32 D_80258AE4__rodata[] = {1.840000033378601f};
static const f32 D_80258AE8__rodata[] = {-304.79998779296875f};
static const f32 D_80258AEC__rodata[] = {-96.19999694824219f};
static const f32 D_80258AF0__rodata[] = {410.3999938964844f};
static const f32 D_80258AF4__rodata[] = {2.5199999809265137f};
static const f32 D_80258AF8__rodata[] = {-299.70001220703125f};
static const f32 D_80258AFC__rodata[] = {-105.4000015258789f};
static const f32 D_80258B00__rodata[] = {377.70001220703125f};
static const f32 D_80258B04__rodata[] = {1.840000033378601f};
static const f32 D_80258B08__rodata[] = {2.5199999809265137f};
static const f32 D_80258B0C__rodata[] = {-294.79998779296875f};
static const f32 D_80258B10__rodata[] = {-88.19999694824219f};
static const f32 D_80258B14__rodata[] = {532.0999755859375f};
static const f32 D_80258B18__rodata[] = {-313.3999938964844f};
static const f32 D_80258B1C__rodata[] = {-102.19999694824219f};
static const f32 D_80258B20__rodata[] = {415.5f};
static const f32 D_80258B24__rodata[] = {-278.70001220703125f};
static const f32 D_80258B28__rodata[] = {-108.4000015258789f};
static const f32 D_80258B2C__rodata[] = {402.5f};
static const f32 D_80258B30__rodata[] = {-110.0999984741211f};
static const f32 D_80258B34__rodata[] = {385.70001220703125f};
static const f32 D_80258B38__rodata[] = {-114.19999694824219f};
static const f32 D_80258B3C__rodata[] = {399.79998779296875f};
static const f32 D_80258B40__rodata[] = {-314.1000061035156f};
static const f32 D_80258B44__rodata[] = {-121.80000305175781f};
static const f32 D_80258B48__rodata[] = {376.8999938964844f};
static const f32 D_80258B4C__rodata[] = {0.800000011920929f};
static const f64 D_80258B50__rodata[] = {0.8};
static const f64 D_80258B58__rodata[] = {0.01};
static const f32 D_80258B60__rodata[] = {-318.29998779296875f};
static const f32 D_80258B64__rodata[] = {-52.599998474121094f};
static const f32 D_80258B68__rodata[] = {430.20001220703125f};
static const f32 D_80258B6C__rodata[] = {-299.79998779296875f};
static const f32 D_80258B70__rodata[] = {-111.19999694824219f};
static const f32 D_80258B74__rodata[] = {379.70001220703125f};
static const f32 D_80258B78__rodata[] = {-0.20000000298023224f};
static const f64 D_80258B80__rodata[] = {0.2};
static const f64 D_80258B88__rodata[] = {25.5};
