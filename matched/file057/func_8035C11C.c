#include "context.h"

typedef struct func_8035C11C_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
    u16 unk82;
} func_8035C11C_Inner;

typedef struct func_8035C11C_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8035C11C_Inner *unk5C;
} func_8035C11C_Obj;

extern void func_8013AE20(void *, s32, s32, void *);
extern void func_8035C230(void);
extern u8 D_80385630[];
extern u8 D_80385640[];

void func_8035C11C(func_8035C11C_Obj *arg0, s32 arg1) {
    func_8035C11C_Inner *temp_a3;
    u8 *var_t0;
    u8 *var_v1;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_t0 = D_801BC03C;
    } else {
        var_t0 = D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    var_t0[0x392] = 0;
    if (func_80224F5C((s32)arg0, arg1) == 0) {
        func_8013AE20(arg0, arg1, 2, temp_a3);
        if (var_v1[0x2D8] != 0xD || var_v1[0x2F1] != 0) {
            if (arg0->unk36 == 0x31) {
                temp_a3->unk7C = D_80385640;
            } else {
                temp_a3->unk7C = D_80385630;
            }
            temp_a3->unk82 = 6;
            temp_a3->unk80 = 2;
            var_t0[0x32D] = 0;
            func_800058DC(arg0, (void *)func_8035C230);
        }
    }
}
