#include "context.h"

typedef struct func_8012C52C_StructC {
    s32 pad;
    f32 unk4;
} func_8012C52C_StructC;

typedef struct func_8012C52C_StructB {
    u8 pad[0x2C];
    func_8012C52C_StructC *unk2C;
} func_8012C52C_StructB;

typedef struct func_8012C52C_StructA {
    u8 pad[0x24];
    func_8012C52C_StructB *unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    u8 unk34;
    u8 pad2[9];
    u8 unk3E;
} func_8012C52C_StructA;

extern s32 func_80005F6C(void *, void *);
extern void func_80005700(void *);
extern u8 D_80164F30[];

void *func_8012C52C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_8012C52C_StructA *sp1C;
    s32 temp_v0;

    temp_v0 = func_8012C3A0(arg0, arg6);
    if (temp_v0 != 0) {
        sp1C = (func_8012C52C_StructA *) func_80005670(temp_v0, (func_8012C4D0_Struct *) &arg1);
        if (sp1C != NULL) {
            if (func_80005F6C(sp1C, D_80164F30) == 0) {
                func_80005700(sp1C);
                return NULL;
            }
            sp1C->unk24->unk2C->unk4 = arg7;
            sp1C->unk24->unk2C->unk4 = arg8;
            sp1C->unk24->unk2C->unk4 = arg9;
            sp1C->unk30 |= 1;
            sp1C->unk34 = arg6;
            sp1C->unk3E = 0x19;
            return sp1C;
        }
    }
    return NULL;
}
