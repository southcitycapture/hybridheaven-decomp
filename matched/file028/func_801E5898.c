#include "context.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);

struct func_801E5898_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

#define func_801E5898_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define func_801E5898_BASE() func_801E5898_NEXT(func_801E5898_NEXT(func_801E5898_NEXT(func_801E5898_NEXT(D_801DAB14))))
#define func_801E5898_OBJ() (*(u8 **)((u8 *)func_801E5898_BASE() + 0x24))
#define func_801E5898_E() ((struct func_801E5898_Target *)(*(u8 **)((u8 *)func_801E5898_OBJ() + 0x2C)))

s32 func_801E5898(s32 arg0, s32 arg1) {
    func_801E5898_E()->unk4 = -58.0f;
    func_801E5898_E()->unk8 = 0.0f;
    func_801E5898_E()->unkC = -29.0f;
    func_801E5898_E()->unk12 = 0;
    func_801CC470(3, 0x03200031, 0, 0x1001, 1.0f);
    return 5;
}
