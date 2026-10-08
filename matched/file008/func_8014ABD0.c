#include "context.h"

typedef struct func_8014ABD0_Struct {
    u8 pad0[0x168];
    s16 unk168;
    u8 pad1[0xEF0 - 0x16A];
    u16 unkEF0;
    u8 pad2[0x1035 - 0xEF2];
    u8 unk1035;
} func_8014ABD0_Struct;

extern void func_80005700(s32);
extern void func_8001F6FC(void);
extern s32 func_80126944(void);
extern void func_80236C60(void);

void func_8014ABD0(s32 arg0, s32 arg1) {
    if (((func_8014ABD0_Struct *) D_801BBBF0)->unk1035 == 0) {
        if (func_80126944() == 1) {
            func_80236C60();
        }
        ((func_8014ABD0_Struct *) D_801BBBF0)->unk168 = 0;
        ((func_8014ABD0_Struct *) D_801BBBF0)->unkEF0 = ((func_8014ABD0_Struct *) D_801BBBF0)->unkEF0 & 0xFFEF;
        func_8001F6FC();
        func_80005700(arg0);
    }
}
