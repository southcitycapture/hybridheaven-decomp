#include "context.h"
typedef struct func_8000E5D4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8000E5D4_Struct;
extern struct func_8000E980_StructC D_800631E0;
void func_8000E5D4(s32 arg0) {
    *(func_8000E5D4_Struct *)&D_800631E0 = *((func_8000E5D4_Struct **)D_80171CEC[(u16)((arg0 & 0xFFFF0000) >> 16)][1])[(u16)(arg0 & 0xFFFF)];
}
