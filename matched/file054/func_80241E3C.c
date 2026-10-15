#include "context.h"
extern void func_8015115C(s32, void *);
struct func_80241F30_Struct {
    u8 pad[0x90];
    u8 unk90;
};
void func_80241F30(struct func_80241F30_Struct *arg0, s32 arg1);

struct func_80241E3C_Struct {
    u8 pad[0x90];
    u8 unk90;
};

extern u8 D_8024776C[];
extern u8 D_80247034[];
extern u8 D_80246924[];
extern f32 D_80248210;
extern f32 D_80248214;
extern f32 D_80248218;
extern f32 D_8024821C;
extern f32 D_80248220;

void func_80241E3C(struct func_80241E3C_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8011AAF4(D_8024776C, 0x3E6, arg0, 0, 1, 0.0f, D_80248210, D_80248214, 9.5f, 0.0f, 0.5f, D_80248218, D_8024821C, 0.0f, D_80248220, -1, -1);
        func_800179B0(D_80247034);
        func_8015115C(D_80248804, D_80246924);
        arg0->unk90 = 0;
        func_800058DC(arg0, (void (*)(void)) func_80241F30);
    }
}
