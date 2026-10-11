#include "context.h"

typedef struct func_8013557C_Struct30 {
    u8 pad0[0x10];
    s16 unk10;
} func_8013557C_Struct30;

typedef struct func_8013557C_Struct24 {
    u8 pad0[0x30];
    func_8013557C_Struct30 *unk30;
} func_8013557C_Struct24;

typedef struct func_8013557C_Obj {
    u8 pad0[0x24];
    func_8013557C_Struct24 *unk24;
} func_8013557C_Obj;

s32 func_801FC720(s32, s32, s32);
extern void func_80135520(func_80135520_Obj *arg0, s32 arg1);

void func_8013557C(func_8013557C_Obj *arg0, s32 arg1) {
    func_8013557C_Struct30 *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 4;
    if (func_80126944() == 0) {
        func_801FC720(0x1F9, 3, 0);
        func_800058DC((s32) arg0, &func_80135520);
    }
}
