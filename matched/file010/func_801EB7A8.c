#include "common.h"
typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;
typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;
extern func_801E74DC_Outer *D_801BBCD0;
extern u16 D_801BCAE0;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216BCC;
extern void func_800113D0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
void func_801E4F60(u16 arg0);
typedef struct func_801E8BD0_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801E8BD0_Arg0;


typedef struct func_801EB7A8_Table {
    s32 unk0, unk4, unk8;
} func_801EB7A8_Table;
extern s32 func_80011140(s32, void *, func_801EB7A8_Table, s32);
typedef struct func_801EB7A8_StructAnim {
    s32 id;
    u16 frame, flags;
    f32 last;
} func_801EB7A8_StructAnim;
typedef struct func_801EB7A8_StructArg2 {
    u8 pad[0x1C];
    union { func_801E74DC_Sub s; func_801EB7A8_StructAnim a; } u;
} func_801EB7A8_StructArg2;
typedef struct func_801EB7A8_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad2[2];
    s16 angle;
} func_801EB7A8_StructPos;
typedef struct func_801EB7A8_StructObj {
    u8 pad[0x2C];
    func_801EB7A8_StructPos *pos;
} func_801EB7A8_StructObj;
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_8011AAF4(char *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, u32);
extern f64 D_802185C8;
extern f64 D_802185D0;
extern char D_80218248[];
extern f32 D_801BBF74;
extern u16 D_80216BFC;
extern func_801EB7A8_Table D_80216BD8;
#define POS (((func_801EB7A8_StructObj *)D_801BBCD0)->pos)
#define TIMER D_80216BFC

void func_801EB7A8(func_801E8BD0_Arg0 *arg0, s32 arg1, func_801EB7A8_StructArg2 *volatile arg2, u16 arg3) {
    s32 timer;
    f32 sp78, sp74, c, x, y;
    f32 z;
    s16 ang;
    s32 id;
    func_801E74DC_Sub *sub;
    arg0->unk48 = 0.0f;
    *(s32 *)&arg0->unk2C |= 0xA0;
    arg0->unk40 = 0.0f;
    id = arg2->u.a.id;
    switch (id) {
    case 0x1900018:
        if (arg3 != 0) {
            sub = &(*(func_801EB7A8_StructArg2 **)&arg2)->u.s;
            sub->unk0 = 0x1900074;
            ((func_801EB7A8_StructAnim *)sub)->frame = 0;
            ((func_801EB7A8_StructAnim *)sub)->flags = 0;
            sub->unk8 = 5.0f;
            func_8013A28C(arg1, *sub);
        }
        break;
    case 0x1900074:
        arg0->unk44 = 0.0f;
        *(s32 *)&arg0->unk2C &= ~0x40;
        if (func_8010843C(POS->x, POS->y + 2.0, POS->z, POS->x, POS->y - 10.0, POS->z) != 0) {
            POS->y = D_801BBF74 + 1.0;
        }
        sub = &arg2->u.s;
        if (sub->unk8 < 5.0) {
            sub->unk8 = 10.0f;
            func_8013A28C(arg1, *sub);
        }
        timer = TIMER;
        if (timer >= 0x97) {
            func_800113D0(arg1, (u8 *)sub + 6);
            goto event;
        }
        if (timer >= 0x78) goto increment;
        ang = (s16)((timer - 0x78) / D_802185C8);
        ang += 0x400;
        sp78 = func_8001EAD0(POS->angle + ang) * 30.0 + POS->x;
        sp74 = POS->y + 25.0;
        c = func_8001EB64(POS->angle + ang);
        c = c * 30.0 + POS->z;
        x = POS->x;
        y = POS->y + 4.0 + (0x78 - TIMER) * D_802185D0;
        z = POS->z;
        func_8011AAF4(D_80218248, 0x908, arg0, 0, 1, 10.0f, sp78, sp74, c, 10.0f, x, y, z, 0.0f, 35.0f, -1, -1);
    increment:
        TIMER = TIMER + 1;
        break;
    event:
        if (arg3 != 0) {
            if (func_80011140(arg1, arg2, D_80216BD8, 10) != 0) {
                func_8013A28C(arg1, *sub);
                func_801BF1A0(12);
            }
        }
        break;
    case 0x1900075:
        if (arg3 != 0) {
            arg0->unk44 = 0.0f;
            *(s32 *)&arg0->unk2C |= 0x40;
            if (func_80011140(arg1, arg2, *(func_801EB7A8_Table *)&D_80216BCC, 30) != 0) {
                func_801E4F60((&D_801BCAE0)[7]);
            }
        }
        break;
    case 0x3480010:
        if (arg3 != 0) {
            D_801BCAE0 = 0x80;
            func_80011140(arg1, arg2, *(func_801EB7A8_Table *)&D_80216B90, 10);
        }
        break;
    }
}
