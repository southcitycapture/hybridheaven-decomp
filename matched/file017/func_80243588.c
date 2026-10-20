#include "context.h"

struct func_80243588_StructSelf {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_80243588_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u16 unk6;
    u8 pad1[0x39E];
    u8 unk3A6;
    u8 unk3A7;
};
extern void func_801C419C(void *, f32, f32, s32, f32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern u8 D_8025C66C[];
extern f32 D_8025C76C;

void func_80243588(struct func_80243588_StructSelf *arg0, s32 arg1)
{
    s32 timer;

    timer = arg0->unk3C++;
    if (timer >= 30) {
        if (timer == 30) {
            func_8011AAF4(D_8025C66C, 0x401, arg0, 0, 1,
                0.0f, 32.0f, D_8025C76C, 1.0f, 0.0f, 84.0f,
                -336.0f, 1.0f, 0.0f, 55.0f, -1, -1);
        } else {
            func_801C419C(arg0, 0.12f, 0.0f, 0, 55.0f);
        }
    }
    if (timer == 165) {
        func_80020718(10);
    }
    if (timer == 180) {
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk4 = 50;
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk6 = 1;
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A6 = 1;
        ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A7 = 1;
        func_8012FE50(16,
            ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk4,
            ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A6,
            ((struct func_80243588_StructGlobal *)&D_801BBBF0)->unk3A7, 2);
    }
}
