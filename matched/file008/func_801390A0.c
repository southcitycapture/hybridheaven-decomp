#include "context.h"

typedef struct func_801390A0_Inner { u8 pad[0x14]; u32 unk14; u32 unk18; } func_801390A0_Inner;
typedef struct func_801390A0_Struct { u8 pad[0x38]; func_801390A0_Inner *unk38; } func_801390A0_Struct;

extern s32 func_8012FF4C();
extern void func_801FC720(u16, u16, s32);

void func_801390A0(func_801390A0_Struct *arg0, s32 arg1) {
    if (func_8012FF4C() != 0x18 || (arg0->unk38->unk14 & 0xFFFF) != 4) {
        func_801FC720(arg0->unk38->unk14 >> 16, arg0->unk38->unk14 & 0xFFFF, arg0->unk38->unk18 >> 16);
    }
}
