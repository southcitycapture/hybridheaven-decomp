#include "context.h"

struct func_8038D584_StructAngle {
    u8 pad[0x12];
    s16 angle;
};
struct func_8038D584_StructLink2 {
    u8 pad[0x2C];
    struct func_8038D584_StructAngle *link;
};
struct func_8038D584_StructLink1 {
    u8 pad[0x24];
    struct func_8038D584_StructLink2 *link;
};
struct func_8038D584_StructGlobal {
    u8 pad[0x448];
    struct func_8038D584_StructLink1 **link;
    u8 pad2[0xB98 - 0x44C];
    s16 angle;
};

struct func_8038D584_StructObj {
    u8 pad[0xA5];
    u8 state;
    u8 pad2[0x2D9 - 0xA6];
    u8 direction;
    u8 pad3[0x393 - 0x2DA];
    u8 flag;
};

void func_8038D584(struct func_8038D584_StructObj *arg0, struct func_8038D584_StructObj *arg1) {
    struct func_8038D584_StructObj *other;
    s32 angle;
    s32 nstate = 2;
    s32 dir6 = 6;

    if (arg1 == (struct func_8038D584_StructObj *)((u8 *)&D_801BBBF0 + 0x44C)) {
        other = (struct func_8038D584_StructObj *)D_801BC3D8;
    } else {
        other = (struct func_8038D584_StructObj *)D_801BC03C;
    }
    angle = (s16)((*(((struct func_8038D584_StructGlobal *)&D_801BBBF0)->link))->link->link->angle - ((struct func_8038D584_StructGlobal *)&D_801BBBF0)->angle) & 0x1FFF;
    if (angle < 0x400 || angle >= 0x1801) {
        arg1->flag = 1;
        arg0->state = 3;
        return;
    }
    if (angle >= 0xC01 && angle < 0x1400) {
        arg1->flag = 1;
        arg0->state = 4;
        return;
    }
    if (angle < 0x400) {
        goto two;
    }
    if (angle <= 0xC00) {
        arg1->flag = other->flag = 0;
        arg0->state = 2;
        arg1->direction = dir6;
        return;
    }
two:
    arg1->flag = other->flag = 0;
    arg0->state = nstate;
    arg1->direction = 2;
}
