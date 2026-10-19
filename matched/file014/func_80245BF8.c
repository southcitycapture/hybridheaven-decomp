#include "context.h"
extern struct func_802438E4_Table D_802484A0;
extern u8 D_8024A8DC[];
extern f32 D_8024AB24;
extern f32 D_8024AB28;
extern f32 D_8024AB2C;
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern u8 func_80245D74[];

void func_80245BF8(struct func_80245B2C_Obj *arg0, s32 arg1) {
    struct func_80245B2C_Child *c;
    struct { f32 x, y, z; } sp58;

    c = arg0->unk5C;
    if (func_8012CE9C(arg1, c, D_802484A0, 10) == 0) {
        func_8013A334(&sp58.x, arg1, c, 6);
        if ((func_8011AAF4(D_8024A8DC, 0x519, arg0, 0, 1, 4294967296.0f, 144.0f, D_8024AB24, D_8024AB28, 4.0f, sp58.x, sp58.y, sp58.z, 0.0f, 35.0f, -1, -1) == 0) && (*(s32 *)((u8 *)arg0 + 0x30) & 4)) {
            func_80127430(((f32 *)((struct func_80246478_Obj *)arg0)->unk24->unk2C)[1], ((f32 *)((struct func_80246478_Obj *)arg0)->unk24->unk2C)[2], ((s32 *)((struct func_80246478_Obj *)arg0)->unk24->unk2C)[3], 0x13D, D_8024AB2C, 1.0f);
            *(s16 *)((u8 *)c + 0x78) = 1;
            func_800058DC(arg0, func_80245D74);
        }
    }
}
