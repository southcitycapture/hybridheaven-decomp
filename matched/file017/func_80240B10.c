#include "common.h"

extern void func_800058DC(void *, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern s32 func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
struct func_80240B10_Struct {
    u8 pad0[0x74];
    s32 unk74;
    u8 pad1[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
};
extern void func_80240C00();
void func_80240B10(struct func_80240B10_Struct *arg0, void *arg1) {
    s32 angle;

    angle = (s16)(arg0->unk9C + 0x1000) & 0x1FFF;
    if (func_801C3DC8(arg0, func_8001EAD0(angle) * 30.0f + arg0->unk90, arg0->unk94 + 17.0f,
                       func_8001EB64(angle) * 30.0f + arg0->unk98, arg0->unk90, arg0->unk94 + 15.0f, arg0->unk98,
                       0.200000003f, 35.0f) == 0) {
        arg0->unk74 = 0;
        func_80020718(0x14C);
        func_800058DC(arg0, func_80240C00);
    }
}
