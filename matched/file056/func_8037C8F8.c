#include "common.h"
#include "common.h"

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_8037C8F8_StructPos;
typedef struct {
    u8 pad0[0x2C];
    func_8037C8F8_StructPos *unk2C;
} func_8037C8F8_StructObj;
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037C8F8_StructArg;

typedef struct func_8037C8F8_StructActor {
    u8 pad0[0x2C];
    u32 flags;
    u8 pad30[0x10];
    f32 vx, vy, vz;
    u8 pad4C[8];
    s32 mode;
} func_8037C8F8_StructActor;
typedef struct func_8037C8F8_StructInner {
    u8 pad0[0x30];
    func_8037C8F8_StructPos *pos;
} func_8037C8F8_StructInner;
typedef struct func_8037C8F8_StructTarget {
    u8 pad0[0x24];
    func_8037C8F8_StructInner *inner;
} func_8037C8F8_StructTarget;
typedef struct func_8037C8F8_StructGlob {
    u8 pad0[0x24];
    func_8037C8F8_StructTarget *active;
    u8 pad28[0xB8];
    func_8037C8F8_StructObj *obj;
    u8 padE4[0xB4];
    f32 gx, gy, gz;
    u8 pad1A4[0xEF0 - 0x1A4];
    u16 flags;
    u8 padEF2[3];
    u8 state;
    u8 padEF6[2];
    func_8037C8F8_StructTarget *target;
    s32 mode;
} func_8037C8F8_StructGlob;
typedef struct func_8037C8F8_StructSub {
    s32 unk0;
    u16 unk4;
    s16 unk6;
    f32 unk8;
} func_8037C8F8_StructSub;

#define GLB ((func_8037C8F8_StructGlob *)&D_801BBBF0)
#define POS (GLB->obj->unk2C)
#define ACT ((func_8037C8F8_StructActor *)arg0)
#define SUB ((func_8037C8F8_StructSub *)((u8 *)arg2 + 0x1C))
extern func_8037C8F8_StructArg D_80388BAC;
extern func_8037C8F8_StructArg D_80388BB8;
extern func_8037C8F8_StructArg D_80216B90;
extern func_8037C8F8_StructGlob D_801BBBF0;
extern f32 D_80388A74;
extern s16 D_80388A70;
extern s32 D_80010550(s32, void *);
extern void func_80010550(s32, void *);
extern void func_8013A28C(s32, func_8037C8F8_StructArg);
extern void func_80011140(s32, void *, func_8037C8F8_StructArg, s32);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern void func_801C4A5C(void *, s32);
extern void func_800058DC(s32, void (*)(void));
extern void func_801E5010(void);

void func_8037C8F8(void *arg0, s32 arg1, void *arg2, s32 arg3)
{
    f32 g1;
    f32 savedZ, savedY, savedX;
    f32 g2, g3, g4;
    f32 dx, dz;
    s32 result;
    s16 cur, des, diff, angle;
    func_8037C8F8_StructSub *sub;

    sub = (func_8037C8F8_StructSub *)((u8 *)arg2 + 0x1C);
    savedX = POS->unk4;
    savedY = POS->unk8;
    savedZ = POS->unkC;
    result = D_80010550(arg1, arg2);
    POS->unk4 = savedX;
    POS->unk8 = savedY;
    POS->unkC = savedZ;
    switch (GLB->state) {
    case 0:
        sub->unk0 = 0x168003E;
        sub->unk4 = 0;
        sub->unk6 = 0x1100;
        func_8013A28C(arg1, *(func_8037C8F8_StructArg *)sub);
        ACT->flags &= ~0x80;
        ACT->flags |= 0x40;
        GLB->gx = GLB->target->inner->pos->unk4;
        GLB->gz = GLB->target->inner->pos->unkC;
        POS->unk12 = func_8001EF38(GLB->gx - POS->unk4, GLB->gz - POS->unkC);
        D_80388A74 = func_8002FC20((GLB->gx - POS->unk4) * (GLB->gx - POS->unk4) + (GLB->gz - POS->unkC) * (GLB->gz - POS->unkC));
        ACT->vx = func_8001EAD0(POS->unk12) * D_80388A74 / 30.0;
        ACT->vz = func_8001EB64(POS->unk12) * D_80388A74 / 30.0;
        ACT->mode = 1;
        ACT->vy = 0.0f;
        func_80010550(arg1, arg2);
        dx = (f32)((f64)GLB->gx - (f64)func_8001EAD0(POS->unk12) * 15.0);
        dz = (f32)((f64)GLB->gz - (f64)func_8001EB64(POS->unk12) * 15.0);
        D_80388A74 = func_8002FC20((dx - POS->unk4) * (dx - POS->unk4) + (dz - POS->unkC) * (dz - POS->unkC));
        D_80388A70 = 0;
        GLB->state++;
        /* fallthrough */
    case 1:
        ACT->vy = 0.0f;
        if ((u16)D_80388A70 >= 0x1D) {
            GLB->state++;
        } else {
            D_80388A70 = (u16) D_80388A70 + 1;
        }
        break;
    case 2:
        func_8013A28C(arg1, D_80388BAC);
        ACT->flags &= ~0x80;
        func_80010550(arg1, arg2);
        ACT->vz = 0.0f;
        ACT->vx = 0.0f;
        GLB->active = GLB->target;
        GLB->state++;
        break;
    case 3:
        if (GLB->active == NULL) {
            GLB->state = 5;
        } else if (result != 0) {
            func_8013A28C(arg1, D_80388BAC);
            GLB->state++;
        }
        break;
    case 4:
        if (GLB->active == NULL) {
            GLB->state = 5;
        } else if (result != 0) {
            func_8013A28C(arg1, D_80388BB8);
        }
        break;
    case 5:
        des = GLB->target->inner->pos->unk12;
        diff = (s16)(des - POS->unk12);
        if (diff & 0x1000) {
            angle = (s16)((diff & 0x1FFF) - 0x2000);
        } else {
            angle = (s16)(diff & 0x1FFF);
        }
        if ((angle < 0 ? -angle : angle) >= 0x20) {
            if (angle > 0) {
                POS->unk12 = (s16)(POS->unk12 + 0x40);
            } else {
                POS->unk12 = (s16)(POS->unk12 - 0x40);
            }
            POS->unk12 = (s16)(POS->unk12 & 0x1FFF);
        } else {
            POS->unk12 = des;
            GLB->state++;
        }
        break;
    case 6:
        sub->unk0 = 0x168003E;
        sub->unk4 = 0;
        sub->unk6 = 0x1100;
        sub->unk8 = 1.0f;
        func_8013A28C(arg1, *(func_8037C8F8_StructArg *)sub);
        ACT->flags &= ~0x80;
        POS->unk12 = GLB->target->inner->pos->unk12;
        ACT->vy = 0.0f;
        D_80388A74 = 10.0f;
        ACT->vx = func_8001EAD0(POS->unk12) * D_80388A74 / 30.0;
        ACT->vz = func_8001EB64(POS->unk12) * D_80388A74 / 30.0;
        func_80010550(arg1, arg2);
        GLB->active = NULL;
        D_80388A70 = 0;
        GLB->state++;
        break;
    case 7:
        if ((u16)D_80388A70 >= 0x3B) {
            GLB->state++;
        } else {
            D_80388A70 = (u16) D_80388A70 + 1;
        }
        break;
    case 8:
        func_80011140(arg1, arg2, D_80216B90, 5);
        ((s16 *)arg2)[0x18 / 2] = 0;
        GLB->flags &= 0xFFBF;
        ACT->vx = 0.0f;
        ACT->vy = 0.0f;
        ACT->flags |= 0x80;
        ACT->flags |= 0x40;
        ACT->vz = 0.0f;
        ACT->mode = GLB->mode;
        func_801C4A5C(arg0, 0);
        D_80388A70 = 0;
        GLB->state = 0;
        GLB->target = NULL;
        break;
    }
    if (!(GLB->flags & 0x40)) {
        func_800058DC((s32)arg0, func_801E5010);
    }
}
