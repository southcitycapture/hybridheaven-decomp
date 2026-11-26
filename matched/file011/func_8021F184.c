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
extern void func_80011258();
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
extern void func_80224E00(s32, s16);

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
