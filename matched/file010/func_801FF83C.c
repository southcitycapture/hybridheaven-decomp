#include "context.h"

typedef struct func_801FF83C_StructQ {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_801FF83C_StructQ;
typedef struct func_801FF83C_StructP {
    u8 pad[0x2C];
    func_801FF83C_StructQ *unk2C;
} func_801FF83C_StructP;
extern func_801FF83C_StructP *D_801BBCD8;
extern f32 func_8002FC20(f32);
extern s32 func_80126944();

void func_801FF83C(func_801FF628_StructA *arg0) {
    extern void (*D_80217954[])();
    void (*temp_v0)();
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    func_801FF83C_StructQ *temp_v0_2;

    temp_v0 = D_80217954[arg0->unkA0];
    if (temp_v0 != NULL) {
        temp_v0();
    }
    if (arg0->unk74 != 0) {
        if ((((func_801C3D20(arg0->unk90, arg0->unk98, 0x42480000) != 0) && (temp_fv0 = arg0->unk94, temp_fv1 = D_801BBCD0->unk2C->unk8, ((temp_fv0 - 5.0f) <= temp_fv1)) && (temp_fv1 < (temp_fv0 + 40.0f))) || ((temp_v0_2 = D_801BBCD8->unk2C, temp_fv0_2 = temp_v0_2->unk38 - arg0->unk98, temp_fv1_2 = temp_v0_2->unk30 - arg0->unk90, (func_8002FC20((temp_fv0_2 * temp_fv0_2) + (temp_fv1_2 * temp_fv1_2)) <= 20.0f)) && (temp_fv0_3 = arg0->unk94, temp_fv1_3 = D_801BBCD8->unk2C->unk34, ((temp_fv0_3 - 2.0f) <= temp_fv1_3)) && (temp_fv1_3 < (temp_fv0_3 + 30.0f)))) && (func_80126944() == 0)) {
            arg0->unk2C |= 0x800;
            return;
        }
        arg0->unk2C &= ~0x800;
    }
}
