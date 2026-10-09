#include "context.h"
extern void func_8001F74C();
s32 func_80126CC0(s32, void *);
extern void func_80127014(void);

typedef struct func_80241DE0_Struct1 {
    u8 pad0[2];
    u16 unk2;
} func_80241DE0_Struct1;

typedef struct func_80241DE0_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x20 - 0x1C];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    func_80241DE0_Struct1 *unk38;
} func_80241DE0_Struct;

typedef struct func_80241DE0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241DE0_Struct2;

extern func_80241DE0_Struct2 D_8024F768;
extern s32 D_801BCCF0;
extern void func_8012E5B0();
extern void func_8012E6BC();
extern void func_80241EB0();
extern s32 func_8012C4D0(s32, func_80241DE0_Struct2, s32);
extern void func_8013B570(s32, u16, s32, s32, void *);

void func_80241DE0(s32 arg0, s32 arg1) {
    func_80241DE0_Struct *self;

    self = (func_80241DE0_Struct *)arg0;
    func_8001F74C();
    if (func_80126CC0(arg0, &func_80127014) != 0) {
        D_801BCCF0 = func_8012C4D0(arg0, D_8024F768, 5);
        self->unk18 = (void *)func_8012E5B0;
        self->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, self->unk38->unk2, 2, 4, (void *)func_80241EB0);
    }
}
