#include "common.h"
s32 func_80006AB4(void *);


struct func_800068C0_StructNode {
    struct func_800068C0_StructNode *unk0;
    u8 pad4[4];
    struct func_800068C0_StructNode *unk8;
    u8 padC[0x1C];
    u16 unk28;
};
extern void func_800069A8(void *);
extern s32 D_8008D548;
extern struct func_800068C0_StructNode *D_8008D5D8[];

void func_800068C0(u16 arg0, struct func_800068C0_StructNode *arg1) {
    s32 temp_v0;
    s32 var_s2;
    struct func_800068C0_StructNode *temp_s1;

    var_s2 = 0;
    D_8008D548 = 0;
    while (arg1 != NULL) {
        temp_s1 = arg1->unk0;
        if ((arg1->unk28 & arg0) && (func_80006AB4(arg1) != 0)) {
            func_800069A8(arg1);
        }
        if (arg1->unk8 != NULL) {
            if (temp_s1 != NULL) {
                D_8008D5D8[var_s2] = temp_s1;
                var_s2 += 1;
            }
            arg1 = arg1->unk8;
        } else {
            if (temp_s1 == NULL && (temp_v0 = var_s2 - 1, var_s2 != 0)) {
                arg1 = D_8008D5D8[temp_v0];
                var_s2 = temp_v0;
            } else {
                arg1 = temp_s1;
            }
        }
    }
}
