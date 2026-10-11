#include "context.h"
typedef struct func_801CC470_Struct {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801CC470_Struct;
extern func_801CC470_Struct **D_801E06D8[];

s32 func_801CC458(s32 arg0, s32 arg1) {
    D_801E06D8[arg0] = (func_801CC470_Struct **) arg1;
    return 1;
}
