#include "common.h"

typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;
typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;
extern func_8024A4FC_Outer *D_801BBCD0;
extern const u8 D_8025CCC0[];
extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8024A4FC(void *arg0, s32 arg1);
void func_8024A418(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -500.0f) {
        func_8011AAF4(D_8025CCC0, 0x2B4, arg0, 0, 1, 0.0f, -234.0f, (-630.0f), -64.0f, 0.0f, -240.0f, -532.0f, 30.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A4FC);
    }
}
