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
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_8021E52C_Struct D_80225664(s32, s32);
extern s32 func_80010550(s32, s32);
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
extern void func_8013A28C();
extern void func_802237B0(s32, s32);
extern void func_80224E00(s32, s16);

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
