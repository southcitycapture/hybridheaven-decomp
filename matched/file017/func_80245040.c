#include "ctx_test.h"

typedef struct func_80245040_Struct {
    u8 pad0[4];
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
} func_80245040_Struct;

typedef struct func_80245040_Obj {
    u8 pad0[0x30];
    u8 *unk30;
} func_80245040_Obj;

void func_80245040(s32 arg0, void *arg1) {
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v0 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk4)->unk30;
    temp_v0[0x4C] = (u8) (temp_v0[0x4C] + 1);
    temp_v1 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk8)->unk30;
    temp_v1[0x4C] = (u8) (temp_v1[0x4C] + 2);
    temp_a0 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unkC)->unk30;
    temp_a0[0x4C] = (u8) (temp_a0[0x4C] - 2);
    temp_a2 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk10)->unk30;
    temp_a2[0x4C] = (u8) (temp_a2[0x4C] + 2);
    temp_a3 = ((func_80245040_Obj *) ((func_80245040_Struct *) arg1)->unk14)->unk30;
    temp_a3[0x4C] = (u8) (temp_a3[0x4C] - 2);
}
