#include "common.h"
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
extern void func_800058DC(s32 arg0, void *arg1);
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
void func_80222370(s32 arg0, s32 arg1);


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
