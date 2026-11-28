#include "common.h"
extern u8 D_801BBBF0[];
extern struct func_801C88BC_Fwd D_801E4048;
extern s32 D_801E4054;
extern s32 D_801E4058;
extern s16 D_801E405C;
extern void func_800058DC(void *, void *);
extern f32 func_8002FC20(f32);
struct func_801CB71C_Struct6 { u8 pad[6]; s16 unk6; s16 unk8; s16 unkA; };
struct func_801CB71C_Struct7 { u8 pad0[0x38]; struct func_801CB71C_Struct6 *unk38; u8 pad1[0x98 - 0x3C]; u8 unk98; u8 unk99; u8 pad2[2]; s16 unk9C; };
void func_801CB71C(struct func_801CB71C_Struct7 *arg0, s32 arg1);


typedef struct func_801CB864_Struct1 {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 padE[2];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad1C[4];
} func_801CB864_Struct1;

typedef struct func_801CB864_Struct0 {
    u8 pad0[0x38];
    func_801CB864_Struct1 *unk38;
    u8 pad3C[0x98 - 0x3C];
    u8 unk98;
    u8 unk99;
    u8 pad9A[2];
    u16 unk9C;
} func_801CB864_Struct0;

typedef struct func_801CB864_StructCamera {
    u8 pad0[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CB864_StructCamera;
typedef struct func_801CB864_StructMid {
    u8 pad0[0x2C];
    func_801CB864_StructCamera *unk2C;
} func_801CB864_StructMid;
typedef struct func_801CB864_StructGlobal {
    u8 pad0[0xE8];
    func_801CB864_StructMid *unkE8;
} func_801CB864_StructGlobal;

typedef struct func_801CB864_StructParams58 {
    u8 pad0[8];
    f32 speed1;
} func_801CB864_StructParams58;
typedef struct func_801CB864_StructParams54 {
    u8 pad0[0x10];
    f32 speed2;
} func_801CB864_StructParams54;
typedef struct func_801CB864_StructParams48 {
    u8 pad0[0x18];
    f32 speed1;
} func_801CB864_StructParams48;
extern s32 func_8011AAF4(char *, s32, void *, s32, u8, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_801E4060;
extern f32 D_801E4064;

void func_801CB864(func_801CB864_Struct0 *arg0, s32 arg1) {
    func_801CB864_Struct1 *e;
    f32 distance, dx, dy, dx2;
    f32 y2, z2;
    f32 dy2;
    f32 div;
    f32 x1, y1, z1, x2;
    func_801CB864_StructCamera *p;
    s32 v;
    u8 type;
    s32 count;
    u8 idx;

    idx = arg0->unk98;
    e = idx + arg0->unk38;
    v = e->unkC;
    arg1 = v >> 12;
    count = (s16)v;
loop:
    type = (u8)arg1;
    count &= 0xFFF;
    if (type) {
        x1 = (f32)e->unk6 / 10.0;
        y1 = (f32)e->unk8 / 10.0;
        z1 = (f32)e->unkA / 10.0;
        x2 = e->unk10 / 10.0;
        y2 = e->unk14 / 10.0;
        z2 = e->unk18 / 10.0;
        if (type != 4) {
        if (type == 3) {
            if (arg0->unk9C >= count) {
                arg0->unk98 = idx + 1;
                arg0->unk9C = 0;
                D_801E405C = 0;
            } else {
                arg0->unk9C++;
            }
        } else {
        if (type == 2) {
            if (arg0->unk99 == 0) {
                p = ((func_801CB864_StructGlobal *)D_801BBBF0)->unkE8->unk2C;
                dx = p->unk30 - x1;
                dy = p->unk34 - y1;
                distance = func_8002FC20(dx * dx
                                       + dy * dy
                                       + (p->unk38 - z1) * (p->unk38 - z1));
                div = (u32)count;
                D_801E4060 = distance / div;
                p = ((func_801CB864_StructGlobal *)D_801BBBF0)->unkE8->unk2C;
                dx2 = p->unk3C - x2;
                dy2 = p->unk40 - y2;
                D_801E4064 = func_8002FC20(dx2 * dx2
                                         + dy2 * dy2
                                         + (p->unk44 - z2) * (p->unk44 - z2)) / div;
                arg0->unk99 = 1;
            }
        } else {
            D_801E4064 = 1.0f;
            ((func_801CB864_StructParams48 *)&D_801E4048)->speed1 = 1.0f;
        }
        if (func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/player/p1.c", 0x37C, arg0, 0, type,
                          ((func_801CB864_StructParams58 *)&D_801E4058)->speed1, x1, y1, z1, ((func_801CB864_StructParams54 *)&D_801E4054)->speed2, x2, y2, z2, 0.0f, 35.0f, -1, -1) == 0) {
            arg0->unk99 = 0;
            arg0->unk98++;
            D_801E405C = 0;
            if (type == 2) {
                idx = arg0->unk98;
                e = idx + arg0->unk38;
                v = e->unkC;
                arg1 = v >> 12;
                count = (s16)v;
                if (arg1 == 1) {
                    (void)"\317\242\302\263\306\260\272\356\n";
                    goto loop;
                }
            }
        }
        }
        }
    } else {
        if (func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/player/p1.c", 0x388, arg0, 2, 1,
                          1.0f, (p = ((func_801CB864_StructGlobal *)D_801BBBF0)->unkE8->unk2C)->unk30, p->unk34, p->unk38, 1.0f, p->unk3C, p->unk40, p->unk44, 0.0f, 35.0f, -1, -1) == 0) {
            func_800058DC(arg0, func_801CB71C);
        }
    }
}
