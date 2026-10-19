#include "context.h"

typedef struct func_8024F6C4_Sub2 { u8 pad[0x12]; s16 unk12; } func_8024F6C4_Sub2;
typedef struct func_8024F6C4_Sub { u8 pad[0x2C]; func_8024F6C4_Sub2 *unk2C; } func_8024F6C4_Sub;
typedef struct func_8024F6C4_Struct { u8 pad[0x5C]; s32 unk5C; u8 pad2[0x30]; u16 unk90; } func_8024F6C4_Struct;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80259C3C[];
extern f32 D_8025A0B8;
extern f32 D_8025A0BC;
extern f32 D_8025A0C0;
extern f32 D_8025A0C4;
extern f32 D_8025A0C8;
extern f32 D_8025A0CC;
extern u8 func_8024F818[];

#define GF(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))

void func_8024F6C4(func_8024F6C4_Struct *arg0, func_8024F6C4_Sub **arg1) {
    s32 sp54;
    u16 t;
    func_8024F6C4_Sub2 *s;

    sp54 = arg0->unk5C;
    t = arg0->unk90;
    arg0->unk90 = t + 1;
    if (t >= 0x14) {
        if (t == 0x14) {
            GF(0) = D_8025A0B8;
            GF(1) = D_8025A0BC;
            GF(2) = D_8025A0C0;
            GF(3) = D_8025A0C4;
            GF(4) = D_8025A0C8;
            GF(5) = D_8025A0CC;
            func_8011AAF4(D_80259C3C, 0x456, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        }
        s = (*arg1)->unk2C;
        s->unk12 += 0x74;
        if (func_80010550((void **)arg1, sp54, (void **)arg0) != 0) {
            func_800058DC(arg0, func_8024F818);
        }
    }
}
