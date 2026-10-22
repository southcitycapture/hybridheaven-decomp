#include "context.h"

struct func_802358A0_Struct {
    u8 pad[0xA1];
    s8 unkA1;
    u8 pad2[2];
    s8 unkA4;
    s8 unkA5;
};
struct func_802358A0_Ent {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    u8 unk8;
    u8 pad[3];
};
extern u8 D_80240560[];
extern u8 D_80240568[];

void func_802358A0(struct func_802358A0_Struct *arg0) {
    s8 i;
    s32 off;
    struct func_802358A0_Ent *e;
    struct func_802358A0_Ent *e2;

    for (i = 0; i < arg0->unkA4; i++) {
        if (i == arg0->unkA5) {
            off = i * 4;
            func_801451C0(*(s32 *)(D_80240870 + off), 1);
            func_80145310(*(s32 *)(D_8024086C + off), 1, 7);
            if (func_80234D2C((void *)arg0) != 0) {
                func_801453CC(*(s32 *)(D_8024086C + off), 0, *((u8 *)&D_801BBBF0 + 0x1030), 1, 0x1B, 7, 0x1B);
            }
            if (arg0->unkA1 > 0) {
                e = (struct func_802358A0_Ent *)D_802407E8 + i;
                func_8001B204(i & 0xFF, e->unk0 + 0x3E8, e->unk2, D_80240560, 0xFF, 4, e->unk4);
            }
        } else {
            off = i * 4;
            e2 = (struct func_802358A0_Ent *)D_802407E8 + i;
            if (e2->unk8 == 0) {
                func_80145310(*(s32 *)(D_8024086C + off), 2, 0xE);
            } else {
                func_801451C0(*(s32 *)(D_80240870 + off), 2);
                func_80145310(*(s32 *)(D_8024086C + off), 8, 9);
                if (arg0->unkA1 > 0) {
                    e2 = (struct func_802358A0_Ent *)D_802407E8 + i;
                    func_8001B204(i & 0xFF, e2->unk0 + 0x3E8, e2->unk2, D_80240568, 0x82, 4, e2->unk4);
                }
            }
        }
    }
}
