#include "context.h"

typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;

s32 func_80133A24(s32);
void func_8013A1B4(s32, func_8024AA38_Struct, s32);
void func_8024AAC4(void);

extern func_8024AA38_Struct D_802534A0;
extern u8 D_80253524[];

void func_8024AA38(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_802534A0, 0xFFFFFF);
        func_800179B0(D_80253524);
        func_800058DC((void *) arg0, (void *) func_8024AAC4);
    }
}
