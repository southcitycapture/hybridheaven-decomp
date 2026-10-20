#include "context.h"

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);

typedef struct func_801F3F70_StructPos {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F3F70_StructPos;

typedef struct func_801F3F70_StructMid {
    u8 pad[0x2C];
    func_801F3F70_StructPos *unk2C;
} func_801F3F70_StructMid;

typedef struct func_801F3F70_StructArg {
    u8 pad[0x24];
    func_801F3F70_StructMid *unk24;
} func_801F3F70_StructArg;

s16 func_801F3F70(arg0)
func_801F3F70_StructArg *arg0;
{
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    s16 var_s0;
    func_801F3F70_StructPos *temp_v0;

    var_s0 = 0;
loop_1:
    temp_v0 = arg0->unk24->unk2C;
    temp_fa1 = temp_v0->unk8;
    temp_fa0 = temp_v0->unk4;
    temp_fv0 = temp_v0->unkC;
    if (func_8010843C(temp_fa0, temp_fa1, temp_fv0, temp_fa0, temp_fa1 - (f32) var_s0, temp_fv0) == 0) {
        var_s0 += 2;
        if (var_s0 < 0x1F4) {
            goto loop_1;
        }
    }
    return (s16) (var_s0 - 1);
}
