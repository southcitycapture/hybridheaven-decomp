#include "context.h"

extern u16 func_8014B518();
extern u8 *func_8014B670(void);
extern void *func_8014B7CC(s32);
extern s32 func_8014B6F8(u16);
s32 func_801FF180(f32, f32, s32, s16, void *, u8, u16);

struct func_8014ADB4_Struct {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    s32 unk4;
    u8 unk8;
    u8 unk9;
};

u16 func_8014ADB4(f32 arg0, f32 arg1, s32 arg2, s16 arg3, u16 arg4, u8 arg5, volatile u16 arg6) {
    struct func_8014ADB4_Struct *p;
    s32 sp2C;

    if (arg5 >= 0x2E) {
        return 0;
    }
    if (arg6 >= 4) {
        return 0;
    }
    sp2C = arg4;
    if (sp2C >= 0x8000) {
        if (func_8014B7CC(arg4) != 0) {
            return 0;
        }
        if (func_8014B6F8(arg4) != 0) {
            return 0;
        }
    }
    p = (struct func_8014ADB4_Struct *)func_8014B670();
    if (p != NULL) {
        p->unk0 = 1;
        p->unk1 = 0;
        if (sp2C >= 0x8000) {
            p->unk2 = arg4;
        } else {
            p->unk2 = func_8014B518();
        }
        p->unk8 = arg5;
        p->unk9 = arg6;
        p->unk4 = func_801FF180(arg0, arg1, arg2, arg3, p, arg5, arg6);
        if (p->unk4 == 0) {
            return 0;
        }
        return p->unk2;
    }
    return 0;
}
