#include "common.h"

typedef struct func_8012C4D0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8012C4D0_Struct;

typedef struct func_8012C4D0_Obj {
    u8 pad0[0x30];
    s32 unk30;
    u8 unk34;
    u8 pad1[9];
    u8 unk3E;
} func_8012C4D0_Obj;

func_8012C4D0_Obj *func_80005670(s32, func_8012C4D0_Struct *);
s32 func_8012C3A0(s32, u8);

func_8012C4D0_Obj *func_8012C4D0(s32 arg1, func_8012C4D0_Struct arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_v0_2;
    func_8012C4D0_Obj *temp_v0;

    temp_v0_2 = func_8012C3A0(arg1, arg5);
    if (temp_v0_2 != 0) {
        temp_v0 = func_80005670(temp_v0_2, &arg2);
        if (temp_v0 != NULL) {
            temp_v0->unk34 = arg5;
            temp_v0->unk3E = 0x19;
            temp_v0->unk30 = 0;
            return temp_v0;
        }
    }
    return NULL;
}
