#include "context.h"

struct func_800200B0_Struct {
    struct func_800200B0_Struct *unk0;
    s32 unk4;
    u8 pad[4];
    s32 unkC;
};

extern void func_800266B0(void *a0, void *a1, s32 a2);
extern void func_80026890(void *a0);
extern void func_800268C0(void *a0, void *a1);
extern u32 D_80047950;
extern u32 D_80047954;
extern u8 D_80096950[];

void func_800200B0(void) {
    u32 sp40[2];
    u32 var_s0;
    struct func_800200B0_Struct *var_s0_2;
    struct func_800200B0_Struct *temp_v0;

    var_s0 = 0;
    if (D_80047954 != 0) {
        do {
            func_800266B0(D_80096950, sp40, 0);
            var_s0 += 1;
        } while (var_s0 < D_80047954);
    }
    var_s0_2 = (struct func_800200B0_Struct *) D_80096020.unk4;
    if (var_s0_2 != NULL) {
        do {
            temp_v0 = var_s0_2->unk0;
            if ((u32) (var_s0_2->unkC + 4) < D_80047950) {
                if (var_s0_2 == (struct func_800200B0_Struct *) D_80096020.unk4) {
                    D_80096020.unk4 = (s32) var_s0_2->unk0;
                }
                func_80026890(var_s0_2);
                if (D_80096020.unk8 != NULL) {
                    func_800268C0(var_s0_2, D_80096020.unk8);
                } else {
                    D_80096020.unk8 = var_s0_2;
                    var_s0_2->unk0 = NULL;
                    var_s0_2->unk4 = 0;
                }
            }
            var_s0_2 = temp_v0;
        } while (temp_v0 != NULL);
    }
    D_80047954 = 0;
    D_80047950 += 1;
}
