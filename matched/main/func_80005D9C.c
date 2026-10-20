#include "context.h"

extern s32 func_80005D3C(void);

struct func_80005D9C_Struct {
    u8 pad[0x2A];
    u16 unk2A;
    s32 unk2C;
    s32 unk30;
};

s32 func_80005D9C(void *arg0, u16 arg1) {
    arg1 = arg1 & 0xFFFF;
    switch (arg1) {
    case 12:
        ((struct func_80005D9C_Struct *)arg0)->unk30 = func_80005CDC();
        ((struct func_80005D9C_Struct *)arg0)->unk2C = 0;
        ((struct func_80005D9C_Struct *)arg0)->unk2A = arg1;
        break;
    case 13:
        ((struct func_80005D9C_Struct *)arg0)->unk30 = func_80005CDC();
        ((struct func_80005D9C_Struct *)arg0)->unk2C = 0;
        ((struct func_80005D9C_Struct *)arg0)->unk2A = arg1;
        break;
    default:
        ((struct func_80005D9C_Struct *)arg0)->unk2C = func_80005D3C();
        ((struct func_80005D9C_Struct *)arg0)->unk30 = 0;
        ((struct func_80005D9C_Struct *)arg0)->unk2A = arg1;
        break;
    }
}
