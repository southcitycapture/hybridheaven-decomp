#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file097/8038CFC0/func_8038CFF4.s")


extern void func_8038D2C0();

void func_8038D28C(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038D2C0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file097/8038CFC0/func_8038D2C0.s")


struct func_8038D420_StructObj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x8A];
    s16 unk9A;
};

extern s32 func_8022DA7C(s32, s32);
extern u8 D_801BCC21;
struct func_8038D4D8_Obj;
void func_8038D4D8(struct func_8038D4D8_Obj *arg0, s32 arg1);

void func_8038D420(struct func_8038D420_StructObj *arg0, s32 arg1) {
    s32 result;
    s16 flags;
    s32 value;

    value = arg0->unkC;
    result = func_8022DA7C(value, arg0->unkC);
    if (D_801BCC21 == 6) {
        func_800058DC((s32)arg0, func_8038D4D8);
        return;
    }
    if ((result != 0) && !(arg0->unk9A & 0x80)) {
        func_800058DC((s32)arg0, func_8038D2C0);
        return;
    }
    if (result == 0) {
        flags = arg0->unk9A;
        if (flags & 0x80) {
            arg0->unk9A = flags ^ 0x80;
            func_800058DC((s32)arg0, func_8038D2C0);
        }
    }
}


struct func_8038D4D8_Obj {
    u8 pad0[0xC];
    struct func_8038D4D8_Obj *unkC;
    u8 pad1[0x8A];
    u16 unk9A;
    u8 pad2[0x5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4D8_Global {
    u8 pad0[0xDC];
    struct func_8038D4D8_Obj *unkDC;
    u8 pad1[0x1030 - 0xE0];
    u8 unk1030;
    u8 unk1031;
};

extern struct func_8038D4D8_Global D_801BBBF0;
extern u8 D_801BC3D8[];
extern u8 D_801BC03C[];

void func_8038D4D8(struct func_8038D4D8_Obj *arg0, s32 arg1) {
    u8 *var_v1;
    s32 var_v0;

    var_v1 = D_801BC3D8;
    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 == D_801BBBF0.unkDC) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    arg0->unk9A = 0;
    if (D_801BBBF0.unk1031 == 5) {
        if (var_v0 != D_801BBBF0.unk1030) {
            var_v1[0x2D8] = arg0->unkA1;
            var_v1[0x2D9] = arg0->unkA2;
            func_800058DC((s32) arg0, (void *) func_8038D420);
        } else {
            func_800058DC((s32) arg0, (void *) func_8038D2C0);
        }
    }
}


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

