#include "context.h"

typedef struct func_80362758_Struct {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_80362758_Struct;

u8 func_80362758(func_80362758_Struct *arg0, u8 arg1) {
    s32 temp;
    u8 result;

    temp = arg1 & 0xF0;
    result = 1;
    if (temp == 0) goto case0;
    if (temp == 0x10) goto case10;
    if (temp == 0x20) goto case20;
    if (temp != 0x30) goto end;
    goto case30;
case0:
    return (u8) (arg0->unk2BC < 0 ? 1 : 0);
case10:
    return (u8) (arg0->unk2BE < 0 ? 1 : 0);
case20:
    return (u8) (arg0->unk2C0 < 0 ? 1 : 0);
case30:
    return (u8) (arg0->unk2C2 < 0 ? 1 : 0);
end:
    return result;
}
