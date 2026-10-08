#include "context.h"

typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;

typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;

extern func_8024A4FC_Outer *D_801BBCD0;
extern void func_8024A54C(void);

void func_8024A4FC(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -600.0f) {
        func_800058DC(arg0, (void *) func_8024A54C);
    }
}
