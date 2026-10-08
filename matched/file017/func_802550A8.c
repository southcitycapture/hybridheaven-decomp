#include "context.h"

extern void func_8025799C(void);
extern s32 func_801C2FF8(void);
extern void func_801C2F0C(s32, void *);
extern void func_80255134(void);

typedef struct func_802550A8_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad3[0x10];
} func_802550A8_Struct;

void func_802550A8(void *arg0) {
    func_802550A8_Struct sp18;

    func_8025799C();
    if ((func_80133A24(0x138) != 0) && (func_801C2FF8() != 0)) {
        sp18.unk0 = 0;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xF;
        sp18.unk8 = 3.0f;
        func_801C2F0C(3, &sp18);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_80020718(0x18D);
        func_800058DC(arg0, func_80255134);
    }
}
