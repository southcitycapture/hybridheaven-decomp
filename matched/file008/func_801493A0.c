#include "context.h"
extern s32 D_80181D5C;
extern s32 D_80181D60;
void func_80149370(void);

typedef struct func_801493A0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801493A0_Inner;

typedef struct func_801493A0_Outer {
    u8 pad[0x30];
    func_801493A0_Inner *unk30;
} func_801493A0_Outer;

void func_801493A0(void) {
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk4 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk4;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk8 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk8;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unkC = ((func_801493A0_Outer *) D_80181D5C)->unk30->unkC;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk10 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk10;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk12 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk12;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk14 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk14;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk18 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk18;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk1C = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk1C;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk20 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk20;
    func_80149370();
}
