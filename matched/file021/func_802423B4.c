#include "common.h"
typedef struct func_8024345C_Inner2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8024345C_Inner2;
typedef struct func_8024345C_Inner {
    u8 pad0[0x24];
    struct func_8024345C_Inner2 *unk24;
} func_8024345C_Inner;
typedef struct func_8024345C_Struct {
    u8 pad0[0xF23];
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 pad1[0x1044 - 0xF26];
    struct func_8024345C_Inner *unk1044;
} func_8024345C_Struct;
extern struct func_8024345C_Struct D_801BBBF0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern s32 func_80133A24(s32 arg0);

extern s32 func_8001EF38(f32, f32);
extern void func_8002096C(s32, s32, s16);
extern f32 func_8002FC20(f32, s32);
extern void *D_801BBCD8;

struct func_802423B4_S3 { u8 pad[0x4C]; u8 unk4C; u8 unk4D; };
struct func_802423B4_S2 { u8 pad[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[0x20]; f32 unk30; u8 pad34[4]; f32 unk38; f32 unk3C; u8 pad40[4]; f32 unk44; };
struct func_802423B4_S1 { u8 pad[0x30]; struct func_802423B4_S3 *unk30; };
struct func_802423B4_A38 { u8 pad[0x10]; u32 unk10; };
struct func_802423B4_A24 { u8 pad[0x30]; struct func_802423B4_S2 *unk30; };
struct func_802423B4_A { u8 pad[0x24]; struct func_802423B4_A24 *unk24; u8 pad28[0x10]; struct func_802423B4_A38 *unk38; };
struct func_802423B4_P { u8 pad[0x2C]; struct func_802423B4_S2 *unk2C; };

#define GP(off) (*(struct func_802423B4_P **)((u8 *)&D_801BBBF0 + (off)))

void func_802423B4(struct func_802423B4_A *arg0, struct func_802423B4_S1 **arg1) {
    s32 ang;
    struct func_802423B4_S2 *a;
    struct func_802423B4_S2 *p;
    f32 dx, dz;
    s32 ang2;
    f32 v;
    f32 d;

    if ((arg0->unk38->unk10 >> 24) != 0) {
        p = ((struct func_802423B4_P *)D_801BBCD8)->unk2C;
        a = arg0->unk24->unk30;
        ang2 = func_8001EF38(p->unk30 - a->unk4, p->unk38 - a->unkC);
        a = arg0->unk24->unk30;
        p = GP(0xE8)->unk2C;
        dx = a->unk4 - p->unk30;
        dz = a->unkC - p->unk38;
        v = -(GP(0xE0)->unk2C->unk8 + 520.0f);
        ang = (s16)(ang2 - 0x800) & 0x1FFF;
        if (v <= 0.0f) {
            v = 0.0f;
        }
        d = func_8002FC20(dx * dx + dz * dz, ang);
        func_8002096C(0x1A3, 1, (s16)(s32)(((func_8001EAD0((s16)ang) * d / 50.0f) * -64.0f * v) / 60.0f));
        if (GP(0xE0)->unk2C->unkC > 620.0f) {
            p = GP(0xE8)->unk2C;
            ang2 = (s16)(func_8001EF38(p->unk3C - p->unk30, p->unk44 - p->unk38) - 0x1800) & 0x1FFF;
        } else {
            p = GP(0xE8)->unk2C;
            ang2 = (s16)(func_8001EF38(p->unk30 - p->unk3C, p->unk38 - p->unk44) - 0x1800) & 0x1FFF;
        }
        func_8002096C(0x1A3, 2, (s16)(s32)(func_8001EB64((s16)ang2) * 127.0f));
    }
    (*arg1)->unk30->unk4C = (*arg1)->unk30->unk4C;
    if ((arg0->unk38->unk10 >> 24) != 0) {
        if (func_80133A24(0x1A1) != 0) {
            func_8012D918(arg0, 0x500, 2, 0, 0);
        }
        (*arg1)->unk30->unk4D = (*arg1)->unk30->unk4D - 6;
        return;
    }
    if (func_80133A24(0x1A1) != 0) {
        func_8012D918(arg0, 0x500, 4, 0, 0);
    }
    (*arg1)->unk30->unk4D = (*arg1)->unk30->unk4D - 2;
}
