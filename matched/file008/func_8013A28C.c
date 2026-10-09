#include "context.h"

typedef struct func_8013A28C_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8013A28C_Struct;

extern void func_8013A1B4(s32 a0, func_8013A28C_Struct v, s32 a4);

void func_8013A28C(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_8013A1B4(a0, *(func_8013A28C_Struct *)&a1, 0x3FFFF);
}
