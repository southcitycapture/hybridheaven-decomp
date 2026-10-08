#include "common.h"

struct func_8037DFDC_Sub {
    s16 unk0;
    s16 unk2;
};

struct func_8037DFDC_Obj {
    u8 pad0[0x10];
    struct func_8037DFDC_Obj *unk10;
    u8 pad1[0x1C];
    struct func_8037DFDC_Sub *unk30;
    u8 pad2[0x63];
    s8 unk97;
};

extern void func_80145310(void *, s32, s32);
extern void func_8001B204(s32, s32, s16, void *, s32, s32, s32);
extern s32 D_80388C04[];
extern s32 D_803899D0;
extern s32 D_803899D8;
extern struct func_8037DFDC_Obj *D_8038A9B8;
extern struct func_8037DFDC_Obj *D_8038A9BC;

void func_8037DFDC(struct func_8037DFDC_Obj *arg0) {
    s8 var_s0;
    struct func_8037DFDC_Obj *var_s2;
    struct func_8037DFDC_Obj *var_s3;
    struct func_8037DFDC_Sub *temp_s1;

    var_s2 = D_8038A9B8;
    var_s3 = D_8038A9BC;
    for (var_s0 = 0; var_s0 < 5; var_s0++) {
        temp_s1 = var_s3->unk30;
        if (var_s0 == arg0->unk97) {
            func_80145310(var_s2, 0x10, 0x11);
            func_8001B204((var_s0 + 2) & 0xFF, 0x7D0, temp_s1->unk2, &D_803899D0, 0xFF, 0, D_80388C04[var_s0]);
        } else {
            func_80145310(var_s2, 2, 0);
            func_8001B204((var_s0 + 2) & 0xFF, 0x7D0, temp_s1->unk2, &D_803899D8, 0x82, 0, D_80388C04[var_s0]);
        }
        var_s2 = var_s2->unk10;
        var_s3 = var_s3->unk10;
    }
}
