#include "context.h"
void func_8024A4FC(void *arg0, s32 arg1);

extern u8 D_8025CCC0[];
extern f32 D_8025CD68;

void func_8024A418(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -500.0f) {
        func_8011AAF4(D_8025CCC0, 0x2B4, arg0, 0, 1, 0.0f, -234.0f, D_8025CD68, -64.0f, 0.0f, -240.0f, -532.0f, 30.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A4FC);
    }
}
