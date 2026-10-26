#include "common.h"
extern s32 D_8013A334(f32 *, s32, s32, s32);
typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;
extern func_8024C58C_StructGlobal D_801BBBF0;
extern u8 D_801BBF7C[];
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern struct func_80246E60_StructGlobal D_80258F48;
extern s8 D_8025C704;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern s32 func_8012A564(void *, s32);
extern void func_8012A94C(void *, s32);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern s32 D_80244AB0();
#define func_80244AB0 D_80244AB0
extern void func_8024564C();
typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;


typedef struct func_80246488_StructNode {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_80246488_StructNode;
typedef struct func_80246488_StructMid {
    u8 pad[0x2C];
    func_80246488_StructNode *node;
} func_80246488_StructMid;
typedef struct func_80246488_Struct {
    u8 pad[0x24];
    func_80246488_StructMid *mid;
    u8 pad28[8];
    s32 flags;
    u8 pad34[0x28];
    func_80245B90_StructInner *inner;
    u8 pad60[0x34];
    s16 timer;
    u8 pad96[6];
    s32 oldFlags;
} func_80246488_Struct;
typedef struct func_80246488_StructGlobal {
    u8 pad[0x368];
    f32 x, y, z;
} func_80246488_StructGlobal;
extern s32 func_8010854C(f32, f32, f32, f32, f32, f32);
extern void func_801300B0(f32, s32, s32, f32, f32);
extern void func_80246814();
void func_802472C8();
void func_80247420();
extern f32 B_8002FC20(f32, f32);
extern u8 D_8025C16C[];
extern f32 D_8025C5AC;
extern u8 D_8025C6F4[];

void func_80246488(func_80246488_Struct *arg0, s32 arg1) {
    func_80245B90_StructInner *sp84;
    f32 sp78[3];
#define N (arg0->mid->node)
#define GX (((func_80246488_StructGlobal *)&D_801BBBF0)->x)
#define GZ (((func_80246488_StructGlobal *)&D_801BBBF0)->z)
    f32 x, z;
    f32 sine;

    sp84 = arg0->inner;
    if (func_80244AB0() == 0 && func_8012CE9C(arg1, sp84, D_80258F48, 10) == 0) {
        func_80010550(arg1, sp84);
        if (!(arg0->oldFlags & 0x88)) {
            sine = func_8001EAD0(N->angle);
            if (func_8010854C(N->x, N->y + 20.0f, N->z,
                    sine * 50.0f + N->x,
                    N->y + 20.0f,
                    func_8001EB64(N->angle) * 50.0f + N->z)) {
                if ((GX - N->x) * (GX - N->x) + (GZ - N->z) * (GZ - N->z) > 1600.0f) {
                    D_8013A334(sp78, arg1, (s32)sp84, 6);
                    x = N->x;
                    z = N->z;
                    sine = B_8002FC20(x * x + z * z, x);
                    func_8011AAF4(D_8025C16C, 0x370, arg0, 0, 1, 4.0f,
                        (x = N->x) / sine * -150.0f + x, 230.0f,
                        (z = N->z) / sine * -150.0f + z, 4294967296.0f,
                        sp78[0], sp78[1], sp78[2], 0.0f, 35.0f, -1, -1);
                    D_8025C704 = 0;
                    if (*(s32 *)D_801BBF7C == *(s32 *)D_8025C6F4) {
                        func_800058DC(arg0, func_80246814);
                        return;
                    }
                }
            }
            if (arg0->flags & 0x50) {
                sp84->unk78 = 1;
                func_80127430(N->x, N->y, *(s32 *)&N->z, 0x337, D_8025C5AC, 1.0f);
                func_801300B0(2.0f, 0, 30, 0.7f, 5.0f);
                func_800058DC(arg0, func_802472C8);
                return;
            }
        }
        arg0->oldFlags = arg0->flags;
        if (func_8012A564(arg0, 0x42580000) == 0) {
            func_8012A94C(arg0, 0x80);
        }
        if (arg0->timer-- == 0) {
            sp84->unk78 = 1;
            func_800058DC(arg0, func_80247420);
            return;
        }
        if (func_8012A564(arg0, 0x43220000) == 0) {
            sp84->unk78 = 0;
            func_800058DC(arg0, func_8024564C);
        }
    }
}
