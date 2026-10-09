#include "context.h"
extern s32 D_801CD234;
void func_800058DC(void *arg0, void *arg1);
void func_8001A804();
void func_801CA45C(s32 arg0, s32 arg1);

extern s32 func_80005670();
extern u8 D_80044090[];
extern u8 D_801CF5EC[];

struct func_801CA398_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801CA398(struct func_801CA398_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C + 6;
    if (temp_v0 >= 0x100) {
        arg0->unk3C = 0xFF;
        D_801CD234 = func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801CA45C);
    } else {
        arg0->unk3C = (u16) temp_v0;
    }
    func_8001A804(5, D_801CF5EC, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, arg0->unk3C, 0, 0, 0, arg0->unk3C);
}
