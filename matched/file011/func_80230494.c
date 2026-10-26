#include "common.h"
extern s32 func_80378EBC();


typedef struct func_80230494_Struct { s32 w[0x19]; } func_80230494_Struct;
typedef struct func_80230494_Struct2 { s32 w[0x18]; } func_80230494_Struct2;
extern func_80230494_Struct D_8023E324;

u8 func_80230494(void) {
    s32 r;
    s32 i;
    func_80230494_Struct2 buf;

    *(func_80230494_Struct *)&buf = D_8023E324;
    r = func_80378EBC();
    i = r & 0xFFFF;
    if (r >= 0x64) {
        i = 0x63;
    }
    return ((u8 *)&buf)[i];
}
