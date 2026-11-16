#include "common.h"
extern u8 D_801BBBF0[];
extern f32 D_801BBF74;
extern u8 D_80217A00[];
extern u16 D_80217C70[];
extern s32 func_8000C3B0(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern s32 func_8012C6B4();
extern void func_8012C89C(void *, s32, s32, s32);
extern u16 func_8012FF58();
extern s32 func_80150584();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FC830(f32, f32, f32, f32, s32);
typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x44 - 0x3E];
    f32 unk44;
    u8 pad48[0x74 - 0x48];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_8020FB98_Struct;
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern f32 func_801FD780(u8);
extern void func_801FDB3C(s32);
struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};
void func_80212A28(struct func_80212A28_Struct *arg0);
u8 func_80212A48(struct func_80212A28_Struct *arg0);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_8020A7D4_StructA {
    u8 pad0[0x3C]; u16 timer; u8 pad3E[2];
    f32 vx, vy, vz; u8 pad4C[0x44];
    u8 state, kind; s16 turn; f32 x, y, z;
    u16 ax; s16 angle; u16 az; u8 padA6[6];
    u8 flags; u8 padAD[3]; u8 health;
} func_8020A7D4_StructA;
typedef struct func_8020A7D4_StructI {
    u8 pad0[4]; f32 x,y,z; s16 ax,ay,az; u8 pad16[2];
    f32 sx,sy,sz; s32 flags; u8 pad28[8]; s32 data;
    u8 pad34[0x14]; u8 r,g,b,a,r2,g2,b2,a2;
} func_8020A7D4_StructI;
typedef struct func_8020A7D4_StructO {
    u8 pad0[0x22]; u8 visible; u8 pad23[9];
    func_8020A7D4_StructI *pos;
    func_8020A7D4_StructI *model;
} func_8020A7D4_StructO;
extern u8 D_8017B710[];
extern u8 B_801BBBF0[];
extern func_8020A7D4_StructO *B_801BBCD0;
extern u16 D_80217C68[];
extern s32 func_8010843C(f32,f32,f32,f32,f32,f32);
extern s16 func_8001EF38(f32,f32);
extern s16 func_801FD284(s16,s16,f32);
extern s32 func_801FD4F4(s16,s16,s32);
extern f32 func_8002FC20(f32);
extern void func_800062F8(void *,s32);

#define RESTORE(i,base,off) \
    b[i]->model->flags = 0x13; \
    b[i]->model->data = func_8000C3B0(b[i]); \
    b[i]->model->flags |= 0x400; \
    b[i]->model->r2 = base[off]; \
    b[i]->model->g2 = base[(off)+1]; \
    b[i]->model->b2 = base[(off)+2]; \
    b[i]->model->a2 = base[(off)+3]
#define FLASH(i) \
    b[i]->model->data = (s32)D_80217A00; \
    b[i]->model->flags |= 0x300; \
    b[i]->model->r = 255; b[i]->model->g = 40; \
    b[i]->model->b = 0; b[i]->model->a = 0; \
    b[i]->model->r2 = 255; b[i]->model->g2 = 255; \
    b[i]->model->b2 = 255; b[i]->model->a2 = 255
#define FINISH(Z) \
    a->state = 0; a->vx = Z; a->vz = Z; \
    b[0]->visible = 0; func_8012C89C(a,1,0xCF,4); \
    b[1]->model->flags |= 0x500; \
    b[1]->model->data = (s32)D_8017B710 | 0x40000000; \
    b[1]->model->ax = 0; b[1]->model->ay = 0; b[1]->model->az = 0; \
    b[1]->model->r = 0; b[1]->model->g = 0; b[1]->model->b = 0; b[1]->model->a = 180; \
    b[1]->model->r2 = D_801BBBF0[0xF32]; b[1]->model->g2 = D_801BBBF0[0xF33]; \
    b[1]->model->b2 = D_801BBBF0[0xF34]; b[1]->model->a2 = D_801BBBF0[0xF35]; \
    b[1]->model->sz = 1.0f; b[1]->model->sx = b[1]->model->sy = b[1]->model->sz; \
    func_800062F8(b[1],0x80000A00)

s32 func_8020A7D4(func_8020A7D4_StructA *a, func_8020A7D4_StructO **b)
{
    s16 angle;
    f32 dx, dz;
    s32 hit;
    s32 old;
    s32 unused8[2];
    f32 sine;
    u16 damage[2];
    f32 cosine;

    old = a->state;
    if (old == 2 || old == 3 || old == 4 || (old == 7 && a->timer < 30)) {
        if (func_801C3D20(a->x,a->z,4.5f)) {
            if ((dz = a->y) - 15.0f <= B_801BBCD0->pos->y && B_801BBCD0->pos->y < dz + 1.0f) {
                a->state = 7; a->timer = 30; a->vx = 0; a->vz = 0;
            }
        }
    }
    switch (a->state) {
    case 0:
        return 1;
    case 2:
        if (!(a->flags & 2) && !func_8010843C(a->x,a->y,a->z,a->x,a->y-0.5,a->z)) {
            a->state = 6; a->vx *= 0.6; a->vz *= 0.6;
            break;
        }
        if (a->timer-- == 0 || (sine = func_8001EAD0(a->angle), cosine = func_8001EB64(a->angle),
            func_8010843C(a->x,a->y+0.5,a->z,sine*6.0f+a->x,a->y+0.5,cosine*6.0f+a->z))) {
            a->vx = 0.0f; a->vz = 0.0f;
            if (!func_8012C6B4(4)) {
                a->state = 3; a->timer = 0; a->turn = 0;
            } else {
                a->state = 4; a->timer = func_8012C6B4(20)+10;
                if (!func_8012C6B4(2)) a->turn=91; else a->turn=-91;
            }
        }
        break;
    case 3:
        if (a->turn == 0) {
            a->ax -= 91;
            if (a->timer++ >= 10) {
                a->timer = 0;
                a->turn = 1;
            }
        } else {
            a->ax += 91;
            if (a->timer++ >= 10) {
                a->state=4; a->ax=0; a->timer=func_8012C6B4(20)+10;
                if (!func_8012C6B4(2)) a->turn=91; else a->turn=-91;
            }
        }
        break;
    case 4:
        a->angle = (s16)(a->turn + (u16)a->angle) & 0x1FFF;
        sine=func_8001EAD0(a->angle); cosine=func_8001EB64(a->angle);
        if (func_8010843C(a->x,a->y+0.5,a->z,sine*6.0f+a->x,a->y+0.5,cosine*6.0f+a->z)) {
            a->timer=6;
        } else if (a->timer-- == 0) {
            a->state=2; a->timer=func_8012C6B4(60)+10;
            a->vx=func_8001EAD0(a->angle)*0.4;
            a->vz=func_8001EB64(a->angle)*0.4;
        }
        break;
    case 6:
        if (a->vy >= -4.0f) a->vy -= 0.3;
        if (func_80108590(a->x,a->y-a->vy,a->z,a->x,a->y-0.6,a->z)) {
            a->state=3; a->timer=0; a->turn=0; a->y=D_801BBF74;
            a->vx=0.0f; a->vy=0.0f; a->vz=0.0f;
        }
        break;
    case 10:
        a->timer += 455;
        if (a->timer >= 0x2000) {
            a->state=2; a->timer=func_8012C6B4(60)+10;
            a->vx=func_8001EAD0(a->angle)*0.4;
            a->vz=func_8001EB64(a->angle)*0.4;
            RESTORE(0,D_801BBBF0,0xF32);
            RESTORE(1,D_801BBBF0,0xF32);
        }
        break;
    case 7:
        if (!(a->flags & 2)) {
            if (!func_80108590(a->x,a->y-a->vy,a->z,a->x,a->y-0.6,a->z)) {
                if (a->vy >= -4.0f) a->vy-=0.3;
                a->vx *= 0.5; a->vz *= 0.5;
            } else { a->y=D_801BBF74; a->vy=0.0f; }
        }
        a->angle=func_801FD284(a->angle,func_8001EF38(B_801BBCD0->pos->x-a->x,B_801BBCD0->pos->z-a->z),0.1f);
        a->vx=func_8001EAD0(a->angle)*0.8;
        a->vz=func_8001EB64(a->angle)*0.8;
        sine=func_8001EAD0(a->angle); cosine=func_8001EB64(a->angle);
        if (func_8010843C(a->x,a->y+0.5,a->z,sine*6.0f+a->x,a->y+0.5,cosine*6.0f+a->z)) {
            a->vx=0.0f; a->vz=0.0f;
        }
        if (!(a->timer % 4)) { FLASH(0); FLASH(1); }
        else { RESTORE(0,B_801BBBF0,0xF32); RESTORE(1,D_801BBBF0,0xF32); }
        if (a->timer == 30) {
            func_80380F94(a->x,a->y,a->z,0.0f,0.0f,0.0f,0);
            func_801FC830(a->x,a->y,a->z,400.0f,D_80217C70[func_80212A48((void *)a)%3]);
            if (!func_80150584()) {
                damage[0]=func_8012FF58();
                if (func_801FD644(a->x,a->y,a->z,10.5f,(s16)(B_801BBCD0->pos->ay+0x1000)&0x1FFF,2.0f,0.4f,(u32)((damage[0]/10+1)*10*func_801FD780(a->kind)))) {
                    func_80380F94(a->x,a->y,a->z,0,0,0,2);
                }
            }
            func_801FCF98((void *)a);
        }
        if (a->timer++ >= 32) { FINISH(0.0f); }
        break;
    case 8:
        old=a->timer++;
        if (old == 0) {
            func_801FC830(a->x,a->y,a->z,400.0f,0x116);
            func_80380F94(a->x,a->y+2.0f,a->z,0.0f,0.0f,0.0f,18);
        }
        if (old >= 4) { FINISH(0.0f); }
        break;
    }
    if (a->y < -2000.0f) return 0;
    switch (a->state) {
    case 2: case 3: case 4:
        dx=(*(func_8020A7D4_StructO **)(D_801BBBF0+0xE0))->pos->x-a->x;
        dz=(*(func_8020A7D4_StructO **)(D_801BBBF0+0xE0))->pos->z-a->z;
        angle=func_8001EF38(dx,dz);
        if (func_8002FC20(dx*dx+dz*dz) <= 30.0 && a->y-1.0f <= B_801BBCD0->pos->y && B_801BBCD0->pos->y <= a->y+4.0f && func_801FD4F4(a->angle,angle,0xAAA)) {
            a->state=7; a->timer=0; a->vx=0.0f; a->vz=0.0f;
            func_80212A28((void *)a);
            func_801FC830(a->x,a->y,a->z,400.0f,D_80217C68[func_80212A48((void *)a)%3]);
        }
        break;
    }
    hit=func_801FD68C((void *)a);
    if (hit && a->state != 8 && a->state != 0) {
        a->health--; a->vx=0.0f; a->vz=0.0f;
        if (!a->health) { a->state=8; a->timer=0; }
        else {
            func_801FC830(a->x,a->y,a->z,400.0f,0x3A9);
            a->state=10; a->timer=0;
            func_80380F94(a->x,a->y+3.0f,a->z,0.0f,0.0f,0.0f,16);
        }
        func_801FDB3C(hit);
    }
    b[1]->model->x=a->x; b[1]->model->y=a->y; b[1]->model->z=a->z;
    b[1]->model->ax=0; b[1]->model->ay=*(u16 *)&a->angle; b[1]->model->az=0;
    b[0]->model->x=a->x; b[0]->model->y=b[1]->model->y+1.3; b[0]->model->z=a->z;
    b[0]->model->ax=0; b[0]->model->ay=*(u16 *)&a->angle; b[0]->model->az=0;
    if (a->state == 10) {
        b[1]->model->y += func_8001EAD0((s16)((u32)a->timer*0.5))*3.0f;
        b[0]->model->y += func_8001EAD0((s16)((u32)a->timer*0.5))*3.0f;
        b[1]->model->ax=(s16)(b[1]->model->ax+func_8001EAD0(a->timer*4)*682.0f)&0x1FFF;
        b[1]->model->ay=(s16)(b[1]->model->ay+func_8001EAD0(a->timer*2)*682.0f)&0x1FFF;
        b[1]->model->az=(s16)(b[1]->model->az+func_8001EAD0(a->timer*8)*682.0f)&0x1FFF;
        b[0]->model->ax=(s16)(b[0]->model->ax+func_8001EAD0(a->timer*4)*682.0f)&0x1FFF;
        b[0]->model->ay=(s16)(b[0]->model->ay+func_8001EAD0(a->timer*2)*682.0f)&0x1FFF;
        b[0]->model->az=(s16)(b[0]->model->az+func_8001EAD0(a->timer*8)*682.0f)&0x1FFF;
    }
    return 1;
}
