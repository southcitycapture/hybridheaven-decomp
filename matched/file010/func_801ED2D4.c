#include "common.h"
extern s32 D_80011258(s32, void *);
extern u8 D_801BBBF0[];
s32 func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
void func_801E4F60(u16 arg0);
extern void func_801E5010(void);


typedef struct func_801ED2D4_StructPos {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad1[2];
    s16 angle;
} func_801ED2D4_StructPos;
typedef struct func_801ED2D4_StructOuter {
    u8 pad[0x2C];
    func_801ED2D4_StructPos *pos;
} func_801ED2D4_StructOuter;
typedef struct func_801ED2D4_StructGlobal {
    u8 pad0[0xE0];
    func_801ED2D4_StructOuter *obj;
    u8 pad1[0xEE4-0xE4];
    f32 x, y, z;
    u16 flags;
    u8 pad2[3];
    u8 mode;
    u8 pad3[2];
    s32 unkEF8;
    u8 pad4[2];
    u16 unkEFE;
} func_801ED2D4_StructGlobal;
typedef struct func_801ED2D4_StructObj {
    u8 pad0[0x2C];
    s32 flags;
    u8 pad1[0x10];
    f32 x, y, z;
} func_801ED2D4_StructObj;
typedef union func_801ED2D4_StructAnim {
    struct func_801ED2D4_StructAnimFields {
        s32 unk0;
        s16 unk4;
        u16 unk6;
        f32 unk8;
    } f;
    func_801E74DC_Sub all;
} func_801ED2D4_StructAnim;
typedef struct func_801ED2D4_StructArg {
    u8 pad[0x18];
    s16 unk18;
    u8 pad1[2];
    func_801ED2D4_StructAnim anim;
} func_801ED2D4_StructArg;
typedef union func_801ED2D4_StructAddress {
    u32 address;
    func_801ED2D4_StructAnim *anim;
} func_801ED2D4_StructAddress;
extern void func_800113D0(s32, void *);
extern s32 func_8001EF38(f32, f32);
#define G ((func_801ED2D4_StructGlobal *)&D_801BBBF0)
#define FLAGS(p) (*(u16 *)&(p)->f.unk4 + 0)
#define FP(p) (&(p)->f.unk6)

void func_801ED2D4(func_801ED2D4_StructObj *input, s32 arg1, s32 arg2, s32 arg3)
{
    f32 saved[4];
    func_801ED2D4_StructAnim *p;
    func_801ED2D4_StructPos *pos;
    func_801ED2D4_StructAddress address;
    f32 trig;
    f32 vec[3];
    s32 result;
    s32 flags;

    pos = G->obj->pos;
    saved[0] = pos->x;
    saved[1] = pos->y;
    saved[2] = pos->z;
    result = func_80010550(arg1, (void *)arg2);
    p = (func_801ED2D4_StructAnim *)(((u32)arg2 + 28) & 0xFFFFFFFF);
    flags = *((u8 *)&arg3 + 3);
    G->obj->pos->x = saved[0];
    G->obj->pos->y = saved[1];
    G->obj->pos->z = saved[2];
    switch (p->all.unk0) {
    case 0x1680018:
    case 0x168001B:
        if (result) {
            if (G->mode == 0x2A) p->f.unk0 = 0x1680019;
            else p->f.unk0 = 0x1680030;
            p->f.unk4 = 0;
            func_8013A28C(arg1, p->all);
        }
        break;
    case 0x168001A:
    case 0x168001D:
        if (result) {
            ((func_801ED2D4_StructArg *)arg2)->unk18 = 0;
            G->flags &= ~0x40;
            input->x = 0.0f;
            input->y = 0.0f;
            input->flags |= 0x80;
            input->z = 0.0f;
            p->f.unk0 = 0x1680041;
            p->f.unk4 = 0;
            *FP(p) = 0;
            p->f.unk8 = 1.0f;
            func_8013A28C(arg1, p->all);
            input->flags |= 0x40;
            func_801E4F60(G->unkEFE);
            G->mode = 0;
            G->unkEF8 = 0;
        }
        break;
    case 0x1680019:
    case 0x168001C:
    case 0x1680030:
        if (result || (*FP(p) & 1)) {
            if (flags == 3) {
                if (G->mode == 0x2A) p->f.unk0 = 0x168001A;
                else p->f.unk0 = 0x168001D;
                flags = *FP(p);
                p->f.unk4 = 0;
                if (flags & 0x10) *FP(p) = flags & ~0x10;
                else *FP(p) = flags | 0x10;
                func_8013A28C(arg1, p->all);
            } else {
                p->f.unk4 = 0;
                func_800113D0(arg1, FP(p));
                flags = *FP(p);
                if (flags & 0x10) *FP(p) = flags & ~0x10;
                else *FP(p) = flags | 0x10;
                func_8013A28C(arg1, p->all);
            }
        } else if (flags == 3) {
            D_80011258(arg1, FP(p));
        }
        break;
    default: {
        if (G->mode == 0x2A) p->f.unk0 = 0x1680018;
        else p->f.unk0 = 0x168001B;
        p->f.unk4 = 0;
        *FP(p) = 0x10;
        p->f.unk8 = (0.4f);
        func_8013A28C(arg1, p->all);
        if (G->mode != 0x2A) {
            trig = func_8001EAD0(G->obj->pos->angle);
            G->obj->pos->x = G->obj->pos->x + trig * 5.0;
            trig = func_8001EB64(G->obj->pos->angle);
            G->obj->pos->z = G->obj->pos->z + trig * 5.0;
        }
        input->flags &= ~0x40;
        input->flags |= 0x80;
        input->x = 0.0f;
        input->y = 0.0f;
        input->z = 0.0f;
        vec[0] = G->x;
        vec[1] = G->y;
        vec[2] = G->z;
        G->obj->pos->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
        func_80010550(arg1, (void *)arg2);
        break;
    }
    }
    if (!(G->flags & 0x40)) func_800058DC(input, func_801E5010);
}
