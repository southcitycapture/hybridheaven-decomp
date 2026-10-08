#include "context.h"

typedef struct func_80257DA0_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x74 - 0x3E];
    s32 unk74;
} func_80257DA0_Struct;

extern s32 func_80126944(void);
extern s32 func_8012C97C(s32, s32);
extern void func_80257E48(void);

void func_80257DA0(func_80257DA0_Struct *arg0, s32 arg1) {
    if (func_80126944() == 1) {
        arg0->unk74 = func_8012C97C(0x302, 3);
    } else {
        arg0->unk74 = func_8012C97C(0x302, 1);
    }
    if (func_80133A24(0x133) != 0) {
        if (func_80133A24(0x134) != 0) {
            if (func_80133A24(0x135) != 0) {
                if (func_80133A24(0x136) != 0) {
                    arg0->unk3C = 0;
                    func_800058DC(arg0, func_80257E48);
                }
            }
        }
    }
}
