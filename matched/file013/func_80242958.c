#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_802429A8();

typedef struct func_80242958_Struct04 {
    u8 pad0[0x4];
    f32 unk4;
} func_80242958_Struct04;

typedef struct func_80242958_Struct2C {
    u8 pad0[0x2C];
    func_80242958_Struct04 *unk2C;
} func_80242958_Struct2C;

typedef struct func_80242958_Struct5C {
    u8 pad0[0x78];
    s16 unk78;
} func_80242958_Struct5C;

typedef struct func_80242958_Struct0 {
    u8 pad0[0x24];
    func_80242958_Struct2C *unk24;
    u8 pad1[0x5C - 0x28];
    func_80242958_Struct5C *unk5C;
} func_80242958_Struct0;

void func_80242958(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct04 *temp_v0;
    func_80242958_Struct5C *temp_v1;
    func_80242958_Struct0 *temp_t7;

    temp_v1 = arg0->unk5C;
    temp_v1->unk78 = 1;
    temp_t7 = arg0;
    temp_v0 = temp_t7->unk24->unk2C;
    temp_v0->unk4 = temp_v0->unk4 - 800.0f;
    func_800058DC(arg0, func_802429A8);
}
