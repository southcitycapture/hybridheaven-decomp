#include "context.h"

s32 func_80245838(s32 arg0, func_80242080_Struct1 **arg1) {
    func_80242080_Struct2 *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = temp_v0->unk4B - 0x18;
    if ((*arg1)->unk30->unk4B < 0x18) {
        return 0;
    }
    return 1;
}
