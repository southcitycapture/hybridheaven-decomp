#include "context.h"

extern void func_8025799C(void);
extern s32 func_800178E8(void);
extern void func_801C2F0C(s32, void *);
extern void func_80255278(void);

typedef struct func_80255204_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_80255204_Struct;

void func_80255204(s16 *arg0) {
    func_80255204_Struct sp18;

    func_8025799C();
    if (func_800178E8() != 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x03480027;
        sp18.unkC = 0xA;
        sp18.unk8 = 4.0f;
        func_801C2F0C(5, &sp18);
        arg0[0x92 / 2] = 0;
        func_800058DC(arg0, func_80255278);
    }
}
