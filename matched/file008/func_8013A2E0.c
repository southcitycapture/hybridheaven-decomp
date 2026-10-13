#include "context.h"
typedef struct func_8013A7D4_Struct {
    u32 x;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8013A7D4_Struct;

typedef struct func_8013A2E0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8013A2E0_Struct;

extern void func_8013A1B4();

void func_8013A2E0(s32 a0, struct func_8013A7D4_Struct arg1) {
    func_8013A1B4(a0, *(func_8013A2E0_Struct *)&arg1, 0xFFFFFF);
}
