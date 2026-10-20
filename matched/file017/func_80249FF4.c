#include "context.h"

extern u8 D_8025CBA8[];
extern f32 D_8025CD40;
extern f32 D_8025CD44;
extern void func_8024A0D4();

typedef struct func_80249FF4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80249FF4_Struct;

void func_80249FF4(func_80249FF4_Struct *arg0, s32 arg1) {
    if (func_8011AAF4(D_8025CBA8, 0x272, arg0, 0, 2,
        15.0f, D_8025CD40, -32.0f, D_8025CD44, 4294967296.0f,
        13.0f, -292.0f, -5.0f, 0.0f, 55.0f, -1, -1) == 0) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024A0D4);
    }
}
