#include "context.h"

struct func_8037E7E4_StructA {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};
struct func_8037E7E4_StructB {
    u8 pad[0x30];
    u8 *unk30;
};
extern void func_8037E9B8();

void func_8037E7E4(struct func_8037E7E4_StructA *arg0, s32 arg1) {
    s8 sp3F;

    sp3F = 0;
    if (arg0->unkB0 < 8) {
        ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xC] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xD] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xE] = (u32)((func_8001EAD0(arg0->unkB0 << 9) < 0.0f ? -func_8001EAD0(arg0->unkB0 << 9) : func_8001EAD0(arg0->unkB0 << 9)) * 255.0f);
        arg0->unkB0++;
        return;
    }
    ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xC] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xD] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xE] = 0;
    func_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 9, &sp3F, 0);
    func_80006214(arg0);
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037E9B8);
}
