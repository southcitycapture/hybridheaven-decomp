#include "context.h"
extern s32 D_801DAFE8;
struct func_801D0A74_Struct {
    u8 pad0[0x24];
    u8 *unk24;
    u8 pad1[0x30 - 0x28];
    u8 *unk30;
};
extern void func_80006214(s32);
extern struct func_801D0A74_Struct D_8008DA88;

extern u8 D_80171CF0[];
extern void func_801D0818();
extern void func_8012D844(void *a0, s32 a1, s32 a2);
extern void func_800058DC(void *a0, void *a1);

struct func_801D0700_Struct {
    u8 pad[0x24];
    s32 unk24;
};

void func_801D0700(struct func_801D0700_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x57, 0);
        if (D_801DAFE8 != 0) {
            func_80006214(arg0);
            *(s32 *)(*(s32 *)(D_8008DA88.unk30 + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x18);
            *(u16 *)(*(s32 *)(D_8008DA88.unk30 + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(D_8008DA88.unk30 + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
            *(s32 *)(*(s32 *)(D_8008DA88.unk24 + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x1C);
            *(u16 *)(*(s32 *)(D_8008DA88.unk24 + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(D_8008DA88.unk24 + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
        }
        func_800058DC(arg0, func_801D0818);
        return;
    }
    func_800058DC(arg0, func_801D0700);
}
