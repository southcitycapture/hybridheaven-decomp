#include "context.h"

extern void *func_80005670(void *, void *);
extern u8 D_801E0CFC[];

void func_801CCF88(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_801E0CFC);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x6C) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x70) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x74) = arg3;
        *(f32 *)((u8 *)temp_v0 + 0x7C) = arg4;
        *(f32 *)((u8 *)temp_v0 + 0x80) = arg5;
        *(f32 *)((u8 *)temp_v0 + 0x84) = arg6;
    }
}
