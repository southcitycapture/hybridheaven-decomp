#include "common.h"

#define func_801D72CC func_801D72CC__func_801D7250

extern void func_8013B570(s32, s32, s32, s32, void *);
extern s32 D_801DBAD4;
extern s32 D_801DBAD8;
extern s32 D_801DBADC;
extern s32 D_801DBAE0;
extern s32 D_801DBAE4;
extern s32 D_801DBAE8;
extern s32 D_801DBAEC;
extern s32 D_801E17B0;
extern void func_801D72CC();

void func_801D7250(s32 arg0, s32 arg1) {
    D_801E17B0 = arg0;
    D_801DBAD4 = 0;
    D_801DBAD8 = 0;
    D_801DBADC = 1;
    D_801DBAE0 = 0;
    D_801DBAE4 = 0;
    D_801DBAE8 = 0;
    D_801DBAEC = 0;
    func_8013B570(arg0, 0x11D, 0, 4, func_801D72CC);
}
#undef func_801D72CC

#define func_801D7314 func_801D7314__func_801D72CC
/* starting point: func_801D8764 (file025), whose assembly is 100% the same as this function's */
struct func_801D72CC_Struct { u8 pad[0x24]; s32 unk24; };
extern void func_801D7314();
extern u8 D_801D72CC[];

void func_801D72CC(struct func_801D72CC_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D7314);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D72CC);
}
#undef func_801D7314

#define func_801D83AC func_801D83AC__func_801D7314
extern u8 D_8008DA88[];
extern u8 D_801E17B8;

struct func_801D7314_StructA { s32 a, b, c; };
struct func_801D7314_StructB { s32 a, b; f32 c; };
struct func_801D7314_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D7314_StructP { u8 pad[0x5C]; struct func_801D7314_StructQ *u5C; };
struct func_801D7314_StructC { u8 pad[0x5C]; struct func_801D7314_StructA v; };
struct func_801D7314_StructD { u8 pad[0x2C]; struct func_801D7314_StructC *u2C; };
struct func_801D7314_StructR { u8 pad[4]; struct func_801D7314_StructD *u4; };

extern s32 func_801CC540();
extern s32 func_800058DC();
void func_80006214(s32 arg0);
void func_801D83AC(s32 arg0);
extern struct func_801D7634_Struct D_801E17C8;
extern void func_8013A2E0(void *, struct func_801D7314_StructA);
extern s32 func_80011140();
extern s32 func_80010550();
extern u8 D_801BC025[];
extern u8 D_801D7314[];
extern struct func_801D7314_StructA *D_801DBAD4_p;

void func_801D7314(struct func_801D7314_StructP *arg0, struct func_801D7314_StructR *arg1) {
    struct func_801D7314_StructB *p;
    if (D_801DBAEC == 0) {
        if (func_801CC540() != 0) {
            func_800058DC(arg0, D_801D7314);
            return;
        }
        if (D_801DBAD4 != 0) {
            func_80006214((s32)arg0);
            func_8013A2E0(D_8008DA88, *(struct func_801D7314_StructA *)D_801DBAD4);
            p = (struct func_801D7314_StructB *)arg0->u5C;
            ((struct func_801D7314_StructQ *)p)->u76 = 1;
            D_801DBAD4 = 0;
        }
        p = (struct func_801D7314_StructB *)D_801DBAD8;
        if (p != 0) {
            if (func_80011140(arg1, arg0->u5C, *(struct func_801D7314_StructA *)p, (u32)p->c) != 0) {
                D_801DBAD8 = 0;
            }
        } else {
            if (func_80010550(arg1, arg0->u5C) != 0) {
                D_801DBADC = 1;
            } else {
                D_801DBADC = 0;
            }
            *(struct func_801D7314_StructA *)&D_801E17C8 = arg1->u4->u2C->v;
            *(struct func_801D7314_StructA *)&D_801E17B8 = *(struct func_801D7314_StructA *)(D_801BC025 + 3);
        }
        if (D_801DBAE0 != 0) {
            func_801D83AC((s32)arg0);
        }
    }
}
#undef func_801D83AC



s32 func_801D7530(void) {
    return D_801DBAD8 != 0;
}



s32 func_801D7540(void) {
    if (D_801DBAD8 != 0) {
        return 0;
    }
    if (D_801DBAD4 != 0) {
        return 0;
    }
    return D_801DBADC;
}


u8 *func_801D7580(void) {
    return &D_801E17B8;
}



void func_801D758C(s32 arg0) {
    D_801DBAE4 = arg0;
}



void func_801D7598(s32 arg0) {
    D_801DBAE8 = arg0;
}


void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801D75A4(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E17B0);
        func_801C3370(D_801E17B0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DBAE0 = 1;
        return;
    }
    D_801DBAE0 = 0;
}



s32 func_801D7624(void) {
    return D_801DBAE0 == 0;
}


struct func_801D7634_Struct {
    s32 unk0;
    u16 unk4;
};


s32 func_801D7634(s32 arg0, u16 arg1) {
    if (arg0 != D_801E17C8.unk0) {
        return 0;
    }
    return D_801E17C8.unk4 == arg1;
}

#define D_8008DA88 D_8008DA88__func_801D766C

typedef struct func_801D766C_StructState {
    u8 pad[0x24];
    s32 flags;
    u8 pad28[8];
    s32 address;
    u8 pad34[0x14];
    u8 r, g, b, a;
} func_801D766C_StructState;
typedef struct func_801D766C_StructObject {
    u8 pad[0x2C];
    func_801D766C_StructState *state;
} func_801D766C_StructObject;
typedef struct func_801D766C_StructList {
    u8 pad[4];
    s32 entries;
    u8 pad8[4];
    u16 count;
} func_801D766C_StructList;
typedef struct func_801D766C_StructRoot {
    u8 pad[0x5C];
    func_801D766C_StructList *list;
} func_801D766C_StructRoot;
extern func_801D766C_StructObject *D_8008DA88[];
extern u8 D_801D9360[];
extern u8 D_801D93B8[];
extern s32 D_801DBAF0;
extern f32 D_801E17D8[3];

void func_801D766C(f32 arg0, f32 arg1, f32 arg2)
{
  s32 *entry;
  s32 offset;
  func_801D766C_StructObject **object;
  func_801D766C_StructList *list;
  func_801D766C_StructState *state;
  D_801E17D8[0] = arg0;
  D_801E17D8[1] = arg1;
  D_801E17D8[2] = arg2;
 func_80006214(D_801E17B0); list = ((func_801D766C_StructRoot *) D_801E17B0)->list; offset = 4; object = (func_801D766C_StructObject **) list->entries; entry = ((s32 *) object) + 1; if (((s32) list->count) >= 2) { do { object = (func_801D766C_StructObject **) (((u8 *) D_8008DA88) + offset); if ((*entry) < 0) { } else { state = (*object)->state; state->flags = state->flags | 0x100; state = (*object)->state; if ((state->flags & 0xFF) == 0x15) {
          state->address = ((s32) D_801D9360) | 0x40000000;
        }
        else
        {
          state->address = ((s32) D_801D93B8) | 0x40000000;
        }
        (*object)->state->r = 0;
        (*object)->state->g = 0;
        (*object)->state->b = 0;
        (*object)->state->a = 0xFF;
      }
      offset += 4;
      entry++;
    }
    while (offset < (list->count * 4));
  }
  D_801DBAF0 = 0;
}
#undef D_8008DA88

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D7250/D_801DD5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D7250/func_801D7798.s")


extern s32 D_801DA138;

#define OBJ (*(func_801D766C_StructObject **)(D_8008DA88 + i * 4))

void func_801D82B8(u8 arg0) {
    s32 entries;
    s32 i;
    func_801D766C_StructList *list;

    func_80006214(D_801E17B0);
    list = ((func_801D766C_StructRoot *)D_801E17B0)->list;
    entries = list->entries;
    if (list->count < 2) {
        return;
    }
    i = 1;
    do {
        if (*(s32 *)(entries + i * 4) < 0) {
        } else {
            OBJ->state->flags |= 0x100;
            OBJ->state->address = (s32)&D_801DA138 | 0x40000000;
            OBJ->state->r = 0xFF;
            OBJ->state->g = 0xFF;
            OBJ->state->b = 0xFF;
            OBJ->state->a = arg0;
        }
        i++;
    } while (i * 4 < list->count * 4);
}
#undef OBJ

#define func_80006214 func_80006214__func_801D83AC

extern void func_80006214();
extern s32 func_801C354C(s32);

void func_801D83AC(s32 arg0) {
    func_80006214();
    D_801DBAE0 = func_801C354C(arg0) == 0;
}
#undef func_80006214

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D7250/func_801D83DC.s")


struct func_801D85D0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 pad0C[4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad1C[0xC];
    f32 unk28;
};

u16 func_8001EF38(f32, f32);

void func_801D85D0(u16 *arg0, u16 *arg1, u16 *arg2, f32 arg3, struct func_801D85D0_Struct *arg4) {
    *arg1 = func_8001EF38(-arg4->unk8, arg3);
    if (arg3 < 0.00100000005f) {
        if ((arg3 > 0.0f) || ((arg3 == 0.0f) && (*arg0 & 0x200))) {
            *arg0 = 0;
            *arg2 = func_8001EF38(-arg4->unk10, arg4->unk14);
            return;
        }
        *arg0 = 0x200;
        *arg2 = func_8001EF38(arg4->unk10, -arg4->unk14);
        return;
    }
    *arg0 = func_8001EF38(arg4->unk18 / arg3, arg4->unk28 / arg3);
    *arg2 = func_8001EF38(arg4->unk4 / arg3, arg4->unk0 / arg3);
}

