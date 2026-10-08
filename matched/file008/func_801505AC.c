#include "common.h"

struct func_801505AC_Struct {
    u8 pad[0x3B8];
    u16 unk3B8;
    s32 unk3BC[1];
};

extern struct func_801505AC_Struct D_801BBBF0;

s32 func_801505AC(s32 arg0) {
    struct func_801505AC_Struct *ptr;
    s32 *argp;

    argp = &arg0;
    ptr = &D_801BBBF0;
    arg0 = arg0 & 0xFFFF;
    if (arg0 < ptr->unk3B8) {
        return ptr->unk3BC[arg0];
    }
    return 0;
}
