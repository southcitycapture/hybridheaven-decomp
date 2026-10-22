#include "context.h"

struct func_802476F0_StructObj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad2[6];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 pad3[2];
    f32 unkA0;
};
struct func_802476F0_StructTransform {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
struct func_802476F0_StructGlobal {
    u8 pad[0x2C];
    struct func_802476F0_StructTransform *unk2C;
};
extern struct func_802476F0_StructGlobal *D_801BBCD8;
extern s32 D_80258A88;
extern u8 D_8025CA08[];
extern s32 func_801C2FF8(void);
struct func_802476F0_StructParams {
    s16 flag;
    s32 value;
    f32 scale;
    s16 duration;
};

void func_80247930();

void func_802476F0(struct func_802476F0_StructObj *arg0,struct func_802450B0_StructN **arg1) {
    f32 temp_fv0;
    struct func_802450B0_StructT *temp_v0;
    struct func_802450B0_StructT *temp_v0_2;
    struct func_802476F0_StructTransform *temp_v0_3;
    struct func_802476F0_StructParams params;
    s32 one;

    if ((D_80258A88 == 0) && (func_801C2FF8() != 0)) {
        params.flag = 0x1000;
        params.value = 0x03480042;
        params.scale = 3.0f;
        func_801C2F0C(4, &params);
        D_80258A88 = 1;
    }
    temp_fv0 = func_8001EB64(arg0->unk9C);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4 = (f64) temp_v0->unk4 - (f64) temp_fv0;
    temp_fv0 = func_8001EAD0(arg0->unk9C);
    temp_v0_2 = (*arg1)->unk30;
    temp_v0_2->unkC = (f64) temp_v0_2->unkC + (f64) temp_fv0;
    one = 1;
    arg0->unkA0 = (f64) arg0->unkA0 + 1.0;
    if ((f64) arg0->unkA0 >= 46.0) {
        func_8011AAF4(D_8025CA08, 0x172, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x30A, 1);
        temp_fv0 = arg0->unk90;
        arg0->unk84 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = temp_fv0;
        arg0->unk7C = arg0->unk94;
        arg0->unk80 = arg0->unk98;
        arg0->unk86 = *(u16 *) &arg0->unk9C;
        (*arg1)->unk30->unk4 = temp_fv0;
        (*arg1)->unk30->unkC = arg0->unk98;
        params.flag = 0;
        params.value = 0x01680041;
        params.duration = 0x14;
        params.scale = 1.0f;
        func_801C2F0C(3, &params);
        func_800058DC(arg0, func_80247930);
    }
}
