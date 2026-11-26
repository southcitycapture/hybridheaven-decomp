#include "common.h"

extern s32 D_801BBCCC;
extern s32 D_8023C2BC[];
extern s32 func_80010550(s32, s32);
extern s32 func_8001EF38(f32, f32);
extern s32 func_80129554();
extern s32 func_8012C6B4(s32);
extern s32 func_801DB6B8(s32, s32, s32);
extern s32 func_801DFE00();
extern s32 func_8021DEA8();
extern s32 func_802233B0();
extern s32 func_8022397C();
extern s32 func_802242D0();
extern s32 func_80224AC4(s32, s32);
extern s32 func_80224F5C();
extern s32 func_8022560C();
extern s32 func_803628B8();
extern s32 func_803667C4();
extern s32 func_80366B30();
extern s32 func_8037FFF0();
extern u16 D_801BBC1C;
extern u16 func_80011590(s32);
extern u8 D_801BCC21;
extern u8 D_8022560C(void *);
extern u8 func_80127014[];
extern u8 func_80386420[];
extern void func_80005700();
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80011198(s32 arg0, void *arg1);
extern void func_80011258();
extern void func_800112B0(s32, void *, void *, s32);
extern void func_800113D0();
extern void func_8013A28C();
extern void func_8013B808();
extern void func_8013C6FC(s32, s32, s32);
extern void func_8013C7F8(s32, s32, s32);
extern void func_8021DFA8();
extern void func_8021E52C(s32 arg0, s32 arg1);
extern void func_8021E59C();
extern void func_8021EB88(s32, s32);
extern void func_8021ECD4(void *, s32);
extern void func_8021F184(void *, s32, s16, f32);
extern void func_8021F7AC(s32, s32);
extern void func_8021FE14(s32, s32);
extern void func_8021FF78(s32, s32);
extern void func_8022038C(s32, s32, s16);
extern void func_80220FC0();
extern void func_802219F8();
extern void func_80221E9C();
extern void func_80222210(s32 arg0, s32 arg1);
extern void func_80222370(s32 arg0, s32 arg1);
extern void func_80222708();
extern void func_802227A4();
extern void func_80222B08();
extern void func_80222C30();
extern void func_80222E84();
extern void func_8022310C(s32 arg0, s32 arg1);
extern void func_8022321C(s32 arg0, s32 arg1);
extern void func_80223260();
extern void func_802233A4(s32 arg0, s32 arg1);
extern void func_802234F8(s32 arg0, s32 arg1);
extern void func_8022359C();
extern void func_802237B0(s32, s32);
extern void func_802237EC();
extern void func_80224BEC(s32, s32);
extern void func_80224E00(s32, s16);
extern void func_8022518C();
extern void func_80225664();
extern void func_80226710(s32, u16, f32, u8);
extern void func_802408F0();
extern void func_80359560(s32);
extern void func_8035C048();
extern void func_8035C98C(s32, s32);
extern void func_80362EC8(s32, s32);
extern void func_80366278();
extern void func_803697AC(s32, s32, s32);
extern void func_8036DD08(s32, s32);
extern void func_8036E960(s32, s32);
extern void func_80371930();

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/D_8023E950.s")

#define D_80089474 D_80089474__func_8021D8D0
#define D_801BBBF0 D_801BBBF0__func_8021D8D0
#define D_801BBC8C D_801BBC8C__func_8021D8D0
#define D_801BBCAC D_801BBCAC__func_8021D8D0
#define D_801BC03C D_801BC03C__func_8021D8D0
#define D_801BC3D8 D_801BC3D8__func_8021D8D0
#define D_80226710 D_80226710__func_8021D8D0
#define func_8013AE20 func_8013AE20__func_8021D8D0
#define func_801C4A5C func_801C4A5C__func_8021D8D0
#define func_8021DC6C func_8021DC6C__func_8021D8D0
#define func_8021E414 func_8021E414__func_8021D8D0
#define func_8021E59C_Struct3C func_8021E59C_Struct3C__func_8021D8D0
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021D8D0
#define func_80220F60_Struct func_80220F60_Struct__func_8021D8D0
#define func_80225410 func_80225410__func_8021D8D0
#define func_80226780 func_80226780__func_8021D8D0
#define func_803704DC func_803704DC__func_8021D8D0
#define func_80374254 func_80374254__func_8021D8D0
#define func_8037573C func_8037573C__func_8021D8D0
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void D_80226710(s32, u16, f32);
void func_8021E414(s32 arg0, s32 arg1);
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;


typedef struct func_8021D8D0_StructActor {
    u8 pad0[0x2C];
    s32 flags;
    u8 pad30[6];
    u16 id;
    u8 pad38[0x54-0x38];
    s32 state;
    u8 pad58[4];
    func_8021E59C_Struct3C *data;
    u8 pad60[8];
    void *table;
} func_8021D8D0_StructActor;
typedef struct func_8021D8D0_StructDev {
    u8 pad0[4]; u16 id;
    u8 pad6[0x2C-6]; u16 mode;
    u8 pad2E[0xDC-0x2E];
    func_8021D8D0_StructActor *actor;
    u8 padE0[0xEC-0xE0];
    func_8021D8D0_StructActor *other;
    u8 padF0[0x444-0xF0];
    void *data; void *otherData;
    u8 pad44C[0x1031-0x44C];
    u8 phase; u8 pad1032[2]; u8 selected;
} func_8021D8D0_StructDev;
typedef struct func_8021D8D0_StructArg {
    u8 *data;
} func_8021D8D0_StructArg;
typedef struct func_8021D8D0_StructFlags {
    u8 pad[0x30];
    u8 top : 3;
    u8 mode : 4;
    u8 bottom : 1;
    u8 pad31[2];
    u8 flag33 : 1;
    u8 rest33 : 7;
} func_8021D8D0_StructFlags;
enum func_8021D8D0_EnumFlag { func_8021D8D0_Zero = 0, func_8021D8D0_One = 1, func_8021D8D0_High = 0x80000000U };
typedef struct func_8021D8D0_StructWordFlags {
    u8 pad[0x30];
    u32 unused : 24;
    u16 flag33 : 1;
    u32 rest33 : 7;
} func_8021D8D0_StructWordFlags;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern u8 D_80089474[];
extern void func_80374254(void);
extern void func_801C4A5C(void *, s32);
extern void func_80225410(void *);
extern void func_8013AE20(void *, void *, s32);
extern void func_80226780(void *);
extern void func_803704DC(void *);
extern void func_8037573C(void *, void *);
extern void func_8021DC6C(s32, s32);
#define G ((func_8021D8D0_StructDev *)&D_801BBBF0)
#define B(o) (*(u8 *)(p+(o)))
#define H(o) (*(u16 *)(p+(o)))
void func_8021D8D0(func_8021D8D0_StructActor *arg0, func_8021D8D0_StructArg *arg1)
{
    func_8021E59C_Struct3C *data;
    u8 *p;
    data = arg0->data;
    if (arg0 == G->actor) p = (u8 *)&D_801BC03C;
    else p = (u8 *)&D_801BC3D8;
    arg1->data[0x22] = 1;
    do {} while (0);
    switch ((u32)data->unk74) {
      case 0:
      case 2:
        G->actor = arg0;
        G->data = data;
        arg0->table = D_801BBC8C;
        break;
      case 1:
      case 3:
        G->other = arg0;
        G->otherData = data;
        arg0->table = D_801BBCAC;
        break;
      default:
        goto common_default;
      case 4:
      common_default:
        G->other = arg0;
        G->otherData = data;
        arg0->table = D_80089474;
        break;
    }
    arg0->flags |= 0x60;
    arg0->flags &= ~0x80;
    if (G->phase >= 3) {
        if (data->unk74 == 0) {
            func_80374254();
            arg0->state = 0x1F;
            func_801C4A5C(arg0, 0);
            func_80225410(arg0);
        } else {
            arg0->state = 0x1E1;
            if (data->unk74 == 1) func_80225410(arg0);
        }
        func_8013AE20(arg0, arg1, 0);
        H(0x32E) = 0;
        B(0x30) &= ~0x60;
        B(0x30) &= 0xFE;
        B(0x31) &= ~0x80;
        B(0x31) &= 0xE7;
        B(0x31) &= 0xF8;
        B(0x32) &= ~0x10;
        B(0x32) &= 0xF3;
        B(0x32) &= 0xFC;
        B(0x33) &= ~0x18;
        B(0x33) &= 0xBF;
        B(0x33) &= 0xDF;
        B(0x38) &= ~0x80;
        B(0x38) &= 0x9F;
        B(0x38) &= 0xEF;
        B(0x38) &= 0xF3;
        H(0x38) &= ~0x380;
        H(0x330) = 0;
        H(0x312) = 0;
        B(0x328) = 0;
        B(0x329) = 0;
        B(0x2FA) = 0;
        B(0x374) = 0;
        B(0x390) = 0;
        *(f32 *)(p+0x2EC) = 1.0;
        data->unk9C = 0;
        B(0x393) = 0;
        B(0x396) = 0;
        H(0xA0) = 0;
        if (G->mode != 10 && data->unk74 == 3) {
            if (arg0->id == 0x11B) {
                D_80226710((s32)arg0, 0x506, 1.0);
                func_80226780(arg0);
            } else if (arg0->id == 0x148) {
                func_803704DC(arg0);
            }
        }
        func_8037573C(arg0, arg1);
        if (G->id == 0x8D) G->selected = 2;
        func_80011198((s32)arg1, data);
        if ((G->selected == 1 && arg0 == G->actor) ||
            (G->selected == 2 && arg0 == G->other)) {
            B(0x30) = (B(0x30) & ~0x1E) | 6;
            ((func_8021D8D0_StructWordFlags *)p)->flag33 = -1;
            G->selected = 0;
            func_800058DC((s32)arg0, func_8021DC6C);
        } else {
            H(0x312) = 0;
            B(0x30) &= ~0x1E;
            B(0x33) &= ~0x80;
            func_800058DC((s32)arg0, func_8021E414);
        }
    }
}
#undef G
#undef B
#undef H
#undef D_80089474
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef D_80226710
#undef func_8013AE20
#undef func_801C4A5C
#undef func_8021DC6C
#undef func_8021E414
#undef func_8021E59C_Struct3C
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80225410
#undef func_80226780
#undef func_803704DC
#undef func_80374254
#undef func_8037573C

#define func_8021DFA8 func_8021DFA8__func_8021DC6C
#define func_8022310C func_8022310C__func_8021DC6C
#define func_802233B0 func_802233B0__func_8021DC6C

struct func_8021DC6C_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x28];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u8 b0;
            u8 x1 : 1;
            u8 c : 2;
            u8 r1 : 5;
            u8 d : 3;
            u8 r2 : 5;
        } g;
    } unk30;
    u8 pad34[0x38 - 0x34];
    union {
        u8 v;
        struct {
            u8 top : 1;
            u8 r : 7;
        } g;
    } unk38;
    u8 pad39[0x312 - 0x39];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};
struct func_8021DC6C_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x68 - 0x60];
    struct func_8021DC6C_Dummy *unk68;
};
struct func_8021DC6C_Dummy {
    u8 pad0[4];
    u16 unk4;
};
struct func_8021DC6C_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_8021DC6C_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
};
#define DEV_8021DC6C (*(struct func_8021DC6C_Dev *)&D_801BBBF0)
extern s32 D_802256E4(struct func_8021DC6C_Vec *, s32, s32);
extern s32 D_80011140(s32, s32, struct func_8021DC6C_Vec, s32);
struct func_8021F9C8_Struct;
struct func_80220F60_Struct;
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern struct func_80220F60_Struct D_801BBBF0;
extern void func_8021DFA8();
void func_8022310C(s32 arg0, s32 arg1);
s32 func_802233B0(s32 arg0, s32 arg1);

void func_8021DC6C(s32 arg0, s32 arg1) {
    struct func_8021DC6C_Dummy *d;
    s32 sp40;
    struct func_8021DC6C_Struct *p;
    struct func_8021DC6C_Struct *q;
    struct func_8021DC6C_Vec sp;
    d = ((struct func_8021DC6C_Actor *)arg0)->unk68;
    sp40 = ((struct func_8021DC6C_Actor *)arg0)->unk5C;
    if (DEV_8021DC6C.unkDC == arg0) {
        p = (struct func_8021DC6C_Struct *)&D_801BC03C;
    } else {
        p = (struct func_8021DC6C_Struct *)&D_801BC3D8;
    }
    if (DEV_8021DC6C.unkDC != arg0) {
        q = (struct func_8021DC6C_Struct *)&D_801BC03C;
    } else {
        q = (struct func_8021DC6C_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (DEV_8021DC6C.unk1031 >= 0xA && DEV_8021DC6C.unk1031 != 0xF) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (DEV_8021DC6C.unk1031 != 0xF) {
        D_802256E4(&sp, arg0, 0x21);
        *(u16 *)((u8 *)&sp + 6) |= 0x100;
        if (sp.unk0 == 0x03480010) {
            *(f32 *)&sp.unk8 = 4.0f;
        }
        if (sp.unk0 == 0x0410002B) {
            *(f32 *)&sp.unk8 = 5.0f;
        }
        p->unk30.g.d = 0;
        p->unk30.g.c = 0;
        p->unk38.g.top = 0;
        p->unk38.v &= 0xEF;
        p->unk38.v &= 0x9F;
        if (p->unk2 <= 0 || p->unk30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if ((p->unk30.h & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if ((d->unk4 & 0x8000) && !(q->unk30.b[0] & 1) && p->unk6 >= 0x1F && q->unk2 != 0) {
            func_802237EC(arg0);
            return;
        }
        if (D_80011140(arg1, sp40, sp, 3) != 0) {
            p->unk312 = 0x5A;
            func_800058DC(arg0, func_8021DFA8);
        }
    }
}
#undef func_8021DFA8
#undef func_8022310C
#undef func_802233B0

struct func_8021DEA8_Actor {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x20 - 0x10];
    u16 unk20;
    u8 pad22[0x5C - 0x22];
    struct func_8021DEA8_Actor *unk5C;
};
struct func_8021DEA8_Dev {
    u8 pad0[0xDC];
    struct func_8021DEA8_Actor *unkDC;
    u8 padE0[0xEC - 0xE0];
    struct func_8021DEA8_Actor *unkEC;
    u8 padF0[0xB90 - 0xF0];
    f32 unkB90;
};
#define D ((struct func_8021DEA8_Dev *)&D_801BBBF0)
s32 func_8021DEA8(struct func_8021DEA8_Actor *arg0)
{
  struct func_8021DEA8_Actor *v1;
  struct func_8021DEA8_Actor *a;
  s32 r;
  if (arg0 != ((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkDC)
  {
    v1 = ((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkDC;
  }
  else
  {
    v1 = ((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkEC;
  }
  a = v1->unk5C;
  r = (((((((((func_8022560C(a, (struct func_8021DEA8_Dev *) (&D_801BBBF0)) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF;
  if ((((((((((((((((r == 1) && (a->unkE != 0x148)) || (r == 0x15)) || (r == 0x16)) || (r == 0x17)) || (r == 0x18)) || (r == 0x19)) || (r == 0x1A)) || ((r == 0x1B) ^ 0)) || (r == 0x1C)) || (r == 0x1D)) || (r == 0x1E)) || (r == 0x20)) || (r == 0x1F)) && (a->unk20 >= 4)) && (((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkB90 < 50.0f))
  {
    return 1;
  }
  return 0;
}

#define func_8021DEA8 func_8021DEA8__func_8021DFA8
#define func_8021E59C func_8021E59C__func_8021DFA8

#ifdef DEV
typedef struct func_8021E52C_Struct func_8021DFA8_S3;
#else
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8021DFA8_S3;
#endif
extern void func_8021E59C();

struct func_8021DFA8_Sub {
    u8 pad0[0x1C];
    union {
        func_8021DFA8_S3 s;
        struct {
            s32 unk1C;
            s32 unk20;
            f32 unk24;
        } f;
    } u;
};
struct func_8021DFA8_P68 {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8021DFA8_Actor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    struct func_8021DFA8_Sub *unk5C;
    u8 pad60[0x68 - 0x60];
    struct func_8021DFA8_P68 *unk68;
};
struct func_8021DFA8_Player {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x30 - 8];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u16 pad : 13;
            u16 st : 3;
        } g;
    } unk30;
    u8 pad34[0x312 - 0x34];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};
struct func_8021DFA8_Pair {
    union {
        u16 h[4];
        u16 h2[2][2];
        s32 w[2];
    } u;
};
extern struct func_8021DFA8_Pair D_8023C290;
extern s32 func_8021DEA8();

#define ACT ((struct func_8021DFA8_Actor *)arg0)

void func_8021DFA8(s32 arg0, s32 arg1) {
    struct func_8021DFA8_Sub *sp44 = ACT->unk5C;
    struct func_8021DFA8_Player *v1;
    struct func_8021DFA8_Player *a0;
    struct func_8021DFA8_P68 *t0;
    f32 sp34;
    f32 sp30;
    s32 w;
    u8 sp2B;
    struct func_8021DFA8_Pair sp20;
    u8 a3;

    if (ACT == (struct func_8021DFA8_Actor *)D_801BBCCC) {
        v1 = (struct func_8021DFA8_Player *)&D_801BC03C;
    } else {
        v1 = (struct func_8021DFA8_Player *)&D_801BC3D8;
    }
    a0 = (struct func_8021DFA8_Player *)((D_801BBCCC != arg0) ? &D_801BC03C : &D_801BC3D8);
    t0 = ACT->unk68;
    sp2B = 0;
    v1->unk392 = 0;
    v1->unk30.b[2] &= ~0xE0;
    if (D_801BCC21 != 5) {
        return;
    }
    if (v1->unk30.f.a != 0) {
        return;
    }
    {
        if (v1->unk2 <= 0 || v1->unk30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if (v1->unk30.g.st == 5U) {
            func_8022397C(arg0);
            return;
        }
        if ((t0->unk4 & 0x8000) && !(a0->unk30.b[0] & 1) && v1->unk6 >= 0x1F && a0->unk2 != 0) {
            func_802237EC(arg0);
            return;
        }
        if (sp44->u.f.unk1C == 0x03480010 && sp44->u.f.unk24 != 4.0) {
            sp44->u.f.unk24 = 4.0f;
            func_8013A28C(arg1, sp44->u.s);
        } else if (sp44->u.f.unk1C == 0x0410002B && sp44->u.f.unk24 != 5.0) {
            sp44->u.f.unk24 = 5.0f;
            func_8013A28C(arg1, sp44->u.s);
        }
        func_80010550(arg1, (s32)sp44);
        sp34 = -t0->unk6 / 20.0;
        sp30 = t0->unk8 / 20.0;
        if (func_802242D0(arg0) != 0 || func_8021DEA8((struct func_8021DEA8_Actor *)arg0) != 0) {
            if (ACT->unk36 == 0x29 || ACT->unk36 == 0x2B || ACT->unk36 == 0x2C || ACT->unk36 == 0x11B || ACT->unk36 == 0x11C) {
                sp20 = D_8023C290;
                a3 = 0;
                if (func_801DFE00(arg0) != 0) {
                    w = 1;
                } else {
                    w = 0;
                }
                if (ACT->unk36 == 0x11B || ACT->unk36 == 0x11C) {
                    a3 = 1;
                }
                func_80226710(arg0, sp20.u.h2[a3][w], 1.0f, a3);
            } else {
                func_8013B808(arg0, arg1, 1);
            }
            func_80371930(arg0, arg1, 1);
            sp2B = 1;
        }
        if (((v1->unk30.w << 3) >> 28) != 3 && D_801BBCCC == arg0 && sp34 * sp34 + sp30 * sp30 > 1.0) {
            sp2B = 1;
        }
        v1->unk312 = v1->unk312 - 1;
        if (v1->unk312 <= 0) {
            sp2B = 1;
        }
        if (sp2B != 0) {
            v1->unk312 = 0;
            v1->unk30.b[0] &= ~0x1E;
            v1->unk30.b[3] &= ~0x80;
            func_800058DC(arg0, (void *)func_8021E59C);
        }
    }
}
#undef func_8021DEA8
#undef func_8021E59C

#define func_8021E52C func_8021E52C__func_8021E414
#define func_8021E59C func_8021E59C__func_8021E414
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);
extern void func_8021E59C();
void func_8021E52C(s32 arg0, s32 arg1);
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};

struct func_8021E414_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

void func_8021E414(s32 arg0, s32 arg1) {
    s32 sp3C;
    struct func_80221720_Struct *sp38;
    u16 sp36;
    struct func_8021E52C_Struct sp28;

    sp3C = ((struct func_8021E414_Actor *) arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        sp38 = (struct func_80221720_Struct *) &D_801BC03C;
    } else {
        sp38 = (struct func_80221720_Struct *) &D_801BC3D8;
    }
    sp36 = func_80224AC4(arg0, 0);
    if (sp38->u30.b.f == 0) {
        sp38->u30.b.f = sp38->unk2F9 + 2;
    }
    sp38->unk392 = 0;
    func_802256E4(&sp28, arg0, 0);
    if (func_80011140(arg1, sp3C, sp28, 0xA) != 0) {
        if (sp36 == 0) {
            func_800058DC(arg0, (void *) func_8021E59C);
            return;
        }
        func_800058DC(arg0, (void *) func_8021E52C);
    }
}
#undef func_8021E52C
#undef func_8021E59C

#define func_8013A28C func_8013A28C__func_8021E52C
#define func_8021E59C func_8021E59C__func_8021E52C


extern void func_8013A28C(s32 arg0, struct func_8021E52C_Struct arg1);
extern void func_8021E59C();

void func_8021E52C(s32 arg0, s32 arg1) {
    struct func_8021E52C_Struct sp1C;

    if (func_80224F5C() == 0) {
        func_802256E4(&sp1C, arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_800058DC(arg0, func_8021E59C);
    }
}
#undef func_8013A28C
#undef func_8021E59C

#define func_8021DFA8 func_8021DFA8__func_8021E59C
#define func_8021EB88 func_8021EB88__func_8021E59C
#define func_8021FE14 func_8021FE14__func_8021E59C
#define func_8022310C func_8022310C__func_8021E59C
#define func_802233B0 func_802233B0__func_8021E59C

typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;

typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;

typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;

typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x6 - 0x4];
    s16 unk6;
    u8 pad8[0xA - 0x8];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 pad13 : 19;
        } f;
        struct {
            u16 pad0 : 13;
            u16 e : 3;
            u8 b2;
            u8 top : 1;
            u8 pad1 : 7;
        } g;
    } unk30;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 pad391[0x3A8 - 0x391];
    f32 unk3A8;
} func_8021E59C_Player;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8021E59C_Dev;

extern s32 func_802233B0();
void func_8022310C(s32 arg0, s32 arg1);
extern void func_8021DFA8();
extern void func_8021FE14(s32, s32);
extern void func_8021EB88(s32, s32);

#define A ((func_8021E59C_Actor *)arg0)
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)

void func_8021E59C(s32 arg0, s32 arg1) {
    func_8021E59C_Struct3C *sp3C;
    func_8021E59C_Struct68 *t0;
    func_8021E59C_Player *a2;
    func_8021E59C_Player *a1;
    f32 x;
    f32 z;
    u32 ret;
    u8 pad[4];
    u8 ok;
    u16 flags;

    sp3C = ((func_8021E59C_Actor *)arg0)->unk5C;
    t0 = ((func_8021E59C_Actor *)arg0)->unk68;
    if (arg0 == DEV->unkDC) {
        a2 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        a2 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (arg0 == DEV->unkDC) {
        a1 = (func_8021E59C_Player *)&D_801BC3D8;
    } else {
        a1 = (func_8021E59C_Player *)&D_801BC03C;
    }
    if (a2->unk2 <= 0 || a2->unk30.f.b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DEV->unk1031 >= 10 && DEV->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (DEV->unk1031 != 5 || a2->unk30.f.a != 0) {
        return;
    }
    x = -t0->unk6 / 20.0;
    z = t0->unk8 / 20.0;
    func_8022518C(arg0, a1, a2);
    if (sp3C->unkE == 0x11D) {
        if (t0->unk2 & 0x2000) {
            a2->unk390 = 2;
        } else {
            a2->unk390 = 0;
            a2->unk30.b[3] &= 0xFFE7;
        }
    } else if (sp3C->unkE == 0x148) {
        if (t0->unk2 & 0x2000) {
            if (a2->unk390 == 0) {
                a2->unk390 = 4;
            }
        } else if (a2->unk390 == 4) {
            a2->unk390 = 0;
            a2->unk30.b[3] &= 0xFFE7;
        }
    }
    if ((t0->unk4 & 4) && D_801BBC1C == 10) {
        if (A->unk36 == 0x148 || A->unk36 == 0xF9 || A->unk36 == 0xFC) {
            if (a2->unk6 >= 0x46 && a2->unkA >= 0x14) {
                a2->unk390 = 1;
                a2->unk44 += 0x46;
                a2->unk42 += 0x14;
                goto done;
            }
        }
        if (A->unk36 == 0xFD || A->unk36 == 0xF1) {
            if (sp3C->unk9C == 0 || sp3C->unk9C == 3) {
                if (a2->unk6 >= 100 && a2->unkA >= 100) {
                    sp3C->unk9C = 1;
                    a2->unk44 += 100;
                    a2->unk42 += 100;
                }
            } else {
                sp3C->unk9C = 3;
            }
        }
    }
done:
    ret =func_8022560C(sp3C, a1, a2);
    if (a2->unk30.g.e == 5) {
        func_8022397C(arg0, a1, a2);
        return;
    }
    if (a2->unk30.g.top == 1) {
        a2->unk328 = 0;
        func_800058DC(arg0, func_8021DFA8);
        return;
    }
    flags = t0->unk4;
    if ((flags & 0x8000) &&!(a1->unk30.b[0] & 1) && a2->unk6 >= 0x1F && ret != 6 && ret != 5 &&
        ret != 4 && ret != 9 && ret != 8 && ret != 7 && a1->unk2 != 0) {
        func_802237EC(arg0, a1, a2);
        return;
    }
    if ((flags & 0x10) &&!(a1->unk30.b[0] & 1)) {
        if (func_802242D0(arg0, a1, a2) != 0) {
            a2->unk328 = 0;
            if (a1->unk30.f.d != 0) {
                if (((func_8021E59C_Player *)&D_801BC3D8)->unk3A8 <= 20.0) {
                    ok = 1;
                    if (sp3C->unk74 == 3 || sp3C->unk74 == 2) {
                        if (func_8012C6B4(10) >= 7) {
                            ok = 0;
                        }
                    }
                    if (ok) {
                        func_8036DD08(arg0, arg1);
                    }
                }
            } else {
                func_8035C98C(arg0, arg1);
                return;
            }
        }
    }
    if (sp3C->unk74 == 2 || sp3C->unk74 == 3) {
        if ((t0->unk2 & 0x20) && (t0->unk2 & 0xF) && a2->unk30.f.c != 0) {
            func_80362EC8(arg0, arg1);
            return;
        }
    }
    if (a2->unk390 != 0) {
        a2->unk328 = 0;
        func_8036E960(arg0, arg1);
        return;
    }
    if (a2->unk328 == 3) {
        func_8021F7AC(arg0, arg1);
        return;
    }
    if ((t0->unk2 & 0x2000) && (a2->unk390 == 4 || x * x + z * z > 1.0)) {
        func_8021FE14(arg0, arg1);
        return;
    }
    func_8021EB88(arg0, arg1);
}
#undef func_8021DFA8
#undef func_8021EB88
#undef func_8021FE14
#undef func_8022310C
#undef func_802233B0



void func_8021EB88(s32 arg0, s32 arg1) {
    func_8021E59C_Struct68 *t = ((func_8021E59C_Actor *)arg0)->unk68;
    struct func_8021F9C8_Struct *sp38;
    f32 a;
    f32 b;
    s32 pad;
    s16 sp2A;

    if (arg0 == ((func_8021E59C_Dev *)&D_801BBBF0)->unkDC) {
        sp38 = &D_801BC03C;
    } else {
        sp38 = &D_801BC3D8;
    }
    sp2A = (s16)(0x2800 - *(s16 *)((u8 *)&D_801BBBF0 + 0x232)) & 0x1FFF;
    a = -t->unk6 / 20.0;
    b = t->unk8 / 20.0;
    if (a * a + b * b > 1.0) {
        func_802237B0(arg0, 1);
        pad = func_8001EF38(a, b) + sp2A;
        func_8021F184((void *)arg0, arg1, pad, a * a + b * b);
        func_80224AC4(arg0, 0);
    } else {
        func_802237B0(arg0, 0);
        func_8021ECD4((void *)arg0, arg1);
    }
    sp38->unk392 = 0;
}

#define D_801BC03C D_801BC03C__func_8021ECD4
#define D_801BC3D8 D_801BC3D8__func_8021ECD4
#define func_80011140 func_80011140__func_8021ECD4
#define func_800111E0 func_800111E0__func_8021ECD4
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021ECD4
#define func_8021E59C_Actor func_8021E59C_Actor__func_8021ECD4
#define func_8021E59C_Struct3C func_8021E59C_Struct3C__func_8021ECD4
#define func_8021E59C_Struct68 func_8021E59C_Struct68__func_8021ECD4
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021ECD4
#define func_8021FB0C func_8021FB0C__func_8021ECD4
#define func_8021FB0C_Struct0 func_8021FB0C_Struct0__func_8021ECD4
#define func_8021FB0C_Struct2C func_8021FB0C_Struct2C__func_8021ECD4
#define func_80224B64 func_80224B64__func_8021ECD4
#define func_802256E4 func_802256E4__func_8021ECD4
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
struct func_8021FB0C_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021FB0C_Struct0 {
    u8 pad0[0x2C];
    struct func_8021FB0C_Struct2C *unk2C;
};
void func_8021FB0C(func_8021E59C_Actor *arg0, struct func_8021FB0C_Struct0 **arg1);
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);


struct func_8021ECD4_StructActor {
    u8 pad[0x5C];
    s32 data;
    u8 pad60[8];
    s32 flags;
};
struct func_8021ECD4_StructState {
    u8 pad[0x30];
    u32 top : 9;
    u32 mode : 2;
    u32 rest : 21;
    u8 pad34[0x2F9-0x34];
    u8 initial;
};
struct func_8021ECD4_StructAngle {
    u8 pad[0x12];
    s16 angle;
};
struct func_8021ECD4_StructNode {
    u8 pad[0x2C];
    struct func_8021ECD4_StructAngle *transform;
};
extern void func_800111E0(s32, void *);
extern s32 func_80224B64(s32);

void func_8021ECD4(void *arg0, s32 arg1) {
    s32 flags;
    s32 data;
    struct func_8021ECD4_StructAngle *xform;
    struct func_8021ECD4_StructState *state;
    struct func_8021E52C_Struct value;
    u8 action;
    s16 angle;

    flags = ((struct func_8021ECD4_StructActor *)arg0)->flags;
    data = ((struct func_8021ECD4_StructActor *)arg0)->data;
    if ((s32)arg0 == D_801BBCCC) {
        state = (struct func_8021ECD4_StructState *)&D_801BC03C;
    } else {
        state = (struct func_8021ECD4_StructState *)&D_801BC3D8;
    }
    if (state->mode == 0) {
        state->mode = state->initial + 2;
    }
    func_802256E4(&value, (s32)arg0, 0);
    ((u16 *)&value)[3] |= 0x100;
    action = D_8022560C((void *)data);
    switch (action) {
    case 0xFF:
        goto fallback;
    case 7:
    case 8:
    case 9:
        {
extern void func_800112B0();
            func_800112B0(arg1, (void *)(data + 0x22));
        }
    case 4:
    case 5:
    case 6:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
        func_802237B0((s32)arg0, 1);
        if (func_80010550(arg1, data)) {
            angle = 0;
            if (action == 6) {
                state->mode ^= 1;
                angle = 0x1000;
                func_802256E4(&value, (s32)arg0, 0);
            } else if (action == 4) {
                if (state->mode == 3) angle = 0x800;
                else angle = 0x1800;
            } else if (action == 5) {
                if (state->mode == 3) angle = 0x1800;
                else angle = 0x800;
            } else if (action == 9 || action == 8 || action == 7) {
                if (*(u16 *)(data + 0x22) & 0x10) state->mode = 3;
                else state->mode = 2;
                func_802256E4(&value, (s32)arg0, 0);
            }
            xform = (*(struct func_8021ECD4_StructNode **)arg1)->transform;
            xform->angle += angle;
            xform = (*(struct func_8021ECD4_StructNode **)arg1)->transform;
            xform->angle &= 0x1FFF;
            func_80224E00((s32)arg0, angle);
            func_8013A28C(arg1, value);
            func_80010550(arg1, data);
            *(u8 *)((u8 *)state + 0x32) &= ~0xE0;
            if (*(u16 *)(flags + 4) & 0x4000) func_8021FB0C((func_8021E59C_Actor *)arg0, (struct func_8021FB0C_Struct0 **)arg1);
        }
        break;
    case 2:
    case 3:
        func_80224AC4((s32)arg0, 0);
        func_802237B0((s32)arg0, 1);
        if (func_80010550(arg1, data)) {
            func_8013A28C(arg1, value);
            func_80010550(arg1, data);
            *(u8 *)((u8 *)state + 0x32) &= ~0xE0;
        }
        if (*(u16 *)(flags + 4) & 0x4000) func_8021FB0C((func_8021E59C_Actor *)arg0, (struct func_8021FB0C_Struct0 **)arg1);
        break;
    case 0:
        func_802237B0((s32)arg0, 0);
        func_80010550(arg1, data);
        func_800111E0(arg1, (void *)(data + 0x22));
        *(u8 *)((u8 *)state + 0x32) &= ~0xE0;
        if (*(u16 *)(flags + 4) & 0x4000) {
            func_8021FB0C((func_8021E59C_Actor *)arg0, (struct func_8021FB0C_Struct0 **)arg1);
        } else if (func_80224B64((s32)arg0)) {
            func_80224BEC((s32)arg0, arg1);
        } else if (value.unk0 != *(s32 *)(data + 0x1C)) {
            func_8013A28C(arg1, value);
        }
        break;
    default:
        goto fallback;
    }
    return;
fallback:
    func_80011140(arg1, data, value, 10);
}
#undef D_801BC03C
#undef D_801BC3D8
#undef func_80011140
#undef func_800111E0
#undef func_8021E52C_Struct
#undef func_8021E59C_Actor
#undef func_8021E59C_Struct3C
#undef func_8021E59C_Struct68
#undef func_8021F9C8_Struct
#undef func_8021FB0C
#undef func_8021FB0C_Struct0
#undef func_8021FB0C_Struct2C
#undef func_80224B64
#undef func_802256E4

#define D_801BC03C D_801BC03C__func_8021F184
#define D_801BC3D8 D_801BC3D8__func_8021F184
#define D_8023C280 D_8023C280__func_8021F184
#define func_80011140 func_80011140__func_8021F184
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021F184
#define func_8021E59C_Actor func_8021E59C_Actor__func_8021F184
#define func_8021E59C_Struct3C func_8021E59C_Struct3C__func_8021F184
#define func_8021E59C_Struct68 func_8021E59C_Struct68__func_8021F184
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021F184
#define func_8021FB0C func_8021FB0C__func_8021F184
#define func_8021FB0C_Struct0 func_8021FB0C_Struct0__func_8021F184
#define func_8021FB0C_Struct2C func_8021FB0C_Struct2C__func_8021F184
#define func_802256E4 func_802256E4__func_8021F184
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
struct func_8021FB0C_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021FB0C_Struct0 {
    u8 pad0[0x2C];
    struct func_8021FB0C_Struct2C *unk2C;
};
void func_8021FB0C(func_8021E59C_Actor *arg0, struct func_8021FB0C_Struct0 **arg1);
extern struct func_8021E52C_Struct func_802256E4(s32 arg0, s32 arg1);

struct func_8021F184_StructActor {
    u8 pad[0x5C];
    struct func_8021F184_StructData *data;
    u8 pad60[8];
    func_8021E59C_Struct68 *flags;
};
struct func_8021F184_StructRot {
    u8 pad[0x12];
    s16 angle;
};
struct func_8021F184_StructObj {
    u8 pad[0x2C];
    struct func_8021F184_StructRot *rot;
};
struct func_8021F184_StructPosition {
    u8 pad[6];
    u16 flags;
};
struct func_8021F184_StructData {
    u8 pad[0x1C];
    struct func_8021F184_StructPosition pos;
};
struct func_8021F184_StructMode {
    u8 pad[0x30];
    struct {
        u32 pad : 9;
        u32 mode : 2;
        u32 rest : 5;
        u32 action : 3;
        u32 end : 13;
    } bits;
    u8 pad34[0x2F9 - 0x34];
    u8 oldmode;
};
extern u8 D_8023C280[];

void func_8021F184(void *arg0, s32 arg1, s16 arg2, f32 arg3)
{
    func_8021E59C_Struct68 *flags;
    struct func_8021F184_StructData *data;
    s16 turn;
    struct func_8021F184_StructMode *mode;
    struct func_8021F184_StructPosition *pos;
    u8 direction;
    u8 state;
    s16 angle;
    s16 facing;

    flags = ((struct func_8021F184_StructActor *)arg0)->flags;
    data = ((struct func_8021F184_StructActor *)arg0)->data;
    pos = &data->pos;
    if ((s32)arg0 == D_801BBCCC) {
        mode = (struct func_8021F184_StructMode *)&D_801BC03C;
    } else {
        mode = (struct func_8021F184_StructMode *)&D_801BC3D8;
    }
    facing = (*(struct func_8021F184_StructObj **)arg1)->rot->angle;
    angle = (s16)(arg2 - facing);
    direction = ((s16)(((angle << 16) >> 16) + 0x200) & 0x1FFF) / 0x400;
    if (mode->bits.mode == 3) {
        direction = (8 - direction) % 8;
    }
    if (arg3 >= 10.0) {
        direction += 8;
    }
    state = D_8022560C(data);
    switch (state) {
        case 7:
        case 8:
        case 9:
            {
extern void func_800112B0();
                func_800112B0(arg1, &pos->flags);
            }
        case 4:
        case 5:
        case 6:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
            func_802237B0((s32)arg0, 1);
            if (func_80010550(arg1, (s32)data)) {
                turn = 0;
                if (state == 6) {
                    turn = 0x1000;
                    mode->bits.mode ^= 1;
                } else if (state == 4) {
                    if (mode->bits.mode == 3) {
                        turn = 0x800;
                    } else {
                        turn = 0x1800;
                    }
                } else if (state == 5) {
                    if (mode->bits.mode == 3) {
                        turn = 0x1800;
                    } else {
                        turn = 0x800;
                    }
                } else if (state == 9 || state == 8 || state == 7) {
                    if (pos->flags & 0x10) {
                        mode->bits.mode = 3;
                    } else {
                        mode->bits.mode = 2;
                    }
                }
                (*(struct func_8021F184_StructObj **)arg1)->rot->angle += turn;
                (*(struct func_8021F184_StructObj **)arg1)->rot->angle &= 0x1FFF;
                func_80224E00((s32)arg0, turn);
                if (mode->bits.mode == 0) {
                    mode->bits.mode = mode->oldmode + 2;
                }
                *(struct func_8021E52C_Struct *)pos = func_802256E4((s32)arg0, D_8023C280[direction]);
                func_8013A28C(arg1, *(struct func_8021E52C_Struct *)pos);
                func_80010550(arg1, (s32)data);
                if (flags->unk4 & 0x4000) {
                    func_8021FB0C((func_8021E59C_Actor *)arg0, (struct func_8021FB0C_Struct0 **)arg1);
                } else if (arg3 < 10.0) {
                    mode->bits.action = 1;
                } else {
                    mode->bits.action = 2;
                }
            } else if (flags->unk4 & 0x4000) {
                if (((state == 13 || state == 21) && ((u8)(direction & 7) == 0 || (u8)(direction & 7) == 1 || (u8)(direction & 7) == 7)) ||
                    ((state == 14 || state == 22) && ((u8)(direction & 7) == 4 || (u8)(direction & 7) == 5 || (u8)(direction & 7) == 3))) {
                    func_8021FB0C((func_8021E59C_Actor *)arg0, (struct func_8021FB0C_Struct0 **)arg1);
                }
            }
            break;
        case 2:
        case 3:
            func_80011258(arg1, &pos->flags);
        case 0:
            if (flags->unk4 & 0x4000) {
                func_8021FB0C((func_8021E59C_Actor *)arg0, (struct func_8021FB0C_Struct0 **)arg1);
            } else {
                if (mode->bits.mode == 0) {
                    mode->bits.mode = mode->oldmode + 2;
                }
                *(struct func_8021E52C_Struct *)pos = func_802256E4((s32)arg0, D_8023C280[direction]);
                func_8013A28C(arg1, *(struct func_8021E52C_Struct *)pos);
                if (arg3 < 10.0) {
                    mode->bits.action = 1;
                } else {
                    mode->bits.action = 2;
                }
            }
            break;
        case 255:
        default:
        {
            if (func_80011140(arg1, (s32)data, func_802256E4((s32)arg0, 0), 10)) {
                if (mode->bits.mode == 0) {
                    mode->bits.mode = mode->oldmode + 2;
                }
                mode->bits.action = 0;
            }
            break;
        }
    }
}
#undef D_801BC03C
#undef D_801BC3D8
#undef D_8023C280
#undef func_80011140
#undef func_8021E52C_Struct
#undef func_8021E59C_Actor
#undef func_8021E59C_Struct3C
#undef func_8021E59C_Struct68
#undef func_8021F9C8_Struct
#undef func_8021FB0C
#undef func_8021FB0C_Struct0
#undef func_8021FB0C_Struct2C
#undef func_802256E4

#define D_801BBBF0 D_801BBBF0__func_8021F7AC
#define D_801BC03C D_801BC03C__func_8021F7AC
#define D_801BC3D8 D_801BC3D8__func_8021F7AC
#define D_8023C298 D_8023C298__func_8021F7AC
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021F7AC
#define func_8021F9C8 func_8021F9C8__func_8021F7AC
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021F7AC
#define func_80220F60_Struct func_80220F60_Struct__func_8021F7AC
#define func_802256E4 func_802256E4__func_8021F7AC
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
void func_8021F9C8(s32 arg0, s32 arg1);
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);


struct func_8021F7AC_StructP {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021F7AC_StructQ {
    u8 pad0[0x2C];
    struct func_8021F7AC_StructP *unk2C;
};
struct func_8021F7AC_StructA {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
};
struct func_8021F7AC_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u16 pad : 13;
            u16 e : 3;
            u8 d : 3;
            u8 rest : 5;
            u8 last;
        } g;
    } unk30;
    u8 unk34[0x44 - 0x34];
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x32A - 0x329];
    s16 unk32A;
    u8 pad32C[0x392 - 0x32C];
    u8 unk392;
};
struct func_8021F7AC_StructD {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
typedef struct {
    u8 b[4];
} func_8021F7AC_Tbl;
extern func_8021F7AC_Tbl D_8023C298;

#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_8023C298
#undef func_8021E52C_Struct
#undef func_8021F9C8
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_802256E4
#define D_801BBBF0 D_801BBBF0__func_8021F7AC_bc7d4713
#define D_801BC03C D_801BC03C__func_8021F7AC_bc7d4713
#define D_801BC3D8 D_801BC3D8__func_8021F7AC_bc7d4713
#define D_8023C298 D_8023C298__func_8021F7AC_bc7d4713
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021F7AC_bc7d4713
#define func_8021F7AC_StructA func_8021F7AC_StructA__func_8021F7AC_bc7d4713
#define func_8021F7AC_StructD func_8021F7AC_StructD__func_8021F7AC_bc7d4713
#define func_8021F7AC_StructP func_8021F7AC_StructP__func_8021F7AC_bc7d4713
#define func_8021F7AC_StructQ func_8021F7AC_StructQ__func_8021F7AC_bc7d4713
#define func_8021F7AC_StructS func_8021F7AC_StructS__func_8021F7AC_bc7d4713
#define func_8021F7AC_Tbl func_8021F7AC_Tbl__func_8021F7AC_bc7d4713
#define func_8021F9C8 func_8021F9C8__func_8021F7AC_bc7d4713
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021F7AC_bc7d4713
#define func_80220F60_Struct func_80220F60_Struct__func_8021F7AC_bc7d4713
#define func_802256E4 func_802256E4__func_8021F7AC_bc7d4713
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
void func_8021F9C8(s32 arg0, s32 arg1);
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);


struct func_8021F7AC_StructP {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021F7AC_StructQ {
    u8 pad0[0x2C];
    struct func_8021F7AC_StructP *unk2C;
};
struct func_8021F7AC_StructA {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
};
struct func_8021F7AC_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u16 pad : 13;
            u16 e : 3;
            u8 d : 3;
            u8 rest : 5;
            u8 last;
        } g;
    } unk30;
    u8 unk34[0x44 - 0x34];
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x32A - 0x329];
    s16 unk32A;
    u8 pad32C[0x392 - 0x32C];
    u8 unk392;
};
struct func_8021F7AC_StructD {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
typedef struct {
    u8 b[4];
} func_8021F7AC_Tbl;
extern func_8021F7AC_Tbl D_8023C298;

void func_8021F7AC(s32 arg0, s32 arg1) {
    struct func_8021F7AC_StructS *s1;
    s32 t0;
    struct func_8021E52C_Struct *s0;
    s16 w;
    s16 a3;
    s16 v1;
    s32 v;
    func_8021F7AC_Tbl sp2C;

    t0 = ((struct func_8021F7AC_StructA *)arg0)->unk5C;
    if (arg0 == ((struct func_8021F7AC_StructD *)&D_801BBBF0)->unkDC) {
        s1 = (struct func_8021F7AC_StructS *)&D_801BC03C;
    } else {
        s1 = (struct func_8021F7AC_StructS *)&D_801BC3D8;
    }
    w = 0x2800 - ((struct func_8021F7AC_StructD *)&D_801BBBF0)->unk232;
    v1 = (*(struct func_8021F7AC_StructQ **)arg1)->unk2C->unk12;
    sp2C = D_8023C298;
    w &= 0x1FFF;
    a3 = s1->unk32A + w;
    if (((struct func_8021F7AC_StructA *)arg0)->unk36 == 0x11D) {
        s0 = (struct func_8021E52C_Struct *)(t0 + 0x1C);
        func_802256E4(s0, arg0, 0x1F);
        if ((((s16)((s16)((s16)(a3 - v1) & 0xFFFF) + 0x800) & 0x1FFF) / 4096) & 0xFF) {
            ((u16 *)s0)[3] |= 0x10;
        }
    } else {
        w = (s16)(a3 - v1) & 0xFFFF;
        v = (u8)(((s16)(w + 0x400) & 0x1FFF) / 2048);
        if (s1->unk30.f.c == 3) {
            v = ((4 - ((((s16)(w + 0x400) & 0x1FFF) / 2048) & 0xFF)) % 4) & 0xFF;
        }
        s0 = (struct func_8021E52C_Struct *)(t0 + 0x1C);
        func_802256E4(s0, arg0, sp2C.b[v]);
    }
    func_8013A28C(arg1, *s0);
    s1->unk30.g.d = 3;
    s1->unk328 = 4;
    func_802237B0(arg0, 1);
    s1->unk44 += 0xA;
    func_800058DC(arg0, (void *)func_8021F9C8);
    s1->unk392 = 0;
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_8023C298
#undef func_8021E52C_Struct
#undef func_8021F7AC_StructA
#undef func_8021F7AC_StructD
#undef func_8021F7AC_StructP
#undef func_8021F7AC_StructQ
#undef func_8021F7AC_StructS
#undef func_8021F7AC_Tbl
#undef func_8021F9C8
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_802256E4
#define D_801BBBF0 D_801BBBF0__func_8021F7AC
#define D_801BC03C D_801BC03C__func_8021F7AC
#define D_801BC3D8 D_801BC3D8__func_8021F7AC
#define D_8023C298 D_8023C298__func_8021F7AC
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021F7AC
#define func_8021F9C8 func_8021F9C8__func_8021F7AC
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021F7AC
#define func_80220F60_Struct func_80220F60_Struct__func_8021F7AC
#define func_802256E4 func_802256E4__func_8021F7AC
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_8023C298
#undef func_8021E52C_Struct
#undef func_8021F9C8
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_802256E4

#define func_802233B0 func_802233B0__func_8021F9C8


struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct func_8021F9C8_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern s32 func_802233B0();

void func_8021F9C8(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct func_8021E52C_Struct *sp20;
    struct func_8021F9C8_Struct *var_s0;

    sp2C = ((struct func_8021F9C8_Actor *) arg0)->unk5C;
    if (arg0 == ((struct func_8021F9C8_Dev *) &D_801BBBF0)->unkDC) {
        var_s0 = &D_801BC03C;
    } else {
        var_s0 = &D_801BC3D8;
    }
    if ((var_s0->unk2 <= 0) || ((((*(u32 *) &var_s0->unk30) << 1) >> 30) != 0)) {
        func_802233B0(arg0, arg1);
    } else if (((struct func_8021F9C8_Dev *) &D_801BBBF0)->unk1031 == 5) {
        if ((var_s0->unk30 & 7) - 5 == 0) {
            func_8022397C(arg0);
        } else {
            func_802237B0(arg0, 1);
            if (func_80010550(arg1, sp2C) != 0) {
                var_s0->unk328 = 0;
                var_s0->unk32 = var_s0->unk32 & 0xFF1F;
                sp20 = (struct func_8021E52C_Struct *) (sp2C + 0x1C);
                func_802256E4(sp20, arg0, 0);
                func_8013A28C(arg1, *sp20);
                func_800058DC(arg0, &func_8021E59C);
            }
            var_s0->unk392 = 0;
        }
    }
}
#undef func_802233B0

#define func_8021E52C_Struct func_8021E52C_Struct__func_8021FB0C
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021FB0C
#define func_8021FD00 func_8021FD00__func_8021FB0C
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
struct func_8021FB0C_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021FB0C_Struct0 {
    u8 pad0[0x2C];
    struct func_8021FB0C_Struct2C *unk2C;
};
struct func_8021FB0C_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
extern void func_8021FD00();

#undef func_8021E52C_Struct
#undef func_8021F9C8_Struct
#undef func_8021FD00
#define D_801BBBF0 D_801BBBF0__func_8021FB0C_11f0dfaa
#define D_801BC03C D_801BC03C__func_8021FB0C_11f0dfaa
#define D_801BC3D8 D_801BC3D8__func_8021FB0C_11f0dfaa
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021FB0C_11f0dfaa
#define func_8021E59C_Actor func_8021E59C_Actor__func_8021FB0C_11f0dfaa
#define func_8021E59C_Struct3C func_8021E59C_Struct3C__func_8021FB0C_11f0dfaa
#define func_8021E59C_Struct68 func_8021E59C_Struct68__func_8021FB0C_11f0dfaa
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021FB0C_11f0dfaa
#define func_8021FB0C_Dev func_8021FB0C_Dev__func_8021FB0C_11f0dfaa
#define func_8021FB0C_Struct0 func_8021FB0C_Struct0__func_8021FB0C_11f0dfaa
#define func_8021FB0C_Struct2C func_8021FB0C_Struct2C__func_8021FB0C_11f0dfaa
#define func_8021FD00 func_8021FD00__func_8021FB0C_11f0dfaa
#define func_80220F60_Struct func_80220F60_Struct__func_8021FB0C_11f0dfaa
#define func_802256E4 func_802256E4__func_8021FB0C_11f0dfaa
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);

struct func_8021FB0C_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021FB0C_Struct0 {
    u8 pad0[0x2C];
    struct func_8021FB0C_Struct2C *unk2C;
};
struct func_8021FB0C_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
extern void func_8021FD00();

void func_8021FB0C(func_8021E59C_Actor *arg0, struct func_8021FB0C_Struct0 **arg1)
{
  func_8021E59C_Struct68 *p = arg0->unk68;
  struct func_8021F9C8_Struct *t0;
  f32 fa0;
  f32 fa1;
  s16 sp46;
  s16 a0;
  s16 d;
  u16 v0;
  u16 r;
  s32 ang;
  f32 yaw;
  s16 *new_var;
  struct func_8021E52C_Struct sp24;
  if (((s32) arg0) == ((struct func_8021FB0C_Dev *) (&D_801BBBF0))->unkDC)
  {
    t0 = &D_801BC03C;
  }
  else
  {
    t0 = &D_801BC3D8;
  }
  fa0 = (-p->unk6) / 20.0;
  fa1 = p->unk8 / 20.0;
  new_var = &sp46;
  sp46 = ((s16) (0x2800 - ((struct func_8021FB0C_Dev *) (&D_801BBBF0))->unk232)) & 0x1FFF;
  a0 = ((s16) (func_8001EF38(fa0, fa1) + (*new_var))) - (ang = (*arg1)->unk2C->unk12);
  if (((a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF)) < 0)
  {
    d = -((a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF));
  }
  else
  {
    ang = (a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF);
    d = ang;
  }
  yaw = (fa0 * fa0) + (fa1 * fa1);
  if (yaw > 10.0)
  {
    if (d < 0x400)
    {
      r = 0xC;
    }
    else
      if (d >= 0xC01)
    {
      r = 0xB;
    }
  }
  else
  {
    v0 = 0xA;
    r = v0;
  }
  func_802256E4(&sp24, (s32) arg0, r & 0xFF);
  func_8013A28C((s32) arg1, sp24);
  t0->unk32 = (t0->unk32 & 0xFF1F) | 0x20;
  func_800058DC((s32) arg0, func_8021FD00);
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021E52C_Struct
#undef func_8021E59C_Actor
#undef func_8021E59C_Struct3C
#undef func_8021E59C_Struct68
#undef func_8021F9C8_Struct
#undef func_8021FB0C_Dev
#undef func_8021FB0C_Struct0
#undef func_8021FB0C_Struct2C
#undef func_8021FD00
#undef func_80220F60_Struct
#undef func_802256E4
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021FB0C
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021FB0C
#define func_8021FD00 func_8021FD00__func_8021FB0C
#undef func_8021E52C_Struct
#undef func_8021F9C8_Struct
#undef func_8021FD00

#define D_801BBBF0 D_801BBBF0__func_8021FD00
#define D_801BC03C D_801BC03C__func_8021FD00
#define D_801BC3D8 D_801BC3D8__func_8021FD00
#define func_8021F9C8_Actor func_8021F9C8_Actor__func_8021FD00
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021FD00
#define func_80220F60_Struct func_80220F60_Struct__func_8021FD00
#define func_80222708 func_80222708__func_8021FD00
#define func_802233B0 func_802233B0__func_8021FD00
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
s32 func_802233B0(s32 arg0, s32 arg1);
extern void func_80222708();

struct func_8021FD00_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u16 pad : 13;
            u16 e : 3;
            u8 d : 3;
            u8 rest : 5;
            u8 last;
        } g;
    } unk30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
};

void func_8021FD00(s32 arg0, s32 arg1) {
    s32 temp_a3;
    struct func_8021FD00_Struct *var_v1;

    temp_a3 = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        var_v1 = (struct func_8021FD00_Struct *)&D_801BC03C;
    } else {
        var_v1 = (struct func_8021FD00_Struct *)&D_801BC3D8;
    }
    var_v1->unk392 = 0;
    if (D_801BBBF0.unk1031 == 5) {
        if (var_v1->unk2 <= 0 || var_v1->unk30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if ((*(u16 *)&var_v1->unk30 & 7) == 5U) {
            func_8022397C(arg0);
            return;
        }
        if (func_80010550(arg1, temp_a3) != 0) {
            var_v1->unk30.f.c ^= 1;
            var_v1->unk30.g.d = 0;
            func_800058DC(arg0, func_80222708);
        }
    }
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021F9C8_Actor
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80222708
#undef func_802233B0

#define func_8021ECD4 func_8021ECD4__func_8021FE14
extern void func_8021ECD4(s32, s32);

#undef A
#undef DEV
#undef func_8021ECD4
#define D_801BBBF0 D_801BBBF0__func_8021FE14_40294a7d
#define D_801BC03C D_801BC03C__func_8021FE14_40294a7d
#define D_801BC3D8 D_801BC3D8__func_8021FE14_40294a7d
#define func_8021E59C func_8021E59C__func_8021FE14_40294a7d
#define func_8021E59C_Actor func_8021E59C_Actor__func_8021FE14_40294a7d
#define func_8021E59C_Dev func_8021E59C_Dev__func_8021FE14_40294a7d
#define func_8021E59C_Player func_8021E59C_Player__func_8021FE14_40294a7d
#define func_8021E59C_Struct3C func_8021E59C_Struct3C__func_8021FE14_40294a7d
#define func_8021E59C_Struct68 func_8021E59C_Struct68__func_8021FE14_40294a7d
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021FE14_40294a7d
#define func_80220F60_Struct func_80220F60_Struct__func_8021FE14_40294a7d
#define A ((func_8021E59C_Actor *)arg0)
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
#define A ((func_8021E59C_Actor *)arg0)
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8021E59C_Dev;
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_8021E59C();
typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x6 - 0x4];
    s16 unk6;
    u8 pad8[0xA - 0x8];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 pad13 : 19;
        } f;
        struct {
            u16 pad0 : 13;
            u16 e : 3;
            u8 b2;
            u8 top : 1;
            u8 pad1 : 7;
        } g;
    } unk30;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 pad391[0x3A8 - 0x391];
    f32 unk3A8;
} func_8021E59C_Player;

void func_8021FE14(s32 arg0, s32 arg1) {
    struct func_8021F9C8_Struct *v;
    func_8021E59C_Struct68 *p;
    f32 x;
    f32 y;
    s32 ang;
    s16 a;

    if (arg0 == DEV->unkDC) {
        v = &D_801BC03C;
    } else {
        v = &D_801BC3D8;
    }
    p = A->unk68;
    a = (s16)(0x2800 -*(s16 *)((u8 *)&D_801BBBF0 + 0x232)) & 0x1FFF;
    v->unk392 = 0;
    x = (f32)((f64)-p->unk6 / 20.0);
    y = (f32)((f64)p->unk8 / 20.0);
    if ((f64)(x * x + y * y) > 1.0) {
        func_802237B0(arg0, 1);
        ang = func_8001EF38(x, y) + a;
        func_8022038C(arg0, arg1, ang);
        return;
    }
    func_802237B0(arg0, 0);
    if (((func_8021E59C_Player *)v)->unk390 == 4) {
        func_8021FF78(arg0, arg1);
        return;
    }
    func_8021ECD4(arg0, arg1);
    func_800058DC(arg0, func_8021E59C);
}
#undef A
#undef DEV
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021E59C
#undef func_8021E59C_Actor
#undef func_8021E59C_Dev
#undef func_8021E59C_Player
#undef func_8021E59C_Struct3C
#undef func_8021E59C_Struct68
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#define A ((func_8021E59C_Actor *)arg0)
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)
#define func_8021ECD4 func_8021ECD4__func_8021FE14
#undef func_8021ECD4

#define D_801BC03C D_801BC03C__func_8021FF78
#define D_801BC3D8 D_801BC3D8__func_8021FF78
#define D_80225664 D_80225664__func_8021FF78
#define func_80011140 func_80011140__func_8021FF78
#define func_800111E0 func_800111E0__func_8021FF78
#define func_80011328 func_80011328__func_8021FF78
#define func_8021E52C_Struct func_8021E52C_Struct__func_8021FF78
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_8021FF78
#define func_80225664 func_80225664__func_8021FF78
#define func_802256E4 func_802256E4__func_8021FF78
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_8021E52C_Struct D_80225664(s32, s32);
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
extern struct func_8021E52C_Struct func_802256E4();

struct func_8021FF78_StructRot {
    u8 pad[0x12];
    s16 angle;
};
struct func_8021FF78_StructObj {
    u8 pad[0x2C];
    struct func_8021FF78_StructRot *rot;
};
struct func_8021FF78_StructVector {
    s32 unk0;
    u16 unk4;
    u16 flags;
    s32 unk8;
};
struct func_8021FF78_StructCmd {
    u8 pad[0x1C];
    struct func_8021FF78_StructVector cmd;
};
struct func_8021FF78_StructActor {
    u8 pad[0x5C];
    struct func_8021FF78_StructCmd *cmd;
};
struct func_8021FF78_StructState {
    u8 pad[0x30];
    u32 top : 9;
    u32 mode : 2;
    u32 rest : 21;
};
extern void func_800111E0(s32, void *, s32, s32);
extern void func_80011328(s32, void *);
extern void func_80225664(struct func_8021E52C_Struct *, s32, s32);

void func_8021FF78(s32 arg0, s32 arg1)
{
    struct func_8021FF78_StructRot *rot;
    struct func_8021FF78_StructCmd *cmd;
    struct func_8021FF78_StructState *state;
    s32 turn;
    union {
        struct func_8021E52C_Struct raw;
        struct func_8021FF78_StructVector fields;
    } valueStorage;
#define value valueStorage.raw
    s16 angle;
    u8 code;
    struct func_8021FF78_StructVector *dest;

    rot = (*(struct func_8021FF78_StructObj **)arg1)->rot;
    cmd = ((struct func_8021FF78_StructActor *)arg0)->cmd;
    if (arg0 == D_801BBCCC) {
        state = (struct func_8021FF78_StructState *)&D_801BC03C;
    } else {
        state = (struct func_8021FF78_StructState *)&D_801BC3D8;
    }
    dest = &cmd->cmd;
    if (0x19100AA == dest->unk0) {
        ((u8 *)state)[0x32] &= ~0xE0;
        func_800111E0(arg1, &dest->flags, 0x19100AA, arg0);
        func_80010550(arg1, (s32)cmd);
        return;
    }
    value = D_80225664(arg0, 0x19100AA);
    valueStorage.fields.flags |= 0x100;
    code = D_8022560C(cmd);
    switch (code) {
    case 7:
    case 8:
    case 9: {
        func_802237B0(arg0, 1);
        ((u8 *)state)[0x31] &= ~0x60;
        if (func_80010550(arg1, (s32)cmd)) {
            func_80011328(arg1, &dest->flags);
            value = func_802256E4(arg0, 1);
            valueStorage.fields.flags = dest->flags;
            if (code == 7) {
                if (valueStorage.fields.flags & 0x10) angle = 0x800;
                else angle = 0x1800;
            } else if (code == 8) {
                if (valueStorage.fields.flags & 0x10) angle = 0x1800;
                else angle = 0x800;
                valueStorage.fields.flags ^= 0x10;
            } else {
                angle = 0x1000;
            }
            rot->angle += angle;
            rot->angle &= 0x1FFF;
            func_80224E00(arg0, angle);
            *(struct func_8021E52C_Struct *)dest = value;
            func_8013A28C(arg1, value);
            func_80010550(arg1, (s32)cmd);
            return;
        }
        return;
    }
    case 1:
        func_802237B0(arg0, 0);
        func_80011140(arg1, (s32)cmd, value, 2);
        ((u8 *)state)[0x32] = (((u8 *)state)[0x32] & ~0xE0) | 0x20;
        break;
    case 4:
    case 5:
    case 6:
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, (s32)cmd)) {
            turn = 0;
            if (code == 6) {
                turn = 0x1000;
                state->mode ^= 1;
            } else if (code == 4) {
                if (state->mode == 3) turn = 0x800;
                else turn = -0x800;
            } else if (code == 5) {
                if (state->mode != 3) turn = 0x800;
                else turn = -0x800;
            }
            (*(struct func_8021FF78_StructObj **)arg1)->rot->angle += turn;
            (*(struct func_8021FF78_StructObj **)arg1)->rot->angle &= 0x1FFF;
            func_8013A28C(arg1, func_802256E4(arg0, 0, turn));
            func_80010550(arg1, (s32)cmd);
            return;
        }
        break;
    case 0:
    case 0x1C:
    case 0xFF:
    default:
        func_80011140(arg1, (s32)cmd, value, 5);
    }
}
#undef value
#undef D_801BC03C
#undef D_801BC3D8
#undef D_80225664
#undef func_80011140
#undef func_800111E0
#undef func_80011328
#undef func_8021E52C_Struct
#undef func_8021F9C8_Struct
#undef func_80225664
#undef func_802256E4

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8021D8D0/func_8022038C.s")

#undef A
#undef DEV
#define D_801BBBF0 D_801BBBF0__func_802208B0
#define D_801BC03C D_801BC03C__func_802208B0
#define D_801BC3D8 D_801BC3D8__func_802208B0
#define func_8021E59C_Actor func_8021E59C_Actor__func_802208B0
#define func_8021E59C_Dev func_8021E59C_Dev__func_802208B0
#define func_8021E59C_Struct3C func_8021E59C_Struct3C__func_802208B0
#define func_8021E59C_Struct68 func_8021E59C_Struct68__func_802208B0
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_802208B0
#define func_80220F60 func_80220F60__func_802208B0
#define func_80220F60_Struct func_80220F60_Struct__func_802208B0
#define func_80221040 func_80221040__func_802208B0
#define func_80221070 func_80221070__func_802208B0
#define func_80221070_StructB func_80221070_StructB__func_802208B0
#define func_80221070_StructM func_80221070_StructM__func_802208B0
#define func_803602D4 func_803602D4__func_802208B0
#define func_80360818 func_80360818__func_802208B0
#define func_80365FE0 func_80365FE0__func_802208B0
#define func_80367914 func_80367914__func_802208B0
#define func_80369994 func_80369994__func_802208B0
#define func_8036C110 func_8036C110__func_802208B0
#define func_8036D938 func_8036D938__func_802208B0
#define func_8036F9B0 func_8036F9B0__func_802208B0
#define A ((func_8021E59C_Actor *)arg0)
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
#define A ((func_8021E59C_Actor *)arg0)
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8021E59C_Dev;
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
void func_80220F60(s32 arg0);
void func_80221040(void);
struct func_80221070_StructM {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80221070_StructB {
    u8 pad0[0x2C];
    struct func_80221070_StructM *unk2C;
};
void func_80221070(s32 arg0, struct func_80221070_StructB **arg1);


struct func_802208B0_Struct {
    u8 pad0[6]; s16 hp; u8 pad8[2]; s16 mp;
    u8 padC[0x30-0xC];
    union func_802208B0_StructFlags {
        u32 w; u16 h; u8 b[4];
        struct { u8 top:1; u8 rest0:7; u8 top1:1; u8 rest1:4; u8 low1:3; u8 byte2; u8 top3:1; u8 rest3a:2; u8 mode3:2; u8 rest3b:3; } bytes;
        struct { u8 top:1; u8 rest:6; u8 active:1; } byte0;
        struct { u32 top:1; u32 pad1:2; u32 mode:4; u32 p:4; u32 action:2; u32 q:14; u32 low:2; u32 r:3; } f;
    } flags;
    union func_802208B0_StructFlags saved;
    union func_802208B0_StructFlags flags38;
    union func_802208B0_StructFlags saved38;
    u8 pad40[2]; s16 cost42; s16 cost44;
    u8 pad46[0x2D8-0x46];
    u8 state; u8 substate; u8 pad2DA; u8 unk2DB;
    u8 pad2DC[2]; u8 unk2DE; u8 pad2DF[0x2EC-0x2DF];
    f32 unk2EC; u8 pad2F0; u8 unk2F1; u8 pad2F2[6];
    u8 unk2F8; u8 pad2F9; u8 unk2FA;
    u8 pad2FB[0x312-0x2FB]; s16 unk312;
    u8 pad314[0x324-0x314]; void *callback; u8 unk328;
    u8 pad329[0x390-0x329]; u8 unk390; u8 pad391[3]; u8 unk394;
};
extern void func_803602D4(s32, s32);
extern void func_80360818(s32, s32);
extern void func_8036C110(s32, s32);
extern void func_80367914(s32, s32);
extern void func_80369994(s32, s32);
extern void func_8036D938(s32, s32);
extern void func_80365FE0(s32, s32);
extern void func_8036F9B0(s32, s32);

void func_802208B0(s32 arg0, s32 arg1) {
    struct func_802208B0_Struct *p;
    struct func_802208B0_Struct *other;
    func_8021E59C_Struct3C *data;
    void *vec;
    func_8021E59C_Struct68 *stats;

    p = arg0 == DEV->unkDC ? (void *)&D_801BC03C : (void *)&D_801BC3D8;
    other = arg0 != DEV->unkDC ? (void *)&D_801BC03C : (void *)&D_801BC3D8;
    data = A->unk5C;
    if (DEV->unk1031 == 15) return;
    if (DEV->unk1031 == 5) {
        p->flags = p->saved;
        p->flags38 = p->saved38;
        p->flags.bytes.low1 = 0;
        p->flags.bytes.top = 0;
        p->flags.bytes.top1 = 0;
        func_800058DC(arg0, p->callback);
        return;
    }
    if ((p->flags.h & 7) != 0) return;
    if (!(p->flags.b[0] & 1)) return;
    p->unk328 = 0;
    p->unk394 = 0;
    p->unk2F1 = 0;
    p->unk2FA = 0;
    p->unk2F8 = 0;
    p->flags.b[2] &= ~3;
    if (p->unk2DE != 0) {
        p->unk2DE = 0;
        p->unk2EC = 1.0f;
        func_803602D4(arg0, arg1);
    }
    if (p->flags.f.mode == 3) {
        p->unk312 = 0;
        p->flags.f.mode = 0;
    }
    if (p->flags.bytes.top3 == 1U) {
        p->flags.bytes.top3 = 0;
        p->unk312 = 0;
    }
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x2C) == 10 && ((stats = A->unk68)->unk2 & 1)) {
        if (p->state == 0 && p->hp >= 150 && p->mp >= 30 &&
            (A->unk36 == 250 || A->unk36 == 86 || A->unk36 == 326 || A->unk36 == 240 || A->unk36 == 251)) {
            p->state = 19;
            p->cost44 += 150;
            p->cost42 += 30;
            if (A->unk36 == 86 || A->unk36 == 326) p->substate = 7;
            else if (A->unk36 == 240 || A->unk36 == 251) p->substate = 6;
            else p->substate = 5;
        } else if (p->state == 1) {
          if (p->hp >= 200 && p->mp >= 10 &&
            (A->unk36 == 84 || A->unk36 == 246 || A->unk36 == 244 || A->unk36 == 245 || A->unk36 == 250 || A->unk36 == 252 || A->unk36 == 327 || A->unk36 == 328 || A->unk36 == 286)) {
            p->state = 19;
            p->cost44 += 200;
            p->cost42 += 10;
            if (A->unk36 == 246 || A->unk36 == 252 || A->unk36 == 327) p->substate = 3;
            else if (A->unk36 == 250 || A->unk36 == 245) p->substate = 0;
            else if (A->unk36 == 84) p->substate = 2;
            else if (A->unk36 == 244) p->substate = 1;
            else if (A->unk36 == 286 && p->substate >= 26) p->substate = p->substate % 2 + 3;
            else p->substate = ((p->substate - 14) % 6) / 2;
          }
        }
    }
    if (data->unkE == 328 && p->unk390 == 5 && p->flags.f.low != 0 &&
        (p->state == 19 || p->state == 11 || p->state == 20)) {
        p->flags.bytes.mode3 = 2;
    } else if (data->unkE == 285) {
    } else {
        p->unk390 = 0;
        p->flags.bytes.mode3 = 0;
    }
    switch (p->state) {
    case 0:
    case 1:
    case 3:
    case 9:
    case 10:
        func_80360818(arg0, arg1);
        return;
    case 8:
        func_8036C110(arg0, arg1);
        return;
    case 2:
        if ((p->flags38.w >> 31) && (other->flags38.w >> 31)) {
            func_80367914(arg0, arg1);
            return;
        }
        p->flags.byte0.active = 1;
        func_8035C98C(arg0, arg1);
        return;
    case 4:
    case 5:
    case 6:
    case 7:
        func_80369994(arg0, arg1);
        return;
    case 14:
        if (p->flags.f.action && (other->state == 12 || other->state == 19)) {
            func_8036D938(arg0, arg1);
            return;
        }
    case 15:
        if (p->flags.f.action) {
            if (other->state == 12 || other->state == 19) {
                p->unk2DB = 0;
                p->flags.b[0] &= ~1;
                p->flags.b[0] &= 0x7F;
            }
            func_80365FE0(arg0, arg1);
            return;
        }
    case 13:
    case 17:
        vec = (u8 *)data + 0x22;
        func_80011258(arg1, vec);
        func_800113D0(arg1, vec);
        func_800058DC(arg0, func_80221070);
        return;
    case 19:
        func_8036F9B0(arg0, arg1);
        return;
    case 12:
        if (p->substate >= 20 && p->substate < 30) {
            func_800058DC(arg0, func_80221040);
            return;
        }
    case 11:
        func_800058DC(arg0, func_80220F60);
        return;
    case 16:
    case 18:
    case 20:
    default:
        if (p->flags.f.action) {
            func_80365FE0(arg0, arg1);
            return;
        }
        vec = (u8 *)data + 0x22;
        func_80011258(arg1, vec);
        func_800113D0(arg1, vec);
        func_800058DC(arg0, func_80221070);
        return;
    }
}
#undef A
#undef DEV
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021E59C_Actor
#undef func_8021E59C_Dev
#undef func_8021E59C_Struct3C
#undef func_8021E59C_Struct68
#undef func_8021F9C8_Struct
#undef func_80220F60
#undef func_80220F60_Struct
#undef func_80221040
#undef func_80221070
#undef func_80221070_StructB
#undef func_80221070_StructM
#undef func_803602D4
#undef func_80360818
#undef func_80365FE0
#undef func_80367914
#undef func_80369994
#undef func_8036C110
#undef func_8036D938
#undef func_8036F9B0
#define A ((func_8021E59C_Actor *)arg0)
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)

#define func_800058DC func_800058DC__func_80220F60
#define func_80220FC0 func_80220FC0__func_80220F60

struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern void func_800058DC(s32, void *);
extern void func_80220FC0();

void func_80220F60(s32 arg0) {
    s32 sp1C;

    if (arg0 != D_801BBBF0.unkDC) {
        sp1C = D_801BBBF0.unkDC;
    } else {
        sp1C = D_801BBBF0.unkEC;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        func_80359560(arg0);
        func_800058DC(sp1C, func_80220FC0);
    }
}
#undef func_800058DC
#undef func_80220FC0

typedef struct {
    u32 b0 : 8;
    u32 b1 : 5;
    u32 lo : 3;
    u32 b2 : 16;
} func_80220FC0_Word;
struct func_80220FC0_Struct {
    u8 pad0[0x30];
    func_80220FC0_Word unk30;
    func_80220FC0_Word unk34;
    func_80220FC0_Word unk38;
    func_80220FC0_Word unk3C;
    u8 pad40[0x324 - 0x40];
    void *unk324;
};
void func_80220FC0(s32 arg0, s32 arg1) {
    struct func_80220FC0_Struct *p;
    s32 dc;
    dc = D_801BBBF0.unkDC;
    if (arg0 == dc) {
        p = (struct func_80220FC0_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80220FC0_Struct *)&D_801BC3D8;
    }
    if (D_801BBBF0.unk1031 != 0xF && *((u8 *)&D_801BBBF0 + 0x1035) == 0) {
        p->unk30 = p->unk34;
        p->unk38 = p->unk3C;
        p->unk30.lo = 0;
        func_800058DC(arg0, p->unk324);
    }
}



void func_80221040(void) {
    if (D_801BCC21 != 0xF) {
        func_8035C048();
    }
}

#define func_80221720 func_80221720__func_80221070
#define func_80222370 func_80222370__func_80221070
struct func_80221720_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
void func_80221720(struct func_80221720_Actor *arg0, s32 arg1);
void func_80222370(s32 arg0, s32 arg1);

struct func_80221070_StructR {
    u8 pad0[4];
    u16 unk4;
    u16 unk6;
    f32 unk8;
};
struct func_80221070_StructP {
    u8 pad0[0x22];
    u16 unk22;
    f32 unk24;
};
struct func_80221070_StructM {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80221070_StructA {
    u8 pad0[0x5C];
    struct func_80221070_StructP *unk5C;
};
struct func_80221070_StructB {
    u8 pad0[0x2C];
    struct func_80221070_StructM *unk2C;
};
struct func_80221070_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 3;
            u32 t : 4;
            u32 p : 2;
            u32 m : 2;
            u32 n : 2;
            u32 rest : 19;
        } f;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x391 - 0x2FA];
    u8 unk391;
    u8 unk392;
    u8 unk393;
};


#define BYTE(o) (*(u8 *)((u8 *)p + (o)))
#define Q ((u8 *)a + 0x22)
typedef struct {
    u8 b7 : 1;
    u8 f : 2;
    u8 rest : 5;
} func_80221070_StructB31;
#define B31 (*(func_80221070_StructB31 *)((u8 *)p + 0x31))

void func_80221070(s32 arg0, struct func_80221070_StructB **arg1) {
    struct func_80221070_StructS *p;
    struct func_80221070_StructP *a;
    struct func_80221070_StructR *v;
    struct func_80221070_StructM *m;
    u8 t;
    s16 sp34;

    if (arg0 == D_801BBBF0.unkDC) {
        p = (void *)&D_801BC03C;
    } else {
        p = (void *)&D_801BC3D8;
    }
    a = ((struct func_80221070_StructA *)arg0)->unk5C;
    v = (void *)((u8 *)a + 0x1C);
    m = (*arg1)->unk2C;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (p->u30.f.t == 1 || p->unk2D8 == 0x14) {
            func_800058DC(arg0, (void *)func_80222370);
            return;
        }
        if (p->u30.f.t == 4) {
            BYTE(0x30) = BYTE(0x30) & 0xFF7F;
            BYTE(0x30) = BYTE(0x30) & 0xFE;
            BYTE(0x31) = BYTE(0x31) & 0xFF7F;
            BYTE(0x38) = BYTE(0x38) & 0xFF7F;
            BYTE(0x38) = BYTE(0x38) & 0xEF;
            BYTE(0x38) = BYTE(0x38) & 0x9F;
            p->unk2F1 = 0;
            p->unk391 = 0;
            p->unk393 = 0;
            if (p->u30.f.n != 0) {
                func_800058DC(arg0, func_80366278);
                return;
            }
            func_80366B30(arg0, (s32)arg1);
            return;
        }
        func_802237B0(arg0, 1);
        func_80011258((s32)arg1, Q);
        func_800113D0((s32)arg1, Q);
        if (p->u30.f.m == 0) {
            B31.f = p->unk2F9 + 2;
        }
        t = D_8022560C(a);
        if (t == 0) {
            func_800058DC(arg0, (void *)func_80221720);
            return;
        }
        if ((t == 0xA && !(v->unk4 < func_80011590((u32)(v->unk8 * 5.0f) & 0xFFFF)))
            || (t == 0xC && !(v->unk4 < func_80011590((u32)(v->unk8 * 8.0f) & 0xFFFF)))
            || (t == 0xB && !(v->unk4 < func_80011590((u32)(v->unk8 * 8.0f) & 0xFFFF)))) {
            if (v->unk6 & 0x10) {
                B31.f = 2;
            } else {
                B31.f = 3;
            }
        }
        if (t == 9 || t == 8 || t == 7) {
            func_800112B0((s32)arg1, Q, p, t);
        }
        if (func_80010550((s32)arg1, (s32)a) != 0) {
            sp34 = 0;
            if (t == 6) {
                sp34 = 0x1000;
                p->u30.f.m ^= 1;
            } else if (t == 4) {
                sp34 = (a->unk22 & 0x10) ? 0x800 : 0x1800;
            } else if (t == 5) {
                sp34 = (a->unk22 & 0x10) ? 0x1800 : 0x800;
            } else if (t == 0xA || t == 0xC || t == 0xB) {
                if (a->unk22 & 0x10) {
                    p->u30.f.m = 2;
                } else {
                    p->u30.f.m = 3;
                }
            } else if (t == 9 || t == 8 || t == 7) {
                if (a->unk22 & 0x10) {
                    p->u30.f.m = 3;
                } else {
                    p->u30.f.m = 2;
                }
            }
            m->unk12 = m->unk12 + sp34;
            m->unk12 = m->unk12 & 0x1FFF;
            if (sp34 != 0) {
                struct func_8021E52C_Struct sp28;
                func_802256E4(&sp28, arg0, 0);
                func_8013A28C((s32)arg1, sp28);
                func_80010550((s32)arg1, (s32)a);
            }
            func_80224E00(arg0, sp34);
            func_80011198((s32)arg1, a);
            func_800058DC(arg0, (void *)func_80221720);
        }
    }
}
#undef func_80221720
#undef func_80222370

#define func_802218D4 func_802218D4__func_80221720
#define func_80222708 func_80222708__func_80221720

extern void func_80222708();
struct func_802218D4_Obj;
void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1);



#undef func_802218D4
#undef func_80222708
#define D_801BBBF0 D_801BBBF0__func_80221720_82f22e08
#define D_801BC03C D_801BC03C__func_80221720_82f22e08
#define D_801BC3D8 D_801BC3D8__func_80221720_82f22e08
#define func_80011140 func_80011140__func_80221720_82f22e08
#define func_8021E52C_Struct func_8021E52C_Struct__func_80221720_82f22e08
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_80221720_82f22e08
#define func_80220F60_Struct func_80220F60_Struct__func_80221720_82f22e08
#define func_80221720_Actor func_80221720_Actor__func_80221720_82f22e08
#define func_80221720_Struct func_80221720_Struct__func_80221720_82f22e08
#define func_802218D4 func_802218D4__func_80221720_82f22e08
#define func_802218D4_Obj func_802218D4_Obj__func_80221720_82f22e08
#define func_802219F8 func_802219F8__func_80221720_82f22e08
#define func_80221E9C func_80221E9C__func_80221720_82f22e08
#define func_80222708 func_80222708__func_80221720_82f22e08
#define func_802256E4 func_802256E4__func_80221720_82f22e08
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80221720_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};
struct func_802218D4_Obj {
    u8 pad0[0x36];
    u16 unk36;
};
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);
extern void func_802219F8();
extern void func_80221E9C();
extern void func_80222708();
struct func_802218D4_Obj;
void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1);
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);

void func_80221720(struct func_80221720_Actor *arg0, s32 arg1) {
    s32 sp44;
    struct func_80221720_Struct *v1;
    u16 detectionResult;
    u8 t0;
    struct func_8021E52C_Struct sp30;

    sp44 = arg0->unk5C;
    if ((s32)arg0 == D_801BBBF0.unkDC) {
        v1 = (struct func_80221720_Struct *)&D_801BC03C;
    } else {
        v1 = (struct func_80221720_Struct *)&D_801BC3D8;
    }
    v1->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (v1->unk2D8 == 0xE) {
            t0 = 0;
        } else {
            detectionResult = func_80224AC4((s32)arg0, 0);
            t0 = detectionResult;
        }
        if (v1->u30.b.f == 0) {
            v1->u30.b.f = v1->unk2F9 + 2;
        }
        func_802256E4(&sp30, (s32)arg0, 0);
        if (func_80011140(arg1, sp44, sp30, 3) != 0) {
            if (t0 == 0) {
                if (v1->unk2D8 == 0xE) {
                    func_800058DC((s32)arg0, func_802219F8);
                } else if (v1->unk2D8 == 0xF) {
                    func_803628B8((s32)arg0, arg1);
                } else if (v1->unk2D8 == 0xD) {
                    func_800058DC((s32)arg0, func_80221E9C);
                } else {
                    func_800058DC((s32)arg0, func_80222708);
                }
            } else {
                func_80224BEC((s32)arg0, arg1);
                func_800058DC((s32)arg0, func_802218D4);
            }
        }
    }
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_80011140
#undef func_8021E52C_Struct
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80221720_Actor
#undef func_80221720_Struct
#undef func_802218D4
#undef func_802218D4_Obj
#undef func_802219F8
#undef func_80221E9C
#undef func_80222708
#undef func_802256E4
#define func_802218D4 func_802218D4__func_80221720
#define func_80222708 func_80222708__func_80221720
#undef func_802218D4
#undef func_80222708

#define func_80222708 func_80222708__func_802218D4

struct func_802218D4_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};

struct func_802218D4_Obj {
    u8 pad0[0x36];
    u16 unk36;
};

extern void func_80222708();

void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1) {
    extern s32 func_80224F5C();
    struct func_802218D4_Struct *v1;
    u32 a0;
    u32 t;

    if ((s32) arg0 == D_801BBCCC) {
        v1 = (struct func_802218D4_Struct *) &D_801BC03C;
    } else {
        v1 = (struct func_802218D4_Struct *) &D_801BC3D8;
    }
    v1->unk392 = 0;
    if (arg0->unk36 == 0x11D) {
        a0 = 0;
    } else {
        a0 = func_80224F5C(arg0, arg1) & 0xFFFF;
    }
    if (a0 == 0) {
        t = v1->unk2D8;
        if (t == 0xE) {
            func_800058DC((s32) arg0, func_802219F8);
            return;
        }
        if (t == 0xF) {
            func_803628B8((s32) arg0, arg1);
            return;
        }
        if (t == 0xD) {
            func_800058DC((s32) arg0, func_80221E9C);
            return;
        }
        if (((v1->u30.w << 9) >> 30) == 0) {
            v1->u30.b.f = v1->unk2F9 + 2;
        }
        func_800058DC((s32) arg0, func_80222708);
    }
}
#undef func_80222708

#define B_802256E4 B_802256E4__func_802219F8
#define D_800058DC D_800058DC__func_802219F8
#define D_801BBBF0 D_801BBBF0__func_802219F8
#define D_801BC03C D_801BC03C__func_802219F8
#define D_801BC3D8 D_801BC3D8__func_802219F8
#define D_8023C280 D_8023C280__func_802219F8
#define func_80011140 func_80011140__func_802219F8
#define func_8021E52C_Struct func_8021E52C_Struct__func_802219F8
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_802219F8
#define func_80220F60_Struct func_80220F60_Struct__func_802219F8
#define func_80221BA8 func_80221BA8__func_802219F8
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);


struct func_802219F8_Actor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
};
extern u8 D_8023C280[];
void func_80221BA8(s32 arg0, s32 arg1);
extern void D_800058DC(s32, void *, void *);
extern void B_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2, u8 arg3);

void func_802219F8(s32 arg0, s32 arg1) {
    struct func_8021F9C8_Struct *p;
    struct func_8021F9C8_Struct *other;
    s32 data;
    struct func_8021E52C_Struct vec;
    u8 dir;
    u8 value;
    u8 raw;
    s32 pad[2];

    p = (arg0 == D_801BBBF0.unkDC) ? &D_801BC03C : &D_801BC3D8;
    other = (arg0 != D_801BBBF0.unkDC) ? &D_801BC03C : &D_801BC3D8;
    data = ((struct func_802219F8_Actor *)arg0)->unk5C;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 15) {
        if (!(*(u8 *)&other->unk30 & 1)) {
            D_800058DC(arg0, func_80222370, &D_801BBBF0);
            return;
        }
        value = ((u8 *)p)[0x2D9];
        if (value >= 8) {
            raw = value & 7;
            ((u8 *)p)[0x2D9] = raw;
            value = ((u8 *)p)[0x2D9];
        }
        dir = value;
        if ((*(u32 *)&p->unk30 << 9 >> 30) == 3) {
            dir = (8 - value) & 7;
        }
        if (((struct func_802219F8_Actor *)arg0)->unk36 == 0x11D) {
            B_802256E4(&vec, arg0, 0x20, dir);
            if (dir >= 5) {
                ((u16 *)&vec)[3] |= 0x10;
            }
        } else {
            B_802256E4(&vec, arg0, D_8023C280[dir], dir);
        }
        if (func_80011140(arg1, data, vec, 1)) {
            p->unk32 = (p->unk32 & 0xFF1F) | 0x20;
            func_800058DC(arg0, func_80221BA8);
        }
    }
}
#undef B_802256E4
#undef D_800058DC
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_8023C280
#undef func_80011140
#undef func_8021E52C_Struct
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80221BA8

#define func_80222B08 func_80222B08__func_80221BA8

extern void func_80222B08();

struct func_80221BA8_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u8 b0;
            u8 top : 1;
            u8 mode : 2;
            u8 low : 5;
        } b;
    } flags;
    u8 pad34[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2FA[0x392 - 0x2FA];
    u8 unk392;
};

void func_80221BA8(s32 arg0, s32 arg1) {
    s32 temp;
    struct func_80221BA8_Struct *p;

    temp = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        p = (struct func_80221BA8_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80221BA8_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, temp)) {
            if (p->unk2 <= 0 || p->flags.f.b != 0) {
                func_800058DC(arg0, func_80222B08);
                return;
            }
            if (p->flags.f.c == 0) {
                p->flags.b.mode = p->unk2F9 + 2;
            }
            func_800058DC(arg0, func_80222708);
        }
    }
}
#undef func_80222B08

#define D_801BC03C D_801BC03C__func_80221CA0
#define D_801BC3D8 D_801BC3D8__func_80221CA0
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_80221CA0
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;


struct func_80221CA0_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2[0x392 - 0x2DA];
    u8 unk392;
};

#define PC03C ((struct func_80221CA0_Struct *)&D_801BC03C)
#define PC3D8 ((struct func_80221CA0_Struct *)&D_801BC3D8)

void func_80221CA0(s32 arg0) {
    struct func_80221CA0_Struct *p1;
    struct func_80221CA0_Struct *p0;
    s32 var_a0;
    s32 var_v0;
    s32 var_a1;
    u8 x;

    if (arg0 == D_801BBCCC) {
        p1 = PC03C;
    } else {
        p1 = PC3D8;
    }
    if (arg0 != D_801BBCCC) {
        p0 = PC03C;
    } else {
        p0 = PC3D8;
    }
    p1->unk392 = 0;
    x = p0->unk2D8;
    if ((x == 0) || (x == 1) || (x == 0xF) || (x == 9) || (x == 0xA)) {
        switch (p0->unk2D9) {
        case 0x52:
            var_a0 = 0;
            if (p0->u30.b.f == 3) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            break;
        case 0x23:
            var_a0 = 2;
            if (p0->u30.b.f == 3) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            break;
        case 0x24:
            var_a0 = 1;
            if (p0->u30.b.f == 3) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            break;
        case 0xF:
        case 0x20:
            var_a0 = 0;
            var_v0 = 0;
            break;
        case 0x11:
            var_a0 = 1;
            var_v0 = 0;
            break;
        case 0x13:
        case 0x19:
        case 0x1F:
            var_a0 = 2;
            var_v0 = 0;
            break;
        case 0xE:
        case 0x21:
            var_a0 = 0;
            var_v0 = 1;
            break;
        case 0x10:
            var_a0 = 1;
            var_v0 = 1;
            break;
        case 0x12:
        case 0x18:
        case 0x1E:
            var_a0 = 2;
            var_v0 = 1;
            break;
        case 0x0:
        case 0x1:
        case 0x2:
        case 0x3:
        case 0x4:
        case 0x5:
        case 0x6:
        case 0x7:
        case 0x14:
        case 0x15:
        case 0x1A:
        case 0x1B:
        case 0x54:
            var_a0 = 0;
            var_v0 = 2;
            break;
        case 0x55:
        default:
            var_a0 = 1;
            var_v0 = 2;
            break;
        }
        var_a1 = var_v0;
        if (var_v0 < 2) {
            var_v0 ^= 1;
            if (p1->u30.b.f == 3) {
                var_a1 = var_v0 & 0xFF;
            }
        }
        p1->unk2D9 = (u32)&((u8 (*)[3])0)[var_a1][var_a0];
        return;
    }
    p1->unk2D9 = 7;
}
#undef PC03C
#undef PC3D8
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021F9C8_Struct

#define D_801BBBF0 D_801BBBF0__func_80221E9C
#define D_801BC03C D_801BC03C__func_80221E9C
#define D_801BC3D8 D_801BC3D8__func_80221E9C
#define func_80011140 func_80011140__func_80221E9C
#define func_8021DC6C_Struct func_8021DC6C_Struct__func_80221E9C
#define func_8021E52C_Struct func_8021E52C_Struct__func_80221E9C
#define func_8021E59C_Player func_8021E59C_Player__func_80221E9C
#define func_8021F9C8_Actor func_8021F9C8_Actor__func_80221E9C
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_80221E9C
#define func_80220F60_Struct func_80220F60_Struct__func_80221E9C
#define func_80221070_StructS func_80221070_StructS__func_80221E9C
#define func_80221720_Struct func_80221720_Struct__func_80221E9C
#define func_80221FF0 func_80221FF0__func_80221E9C
#define func_802256E4 func_802256E4__func_80221E9C
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
struct func_8021DC6C_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x28];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u8 b0;
            u8 x1 : 1;
            u8 c : 2;
            u8 r1 : 5;
            u8 d : 3;
            u8 r2 : 5;
        } g;
    } unk30;
    u8 pad34[0x38 - 0x34];
    union {
        u8 v;
        struct {
            u8 top : 1;
            u8 r : 7;
        } g;
    } unk38;
    u8 pad39[0x312 - 0x39];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};
typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x6 - 0x4];
    s16 unk6;
    u8 pad8[0xA - 0x8];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 pad13 : 19;
        } f;
        struct {
            u16 pad0 : 13;
            u16 e : 3;
            u8 b2;
            u8 top : 1;
            u8 pad1 : 7;
        } g;
    } unk30;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 pad391[0x3A8 - 0x391];
    f32 unk3A8;
} func_8021E59C_Player;
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
struct func_80221070_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 3;
            u32 t : 4;
            u32 p : 2;
            u32 m : 2;
            u32 n : 2;
            u32 rest : 19;
        } f;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x391 - 0x2FA];
    u8 unk391;
    u8 unk392;
    u8 unk393;
};
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);


void func_80221FF0(s32 arg0, s32 arg1);

void func_80221E9C(s32 arg0, s32 arg1) {
    struct func_80221070_StructS *p;
    struct func_8021F9C8_Struct *q;
    s32 sp3C;
    s32 pad;
    struct func_8021E52C_Struct sp2C;

    p = (struct func_80221070_StructS *)(arg0 == D_801BBBF0.unkDC ? &D_801BC03C : &D_801BC3D8);
    q = arg0 != D_801BBBF0.unkDC ? &D_801BC03C : &D_801BC3D8;
    sp3C = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (!(((struct func_8021DC6C_Struct *)q)->unk30.b[0] & 1)) {
            func_800058DC(arg0, func_80222370);
            return;
        }
        p->unk2F1 = 0;
        *(u8 *)((u8 *)p + 0x365) = 0;
        *(f32 *)((u8 *)p + 0x370) = 0.0f;
        *(f32 *)((u8 *)p + 0x36C) = 0.0f;
        *(f32 *)((u8 *)p + 0x368) = 0.0f;
        if (((func_8021E59C_Player *)p)->unk30.f.c == 0) {
            ((struct func_80221720_Struct *)p)->u30.b.f = p->unk2F9 + 2;
        }
        func_802256E4(&sp2C, arg0, 0);
        if (func_80011140(arg1, sp3C, sp2C, 3) != 0) {
            func_80221CA0(arg0);
            func_800058DC(arg0, func_80221FF0);
        }
    }
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_80011140
#undef func_8021DC6C_Struct
#undef func_8021E52C_Struct
#undef func_8021E59C_Player
#undef func_8021F9C8_Actor
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80221070_StructS
#undef func_80221720_Struct
#undef func_80221FF0
#undef func_802256E4


struct func_80221FF0_Tbl {
    s32 w[8];
};
extern struct func_80221FF0_Tbl D_8023C29C;
extern struct func_8021E52C_Struct D_80225664(s32, s32);

void func_80221FF0(s32 arg0, s32 arg1) {
    u8 *v1;
    u8 *v0;
    s32 sp64;
    s32 pad60;
    f32 f;
    struct func_80221FF0_Tbl sp3C;

    if (arg0 == DEV_8021DC6C.unkDC) {
        v1 = (u8 *)&D_801BC03C;
    } else {
        v1 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != DEV_8021DC6C.unkDC) {
        v0 = (u8 *)&D_801BC03C;
    } else {
        v0 = (u8 *)&D_801BC3D8;
    }
    sp64 = ((struct func_80221720_Actor *)arg0)->unk5C;
    f = *(f32 *)(v1 + 0x10);
    sp3C = D_8023C29C;
    v1[0x392] = 0;
    if (DEV_8021DC6C.unk1031 != 0xF) {
        if (!(v0[0x30] & 1)) {
            func_800058DC(arg0, (void *)func_80222370);
            return;
        }
        v0 = *(u8 **)(*(s32 *)(arg1 + 4) + 0x2C);
        if (3.0f * f <= *(f32 *)(v0 + 0x50)) {
            v1[0x2F1] = 1;
        }
        if (func_80011140(arg1, sp64, D_80225664(arg0, sp3C.w[v1[0x2D9]]), (u32)(7.0f * f))) {
            func_800058DC(arg0, (void *)func_80222210);
        }
    }
}

#define f f__func_80222210
#define func_8021DC6C_Struct func_8021DC6C_Struct__func_80222210
#define func_80221720_Struct func_80221720_Struct__func_80222210
#define func_80222450_Struct func_80222450_Struct__func_80222210
#define func_80222CFC_Bits func_80222CFC_Bits__func_80222210
#define func_80225540 func_80225540__func_80222210
#define func_80367460 func_80367460__func_80222210
#define u30 u30__func_80222210
struct func_80222450_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        u16 h;
        u8 b0;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 nib : 4;
            u32 p7 : 2;
            u32 c : 2;
            u32 p11 : 16;
            u32 x : 2;
            u32 rest : 3;
        } f;
    } u30;
    u8 unk34[0x2F1 - 0x34];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x328 - 0x2FA];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 unk391;
    u8 unk392;
    u8 unk393;
};
struct func_80222CFC_Bits {
    u8 pad0[0x30];
    struct {
        u8 a : 1;
        u8 b : 2;
        u8 pad : 4;
        u8 c : 1;
    } f;
};
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};
typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 p3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 p13 : 14;
            u32 e : 2;
            u32 p29 : 3;
        } f;
        struct {
            u16 p : 13;
            u16 st : 3;
        } h;
        struct {
            u8 b30_7 : 1;
            u8 b30_m : 6;
            u8 b30_0 : 1;
            u8 b31_7 : 1;
            u8 b31_f : 2;
            u8 b31_r : 5;
            u8 b32_d : 3;
            u8 b32_4 : 1;
            u8 b32_m : 2;
            u8 b32_lo : 2;
            u8 b33_7 : 1;
            u8 b33_x : 2;
            u8 b33_y : 2;
            u8 b33_r : 3;
        } b;
    } u30;
    u8 pad34[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2FA[0x390 - 0x2FA];
    u8 unk390;
    u8 unk391;
    u8 unk392;
} func_802227A4_Struct;
struct func_8021DC6C_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x28];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u8 b0;
            u8 x1 : 1;
            u8 c : 2;
            u8 r1 : 5;
            u8 d : 3;
            u8 r2 : 5;
        } g;
    } unk30;
    u8 pad34[0x38 - 0x34];
    union {
        u8 v;
        struct {
            u8 top : 1;
            u8 r : 7;
        } g;
    } unk38;
    u8 pad39[0x312 - 0x39];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};

typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u8 b0;
            u8 top : 1;
            u8 mode : 2;
            u8 low : 5;
            u8 d : 3;
            u8 r : 5;
        } b;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x375 - 0x2FA];
    u8 unk375;
    u8 pad376[0x392 - 0x376];
    u8 unk392;
} func_80222210_Struct;
extern void func_80225540(s32);
extern void func_80367460(s32, s32, void *);

#undef func_80225540
#undef func_80367460
#define D_801BBBF0 D_801BBBF0__func_80222210_b3061e54
#define D_801BC03C D_801BC03C__func_80222210_b3061e54
#define D_801BC3D8 D_801BC3D8__func_80222210_b3061e54
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_80222210_b3061e54
#define func_80220F60_Struct func_80220F60_Struct__func_80222210_b3061e54
#define func_80222210_Struct func_80222210_Struct__func_80222210_b3061e54
#define func_80222B08 func_80222B08__func_80222210_b3061e54
#define func_80225540 func_80225540__func_80222210_b3061e54
#define func_80367460 func_80367460__func_80222210_b3061e54
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_80222B08();


typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u8 b0;
            u8 top : 1;
            u8 mode : 2;
            u8 low : 5;
            u8 d : 3;
            u8 r : 5;
        } b;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x375 - 0x2FA];
    u8 unk375;
    u8 pad376[0x392 - 0x376];
    u8 unk392;
} func_80222210_Struct;
extern void func_80225540(s32);
extern void func_80367460(s32, s32, void *);

void func_80222210(s32 arg0, s32 arg1) {
    s32 id;
    func_80222210_Struct *p;
    func_80222210_Struct *q;
    s32 kind;

    id = D_801BBBF0.unkDC;
    p = (arg0 == id) ? (func_80222210_Struct *)&D_801BC03C : (func_80222210_Struct *)&D_801BC3D8;
    q = (arg0 != id) ? (func_80222210_Struct *)&D_801BC03C : (func_80222210_Struct *)&D_801BC3D8;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        p->u30.b.d = 0;
        if (p->unk2 <= 0 || p->u30.f.b != 0) {
            func_800058DC(arg0, func_80222B08);
        }
        func_80367460(arg0, arg1, q);
        kind = q->unk2D8;
        if (kind == 9 || kind == 10) {
            if (q->unk375 <= 0) {
                return;
            }
            p->unk2F1 = 0;
        } else if (q->u30.b.b0 & 1) {
            return;
        }
        func_80225540(arg0);
        if (p->u30.f.c == 0) {
            p->u30.b.mode = p->unk2F9 + 2;
        }
        func_800058DC(arg0, func_80222370);
    }
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80222210_Struct
#undef func_80222B08
#undef func_80225540
#undef func_80367460
#define func_80225540 func_80225540__func_80222210
#define func_80367460 func_80367460__func_80222210
#undef f
#undef func_8021DC6C_Struct
#undef func_80221720_Struct
#undef func_80222450_Struct
#undef func_80222CFC_Bits
#undef func_80225540
#undef func_80367460
#undef u30

#define func_80222B08 func_80222B08__func_80222370

extern void func_80222B08();

void func_80222370(s32 arg0, s32 arg1) {
    s32 data;
    struct func_8021F9C8_Struct *player;

    data = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        player = &D_801BC03C;
    } else {
        player = &D_801BC3D8;
    }
    player->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_80011258(arg1, data + 0x22);
        func_800113D0(arg1, data + 0x22);
        if (func_80010550(arg1, data) != 0) {
            if (player->unk2 <= 0 || ((*(u32 *)&player->unk30 << 1) >> 30) != 0) {
                func_800058DC(arg0, func_80222B08);
                return;
            }
            func_800058DC(arg0, func_80222708);
        }
    }
}
#undef func_80222B08


struct func_80222450_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        u16 h;
        u8 b0;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 nib : 4;
            u32 p7 : 2;
            u32 c : 2;
            u32 p11 : 16;
            u32 x : 2;
            u32 rest : 3;
        } f;
    } u30;
    u8 unk34[0x2F1 - 0x34];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x328 - 0x2FA];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 unk391;
    u8 unk392;
    u8 unk393;
};
struct func_80222450_Actor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
};

void func_80222450(s32 arg0, s32 arg1, u16 arg2) {
    s32 sp44;
    struct func_80222450_Struct *v1;
    struct func_80222450_Struct *a2;
    struct func_8021E52C_Struct sp30;
    u32 t;

    sp44 = ((struct func_80222450_Actor *)arg0)->unk5C;
    v1 = (arg0 == D_801BBBF0.unkDC) ? (struct func_80222450_Struct *)&D_801BC03C : (struct func_80222450_Struct *)&D_801BC3D8;
    a2 = (arg0 != D_801BBBF0.unkDC) ? (struct func_80222450_Struct *)&D_801BC03C : (struct func_80222450_Struct *)&D_801BC3D8;
    v1->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        { extern void func_802237B0(); func_802237B0(arg0, 0, a2, &D_801BBBF0); }
        v1->unk2F1 = 0;
        ((u8 *)&v1->u30.w)[2] &= 0xFF1F;
        v1->unk391 = 0;
        v1->unk393 = 0;
        v1->unk328 = 0;
        if (v1->unk2 <= 0 || v1->u30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if ((v1->u30.h & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        t = v1->u30.f.nib;
        if (t == 4 && a2->unk2 > 0 && a2->u30.f.b == 0) {
            func_80366B30(arg0, arg1);
            return;
        }
        if (t == 1 && a2->unk2 > 0 && a2->u30.f.b == 0) {
            func_803667C4(arg0, arg1);
            return;
        }
        if (t == 2) {
            v1->u30.b0 &= 0xFFE1;
        }
        if (v1->u30.f.c == 0) {
            v1->u30.f.c = v1->unk2F9 + 2;
        }
        func_802256E4(&sp30, arg0, 0);
        if (((struct func_80222450_Actor *)arg0)->unk36 == 0x11D && v1->u30.f.x != 0 && v1->unk390 == 2) {
            sp30.unk0 = 0x0191009E;
        }
        if (func_80011140(arg1, sp44, sp30, arg2) != 0) {
            func_8013C7F8(arg0, arg1, 0);
            if (((struct func_80222450_Actor *)arg0)->unk36 != 0x11D) {
                func_8013C6FC(arg0, arg1, 1);
            }
            func_800058DC(arg0, (void *)func_802227A4);
        }
        v1->unk392 = 0;
    }
}


struct func_80222708_Struct {
    u8 pad0[0x30];
    u8 b30_7 : 1;
    u8 b30_m : 6;
    u8 b30_0 : 1;
    u8 b31_7 : 1;
    u8 b31_r : 7;
    u8 pad32[6];
    u8 b38_7 : 1;
    u8 b38_56 : 2;
    u8 b38_4 : 1;
    u8 b38_r : 4;
};

void func_80222708(s32 arg0, s32 arg1) {
    struct func_80222708_Struct *p;

    if (arg0 == D_801BBCCC) {
        p = (struct func_80222708_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80222708_Struct *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    p->b30_7 = 0;
    p->b30_0 = 0;
    p->b31_7 = 0;
    p->b38_7 = 0;
    p->b38_4 = 0;
    p->b38_56 = 0;
    func_80222450(arg0, arg1, 6);
}

#define D_80226710 D_80226710__func_802227A4
#define f f__func_802227A4
#define func_802227A4_Struct func_802227A4_Struct__func_802227A4
#define func_80222CFC_Bits func_80222CFC_Bits__func_802227A4
#define func_8036F528 func_8036F528__func_802227A4
struct func_80222CFC_Bits {
    u8 pad0[0x30];
    struct {
        u8 a : 1;
        u8 b : 2;
        u8 pad : 4;
        u8 c : 1;
    } f;
};

typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 p3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 p13 : 14;
            u32 e : 2;
            u32 p29 : 3;
        } f;
        struct {
            u16 p : 13;
            u16 st : 3;
        } h;
        struct {
            u8 b30_7 : 1;
            u8 b30_m : 6;
            u8 b30_0 : 1;
            u8 b31_7 : 1;
            u8 b31_f : 2;
            u8 b31_r : 5;
            u8 b32_d : 3;
            u8 b32_4 : 1;
            u8 b32_m : 2;
            u8 b32_lo : 2;
            u8 b33_7 : 1;
            u8 b33_x : 2;
            u8 b33_y : 2;
            u8 b33_r : 3;
        } b;
    } u30;
    u8 pad34[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2FA[0x390 - 0x2FA];
    u8 unk390;
    u8 unk391;
    u8 unk392;
} func_802227A4_Struct;

typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
} func_802227A4_Actor;
extern void func_8036F528(s32, s32);
extern void D_80226710(s32, u16, f32);

void func_802227A4(s32 arg0, s32 arg1) {
    s32 sp24;
    func_802227A4_Struct *p;
    func_802227A4_Struct *q;

    sp24 = ((func_802227A4_Actor *)arg0)->unk5C;
    if (arg0 == DEV->unkDC) {
        p = (func_802227A4_Struct *)&D_801BC03C;
    } else {
        p = (func_802227A4_Struct *)&D_801BC3D8;
    }
    if (arg0 != DEV->unkDC) {
        q = (func_802227A4_Struct *)&D_801BC03C;
    } else {
        q = (func_802227A4_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (p->u30.f.c == 0) {
        p->u30.b.b31_f = p->unk2F9 + 2;
    }
    p->u30.b.b30_7 = 0;
    p->u30.b.b31_7 = 0;
    p->u30.b.b30_0 = 0;
    p->u30.b.b32_d = 0;
    if (p->unk2 <= 0 || p->u30.f.b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DEV->unk1031 != 5 && q->unk2 > 0 && q->u30.f.b == 0) {
        return;
    }
    if (p->u30.f.e != 0) {
        if (((func_802227A4_Actor *)arg0)->unk36 == 0x11D && p->unk390 == 2) {
            p->u30.b.b33_y = 1;
        } else if (((func_802227A4_Actor *)arg0)->unk36 == 0x148 && p->unk390 == 5) {
            p->u30.b.b33_y = 0;
        } else {
            p->unk390 = 0;
            p->u30.b.b33_y = 0;
        }
    }
    if (p->u30.h.st == 5U) {
        func_8022397C(arg0);
        return;
    }
    if (p->u30.b.b32_lo != 0) {
        p->u30.b.b32_lo = 2;
        p->u30.b.b32_m = 0;
    }
    if (p->u30.f.e != 0 && ((func_802227A4_Actor *)arg0)->unk36 == 0x11D && p->unk390 == 2) {
        func_8036F528(arg0, arg1);
        return;
    }
    func_80010550(arg1, sp24);
    if (DEV->unk1031 >= 10 && DEV->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (p->u30.b.b33_7 == 1 && q->unk2 > 0 && q->u30.f.b == 0) {
        func_800058DC(arg0, func_8021DC6C);
        return;
    }
    if (((func_8021E59C_Struct3C *)sp24)->unk74 == 3 && ((func_802227A4_Actor *)arg0)->unk36 == 0x11B && q->u30.f.d != 0) {
        D_80226710(arg0, 0x509, 1.0f);
    }
    if (p->u30.f.c == 0) {
        p->u30.b.b31_f = p->unk2F9 + 2;
    }
    func_800058DC(arg0, func_8021E59C);
}
#undef D_80226710
#undef f
#undef func_802227A4_Struct
#undef func_80222CFC_Bits
#undef func_8036F528

#define func_80222C30 func_80222C30__func_80222B08
extern void func_80222C30();

typedef struct {
    u8 pad0[0x30];
    u8 a : 1;
    u8 b : 2;
    u8 pad30 : 4;
    u8 c : 1;
    u8 b31;
    u8 d : 3;
    u8 pad32 : 5;
} func_80222B08_Struct;

void func_80222B08(struct func_8021F9C8_Actor *arg0, s32 arg1) {
    s32 sp3C;
    func_80222B08_Struct *p;
    struct func_8021E52C_Struct sp2C;

    sp3C = arg0->unk5C;
    if ((s32)arg0 == ((struct func_8021F9C8_Dev *)&D_801BBBF0)->unkDC) {
        p = (func_80222B08_Struct *)&D_801BC03C;
    } else {
        p = (func_80222B08_Struct *)&D_801BC3D8;
    }
    sp2C = *(struct func_8021E52C_Struct *)D_8023C2BC;
    if (((struct func_8021F9C8_Dev *)&D_801BBBF0)->unk1031 != 0xF) {
        p->d = 0;
        p->b = 1;
        p->c = 1;
        p->a = 1;
        func_802237B0((s32)arg0, 1);
        func_800113D0(arg1, sp3C + 0x22);
        func_8013C6FC((s32)arg0, arg1, 0);
        if (func_80011140(arg1, sp3C, sp2C, 3) != 0) {
            func_800058DC((s32)arg0, func_80222C30);
        }
    }
}
#undef func_80222C30

#define func_80222CFC func_80222CFC__func_80222C30
struct func_80222C30_Actor { u8 pad0[0x1C]; struct func_8021E52C_Struct v; };
extern struct func_8021E52C_Struct D_8023C2C8;
struct func_8021F9C8_Actor;
void func_80222CFC(struct func_8021F9C8_Actor *arg0, s32 arg1);

void func_80222C30(s32 arg0, s32 arg1) {
    struct func_80222C30_Actor *p;
    u32 dev;
    struct func_8021E52C_Struct sp;
    struct func_8021E52C_Struct *q;
    extern s32 func_80010550();

    p = *(struct func_80222C30_Actor **)(arg0 + 0x5C);
    sp = D_8023C2C8;
    dev = (u32)&D_801BBBF0;
    if (dev >= 0 && ((func_8021E59C_Dev *)dev)->unk1031 != 0xF) {
        if (func_80010550(arg1, (s32)p * 1, p, arg0) != 0) {
            q = &p->v;
            *q = sp;
            func_8013A28C(arg1, *q);
            func_800058DC(arg0, func_80222CFC);
        }
    }
}
#undef func_80222CFC

struct func_80222CFC_Struct {
    u8 pad0[0x1C];
    s32 unk1C;
    u16 unk20;
    u8 pad22[2];
    f32 unk24;
};
struct func_80222CFC_Bits {
    u8 pad0[0x30];
    struct {
        u8 a : 1;
        u8 b : 2;
        u8 pad : 4;
        u8 c : 1;
    } f;
};


void func_80222CFC(struct func_8021F9C8_Actor *arg0, s32 arg1) {
    struct func_80222CFC_Struct *s0;
    struct func_80222CFC_Bits *v0;
    u16 sp26;
    s32 r;

    s0 = (struct func_80222CFC_Struct *)arg0->unk5C;
    if ((s32)arg0 == ((struct func_8021F9C8_Dev *)&D_801BBBF0)->unkDC) {
        v0 = (struct func_80222CFC_Bits *)&D_801BC03C;
    } else {
        v0 = (struct func_80222CFC_Bits *)&D_801BC3D8;
    }
    if (((struct func_8021F9C8_Dev *)&D_801BBBF0)->unk1031 != 0xF) {
        func_802237B0((s32)arg0, 1);
        v0->f.b = 1;
        v0->f.c = 1;
        v0->f.a = 1;
        sp26 = func_80010550(arg1, (s32)s0);
        if (s0->unk1C == 0x0190006F) {
            if (s0->unk20 == func_80011590((u32)(s0->unk24 * 6.0f) & 0xFFFF)) {
                func_803697AC((s32)arg0, arg1, 2);
            }
        }
        if (sp26 != 0) {
            func_800058DC((s32)arg0, (void *)func_80222E84);
        }
    }
}

#undef ACT
#define func_80222FCC func_80222FCC__func_80222E84
#define func_80222FD8 func_80222FD8__func_80222E84

struct func_8021F9C8_Actor;
void func_80222FCC(s32 arg0, s32 arg1);
void func_80222FD8(struct func_8021F9C8_Actor *arg0, s32 arg1);

typedef struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    s32 unkDC;
    u8 padE0[0xB9A - 0xE0];
    s16 unkB9A;
    u8 padB9C[0x1031 - 0xB9C];
    u8 unk1031;
} func_80222E84_Dev;

typedef struct {
    u8 pad0[0x74];
    u8 unk74;
} func_80222E84_Sub;

typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80222E84_Sub *unk5C;
} func_80222E84_Actor;

#define DV ((func_80222E84_Dev *)&D_801BBBF0)
#define ACT ((func_80222E84_Actor *)arg0)
#define P ((func_80222B08_Struct *)p)

#undef DV
#undef func_80222FCC
#undef func_80222FD8
#define D_801BBBF0 D_801BBBF0__func_80222E84_e30c7639
#define D_801BC03C D_801BC03C__func_80222E84_e30c7639
#define D_801BC3D8 D_801BC3D8__func_80222E84_e30c7639
#define func_8021F9C8_Actor func_8021F9C8_Actor__func_80222E84_e30c7639
#define func_8021F9C8_Struct func_8021F9C8_Struct__func_80222E84_e30c7639
#define func_80220F60_Struct func_80220F60_Struct__func_80222E84_e30c7639
#define func_80222B08_Struct func_80222B08_Struct__func_80222E84_e30c7639
#define func_80222FCC func_80222FCC__func_80222E84_e30c7639
#define func_80222FD8 func_80222FD8__func_80222E84_e30c7639
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
typedef struct {
    u8 pad0[0x30];
    u8 a : 1;
    u8 b : 2;
    u8 pad30 : 4;
    u8 c : 1;
    u8 b31;
    u8 d : 3;
    u8 pad32 : 5;
} func_80222B08_Struct;


void func_80222FCC(s32 arg0, s32 arg1);
void func_80222FD8(struct func_8021F9C8_Actor *arg0, s32 arg1);

typedef struct func_80222E84_StructDev {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    s32 unkDC;
    u8 padE0[0xB9A - 0xE0];
    s16 unkB9A;
    u8 padB9C[0x1031 - 0xB9C];
    u8 unk1031;
} func_80222E84_StructDev;

typedef struct func_80222E84_StructSub {
    u8 pad0[0x74];
    u8 unk74;
} func_80222E84_StructSub;

typedef struct func_80222E84_StructActor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80222E84_StructSub *unk5C;
} func_80222E84_StructActor;

#define DV ((func_80222E84_StructDev *)&D_801BBBF0)

void func_80222E84(func_80222E84_StructActor *arg0, s32 arg1) {
    s32 firstActor;
    func_80222E84_StructSub *sub;
    func_80222B08_Struct *p;

    sub = arg0->unk5C;
    firstActor = DV->unkDC;
    if ((s32)arg0 == firstActor) {
        p = (func_80222B08_Struct *)&D_801BC03C;
    } else {
        p = (func_80222B08_Struct *)&D_801BC3D8;
    }
    p->b = 1;
    p->c = 0;
    p->a = 1;
    if (DV->unk1031 == 0xF || DV->unk1031 < 0xA) {
        return;
    }
    func_802237B0((s32)arg0, 0);
    func_8013C6FC((s32)arg0, arg1, 0);
    func_8013B808((s32)arg0, arg1, 3);
    if (DV->unk2C != 0xA) {
        if (sub->unk74 == 3) {
            if (arg0->unk36 == 0x148 || arg0->unk36 == 0x11D || arg0->unk36 == 0x11E) {
                p->b = 3;
                func_800058DC((s32)arg0, func_80222FCC);
                return;
            }
            DV->unkB9A = 0;
            func_800058DC((s32)arg0, func_80222FD8);
            return;
        }
    }
    p->b = 3;
    func_800058DC((s32)arg0, func_80222FCC);
}
#undef DV
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8021F9C8_Actor
#undef func_8021F9C8_Struct
#undef func_80220F60_Struct
#undef func_80222B08_Struct
#undef func_80222FCC
#undef func_80222FD8
#define DV ((func_80222E84_Dev *)&D_801BBBF0)
#define func_80222FCC func_80222FCC__func_80222E84
#define func_80222FD8 func_80222FD8__func_80222E84
#undef DV
#undef ACT
#undef P
#undef func_80222FCC
#undef func_80222FD8
#define ACT ((struct func_8021DFA8_Actor *)arg0)


void func_80222FCC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

typedef struct {
    u8 pad0[0x30];
    u8 x : 1;
    u8 f : 2;
    u8 y : 5;
} func_80222FD8_Struct;

void func_80222FD8(struct func_8021F9C8_Actor *arg0, s32 arg1) {
    func_8021E59C_Dev *dev = DEV;
    u8 *a3;
    u8 *v0;
    u8 t;
    u16 h;
    s32 r;
    extern void func_802237B0();

    s32 dc = dev->unkDC;
    s32 p5c = arg0->unk5C;

    if ((s32)arg0 == dc) {
        a3 = (u8 *)&D_801BC03C;
    } else {
        a3 = (u8 *)&D_801BC3D8;
    }
    if ((s32)arg0 != dc) {
        v0 = (u8 *)&D_801BC03C;
    } else {
        v0 = (u8 *)&D_801BC3D8;
    }
    t = *(u16 *)(p5c + 0xE) & 0xFF;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_802237B0(arg0, 0, &D_801BBBF0, a3);
        if ((v0[0x30] & 1) != 1) {
            if (t == 0xF4 || t == 0xF5 || t == 0xF6) {
                r = func_8037FFF0(arg0);
            } else {
                r = func_80129554(arg0, 0xFF, 0x40, a3);
            }
            if (r & 0xFF) {
                ((func_80222FD8_Struct *)a3)->f = 3;
                if (*(s32 *)((u8 *)arg0 + 0x64) != 0) {
                    func_80005700(*(s32 *)((u8 *)arg0 + 0x64));
                    *(s32 *)((u8 *)arg0 + 0x64) = 0;
                }
                func_800058DC(arg0, func_80127014);
            }
        }
    }
}

#define func_8022321C func_8022321C__func_8022310C
#define func_80223260 func_80223260__func_8022310C

extern void func_80223260();
void func_8022321C(s32 arg0, s32 arg1);

struct func_8022310C_Var {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8022310C_Obj {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

#undef func_8022321C
#undef func_80223260
#define func_8021F9C8_Actor func_8021F9C8_Actor__func_8022310C_5c961c57
#define func_8022310C_Obj func_8022310C_Obj__func_8022310C_5c961c57
#define func_8022310C_Var func_8022310C_Var__func_8022310C_5c961c57
#define func_80223260 func_80223260__func_8022310C_5c961c57
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

extern void func_80223260();

struct func_8022310C_Var {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8022310C_Obj {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

void func_8022310C(s32 arg0, s32 arg1) {
    struct func_8022310C_Var *var_v1;
    struct func_8022310C_Obj *sp18;

    if (arg0 == D_801BBCCC) {
        var_v1 = (struct func_8022310C_Var *) &D_801BC03C;
    } else {
        var_v1 = (struct func_8022310C_Var *) &D_801BC3D8;
    }
    sp18 = (struct func_8022310C_Obj *) ((struct func_8021F9C8_Actor *) arg0)->unk5C;
    func_80011198(arg1, sp18);
    if (((u32) (var_v1->unk30 << 0xB) >> 0x1E) != 0) {
        func_802237B0(arg0, 1);
        if ((u32) (var_v1->unk30 << 0xB) >> 0x1E == 2) {
            sp18->unk7C = (void *) (func_80386420 + 0x60);
        } else if ((u32) (var_v1->unk30 << 0xB) >> 0x1E == 3) {
            sp18->unk7C = (void *) (func_80386420 + 0x50);
        } else {
            sp18->unk7C = (void *) (func_80386420 + 0x30);
        }
        sp18->unk80 = 2;
        func_800058DC(arg0, (void *) func_8022321C);
        return;
    }
    func_800058DC(arg0, (void *) func_80223260);
}
#undef func_8021F9C8_Actor
#undef func_8022310C_Obj
#undef func_8022310C_Var
#undef func_80223260
#define func_8022321C func_8022321C__func_8022310C
#define func_80223260 func_80223260__func_8022310C
#undef func_8022321C
#undef func_80223260

#define func_800058DC func_800058DC__func_8022321C
#define func_80223260 func_80223260__func_8022321C

extern void func_800058DC(s32, void *);
extern void func_80223260();

void func_8022321C(s32 arg0, s32 arg1) {
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_802237B0(arg0, 0);
        func_800058DC(arg0, func_80223260);
    }
}
#undef func_800058DC
#undef func_80223260

#define func_802233A4 func_802233A4__func_80223260
void func_802233A4(s32 arg0, s32 arg1);

void func_80223260(func_8021E59C_Actor *arg0, s32 arg1) {
    s32 sp34;
    struct func_8021E52C_Struct sp28;
    s32 t;

    sp34 = (s32)arg0->unk5C;
    if (D_801BBC1C == 0xA) {
        func_802408F0(arg0);
        return;
    }
    t = arg0->unk36;
    if (t == 0x29 || t == 0x2B || t == 0x11B || t == 0x11C || t == 0x31 || t == 0x2E || t == 0x57 || t == 0x58 || t == 0x59) {
        func_80225664(&sp28, arg0, 0x01680041);
    } else {
        func_802256E4(&sp28, (s32)arg0, 0);
    }
    if (func_80011140(arg1, sp34, sp28, 5) != 0) {
        func_8013A28C(arg1, sp28);
        func_80010550(arg1, sp34);
        func_800058DC((s32)arg0, func_802233A4);
    }
}
#undef func_802233A4


void func_802233A4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_802234F8 func_802234F8__func_802233B0
void func_802234F8(s32 arg0, s32 arg1);
s32 func_802233B0(s32 arg0, s32 arg1) {
    func_8021E59C_Struct3C *s;
    func_8021E59C_Player *p0;
    func_8021E59C_Player *p1;

    s = A->unk5C;
    if (arg0 == DEV->unkDC) {
        p0 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        p0 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (arg0 != DEV->unkDC) {
        p1 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        p1 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (DEV->unk1031 != 0xF) {
        p0->unk30.b[0] = (u16)((p0->unk30.b[0] & 0xFF9F) | 0x20);
        p0->unk30.b[0] = (u16)(p0->unk30.b[0] | 1);
        p0->unk30.b[0] |= 0x80;
        p0->unk30.b[2] &= 0xFF1F;
        p1->unk30.b[0] = (u16)(p1->unk30.b[0] & 0xFFFE);
        p1->unk30.b[0] |= 0x80;
        if (s->unk9C == 1 || s->unk9C == 2) {
            s->unk9C = 3;
        }
        func_802237B0(arg0, 1);
        func_800113D0(arg1, (u8 *)s + 0x22, s);
        func_8013C6FC(arg0, arg1, 0);
        func_8013B808(arg0, arg1, 2);
        if (A->unk36 == 0x11D) {
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_802234F8);
    }
}
#undef func_802234F8

#define func_8022359C func_8022359C__func_802234F8

struct func_802234F8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
extern struct func_8021E52C_Struct D_8023C2D4;
extern void func_8022359C();

void func_802234F8(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct func_8021E52C_Struct sp20;

    sp2C = ((struct func_802234F8_Actor *) arg0)->unk5C;
    sp20 = D_8023C2D4;
    if ((D_801BCC21 != 0xF) && (func_80011140(arg1, sp2C, sp20, 3) != 0)) {
        func_800058DC(arg0, &func_8022359C);
    }
}
#undef func_8022359C

struct func_8022359C_Struct {
    u8 pad0[0x20];
    u16 unk20;
    u8 pad22[2];
    f32 unk24;
};
void func_8022359C(s32 arg0, s32 arg1) {
    struct func_8022359C_Struct *s0;
    struct func_8021F9C8_Struct *s2;

    s0 = (struct func_8022359C_Struct *)((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == ((struct func_80220F60_Struct *)&D_801BBBF0)->unkDC) {
        s2 = &D_801BC03C;
    } else {
        s2 = &D_801BC3D8;
    }
    if (((struct func_80220F60_Struct *)&D_801BBBF0)->unk1031 != 0xF) {
        if (func_80011590((u16)(u32)(s0->unk24 * 6.0f)) == s0->unk20) {
            func_803697AC(arg0, arg1, 0);
        } else if (func_80011590((u16)(u32)(s0->unk24 * 18.0f)) == s0->unk20) {
            func_803697AC(arg0, arg1, 1);
        }
        if (func_80010550(arg1, (s32)s0) != 0) {
            *(u8 *)((u8 *)s2 + 0x30) = (u8)(*(u8 *)((u8 *)s2 + 0x30) & 0xFFFE);
            func_800058DC(arg0, func_80222E84);
        }
        s2->unk392 = 0;
    }
}

