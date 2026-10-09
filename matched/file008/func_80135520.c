#include "context.h"

void func_80020718(s32 arg0);
extern u8 func_8013557C[];

typedef struct func_80135520_Struct {
    u8 pad0[0x10];
    s16 unk10;
} func_80135520_Struct;

typedef struct func_80135520_Obj {
    u8 pad0[0x24];
    struct {
        u8 pad0[0x30];
        func_80135520_Struct *unk30;
    } *unk24;
} func_80135520_Obj;

void func_80135520(func_80135520_Obj *arg0, s32 arg1) {
    func_80135520_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 4;
    if (func_80126944() == 1) {
        func_80020718(0x6B4);
        func_800058DC((s32) arg0, func_8013557C);
    }
}
