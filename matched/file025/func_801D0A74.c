#include "context.h"

struct func_801D0A74_Struct {
    u8 pad0[0x24];
    u8 *unk24;
    u8 pad1[0x30 - 0x28];
    u8 *unk30;
};

extern void func_80006214(s32);
extern struct func_801D0A74_Struct D_8008DA88;
extern s32 D_801DAFE8;
extern s32 D_801E1300;

void func_801D0A74(s32 arg0) {
    if (D_801DAFE8 != 0) {
        func_80006214(D_801E1300);
        if (arg0 != 0) {
            D_8008DA88.unk30[0x22] = 0;
            D_8008DA88.unk24[0x22] = 0;
            return;
        }
        D_8008DA88.unk30[0x22] = 1;
        D_8008DA88.unk24[0x22] = 1;
    }
}
