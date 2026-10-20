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
typedef struct func_8012636C_Src {
    u8 pad[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
} func_8012636C_Src;
typedef struct func_8012636C_Arg {
    u8 pad[0x38];
    func_8012636C_Src *unk38;
} func_8012636C_Arg;
typedef struct func_8012636C_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    u16 unk12;
} func_8012636C_Sub;
typedef struct func_8012636C_Obj {
    u8 pad[0x2C];
    func_8012636C_Sub *unk2C;
    func_8012636C_Sub *unk30;
} func_8012636C_Obj;

void func_8012636C(func_8012636C_Arg *arg0, s32 arg1) {
    func_8012636C_Obj **p = (func_8012636C_Obj **)D_8008DA88 + arg1;
    if ((*p)->unk2C != NULL) {
        (*p)->unk2C->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        (*p)->unk2C->unk8 = (f32)arg0->unk38->unk8 / 10.0;
        (*p)->unk2C->unkC = (f32)arg0->unk38->unkA / 10.0;
        (*p)->unk2C->unk12 = arg0->unk38->unkC;
        return;
    }
    (*p)->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
    (*p)->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
    (*p)->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
    (*p)->unk30->unk12 = arg0->unk38->unkC;
}
