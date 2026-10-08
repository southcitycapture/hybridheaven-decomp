#include "common.h"

struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};

extern struct func_8024C5B4_Struct D_801BBBF0;
extern f32 D_80259740;
extern void func_800058DC(s32, void *);
extern s32 func_801C3DC8(s32, s32, s32, s32, f32, f32, f32, f32, f32);
extern void func_8024C630(void);

void func_8024C5B4(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, D_801BBBF0.unk1E8, D_801BBBF0.unk1EC, D_801BBBF0.unk1F0, D_801BBBF0.unk1F4, D_801BBBF0.unk1F8, D_801BBBF0.unk1FC, D_80259740, 35.0f) == 0) {
        func_800058DC(arg0, func_8024C630);
    }
}
