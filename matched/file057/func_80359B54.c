#include "context.h"

typedef struct func_80359B54_Struct {
    u8 pad0[0x5C];
    struct func_80359B54_Struct *unk5C;
    u8 pad1[0x7C - 0x60];
    u8 *unk7C;
    s16 unk80;
    s16 unk82;
} func_80359B54_Struct;

extern u8 D_803855B0[];
extern u8 D_803855D0[];
extern u8 D_803855F0[];
extern u8 D_80385600[];
extern u8 D_80385610[];
extern s32 D_801DB6B8(void *, void *, s32);
extern void D_800058DC(void *, void *, s32, void *);
void func_80359CD0(void *arg0, s32 arg1);
void func_80359DAC(void *arg0, s32 arg1);

typedef struct func_80359B54_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
} func_80359B54_Globals;

void func_80359B54(func_80359B54_Struct *arg0, s32 arg1) {
    u8 *var_a3;
    func_80359B54_Struct *var_a0;
    func_80359B54_Struct *temp_v1;
    s32 temp_a2;

    if ((void *)arg0 == ((func_80359B54_Globals *)D_801BBBF0)->unkDC) {
        var_a3 = D_801BC03C;
    } else {
        var_a3 = D_801BC3D8;
    }
    if ((void *)arg0 != ((func_80359B54_Globals *)D_801BBBF0)->unkDC) {
        var_a0 = ((func_80359B54_Globals *)D_801BBBF0)->unkDC;
    } else {
        var_a0 = ((func_80359B54_Globals *)D_801BBBF0)->unkEC;
    }
    temp_v1 = var_a0->unk5C;
    func_80006214(var_a0);
    if (D_801DB6B8(var_a0, D_8008DA88, 0) != 0) {
        temp_a2 = *(u16 *)((u8 *)D_8038CC10 + 0x4C);
        if (temp_a2 >= 2) {
            if (var_a3[0x2DA] != 0) {
                *(u16 *)((u8 *)D_8038CC10 + 0x4C) = temp_a2 + 1;
                D_800058DC(arg0, func_80359CD0, temp_a2, var_a3);
            } else {
                if (temp_v1->unk7C == D_803855A0) {
                    temp_v1->unk7C = D_80385590;
                } else if (temp_v1->unk7C == D_80385600) {
                    temp_v1->unk7C = D_803855F0;
                } else if (temp_v1->unk7C == D_803855E0) {
                    temp_v1->unk7C = D_803855D0;
                } else if (temp_v1->unk7C == D_803855C0) {
                    temp_v1->unk7C = D_803855B0;
                } else {
                    temp_v1->unk7C = D_80385610;
                }
                temp_v1->unk82 = 0xA;
                temp_v1->unk80 = 3;
                D_800058DC(arg0, func_80359DAC, temp_a2, var_a3);
            }
        }
    }
    func_80006214(arg0);
}
