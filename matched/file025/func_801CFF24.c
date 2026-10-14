#include "context.h"

extern u8 D_80171CF0[];
extern void func_801D003C();
extern u8 D_801CFF24[];

struct func_801CFF24_Struct {
    u8 pad[0x24];
    s32 unk24;
};

void func_801CFF24(struct func_801CFF24_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x57, 0);
        if (D_801DAF44 != 0) {
            func_80006214(arg0);
            *(s32 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x30) + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x18);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x30) + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x30) + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
            *(s32 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x24) + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x1C);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x24) + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x24) + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
        }
        func_800058DC(arg0, func_801D003C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801CFF24);
}
