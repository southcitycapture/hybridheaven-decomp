#include "common.h"
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
