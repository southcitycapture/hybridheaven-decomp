#include "context.h"

struct func_803770A8_StructInner {
    u8 pad[0x1C];
    s32 unk1C;
};
struct func_803770A8_Struct {
    u8 pad[0x5C];
    struct func_803770A8_StructInner *unk5C;
};

void func_80377140(s32 arg0, s32 arg1);
extern s32 D_80011140(s32, void *, func_8037769C_Glob, s32);

void func_803770A8(struct func_803770A8_Struct *arg0, s32 arg1) {
    struct func_803770A8_StructInner *temp;

    temp = arg0->unk5C;
    if (temp->unk1C != 0x01680041) {
        if (func_80010550(arg1, temp) != 0 &&
            D_80011140(arg1, temp, D_80216B90, 15) != 0) {
            func_800058DC(arg0, func_80377140);
        }
    }
}
