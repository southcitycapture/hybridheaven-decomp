#include "context.h"

typedef struct func_8003089C_Struct { s32 u0; u8 pad[0x10]; s32 u14; } func_8003089C_Struct;

s32 func_8003089C(func_8003089C_Struct *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 1:
        arg0->u0 = arg2;
        break;
    case 6:
        arg0->u14 = arg2;
        break;
    }
    return 0;
}
