#include "common.h"

#define func_80240918 func_80240918__func_802408F0

extern void func_800058DC(void *, void *);
extern void func_80240918(s32 arg0, s32 arg1);

void func_802408F0(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80240918);
}
#undef func_80240918


void func_80240918(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80240A6C func_80240A6C__func_80240924

struct func_80240924_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80240924_Sub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80240924_Obj {
    u8 pad0[0x30];
    struct func_80240924_Sub *unk30;
};

struct func_80240924_Self {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x52];
    s16 unk90;
    s16 unk92;
    u8 unk94;
    u8 pad2[0x8];
    u8 unk9D;
};

extern s32 func_80126CC0(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern struct func_80240924_Copy D_80164F40;
extern s32 D_80249708[];
extern void func_80126EAC(void);
extern void func_80240A6C();

void func_80240924(void *arg0, struct func_80240924_Obj **arg1) {
    struct func_80240924_Copy sp28;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp28 = D_80164F40;
        sp28.unk4 = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39D, 3);
        func_8012D918(arg0, 0x398, 0, 0, 0);
        (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x4100;
        (*arg1)->unk30->unk30 = (s32) D_80249708 | 0x40000000;
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        ((struct func_80240924_Self *) arg0)->unk3C = 0;
        ((struct func_80240924_Self *) arg0)->unk90 = 0xA;
        ((struct func_80240924_Self *) arg0)->unk92 = 0x1E;
        ((struct func_80240924_Self *) arg0)->unk9D = 0;
        ((struct func_80240924_Self *) arg0)->unk94 = 0;
        func_8001F74C(arg0);
        func_800058DC(arg0, func_80240A6C);
    }
}
#undef func_80240A6C

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/D_8024EBE0.s")

#define func_80241F1C func_80241F1C__func_80240A6C
#define func_80241FD0 func_80241FD0__func_80240A6C
extern s32 func_8012C6B4(s32);
void *func_80241F1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void *func_80241FD0(f32 arg0, f32 arg1, f32 arg2, u8 arg3);


typedef struct func_80240A6C_Self {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x52];
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 pad2[0x8];
    u8 unk9D;
} func_80240A6C_Self;

typedef struct func_80240A6C_Sub {
    u8 pad0[0x4D];
    u8 unk4D;
} func_80240A6C_Sub;

typedef struct func_80240A6C_Obj {
    u8 pad0[0x30];
    func_80240A6C_Sub *unk30;
} func_80240A6C_Obj;

typedef struct func_80240A6C_Pos {
    u8 pad0[0x4];
    f32 unk4;
} func_80240A6C_Pos;

typedef struct func_80240A6C_Actor {
    u8 pad0[0x2C];
    func_80240A6C_Pos *unk2C;
} func_80240A6C_Actor;

typedef struct func_80240A6C_Global {
    u8 pad0[0xE0];
    func_80240A6C_Actor *unkE0;
    u8 padE4[0x2A4 - 0xE4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xF36 - 0x2AC];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_80240A6C_Global;

typedef struct func_80240A6C_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_80240A6C_Vec;

typedef struct func_80240A6C_Step {
    u8 unk0;
    u8 unk1;
    u16 unk2;
} func_80240A6C_Step;

extern func_80240A6C_Global D_801BBBF0;
extern u8 D_802497A8[];
extern func_80240A6C_Step D_80249958[20];
#define B_80249958 D_80249958
extern u8 D_8024EB60[];

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern void func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_80150584(void);

void func_80240A6C(func_80240A6C_Self *arg0, func_80240A6C_Obj **arg1, s32 arg2, s32 arg3, s32 idx) {
    s32 sp8C;
    f32 x;
    func_80240A6C_Step *step;
    s32 sp80;

    if (arg2) {
    }
    if (arg3) {
    }
    sp8C = arg0->unk3C++;
    switch (arg0->unk94) {
    case 0:
        if (sp8C >= 0xF) {
            arg0->unk94 = 1;
            x = D_801BBBF0.unkE0->unk2C->unk4;
            if (x > 180.0f) {
                x = 180.0f;
            }
            if ((-295.0f)) {
            }
            func_8011AAF4(D_8024EB60, 0x196, arg0, 0, 1, 0.0f, 180.100006f, 370.0f, (-295.0f), 0.0f,
                          x, 280.0f, (-295.0f), 0.0f, 35.0f, -1, -1);
        }
        break;
    case 1:
        func_801C42DC(0x62, 0x32, 0, 0x32, 0xA, 0xA, 0x1E, 0x40, -0x1E, 0xFA, 0x64, 0x5A, -0x1E, -0x40, 0x1E, 0x51, 0x2A, 0xA, 0x60, 5.0f, 1800.0f, 6, 7.0f);
        if (func_80150584() == 0) {
            arg0->unk94 = 2;
        }
        break;
    case 2:
        x = D_801BBBF0.unkE0->unk2C->unk4;
        if (x < 180.0f) {
            if ((-295.0f)) {
            }
            func_801C3DC8(arg0, 180.1f, 370.0f, (-295.0f), x, 280.0f, (-295.0f), 0.200000003f, 35.0f);
        }
        if (func_80150584() != 0) {
            arg0->unk94 = 3;
        }
        break;
    case 3:
        func_801C42DC(D_801BBBF0.unkF36, D_801BBBF0.unkF37, D_801BBBF0.unkF38, D_801BBBF0.unkF39, D_801BBBF0.unkF3A, D_801BBBF0.unkF3B, D_801BBBF0.unkF3C, D_801BBBF0.unkF3D, D_801BBBF0.unkF3E, D_801BBBF0.unkF3F, D_801BBBF0.unkF40, D_801BBBF0.unkF41, D_801BBBF0.unkF42, D_801BBBF0.unkF43, D_801BBBF0.unkF44, D_801BBBF0.unkF45, D_801BBBF0.unkF46, D_801BBBF0.unkF47, D_801BBBF0.unkF48, D_801BBBF0.unk2A4, D_801BBBF0.unk2A8, 4, 6.0f);
        break;
    }
    (*arg1)->unk30->unk4D = sp8C * 0.5;
    if (arg0->unk90-- == 0) {
        arg0->unk90 = func_8012C6B4(0x19) + 5;
        sp80 = func_8012C6B4(2) % 2;
        func_80241F1C(func_8012C6B4(0xFA) - 0x55, 230.0f, sp80 * 0x5A - 0x154, 0.0f, func_8012C6B4(0x28) / 10.0 + 3.0, (func_8012C6B4(0xA) - 5) / 100.0);
    }
    if (arg0->unk92-- == 0) {
        idx = arg0->unk9D++;
        step = (func_80240A6C_Step *)((idx * 4) + (u8 *)D_80249958);
        if (step->unk2 == 0) {
            step = (func_80240A6C_Step *)(((idx = (arg0->unk9D = 0)) * 4) + (u8 *)B_80249958);
        }
        func_80241FD0(((func_80240A6C_Vec *)(D_802497A8 + step->unk0 * 12))->x, ((func_80240A6C_Vec *)(D_802497A8 + step->unk0 * 12))->y, ((func_80240A6C_Vec *)(D_802497A8 + step->unk0 * 12))->z, ((func_80240A6C_Vec *)(D_802497A8 + step->unk0 * 12))->z != *(f32 *)(D_802497A8 + 8));
        arg0->unk92 = step->unk2;
    }
}
#undef func_80241F1C
#undef func_80241FD0

#define func_80241164 func_80241164__func_8024101C

extern void func_80241164();

void func_8024101C(struct func_80240924_Self *arg0, struct func_80240924_Obj **arg1) {
    struct func_80240924_Copy sp28;

    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        sp28 = D_80164F40;
        sp28.unk4 = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39D, 3);
        func_8012D918(arg0, 0x398, 0, 0, 0);
        (*arg1)->unk30->unk24 |= 0x4100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_80249708 | 0x40000000);
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        arg0->unk3C = 0;
        arg0->unk90 = 0xA;
        arg0->unk92 = 0x1E;
        arg0->unk9D = 0;
        arg0->unk94 = 0;
        func_8001F74C(arg0);
        func_800058DC(arg0, &func_80241164);
    }
}
#undef func_80241164

#define func_80240A6C_Actor func_80240A6C_Actor__func_80241164
#define func_80240A6C_Global func_80240A6C_Global__func_80241164
#define func_80240A6C_Pos func_80240A6C_Pos__func_80241164
#define func_80240A6C_Step func_80240A6C_Step__func_80241164
#define func_80241F1C func_80241F1C__func_80241164
#define func_80241FD0 func_80241FD0__func_80241164
typedef struct func_80240A6C_Pos {
    u8 pad0[0x4];
    f32 unk4;
} func_80240A6C_Pos;
typedef struct func_80240A6C_Actor {
    u8 pad0[0x2C];
    func_80240A6C_Pos *unk2C;
} func_80240A6C_Actor;
typedef struct func_80240A6C_Global {
    u8 pad0[0xE0];
    func_80240A6C_Actor *unkE0;
    u8 padE4[0x2A4 - 0xE4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xF36 - 0x2AC];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_80240A6C_Global;
typedef struct func_80240A6C_Step {
    u8 unk0;
    u8 unk1;
    u16 unk2;
} func_80240A6C_Step;

void *func_80241F1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void *func_80241FD0(f32 arg0, f32 arg1, f32 arg2, u8 arg3);


typedef struct func_80241164_Self {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x52];
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 pad2[0x8];
    u8 unk9D;
} func_80241164_Self;

typedef struct func_80241164_Sub {
    u8 pad0[0x4D];
    u8 unk4D;
} func_80241164_Sub;

typedef struct func_80241164_Obj {
    u8 pad0[0x30];
    func_80241164_Sub *unk30;
} func_80241164_Obj;

typedef struct func_80241164_Pos {
    u8 pad0[0x4];
    f32 unk4;
} func_80241164_Pos;

typedef struct func_80241164_Actor {
    u8 pad0[0x2C];
    func_80241164_Pos *unk2C;
} func_80241164_Actor;

typedef struct func_80241164_Global {
    u8 pad0[0xE0];
    func_80241164_Actor *unkE0;
    u8 padE4[0x2A4 - 0xE4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xF36 - 0x2AC];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_80241164_Global;

typedef struct func_80241164_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_80241164_Vec;

typedef struct func_80241164_Step {
    u8 unk0;
    u8 unk1;
    u16 unk2;
} func_80241164_Step;

extern u8 D_80249880[];
extern func_80241164_Step D_8024996C[];
extern u8 D_8024EB98[];


void func_80241164(func_80241164_Self *arg0, func_80241164_Obj **arg1, s32 arg2, s32 arg3, s32 idx) {
    s32 sp8C;
    f32 x;
    func_80241164_Step *step;
    s32 sp80;

    if (arg2) {
    }
    if (arg3) {
    }
    sp8C = arg0->unk3C++;
    switch (arg0->unk94) {
    case 0:
        if (sp8C >= 0xF) {
            arg0->unk94 = 1;
            x = D_801BBBF0.unkE0->unk2C->unk4;
            if (x > 180.0f) {
                x = 180.0f;
            }
            if ((-295.0f)) {
            }
            func_8011AAF4(D_8024EB98, 0x22C, arg0, 0, 1, 0.0f, 180.100006f, 110.0f, (-295.0f), 0.0f,
                          x, 20.0f, (-295.0f), 0.0f, 35.0f, -1, -1);
        }
        break;
    case 1:
        func_801C42DC(0x62, 0x32, 0, 0x32, 0xA, 0xA, 0x1E, 0x40, -0x1E, 0xFA, 0x64, 0x5A, -0x1E, -0x40, 0x1E, 0x51, 0x2A, 0xA, 0x60, 5.0f, 1800.0f, 6, 7.0f);
        if (func_80150584() == 0) {
            arg0->unk94 = 2;
        }
        break;
    case 2:
        x = D_801BBBF0.unkE0->unk2C->unk4;
        if (x < 180.0f) {
            if ((-295.0f)) {
            }
            func_801C3DC8(arg0, 180.1f, 110.0f, (-295.0f), x, 20.0f, (-295.0f), 0.200000003f, 35.0f);
        }
        if (func_80150584() != 0) {
            arg0->unk94 = 3;
        }
        break;
    case 3:
        func_801C42DC(D_801BBBF0.unkF36, D_801BBBF0.unkF37, D_801BBBF0.unkF38, D_801BBBF0.unkF39, D_801BBBF0.unkF3A, D_801BBBF0.unkF3B, D_801BBBF0.unkF3C, D_801BBBF0.unkF3D, D_801BBBF0.unkF3E, D_801BBBF0.unkF3F, D_801BBBF0.unkF40, D_801BBBF0.unkF41, D_801BBBF0.unkF42, D_801BBBF0.unkF43, D_801BBBF0.unkF44, D_801BBBF0.unkF45, D_801BBBF0.unkF46, D_801BBBF0.unkF47, D_801BBBF0.unkF48, D_801BBBF0.unk2A4, D_801BBBF0.unk2A8, 4, 6.0f);
        break;
    }
    (*arg1)->unk30->unk4D = sp8C * 0.5;
    if (arg0->unk90-- == 0) {
        arg0->unk90 = func_8012C6B4(0x19) + 5;
        sp80 = func_8012C6B4(2) % 2;
        func_80241F1C(func_8012C6B4(0xFA) - 0x55, -30.0f, sp80 * 0x5A - 0x154, 0.0f, func_8012C6B4(0x28) / 10.0 + 3.0, (func_8012C6B4(0xA) - 5) / 100.0);
    }
    if (arg0->unk92-- == 0) {
        idx = arg0->unk9D++;
        step = (func_80241164_Step *)((idx * 4) + (u8 *)D_8024996C);
        if (((func_80241164_Step *)((idx * 4) + (u8 *)D_80249958))->unk2 == 0) {
            step = (func_80241164_Step *)(((idx = (arg0->unk9D = 0)) * 4) + (u8 *)D_8024996C);
        }
        func_80241FD0(((func_80241164_Vec *)(D_80249880 + step->unk0 * 12))->x, ((func_80241164_Vec *)(D_80249880 + step->unk0 * 12))->y, ((func_80241164_Vec *)(D_80249880 + step->unk0 * 12))->z, ((func_80241164_Vec *)(D_80249880 + step->unk0 * 12))->z != *(f32 *)(D_80249880 + 8));
        arg0->unk92 = step->unk2;
    }
}
#undef func_80240A6C_Actor
#undef func_80240A6C_Global
#undef func_80240A6C_Pos
#undef func_80240A6C_Step
#undef func_80241F1C
#undef func_80241FD0

#define func_8024174C func_8024174C__func_80241714

extern void func_8024174C();

void func_80241714(void *arg0, s16 arg1)
{
  func_8001F74C(arg0);
  *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
  if (!arg0)
  {
  }
  func_800058DC(arg0, (void *) func_8024174C);
}
#undef func_8024174C


struct func_8024174C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x44];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};
extern void func_80005700(void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);

void func_8024174C(struct func_8024174C_Struct *arg0, s32 arg1) {
    s32 sp74[1];
    s32 temp_v0;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;

    temp_v0 = arg0->unk3C;
    sp74[0] = temp_v0;
    arg0->unk3C = (u16) (temp_v0 + 1);
    if (!(sp74[0] % 2)) {
        sp5C = func_8012C6B4(0x32);
        sp60 = func_8012C6B4(0x32);
        sp64 = func_8012C6B4(0xC8);
        sp68 = func_8012C6B4(0x64);
        sp6C = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp5C - 0x19) / 10.0) + (f64) arg0->unk90), arg0->unk94, (f32) (((f64) (sp60 - 0x19) / 10.0) + (f64) arg0->unk98), (f32) ((f64) (sp64 - 0x64) / 100.0), (f32) (((f64) sp68 / 100.0) + 3.0), (f32) ((f64) (sp6C - 0x64) / 100.0), -0.5f, 0xFF, 0x82, 0, 0xFF, 0, 0, 0xFF, -8, (f32) (((f64) func_8012C6B4(0x32) / 1000.0) + 0.2), 0xD, 0);
        func_80129FB8(arg0->unk90, arg0->unk94 + 6.0f, arg0->unk98, arg0->unk40, arg0->unk44, arg0->unk48, (-0.699999988f), 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xA0, -4, 0.300000012f, 9, 0);
    }
    if (sp74[0] >= 8) {
        func_80005700(arg0);
    }
}

#define func_80241A00 func_80241A00__func_802419C8

extern void func_80241A00();

void func_802419C8(void *arg0, s16 arg1)
{
  func_8001F74C(arg0);
  *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
  if (!arg0)
  {
  }
  func_800058DC(arg0, (void *) func_80241A00);
}
#undef func_80241A00

#define func_80240A6C_Actor func_80240A6C_Actor__func_80241A00
#define func_80240A6C_Global func_80240A6C_Global__func_80241A00
#define func_80240A6C_Pos func_80240A6C_Pos__func_80241A00
typedef struct func_80240A6C_Pos {
    u8 pad0[0x4];
    f32 unk4;
} func_80240A6C_Pos;
typedef struct func_80240A6C_Actor {
    u8 pad0[0x2C];
    func_80240A6C_Pos *unk2C;
} func_80240A6C_Actor;
typedef struct func_80240A6C_Global {
    u8 pad0[0xE0];
    func_80240A6C_Actor *unkE0;
    u8 padE4[0x2A4 - 0xE4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xF36 - 0x2AC];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_80240A6C_Global;


typedef struct func_80241A00_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 unk9C;
} func_80241A00_Struct;

typedef struct func_80241A00_G {
    u8 pad0[0x1D];
    u8 unk1D;
} func_80241A00_G;
extern void func_80020718(s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern u16 D_80249988[];

void func_80241A00(func_80241A00_Struct *arg0, s32 arg1) {
    s32 i;
    s32 t;
    s32 b;

    t = arg0->unk3C++;
    if (func_80150584() != 0) {
        func_80005700(arg0);
        return;
    }
    if (t % 2 == 0) {
        func_80129FB8(arg0->unk90, arg0->unk94 - 5.0f, arg0->unk98, (func_8012C6B4(200) - 100) / 100.0, (func_8012C6B4(100) - 50) / 100.0, arg0->unk9C == 0 ? 1 : -1, 0.2f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x80, 0x8C, -4, func_8012C6B4(20) / 1000.0 + 0.3, 0xB, 0);
    }
    if (t >= 0x1E) {
        if (t == 0x1E) {
            if (arg0->unk9C == 0) {
                func_80020718(0x302);
            } else {
                func_80020718(0x301);
            }
            for (i = 0; i != 6; i++) {
                func_80129FB8(arg0->unk90, arg0->unk94 - 5.0f, arg0->unk98, (func_8012C6B4(400) - 200) / 100.0, (func_8012C6B4(400) - 200) / 100.0, arg0->unk9C == 0 ? 1.2 : -1.2, 0.0f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x80, 0xB4, -8, func_8012C6B4(40) / 1000.0 + 0.16, 0xC, 0);
            }
        }
        if (t % 2 == 0) {
            func_80129FB8(arg0->unk90, arg0->unk94, arg0->unk98, (func_8012C6B4(300) - 150) / 100.0, (func_8012C6B4(200) - 100) / 100.0, arg0->unk9C == 0 ? 7 : -7, 0.0f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x80, 0xC8, -8, func_8012C6B4(20) / 100.0 + 0.32, 0xB, 0);
        }
    }
    if (t >= 0x24 && t < 0x3D) {
        if (arg0->unk90 - 9.0 <= D_801BBBF0.unkE0->unk2C->unk4 && D_801BBBF0.unkE0->unk2C->unk4 <= arg0->unk90 + 9.0) {
            b = D_80249988[((func_80241A00_G *)&D_801BBBF0)->unk1D];
            func_8037BB4C(arg0->unk9C == 0 ? 0 : 0x1000, 0.3f, 0.8f, b);
        }
    }
    if (t >= 0x3C) {
        func_80005700(arg0);
    }
}
#undef func_80240A6C_Actor
#undef func_80240A6C_Global
#undef func_80240A6C_Pos

typedef struct func_80241FD0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241FD0_Struct;
void *func_8012C4D0(s32, func_80241FD0_Struct, s32); /* extern */
extern s32 D_801BBC2C;

extern func_80241FD0_Struct D_802496DC;

void *func_80241F1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    void *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802496DC, 3);
    if (temp_v0 != NULL) {
        ((f32 *)temp_v0)[0x90 / 4] = arg0;
        ((f32 *)temp_v0)[0x94 / 4] = arg1;
        ((f32 *)temp_v0)[0x98 / 4] = arg2;
        ((f32 *)temp_v0)[0x40 / 4] = arg3;
        ((f32 *)temp_v0)[0x44 / 4] = arg4;
        ((f32 *)temp_v0)[0x48 / 4] = arg5;
        return temp_v0;
    }
    return NULL;
}



extern func_80241FD0_Struct D_802496F0;

void *func_80241FD0(f32 arg0, f32 arg1, f32 arg2, u8 arg3) {
    void *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802496F0, 3);
    if (temp_v0 != NULL) {
        ((f32 *)temp_v0)[0x90 / 4] = arg0;
        ((f32 *)temp_v0)[0x94 / 4] = arg1;
        ((f32 *)temp_v0)[0x98 / 4] = arg2;
        ((u8 *)temp_v0)[0x9C] = arg3;
        return temp_v0;
    }
    return NULL;
}

