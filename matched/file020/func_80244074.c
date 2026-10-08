#include "context.h"

extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C2FF8(void);
extern void func_802440D8(void);

typedef struct func_80244074_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80244074_Struct;

void func_80244074(s32 arg0, s32 arg1) {
    u8 pad2[0x8];
    u8 pad[0xC];
    func_80244074_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x01680041;
        sp18.unk8 = 2.0f;
        func_801C2F0C(4, &sp18.unk0);
        func_800058DC(arg0, func_802440D8);
    }
}
