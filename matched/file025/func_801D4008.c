#include "context.h"

struct func_801D4008_B { u8 pad[8]; f32 f; };
struct func_801D4008_A { u8 pad[0x2C]; struct func_801D4008_B *p; };
struct func_801D4008_S { u8 pad[0x24]; struct func_801D4008_A *p; };
extern f32 D_801DB3F4;
extern f32 D_801DB3F8;
extern f32 D_801DB3FC;
extern f32 D_801DB400;
extern f32 D_801DD53C;
extern f32 D_801DD540;

void func_801D4008(s32 arg0, s32 arg1) {
    if (arg1) {}
    func_80006214(arg0);
    D_801DB3F4 = ((struct func_801D4008_S *)arg0)->p->p->f;
    D_801DB3F8 = 0.0f;
    D_801DB3FC = D_801DD53C;
    D_801DB400 = D_801DD540;
}
