#include "common.h"
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
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80011258();
extern void func_800113D0();
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
extern void func_8035C98C(s32, s32);


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
