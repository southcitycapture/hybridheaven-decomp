#include "common.h"
extern u8 D_801BBBF0[];
extern int D_8021AFC8;
s32 func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, void *);
extern void func_800111E0(s32, void *);
extern void func_80011258(s32, s32, u16);
extern void func_800112B0(s32, u16 *);
extern void func_80011328(s32, u16 *);
extern void func_80011380(s32, u16 *);
extern void func_800113D0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
extern void func_801E5010(void);


typedef struct func_801EBCC4_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_801EBCC4_StructPos;

typedef struct func_801EBCC4_StructObj {
    u8 pad[0x2C];
    func_801EBCC4_StructPos *pos;
} func_801EBCC4_StructObj;

typedef struct func_801EBCC4_StructVec {
    f32 x, y, z;
} func_801EBCC4_StructVec;

typedef struct func_801EBCC4_StructGlobal {
    u8 pad0[0xE0];
    func_801EBCC4_StructObj *obj;
    u8 pad1[0x35A - 0xE4];
    u8 kind;
    u8 pad2[0x380 - 0x35B];
    f32 x, y, z;
    u8 pad3[0xEE4 - 0x38C];
    func_801EBCC4_StructVec vec;
    u16 flags;
    u8 pad4[3];
    u8 state;
    u8 pad5[2];
    s32 value;
    u8 pad6[2];
    u16 id;
} func_801EBCC4_StructGlobal;

typedef struct func_801EBCC4_StructAnim {
    s32 id;
    u16 frame;
    u16 flags;
    f32 rate;
} func_801EBCC4_StructAnim;

typedef struct func_801EBCC4_StructArg2 {
    u8 pad[0x18];
    s16 unk18;
    u8 pad1[2];
    func_801EBCC4_StructAnim anim;
} func_801EBCC4_StructArg2;

typedef struct func_801EBCC4_StructArg0 {
    u8 pad[0x2C];
    s32 flags;
    u8 pad1[0x40 - 0x30];
    f32 x, y, z;
} func_801EBCC4_StructArg0;



#define HH_GLOBAL ((func_801EBCC4_StructGlobal *)D_801BBBF0)
#define HH_POS (HH_GLOBAL->obj->pos)
#define HH_ANIM (*(func_801E74DC_Sub *)anim)
#define HH_BYTE (*(u8 *)&D_8021AFC8)

void func_801EBCC4(arg0, arg1, arg2, arg3)
func_801EBCC4_StructArg0 *arg0;
s32 arg1;
func_801EBCC4_StructArg2 *arg2;
s32 arg3;
{
    u8 mode;
    func_801EBCC4_StructVec saved;
    f32 y;
    s32 result;
    func_801EBCC4_StructPos *pos;
    register func_801EBCC4_StructAnim *anim;
    f32 vec[3];
    f32 dx, dz;
    s16 saveAngle;
    f32 oldX, oldZ;

    anim = (func_801EBCC4_StructAnim *)((s32)arg2 + 0x1C);
    pos = HH_POS;
    saved.x = pos->x;
    saved.y = pos->y;
    saved.z = pos->z;
    result = func_80010550(arg1, arg2);
    mode = *((u8 *)&arg3 + 3);
    HH_POS->x = saved.x;
    HH_POS->y = saved.y;
    HH_POS->z = saved.z;
    pos = HH_POS;
    oldX = pos->x;
    oldZ = pos->z;
    saveAngle = pos->angle;
    switch (anim->id) {
    case 0x0168001E:
        HH_BYTE = 0;
        if (result != 0) {
            if ((anim->flags & 2) != 2) {
                anim->id = 0x0168001F;
                anim->frame = 0;
                anim->flags = 1;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
            } else {
                func_801BF1A0(13);
                arg2->unk18 = 0;
                HH_GLOBAL->flags &= ~0x40;
                arg0->x = 0.0f;
                arg0->z = 0.0f;
                arg0->flags |= 0x80;
                anim->id = 0x01680041;
                anim->frame = 0;
                anim->flags = 0;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
                arg0->flags |= 0x40;
                func_801E4F60(HH_GLOBAL->id);
                HH_GLOBAL->state = 0;
                HH_GLOBAL->value = 0;
                return;
            }
        }
        break;
    case 0x0168002F:
        HH_BYTE = 0;
        if (result != 0) {
            if (anim->flags & 0x10) {
                anim->flags = 0x11;
            } else {
                anim->flags = 1;
            }
            anim->id = 0x0168001F;
            anim->frame = 0;
            anim->rate = 1.0f;
            func_8013A28C(arg1, HH_ANIM);
        }
        break;
    case 0x01680020:
        if (result != 0) {
            if (anim->flags & 2) {
                anim->id = 0x0168001F;
                anim->frame = 0;
                anim->flags = 1;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
            } else {
                func_801BF1A0(13);
                arg2->unk18 = 0;
                HH_GLOBAL->flags &= ~0x40;
                arg0->x = 0.0f;
                arg0->z = 0.0f;
                arg0->flags |= 0x80;
                anim->id = 0x01680041;
                anim->frame = 0;
                anim->flags = 0;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
                arg0->flags |= 0x40;
                func_801E4F60(HH_GLOBAL->id);
                HH_GLOBAL->state = 0;
                HH_GLOBAL->value = 0;
            }
        }
        break;
    case 0x0168001F:
        HH_BYTE = mode;
        switch (mode) {
        case 1:
            func_800113D0(arg1, &anim->flags);
            func_800111E0(arg1, &anim->flags);
            func_80011328(arg1, &anim->flags);
            break;
        case 2:
            func_800113D0(arg1, &anim->flags);
            func_800112B0(arg1, &anim->flags);
            func_800111E0(arg1, &anim->flags);
            break;
        case 3:
            func_801C5A1C((pos = HH_POS)->x, y = pos->y + 16.5, pos->z, func_8001EAD0(HH_POS->angle) * 10.0 + pos->x, y, func_8001EB64(HH_POS->angle) * 10.0 + pos->z);
            if (anim->flags & 0x10) {
                anim->flags = 0x10;
            } else {
                anim->flags = 0;
            }
            if (HH_GLOBAL->kind == 10) {
                anim->id = 0x0168001E;
                anim->frame = 0x1D;
                anim->flags |= 2;
            } else {
                anim->id = 0x01680020;
                anim->frame = 0;
            }
            func_8013A28C(arg1, HH_ANIM);
            break;
        default:
            func_80011258(arg1, (s32)&anim->flags, mode);
            func_80011380(arg1, &anim->flags);
            break;
        }
        break;
    default:
        HH_BYTE = 0;
        if (func_801C5A1C((pos = HH_POS)->x, y = pos->y + 16.5, pos->z, func_8001EAD0(HH_POS->angle) * 10.0 + pos->x, y, func_8001EB64(HH_POS->angle) * 10.0 + pos->z) != 0) {
            vec[0] = HH_GLOBAL->vec.x;
            vec[1] = HH_GLOBAL->vec.y;
            vec[2] = HH_GLOBAL->vec.z;
            switch (HH_GLOBAL->kind) {
            case 27:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 3.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 3.0 + HH_GLOBAL->z;
                func_801E4F60(0);
                anim->id = 0x01680020;
                anim->frame = 0x1D;
                anim->flags = 2;
                func_801BF1A0(3);
                break;
            case 23:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->z;
                dx = -func_8001EAD0(HH_POS->angle + 0x1000) * 5.0;
                dz = -func_8001EB64(HH_POS->angle + 0x1000) * 5.0;
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1000) & 0x1FFF;
                if (func_801C5A1C((pos = HH_POS)->x + dx, pos->y + 16.5, pos->z + dz, func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz)) != 0) {
                    if (HH_GLOBAL->kind != 3) {
                        func_801C5A1C(-(2.0 * func_8001EAD0(HH_POS->angle)) + ((pos = HH_POS)->x + dx), pos->y + 16.5, (pos->z + dz) - 2.0 * func_8001EB64(HH_POS->angle), func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz));
                    }
                } else {
                    HH_POS->x = oldX;
                    HH_POS->z = oldZ;
                    HH_POS->angle = saveAngle;
                    anim->id = 0x01680007;
                    anim->frame = 0;
                    anim->flags = 0;
                    func_8013A28C(arg1, HH_ANIM);
                    arg0->flags |= 0x80;
                    HH_GLOBAL->state = 0;
                    HH_GLOBAL->value = 0;
                    HH_GLOBAL->flags &= ~0x40;
                    arg0->x = 0.0f;
                    arg0->y = 0.0f;
                    arg0->z = 0.0f;
                    func_801E4F60(HH_GLOBAL->id);
                    break;
                }
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->x - dx;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->z - dz;
                func_801E4F60(0);
                anim->id = 0x0168002F;
                anim->frame = 0x1D;
                anim->flags = 2;
                func_801BF1A0(3);
                break;
            case 28:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->z;
                dx = -func_8001EAD0(HH_POS->angle + 0x1000) * 5.0;
                dz = -func_8001EB64(HH_POS->angle + 0x1000) * 5.0;
                HH_POS->angle = func_8001EF38(-vec[2], vec[0]) & 0x1FFF;
                if (func_801C5A1C((pos = HH_POS)->x + dx, pos->y + 16.5, pos->z + dz, func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz)) != 0) {
                    if (HH_GLOBAL->kind != 3) {
                        func_801C5A1C(-(2.0 * func_8001EAD0(HH_POS->angle)) + ((pos = HH_POS)->x + dx), pos->y + 16.5, (pos->z + dz) - 2.0 * func_8001EB64(HH_POS->angle), func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz));
                    }
                } else {
                    HH_POS->x = oldX;
                    HH_POS->z = oldZ;
                    HH_POS->angle = saveAngle;
                    anim->id = 0x01680007;
                    anim->frame = 0;
                    anim->flags = 0;
                    func_8013A28C(arg1, HH_ANIM);
                    arg0->flags |= 0x80;
                    HH_GLOBAL->state = 0;
                    HH_GLOBAL->value = 0;
                    HH_GLOBAL->flags &= ~0x40;
                    arg0->x = 0.0f;
                    arg0->y = 0.0f;
                    arg0->z = 0.0f;
                    func_801E4F60(HH_GLOBAL->id);
                    break;
                }
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->x - dx;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->z - dz;
                func_801E4F60(0);
                anim->id = 0x0168002F;
                anim->frame = 0x1D;
                anim->flags = 0x12;
                func_801BF1A0(3);
                break;
            case 10:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 5.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 5.0 + HH_GLOBAL->z;
                anim->id = 0x0168001E;
                anim->frame = 0;
                anim->flags = 0;
                break;
            default:
                HH_POS->x = oldX;
                HH_POS->z = oldZ;
                HH_POS->angle = saveAngle;
                anim->id = 0x01680007;
                anim->frame = 0;
                anim->flags = 0;
                func_8013A28C(arg1, HH_ANIM);
                arg0->flags |= 0x80;
                HH_GLOBAL->state = 0;
                HH_GLOBAL->value = 0;
                HH_GLOBAL->flags &= ~0x40;
                arg0->x = 0.0f;
                arg0->y = 0.0f;
                arg0->z = 0.0f;
                func_801E4F60(HH_GLOBAL->id);
                break;
            }
            func_8013A28C(arg1, HH_ANIM);
            arg0->flags &= ~0x40;
            arg0->flags |= 0x80;
            arg0->x = 0.0f;
            arg0->y = 0.0f;
            arg0->z = 0.0f;
            func_80010550(arg1, arg2);
        } else {
            HH_POS->x = oldX;
            HH_POS->z = oldZ;
            HH_POS->angle = saveAngle;
            anim->id = 0x01680007;
            anim->frame = 0;
            anim->flags = 0;
            func_8013A28C(arg1, HH_ANIM);
            arg0->flags |= 0x80;
            HH_GLOBAL->state = 0;
            HH_GLOBAL->value = 0;
            HH_GLOBAL->flags &= ~0x40;
            arg0->x = 0.0f;
            arg0->y = 0.0f;
            arg0->z = 0.0f;
            func_801E4F60(HH_GLOBAL->id);
        }
        break;
    }
    if (!(HH_GLOBAL->flags & 0x40)) {
        func_800058DC(arg0, func_801E5010);
    }
}
