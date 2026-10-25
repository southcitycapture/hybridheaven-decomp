#define func_80248E64 D_80248E64
#include "context.h"
#undef func_80248E64

typedef struct func_80248E64_StructObj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad8A[6];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 pad9E[2];
    f32 unkA0;
} func_80248E64_StructObj;
typedef struct func_80248E64_StructVec {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80248E64_StructVec;
typedef struct func_80248E64_StructHold {
    u8 pad0[0x2C];
    func_80248E64_StructVec *unk2C;
    func_80248E64_StructVec *unk30;
} func_80248E64_StructHold;
extern func_80248E64_StructHold *D_801BBCD8;
extern u8 D_8025CB28[];
extern s32 func_801C2FF8(void);
extern s32 func_8012C97C(s32, s32);
extern void func_802490A4();

void func_80248E64(func_80248E64_StructObj *arg0, func_80248E64_StructHold **arg1) {
    f32 temp_fv0;
    func_80248E64_StructVec *temp_v0;
    struct {
        s16 unk0;
        s32 unk4;
        f32 unk8;
        s16 unkC;
        u8 pad[8];
    } sp60;
    func_80248E64_StructVec *temp_v0_2;

    if (D_80258C18 == 0 && func_801C2FF8() != 0) {
        sp60.unk0 = 0x1000;
        sp60.unk4 = 0x03480042;
        sp60.unk8 = 3.0f;
        func_801C2F0C(4, &sp60);
        D_80258C18 = 1;
    }
    temp_fv0 = func_8001EB64(arg0->unk9C);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4 = (f64) temp_v0->unk4 - (f64) temp_fv0;
    temp_fv0 = func_8001EAD0(arg0->unk9C);
    temp_v0_2 = (*arg1)->unk30;
    temp_v0_2->unkC = (f64) temp_v0_2->unkC + (f64) temp_fv0;
    arg0->unkA0 = (f64) arg0->unkA0 + 1.0;
    if ((f64) arg0->unkA0 >= 46.0) {
#define temp_v0_3 (D_801BBCD8->unk2C)
        func_8011AAF4(D_8025CB28, 0x172, arg0, 2, 1, 0.0f,
            temp_v0_3->unk30, temp_v0_3->unk34, temp_v0_3->unk38, 0.0f,
            temp_v0_3->unk3C, temp_v0_3->unk40, temp_v0_3->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x30A, 1);
        temp_fv0 = arg0->unk90;
        arg0->unk84 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = temp_fv0;
        arg0->unk7C = arg0->unk94;
        arg0->unk80 = arg0->unk98;
        arg0->unk86 = *(u16 *)&arg0->unk9C;
        (*arg1)->unk30->unk4 = temp_fv0;
        (*arg1)->unk30->unkC = arg0->unk98;
        sp60.unk0 = 0;
        sp60.unk4 = 0x01680041;
        sp60.unkC = 0x14;
        sp60.unk8 = 1.0f;
        func_801C2F0C(3, &sp60);
        func_800058DC(arg0, func_802490A4);
    }
}
