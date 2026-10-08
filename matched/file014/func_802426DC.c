#include "context.h"

typedef struct func_802426DC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_802426DC_Struct;

extern s32 func_80133A24(s32);
extern s32 func_8012C97C(s32, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800058DC(void *, void *);
extern u8 D_80164F40[];
extern void func_8024276C(void);

void func_802426DC(func_802426DC_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x68) != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        arg0->unk74 = func_8012C97C(0x23A, 4);
        arg0->unk2C = 0x800;
        func_800058DC(arg0, func_8024276C);
    }
}
