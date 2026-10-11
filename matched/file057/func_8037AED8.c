#include "context.h"

extern s32 func_8022B640(s32, void *);
extern u8 *D_8008DA88;
extern u8 D_801BBBF0[];
extern u8 D_801BC3D8[];
extern u8 D_801BC03C[];

struct func_8037AED8_Ent {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};
struct func_8037AED8_Tab {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_8037AED8_Ent *unk30;
};
struct func_8037AED8_Obj {
    u8 pad[0xA4];
    s16 unkA4;
    s16 unkA6;
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

void func_8037AED8(struct func_8037AED8_Obj *arg0, s32 arg1) {
    u8 *v1;
    extern s32 func_80236BA4();

    v1 = arg0->unkA8 == 0 ? D_801BC03C : D_801BC3D8;
    if (((u32)(*(s32 *)(v1 + 0x30) << 11) >> 30) != 0) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 1;
        if (!(arg0->unkB0 % 16)) {
            ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unk0 = func_8022B640(8, arg0) + arg0->unkA4;
            ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unk2 = func_8022B640(4, arg0) + arg0->unkA6;
        }
    } else {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 0;
    }
    if ((v1[0x2D0] & 0x10) || (func_80236BA4() == 0)) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 0;
    }
    ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unkB = ((15 - (arg0->unkB0 % 16)) * 255) / 15;
    arg0->unkB0 = arg0->unkB0 + 1;
    if ((D_801BBBF0[0x1031] >= 10 && D_801BBBF0[0x1031] != 15) ||
        (v1 == D_801BBBF0 + 0x7E8 && ((u32)(*(s32 *)(v1 + 0x30) << 1) >> 30) == 3)) {
        func_80005700(arg0);
    }
}
