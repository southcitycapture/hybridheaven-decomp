#include "context.h"
extern s32 D_80181D5C;
extern s32 D_80181D60;

struct func_801486A8_Obj {
    u8 pad0[0xA0];
    s16 unkA0;
};

struct func_801486A8_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
};

struct func_801486A8_Outer {
    u8 pad0[0x30];
    struct func_801486A8_Inner *unk30;
};

void func_801486A8(struct func_801486A8_Obj *arg0, s16 arg1) {
    s16 temp_v0;

    arg0->unkA0 = arg0->unkA0 + arg1;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk4 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk4;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk8 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk8;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unkC = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unkC;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk10 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk10;
    temp_v0 = arg0->unkA0;
    ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk12 = temp_v0;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk12 = temp_v0;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk14 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk14;
}
