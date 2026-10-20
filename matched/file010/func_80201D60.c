#include "context.h"

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern f32 D_801BBF74;

typedef struct func_80201D60_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80201D60_Struct;

void func_80201D60(func_80201D60_Struct *arg0, s32 arg1) {
    if (func_8010843C(arg0->unk90, arg0->unk94, arg0->unk98, arg0->unk90, arg0->unk94 - 1000.0f, arg0->unk98) != 0) {
        arg0->unk94 = D_801BBF74;
    }
}
