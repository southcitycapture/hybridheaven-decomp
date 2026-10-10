#include "context.h"

extern void func_80020718(s32);
struct func_8024EE04_Outer;
void func_8024EE04(void *arg0, struct func_8024EE04_Outer **arg1);

typedef struct func_8024ED80_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024ED80_Struct;

void func_8024ED80(s32 arg0, s32 arg1) {
    func_8024ED80_Struct sp18;

    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_80020718(0x172);
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x01900016;
        sp18.unkC = 0x14;
        sp18.unk8 = 1.0f;
        func_801C2F0C(5, (f32 *) &sp18);
        func_800058DC((void *) arg0, (void *) func_8024EE04);
    }
}
