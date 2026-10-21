#include "context.h"
struct func_80241358_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
extern u8 D_8025C228[];
void func_802414B0(void *arg0, void *arg1);
void func_80241358(struct func_80241358_Struct *arg0, void *arg1) {
    s32 t;
    if (func_801C3D20(func_8001EAD0(arg0->unk9C) * 5.0f + arg0->unk90, func_8001EB64(arg0->unk9C) * 5.0f + arg0->unk98, 6.0f) != 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = arg0->unk9C & 0x1FFF;
        func_8011AAF4(D_8025C228, 0x17E, arg0, 0, 1, 0.0f, func_8001EAD0(t) * 25.0f + arg0->unk90, arg0->unk94 + 20.0f, func_8001EB64(t) * 25.0f + arg0->unk98, 0.0f, arg0->unk90, arg0->unk94 + 15.0f, arg0->unk98, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_802414B0);
    }
}
