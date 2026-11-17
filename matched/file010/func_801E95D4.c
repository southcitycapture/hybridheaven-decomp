#include "common.h"
extern s32 D_80011258(s32, void *);
extern u8 D_801BBBF0[];
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern void func_800113D0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern void func_801C4A5C(void *, s32, s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
u8 func_801F1114(void);


typedef struct func_801E95D4_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_801E95D4_StructPos;
typedef struct func_801E95D4_StructOuter {
    u8 pad[0x2C];
    func_801E95D4_StructPos *pos;
} func_801E95D4_StructOuter;
typedef struct func_801E95D4_StructGlobal {
    u8 pad[0xE0];
    func_801E95D4_StructOuter *obj;
    u8 padE4[0x35A-0xE4];
    u8 state;
    u8 pad35B[0xBA3-0x35B];
    u8 mode;
    u8 padBA4[0xEF0-0xBA4];
    u16 flags;
    u8 padEF2[4];
    u8 state2;
    u8 padEF7[5];
    s32 mask;
} func_801E95D4_StructGlobal;
typedef struct func_801E95D4_StructArg {
    u8 pad[0x2C];
    s32 flags;
    u8 pad30[0x10];
    f32 x, y, z;
    u8 pad4C[8];
    s32 value;
} func_801E95D4_StructArg;
typedef struct func_801E95D4_StructSub {
    u32 id;
    u16 time;
    u16 flags;
    f32 value;
} func_801E95D4_StructSub;
typedef struct func_801E95D4_StructArg2 {
    u8 pad[0x1C];
    func_801E95D4_StructSub sub;
} func_801E95D4_StructArg2;
extern s32 func_801C7B18(void);
extern void func_80011380(s32, u16 *);
extern void func_80011328(s32, u16 *);
extern void func_800112B0(s32, u16 *);

#define GL ((func_801E95D4_StructGlobal *)D_801BBBF0)
#define SEND(p) func_8013A28C(arg1, *(func_801E74DC_Sub *)(p))
#define PP (GL->obj->pos)
#define PROBEPLUS(h) func_801C5A1C(func_8001EAD0(PP->angle)*4.0+PP->x,PP->y+1.0,func_8001EB64(PP->angle)*4.0+PP->z,func_8001EAD0(PP->angle)*4.0+PP->x,PP->y-(h),func_8001EB64(PP->angle)*4.0+PP->z)
#define PROBEMINUS(h) func_801C5A1C(PP->x-func_8001EAD0(PP->angle)*6.0,PP->y+1.0,PP->z-func_8001EB64(PP->angle)*6.0,PP->x-func_8001EAD0(PP->angle)*6.0,PP->y-(h),PP->z-func_8001EB64(PP->angle)*6.0)
#define UP() func_801C5A1C(PP->x,PP->y,PP->z,PP->x,PP->y+20.0,PP->z)

void func_801E95D4(func_801E95D4_StructArg *arg0, s32 arg1, func_801E95D4_StructArg2 *arg2, u16 arg3, u8 arg4)
{
    func_801E95D4_StructSub *sub;
    s32 pad1, pad2, pad3;
extern void func_801C4A5C();

    (void)&arg4;
    sub = &arg2->sub;
    switch (sub->id) {
    case 0x1680012:
        if (func_801C5A1C(PP->x,PP->y+1.0,PP->z,PP->x,PP->y-2.0,PP->z)) {
            if (arg3) {
                if (!(sub->flags&2)) {
                    sub->id=0x1680013;
                    sub->time=0;
                    sub->flags=0;
                    SEND(sub);
                } else {
                    SEND(&D_80216B90);
                    arg0->flags|=0x80;
                    arg0->x=0.0f;
                    arg0->z=0.0f;
                    func_801E4F60(GL->mask);
                    GL->flags&=~0x100;
                }
            }
        } else {
            sub->id=0x1680053;
            sub->time=0;
            sub->flags=1;
            SEND(sub);
            arg0->x*=0.5;
            arg0->z*=0.5;
            func_801E4F60(GL->mask|4|8);
            GL->flags|=0x208;
        }
        break;
    case 0x1680013:
        if (arg3) {
            if (!(sub->flags&2)) {
                sub->id=0x1680014;
                sub->time=0;
                sub->flags=0;
            } else {
                sub->id=0x1680012;
                sub->time=30;
                sub->flags=2;
            }
            SEND(sub);
        }
        break;
    case 0x1680014:
        if (arg3) {
            if (!(sub->flags&2)) {
                arg0->flags|=0x80;
                sub->id=0x1680017;
                sub->time=0;
                sub->flags=0;
                sub->value=1.0f;
            } else {
                sub->id=0x1680013;
                sub->time=30;
                sub->flags=2;
            }
            SEND(sub);
        }
        break;
    case 0x1680015:
        if (GL->state2==0x11 || GL->state==0x28) {
            arg4=3;
        }
        if (!func_801C7B18()) {
            arg4=3;
        }
        switch (arg4) {
        case 1:
            if (!PROBEPLUS(18.0)) {
                sub->id=0x1680032;
                sub->time=0;
                sub->flags=0;
                sub->value=1.0f;
                SEND(sub);
                arg0->flags&=~0x40;
                arg0->z=0.0f;
                arg0->y=0.0f;
                arg0->flags|=0x80;
                arg0->x=0.0f;
                GL->flags&=~0x100;
                GL->flags|=0x600;
                func_801BF1A0(7);
            } else {
                if (!PROBEPLUS(5.0)) {
                    if (!UP()) {
                        if (func_801F1114()!=20) {
                            if (GL->mode) {
                                func_801BF1A0(12);
                            } else {
                                func_801BF1A0(13);
                            }
                            sub->id=0x1680016;
                            sub->time=0;
                            if (sub->flags&0x10) {
                                sub->flags=0x10;
                            } else {
                                sub->flags=0;
                            }
                            sub->value=0.5f;
                            SEND(sub);
                            func_801E4F60(GL->mask);
                        }
                    } else {
                        func_80011380(arg1,&sub->flags);
                    }
                } else if (arg3) {
                    sub->id=0x1680017;
                    sub->time=0;
                    if (sub->flags&2) {
                        sub->flags&=~2;
                    } else if (sub->flags&0x10) {
                        sub->flags&=~0x10;
                    } else {
                        sub->flags|=0x10;
                    }
                    SEND(sub);
                } else {
                    func_800113D0(arg1,&sub->flags);
                    func_80011328(arg1,&sub->flags);
                }
            }
            break;
        case 2:
            if (!PROBEMINUS(18.0)) {
                sub->id=0x1680031;
                sub->time=0x51;
                if (sub->flags&0x10) {
                    sub->flags=0x12;
                } else {
                    sub->flags=2;
                }
                SEND(sub);
                arg0->flags&=~0x40;
                arg0->z=0.0f;
                arg0->flags|=0x80;
                arg0->y=0.0f;
                arg0->x=0.0f;
                func_801E4F60(13);
                GL->flags|=0x400;
                GL->flags&=~0x100;
            } else {
                if (!PROBEMINUS(5.0)) {
                    if (!UP()) {
                        if (func_801F1114()!=20) {
                            if (GL->mode) {
                                func_801BF1A0(12);
                            } else {
                                func_801BF1A0(13);
                            }
                            sub->id=0x1680016;
                            sub->time=0;
                            if (sub->flags&0x10) {
                                sub->flags=0x10;
                            } else {
                                sub->flags=0;
                            }
                            sub->value=0.5f;
                            SEND(sub);
                            func_801E4F60(GL->mask);
                        }
                    } else {
                        func_80011380(arg1,&sub->flags);
                    }
                } else if (arg3) {
                    sub->id=0x1680017;
                    sub->time=0;
                    if (sub->flags&2) {
                        sub->flags&=~2;
                    } else if (sub->flags&0x10) {
                        sub->flags&=~0x10;
                    } else {
                        sub->flags|=0x10;
                    }
                    SEND(sub);
                } else {
                    func_800113D0(arg1,&sub->flags);
                    func_800112B0(arg1,&sub->flags);
                }
            }
            break;
        case 3:
            if (!UP()) {
                if (func_801C5A1C(PP->x,PP->y+1.0,PP->z,PP->x,PP->y-5.0,PP->z) && GL->state!=20) {
                    if (GL->mode) {
                        func_801BF1A0(12);
                    } else {
                        func_801BF1A0(13);
                    }
                    sub->id=0x1680016;
                    sub->time=0;
                    if (sub->flags&0x10) {
                        sub->flags=0x10;
                    } else {
                        sub->flags=0;
                    }
                    sub->value=0.5f;
                    SEND(sub);
                    func_801E4F60(GL->mask);
                }
            }
            break;
        case 4:
            sub->id=0x1680014;
            sub->time=20;
            sub->flags=2;
            SEND(sub);
            break;
        default:
            if (arg3) {
                sub->id=0x1680017;
                sub->time=0;
                if (sub->flags&2) {
                    sub->flags&=~2;
                } else if (sub->flags&0x10) {
                    sub->flags&=~0x10;
                } else {
                    sub->flags|=0x10;
                }
                SEND(sub);
            } else {
                D_80011258(arg1,&sub->flags);
            }
            break;
        }
        break;
    case 0x1680017:
        if (!PROBEPLUS(5.0) && arg4==1) {
            arg4=2;
        }
        if (!PROBEMINUS(5.0) && arg4==2) {
            arg4=1;
        }
        if (!func_801C7B18()) {
            arg4=3;
        }
        switch (arg4) {
        case 1:
            sub->id=0x1680015;
            sub->time=0;
            sub->flags&=~2;
            SEND(sub);
            break;
        case 2:
            sub->id=0x1680015;
            sub->time=21;
            sub->flags|=2;
            if (sub->flags&0x10) {
                sub->flags&=~0x10;
            } else {
                sub->flags|=0x10;
            }
            SEND(sub);
            break;
        case 3:
            if (!UP()) {
                if (func_801C5A1C(PP->x,PP->y+1.0,PP->z,PP->x,PP->y-5.0,PP->z) && GL->state!=20) {
                    if (GL->mode) {
                        func_801BF1A0(12);
                    } else {
                        func_801BF1A0(13);
                    }
                    sub->id=0x1680016;
                    sub->time=0;
                    if (sub->flags&0x10) {
                        sub->flags=0x10;
                    } else {
                        sub->flags=0;
                    }
                    sub->value=0.5f;
                    SEND(sub);
                    func_801E4F60(GL->mask);
                }
            }
            break;
        case 4:
            sub->id=0x1680014;
            sub->time=20;
            sub->flags=2;
            SEND(sub);
            break;
        }
        break;
    case 0x1680016:
        if (arg3) {
            arg0->flags|=0x80;
            arg0->x=0.0f;
            arg0->z=0.0f;
            sub->id=0x1680041;
            sub->time=0;
            sub->flags=0;
            sub->value=1.0f;
            SEND(sub);
            func_801E4F60(GL->mask);
            GL->flags&=~0x100;
        } else if (sub->time==10) {
            sub->time++;
            SEND(sub);
        }
        break;
    case 0x1680032:
        if (arg3) {
            sub->id=0x1680033;
            sub->time=0;
            sub->flags=0;
            sub->value=1.0f;
            SEND(sub);
            GL->flags&=~0x400;
            func_801E4F60(GL->mask);
        }
        break;
    case 0x1680033:
        if (arg3) {
            arg0->flags|=0x40;
            arg0->z=0.0f;
            arg0->x=0.0f;
            arg0->y=-1.0f;
            sub->id=0x1680053;
            sub->time=0;
            sub->flags=0;
            sub->value=1.0f;
            SEND(sub);
            GL->flags&=~0x400;
            func_801E4F60(GL->mask|4|8);
        }
        break;
    default:
        func_801BF1A0(6);
        sub->id=0x1680012;
        sub->time=0;
        sub->flags=0;
        sub->value=0.5f;
        SEND(sub);
        arg0->value=0xF181;
        func_801C4A5C(arg0,2);
        arg0->flags&=~0x80;
        arg0->x=0.0f;
        arg0->z=0.0f;
        GL->flags|=0x100;
        break;
    }
}
