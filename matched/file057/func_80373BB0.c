#include "context.h"
struct func_80373BF0_Struct {
    u8 pad[4];
    s32 *unk4;
};
extern struct func_80373BF0_Struct *D_80171CEC[];

extern s32 func_8000511C(u16, s32);

s64 func_80373BB0(u16 arg0) {
    return func_8000511C(**(u16 **)D_80171CEC[arg0], arg0);
}
