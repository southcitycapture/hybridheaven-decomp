#include "context.h"

typedef struct func_80024358_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u8 pad4A[2];
    u16 unk4C;
    u8 pad4E[0xB6 - 0x4E];
    u16 unkB6;
} func_80024358_Struct;

void func_80024358(void) {

    ((func_80024358_Struct *)D_800CBDA4)->unk4C--;
    if (((func_80024358_Struct *)D_800CBDA4)->unkB6 != 0) {
        ((func_80024358_Struct *)D_800CBDA4)->unkB6--;
    }
    if (((func_80024358_Struct *)D_800CBDA4)->unk4C == 0) {
        switch (((func_80024358_Struct *)D_800CBDA4)->unk49) {
        case 0:
            func_8002420C();
            return;
        case 1:
            func_80024278();
            break;
        }
    }
}
