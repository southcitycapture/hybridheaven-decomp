#include "context.h"
extern void func_80243C30(f32, f32, f32);
extern f32 D_8025C6B8;
extern f32 D_8025DDA0;
extern f32 D_8025DDA4;
extern f32 D_8025DDA8;
extern void func_80241BC4();
extern void func_80241C34();

void func_80241A60(void *arg0, s32 arg1) {
    D_8025DDA0 = 0.0f;
    D_8025DDA4 = D_8025C6B8;
    D_8025DDA8 = 0.0f;
    func_80243C30(-182.0f, 95.0f, 0.0f);
    func_80243C30(-140.0f, 95.0f, 40.0f);
    func_80243C30(-102.0f, 95.0f, 80.0f);
    func_80243C30(-22.0f, 95.0f, 80.0f);
    func_80243C30(-2.0f, 95.0f, 40.0f);
    func_80243C30(30.0f, 95.0f, 0.0f);
    func_80243C30(55.0f, 95.0f, -40.0f);
    func_80243C30(75.0f, 95.0f, -80.0f);
    func_80243C30(155.0f, 95.0f, -80.0f);
    func_80243C30(195.0f, 95.0f, -40.0f);
    func_80243C30(234.0f, 95.0f, 0.0f);
    if (func_80133A24(0x13D) == 0) {
        func_800058DC(arg0, func_80241BC4);
        return;
    }
    func_800058DC(arg0, func_80241C34);
}
