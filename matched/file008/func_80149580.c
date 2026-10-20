#include "context.h"

typedef struct func_80149580_Five {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80149580_Five;

typedef struct func_80149580_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_80149580_Ret;

extern func_80149580_Five D_80181D8C;
extern struct func_80149684_Struct *D_801BED2C;
extern func_80149580_Ret *func_8012C4D0(s32, func_80149580_Five, s32);
extern s32 func_801494A4(void *, u8, f32, f32, f32, s32);

void func_80149580(s32 arg0, struct func_801486A8_Outer *arg1, u8 arg2) {
    f32 unk4;
    f32 unk8;
    f32 unkC;

    unk4 = arg1->unk30->unk4;
    unk8 = arg1->unk30->unk8;
    unkC = arg1->unk30->unkC;
    if (arg1 != NULL) {
        *(s16 *)(D_801BBBF0 + 0x168) = 2;
        D_801BED2C = (struct func_80149684_Struct *)func_8012C4D0(*(s32 *)(D_801BBBF0 + 0x3C), D_80181D8C, 8);
        ((func_80149580_Ret *)D_801BED2C)->unk90 = arg2;
        D_80181D60 = func_801494A4(D_801BED2C, arg2, unk4, unk8, unkC, 2);
        D_80181D5C = (s32)arg1;
        func_80149370();
        func_801493A0();
        func_80006214(arg0);
    }
}
