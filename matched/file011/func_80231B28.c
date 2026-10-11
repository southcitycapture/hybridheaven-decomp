#include "context.h"

struct func_80231B28_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[0x2DB - 0x2D9];
    u8 unk2DB;
};

extern void func_80230318(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern void func_80230728(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern void func_80230930(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern void func_80230B58(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);

void func_80231B28(void) {
    struct func_80231B28_Struct *var_a0;
    struct func_80231B28_Struct *var_a1;
    s32 temp_v0;

    if (D_801BCC20 == 0) {
        var_a0 = (struct func_80231B28_Struct *) D_801BC3D8;
    } else {
        var_a0 = (struct func_80231B28_Struct *) D_801BC03C;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_80231B28_Struct *) D_801BC03C;
    } else {
        var_a1 = (struct func_80231B28_Struct *) D_801BC3D8;
    }
    temp_v0 = var_a1->unk2D8;
    if ((temp_v0 < 2) || (temp_v0 == 9) || (temp_v0 == 0xA)) {
        if (var_a0->unk2D8 == 0xD) {
            func_802302D0((struct func_802302D0_Struct *) var_a0, (struct func_802302D0_Struct *) var_a1);
        }
    } else if (temp_v0 == 2) {
        temp_v0 = var_a0->unk2D8;
        if (temp_v0 == 0x12) {
            func_80230728(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0x11) {
            func_80230930(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0x10) {
            func_80230B58(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0xD) {
            var_a0->unk2DB = 1;
            return;
        }
        if ((temp_v0 == 0xE) || (temp_v0 == 0xF)) {
            var_a0->unk2DB = 0;
        }
    } else if ((temp_v0 >= 4) && (temp_v0 < 8)) {
        temp_v0 = var_a0->unk2D8;
        if (temp_v0 == 0xE) {
            func_80230930(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0xF) {
            func_80230B58(var_a0, var_a1);
        }
    } else if (temp_v0 == 8) {
        if (var_a0->unk2D8 == 0xF) {
            func_80230B58(var_a0, var_a1);
        }
    } else if ((temp_v0 == 0xC) || (temp_v0 == 0x13)) {
        func_80230318(var_a0, var_a1);
    }
}
