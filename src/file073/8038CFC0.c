#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D98C_G func_8038D98C_G__func_8038CFF4
struct func_8038D98C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038D98C_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_8038CFF4_StructGlobal {
    u8 pad0[0x232];
    s16 angle;
};

struct func_8038CFF4_StructLink {
    u8 pad0[0xC];
    u32 index;
    u8 pad1[0x88];
    s16 count;
};

struct func_8038CFF4_StructObj {
    u8 pad0[0xC];
    struct func_8038CFF4_StructLink *link;
    u8 pad1[0x80];
    u8 timer;
    u8 phase;
    u8 state;
    u8 pad2[2];
    u8 active;
    u8 pad3[4];
    s16 count;
};

struct func_8038CFF4_StructInput {
    u8 pad0[4];
    u16 buttons;
    s16 x;
    s16 y;
};

struct func_8038CFF4_StructPlayer {
    u8 pad0[6];
    s16 distance;
    u8 pad1[0x28];
    u32 pad30a : 3;
    u32 kind : 4;
    u32 pad30b : 2;
    u32 enabled : 2;
    u32 pad30c : 2;
    u32 mode : 3;
    u32 pad30d : 6;
    u32 submode : 2;
    u32 pad30e : 8;
    u8 pad2[4];
    u32 flag31 : 1;
    u32 flag30 : 2;
    u32 flag28 : 1;
    u32 flag27 : 2;
    u32 pad38 : 26;
    u8 pad3[0x2FC - 0x3C];
    u8 selection;
    u8 pad4[0x312 - 0x2FD];
    s16 other;
    u8 pad5[0x328 - 0x314];
    u8 action;
    u8 action2;
    s16 actionAngle;
};

extern struct func_8038CFF4_StructInput D_801BBC8C[];
extern struct func_8038CFF4_StructInput D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern s32 func_80228C20(struct func_8038CFF4_StructObj *);
extern s32 func_80228D90(struct func_8038CFF4_StructObj *);
extern void func_80228FD0(struct func_8038CFF4_StructObj *, struct func_8038CFF4_StructInput *, s32);
extern s32 func_80229260(struct func_8038CFF4_StructObj *, struct func_8038CFF4_StructPlayer *, struct func_8038CFF4_StructInput *, s32);
extern void func_802292D0(struct func_8038CFF4_StructInput *, struct func_8038CFF4_StructPlayer *);

void func_8038CFF4(struct func_8038CFF4_StructObj *arg0, s32 arg1)
{
    s16 direction;
    s16 camera;
    struct func_8038CFF4_StructInput *input;
    s32 index;
    struct func_8038CFF4_StructPlayer *player;
    void *opponent;
    f32 x;
    f64 distance;
    s16 direction2;
    u8 oldTimer;
    s16 angleValue;
    s32 angleValue2;

    index = D_801BBBF0.unkDC;
    camera = (s16)(0x2800 - ((struct func_8038CFF4_StructGlobal *)&D_801BBBF0)->angle) & 0x1FFF;
    do {} while (0);
    input = index == arg0->link->index ? D_801BBC8C : D_801BBCAC;
    if (index == arg0->link->index) {
        player = (struct func_8038CFF4_StructPlayer *)D_801BC03C;
    } else {
        player = (struct func_8038CFF4_StructPlayer *)D_801BC3D8;
    }
    opponent = index == arg0->link->index ? D_801BC3D8 : D_801BC03C;
    if (arg0->phase == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->phase = 2;
    }
    if (player->enabled != 0 && player->kind != 1) {
        if ((s32)D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 15) {
            arg0->active = 0;
            arg0->state = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && (u16)player->mode == 0 &&
            func_80229260(arg0, player, input, 10) == 0) {
            distance = D_801BBBF0.unkB90;
            if ((distance < 15.0 || arg0->active == 1) && player->distance >= 100) {
                if (arg0->active == 0) {
                    arg0->active = 1;
                    arg0->state = 1;
                    return;
                }
                if (distance > 20.0) {
                    arg0->active = 0;
                    arg0->state = 0;
                    return;
                }
                if ((((struct func_8038CFF4_StructPlayer *)opponent)->pad30c != 0 && ((struct func_8038CFF4_StructPlayer *)opponent)->other >= 11) || ((struct func_8038CFF4_StructPlayer *)opponent)->kind == 2) {
                    if (player->distance >= 3) {
                        input->buttons = 0x8000;
                    }
                } else {
                    if (arg0->phase == 2) {
                        arg0->state = 4;
                    }
                    if (arg0->state == 1) {
                        if (player->selection % 3 != 0 && player->flag31 == 0) {
                            input->buttons = 0x10;
                            arg0->timer = 0;
                            arg0->state = 3;
                            return;
                        }
                        if (player->flag31 != 0) {
                            arg0->timer = 0;
                            arg0->state = 3;
                            return;
                        }
                        if (player->distance >= 71) {
                            func_802292D0(input, player);
                            arg0->phase = 1;
                            arg0->state = 2;
                            return;
                        }
                        func_80228FD0(arg0, input, 4);
                        return;
                    }
                    if (arg0->state == 2) {
                        if (player->flag31 != 0) {
                            arg0->state = 3;
                            arg0->timer = 0;
                        }
                        if (player->submode == 2) {
                            arg0->state = 4;
                        }
                        if (player->submode == 0) {
                            arg0->state = 1;
                        }
                    } else if (arg0->state == 3) {
                        if (arg0->timer++ >= 81) {
                            if (player->flag31 != 0 && player->flag30 == 0) {
                                arg0->state = 4;
                                arg0->timer = 0;
                            }
                        }
                        if (player->flag30 == 0 && player->flag31 == 0) {
                            arg0->state = 1;
                        }
                        if (player->flag31 != 0 && player->flag28 == 0 && player->flag27 == 1) {
                            player->action = 3;
                            player->action2 = 0;
                            x = (func_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0;
                            player->actionAngle = (s16)(func_8001EF38(x, (func_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0) - camera) & 0x1FFF;
                        }
                    } else if (arg0->state == 4) {
                        if (player->distance >= 100) {
                            if (func_80228D90(arg0) != 0) {
                                player->submode = 0;
                                input->buttons = 0x8000;
                                arg0->phase = 0;
                                return;
                            }
                        }
                        if (player->distance >= 100 && player->flag31 != 0 && player->flag28 != 0 && player->flag27 == 1 && arg0->timer == 0) {
                            input->buttons = 0x8000;
                            arg0->phase = 0;
                            arg0->count++;
                            return;
                        }
                        func_80228FD0(arg0, input, 4);
                    }
                }
            } else {
                if ((u8)arg0->phase == 1) {
                    arg0->phase = 2;
                }
                if (player->submode == 2) {
                    player->submode = 0;
                }
                if (arg0->link->count != 0 && player->distance >= 100 &&
                    func_80228D90(arg0) != 0 && D_801BBBF0.unkB90 < 35.0f && D_801BBBF0.unkB90 > 25.0f) {
                    player->submode = 0;
                    input->buttons = 0x8000;
                    arg0->link->count--;
                    return;
                }
                if (player->distance >= 100) {
                    angleValue = (s16)(func_80228C20(arg0) + camera) & 0x1FFF;
                    direction = angleValue;
                    input->x = -func_8001EB64(angleValue) * 80.0f;
                    input->y = func_8001EAD0(direction) * 80.0f;
                } else if (D_801BBBF0.unkB90 < 25.0f && D_801BBBF0.unkB90 > 20.0f) {
                    angleValue2 = (s16)(func_80228C20(arg0) + camera + 0x1000) & 0x1FFF;
                    direction = angleValue2;
                    input->x = -func_8001EB64(angleValue2) * 80.0f;
                    input->y = func_8001EAD0(direction) * 80.0f;
                } else if (D_801BBBF0.unkB90 < 20.0f) {
                    direction = (s16)(func_80228C20(arg0) + camera) & 0x1FFF;
                    input->x = -func_8001EB64(direction) * 80.0f;
                    input->y = func_8001EAD0(direction) * 80.0f;
                } else {
                    func_80228FD0(arg0, input, 8);
                }
            }
        }
    }
}
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D98C_G


struct func_8038D7D8_StructA {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D7D8_StructB {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D7D8_StructC {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x396 - 0x34];
    u8 unk396;
};

s32 func_8022B640(s32);
void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
extern u8 D_801BC3D8[];

void func_8038D7D8(void *arg0, void *arg1, void *arg2) {
    struct func_8038D7D8_StructA *a0 = arg0;
    struct func_8038D7D8_StructB *a1 = arg1;
    struct func_8038D7D8_StructC *a2 = arg2;

    if (((u32) a1->unk38 >> 0x1F) != 0) {
        a1->unk2D8 = 2;
        a0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0f) && (a2->unk396 == 0) && (a0->unk98 != 0)) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 6;
    } else if (((u32) (a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if (func_8022B640(2) == 0) {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        a1->unk2D8 = 1;
        a1->unk2D9 = 0x23;
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}


typedef struct func_8038D8FC_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D8FC_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern void func_8038D98C();

void func_8038D8FC(func_8038D8FC_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;


    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unk98 = 4;
    func_8038D7D8(arg0, var_a1, var_a2);
    func_800058DC((s32)arg0, func_8038D98C);
}


struct func_8038D98C_Obj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x98 - 0x92];
    s16 unk98;
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D98C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038D98C_P {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 f31 : 1;
    u32 fb : 2;
    u32 f28 : 1;
    u32 frest : 28;
    u8 pad1[0x396 - 0x3C];
    u8 unk396;
};
extern struct func_8038D98C_G D_801BBBF0;
extern u8 func_8022B3E0[];
extern u8 D_8038D98C[];
extern s32 func_8022AB58();

void func_8038D98C(struct func_8038D98C_Obj *arg0, struct func_8038D98C_P *arg1) {
    struct func_8038D98C_P *a1;
    struct func_8038D98C_P *a2;
    u32 t;
    u32 w;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        a1 = (struct func_8038D98C_P *)D_801BC03C;
    } else {
        a1 = (struct func_8038D98C_P *)D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        a2 = (struct func_8038D98C_P *)D_801BC3D8;
    } else {
        a2 = (struct func_8038D98C_P *)D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D7D8(arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)&a1->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)D_8038D98C;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        if (arg0->unk9A == 0 && a2->unk396 == 0 && arg0->unk98 != 0) {
            arg0->unk9A = arg0->unk9A | 0x100;
            func_8038D7D8(arg0, a1, a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A = arg0->unk9A ^ 0x100;
            func_8038D7D8(arg0, a1, a2);
            return;
        }
    }
    t = (a2->unk30 << 11) >> 30;
    if (t != 0 && !(arg0->unk9A & 8)) {
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (t == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    w = a1->f31;
    if (w != 0 && !a1->f28 && !(arg0->unk9A & 2)) {
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (w != 0 && a1->f28 && !(arg0->unk9A & 4)) {
        func_8038D7D8(arg0, a1, a2);
        return;
    }
    if (w == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D7D8(arg0, a1, a2);
    }
}

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DC0C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

