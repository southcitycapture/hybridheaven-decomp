#include "context.h"

struct func_8024D564_Inner {
    u8 pad[0x12];
    s16 unk12;
};
struct func_8024D564_Struct {
    u8 pad[0x2C];
    struct func_8024D564_Inner *unk2C;
};
extern s16 func_801FD284(s16, s32, s32);
extern void func_8024D5DC(void);
extern struct func_8024D564_Struct *D_801BBCD0;

void func_8024D564(void *arg0, void *arg1) {
    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, 0, 0x3D4CCCCD);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024D5DC);
    }
}
