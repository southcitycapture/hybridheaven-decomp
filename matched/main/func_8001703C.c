#include "context.h"

typedef struct func_8001703C_Struct {
    s32 value;
    s32 unk4;
} func_8001703C_Struct;

extern func_8001703C_Struct D_8008DFC4[];

s32 func_8001703C(s32 arg0) {
    if (arg0 >= 0x100) {
        return -1;
    }
    return D_8008DFC4[arg0].value;
}
