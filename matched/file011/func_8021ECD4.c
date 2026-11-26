#include "common.h"
extern s32 D_801BBCCC;
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
extern u8 D_8022560C(void *);
extern s32 func_80010550(s32, s32);
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
extern void func_800112B0(s32, void *, void *, s32);
extern void func_8013A28C();
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
extern void func_802237B0(s32, s32);
extern s32 func_80224AC4(s32, s32);
extern void func_80224BEC(s32, s32);
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
extern void func_80224E00(s32, s16);
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
