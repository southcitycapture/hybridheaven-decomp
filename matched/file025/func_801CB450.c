#include "context.h"

typedef struct func_801CB450_StructArg {
    u8 pad[0xAC];
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801CB450_StructArg;

typedef struct func_801CB450_StructInner {
    u8 pad[8];
    f32 unk8;
    u8 padC[4];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x35];
    u8 unk4B;
} func_801CB450_StructInner;

typedef struct func_801CB450_StructOuter {
    u8 pad[0x30];
    func_801CB450_StructInner *unk30;
} func_801CB450_StructOuter;

extern f32 D_801DD300;

void func_801CB450(func_801CB450_StructArg *arg0, func_801CB450_StructOuter **arg1) {
    f32 ratio;
    s32 done;
    u16 count;

    ratio = (f32)(u32)arg0->unkB0 / (f32)(u32)arg0->unkB2;
    (*arg1)->unk30->unk8 += arg0->unkAC * ((D_801DD300 * ratio) + 1.0f);
    (*arg1)->unk30->unk4B = (u32)((-255.0f * ratio) + 255.0f);
    (*arg1)->unk30->unk10 += 0x71;
    (*arg1)->unk30->unk12 += 0x71;
    (*arg1)->unk30->unk14 += 0x71;
    if (arg0->unkB0++ > arg0->unkB2) {
        func_80005700((s32)arg0);
    }
}
