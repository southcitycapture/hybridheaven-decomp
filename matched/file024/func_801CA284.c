#include "common.h"

struct func_801CA284_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_800058DC(void *arg0, void *arg1);
void func_8001A804();
extern void func_801CA358();

void func_801CA284(struct func_801CA284_Struct *arg0, s32 arg1) {
    if (arg0->unk3C < 6) {
        arg0->unk3C = 0;
    } else {
        arg0->unk3C = arg0->unk3C - 6;
    }
    func_8001A804(5, "px py sx sy sf wr wg wb wa fr fg fb fa", 8, 8, 0x130, 0xE0, 4, 0, 0, 0, arg0->unk3C, 0, 0, 0, arg0->unk3C);
    if (arg0->unk3C == 0) {
        func_8001A804(5, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_800058DC(arg0, func_801CA358);
    }
}
