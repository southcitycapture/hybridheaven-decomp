#include "common.h"
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
typedef struct func_802450F8_StructInner {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x68];
    s16 unk78;
} func_802450F8_StructInner;
extern void func_8024564C();


extern func_80246E60_StructGlobal D_80258F00;

typedef struct func_80247224_Struct {
    u8 pad0[0x5C];
    func_802450F8_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80247224_Struct;

void func_80247224(func_80247224_Struct *arg0, s32 arg1)
{
    void *new_var;

    new_var = arg0->unk5C;
    do {
        if (func_8012CE9C(arg1, new_var, D_80258F00, 0xA) != 0) {
            break;
        }
        func_80010550(arg1, new_var);
        if ((arg0->unk94--) == 0) {
            ((func_802450F8_StructInner *)new_var)->unk78 = 1;
            func_800058DC(arg0, func_8024564C);
        }
    } while (0);
}
