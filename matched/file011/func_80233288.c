#include "context.h"

typedef struct func_80233288_Struct {
    u8 pad[4];
    u8 count;
    u8 pad2;
} func_80233288_Struct;

extern s32 func_80378CF0(s32);
extern func_80233288_Struct D_80183CE0[];

void func_80233288(u8 arg0) {
    func_80233288_Struct *temp_v0;
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = arg0;
    temp_v0 = &D_80183CE0[temp_a0];
    temp_v1 = temp_v0->count;
    if (temp_v1 < 0xFF) {
        temp_v0->count = temp_v1 + 1;
        func_80378CF0(temp_a0);
    }
}
