#include "context.h"

extern u8 D_80164F40[];

typedef struct func_8012C5F0_StructC {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8012C5F0_StructC;

typedef struct func_8012C5F0_StructB {
    u8 pad0[0x30];
    func_8012C5F0_StructC *unk30;
} func_8012C5F0_StructB;

typedef struct func_8012C5F0_StructA {
    u8 pad0[0x24];
    func_8012C5F0_StructB *unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 unk34;
    u8 pad2[0x9];
    u8 unk3E;
} func_8012C5F0_StructA;

func_8012C4D0_Obj *func_8012C5F0(s32 arg0, func_8012C4D0_Struct arg1, s32 arg4, s32 arg5, u8 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_8012C5F0_StructA *obj;
    s32 temp_v0;

    temp_v0 = func_8012C3A0(arg0, arg6);
    if (temp_v0 != 0) {
        obj = (func_8012C5F0_StructA *) func_80005670(temp_v0, &arg1);
        if (obj != NULL) {
            if (func_80005F6C(obj, &D_80164F40) == 0) {
                func_80005700(obj);
                return NULL;
            }
            obj->unk24->unk30->unk4 = arg7;
            obj->unk24->unk30->unk8 = arg8;
            obj->unk24->unk30->unkC = arg9;
            obj->unk30 |= 1;
            obj->unk34 = arg6;
            obj->unk3E = 0x19;
            return (func_8012C4D0_Obj *) obj;
        }
    }
    return NULL;
}
