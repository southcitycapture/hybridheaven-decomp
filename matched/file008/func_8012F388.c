#include "context.h"

typedef struct func_8012F388_Struct {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0x4];
    s32 unk4C;
    s32 unk50;
    u8 pad2[0xB4];
    u8 unk108;
} func_8012F388_Struct;

void func_8012F388(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = ((func_8012F388_Struct *) D_801BBBF0)->unk108;
    temp_s1 = temp_v0;
    do {
        ((func_8012F388_Struct *) D_801BBBF0)->unk108 = temp_v0 + arg0;
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk40) != 0) {
            break;
        }
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk44) != 0) {
            break;
        }
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk4C) != 0) {
            break;
        }
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk50) != 0) {
            break;
        }
        temp_v0 = ((func_8012F388_Struct *) D_801BBBF0)->unk108;
    } while (temp_v0 != temp_s1);
}
