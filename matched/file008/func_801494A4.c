#include "common.h"
extern u8 D_80181ABC[];
s32 func_80147E34(void *arg0, u16 arg1, u8 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
typedef struct func_801482BC_Rec {
    u8 pad0[2];
    u16 unk2;
    u8 unk4;
    u8 unk5;
} func_801482BC_Rec;
s32 func_80148768(s32 arg0);


s32 func_801494A4(void *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    u8 index;
    s32 result[1];
    func_801482BC_Rec *e;

    void * mode;
    index = func_80148768(arg1 & 0xFF);
    mode = (void *)(u32)*((u8 *)&arg5 + 3);
    if (*((u8 *)&arg5 + 3) == 1) {
        e = &((func_801482BC_Rec *)D_80181ABC)[index];
        result[0] = func_80147E34(*(void **)&arg0, e->unk2, e->unk4, arg2, arg3, arg4, (s32)mode);
    } else if (mode == (void *)2) {
        e = &((func_801482BC_Rec *)D_80181ABC)[index];
        result[0] = func_80147E34(*(void **)&arg0, e->unk2, e->unk5, arg2, arg3, arg4, (s32)mode);
    }
    return result[0];
}
