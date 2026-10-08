#include "context.h"

typedef struct func_801264D4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    u16 unk12;
} func_801264D4_Sub;

typedef struct func_801264D4_Obj {
    u8 pad[0x2C];
    func_801264D4_Sub *unk2C;
    func_801264D4_Sub *unk30;
} func_801264D4_Obj;

extern func_801264D4_Obj *D_8008DA88[];

void func_801264D4(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u16 arg5) {
    func_801264D4_Obj **temp_v0;
    func_801264D4_Sub *temp_a0;
    func_801264D4_Obj *temp_v1;

    temp_v0 = &D_8008DA88[arg1];
    temp_v1 = *temp_v0;
    temp_a0 = temp_v1->unk2C;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = arg2;
        (*temp_v0)->unk2C->unk8 = arg3;
        (*temp_v0)->unk2C->unkC = arg4;
        (*temp_v0)->unk2C->unk12 = arg5;
        return;
    }
    temp_v1->unk30->unk4 = arg2;
    (*temp_v0)->unk30->unk8 = arg3;
    (*temp_v0)->unk30->unkC = arg4;
    (*temp_v0)->unk30->unk12 = arg5;
}
