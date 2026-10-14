#include "context.h"

typedef struct func_80241F48_Struct2 {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80241F48_Struct2;

typedef struct func_80241F48_Struct1 {
    u8 pad0[0x30];
    func_80241F48_Struct2 *unk30;
} func_80241F48_Struct1;

typedef struct func_80241F48_Struct0 {
    func_80241F48_Struct1 *unk0;
    func_80241F48_Struct1 *unk4;
} func_80241F48_Struct0;

extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_80164F40[];
extern f32 D_8025BE60;
extern f32 D_8025BE64;
extern void func_80242048();

void func_80241F48(s32 arg0, func_80241F48_Struct0 *arg1) {
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x3C8, 2);
    arg1->unk0->unk30->unk4 = 50.0f;
    arg1->unk0->unk30->unk8 = D_8025BE60;
    arg1->unk0->unk30->unkC = -20.0f;
    func_8012C89C(arg0, 1, 0x3C8, 3);
    arg1->unk4->unk30->unk4 = 50.0f;
    arg1->unk4->unk30->unk8 = D_8025BE64;
    arg1->unk4->unk30->unkC = 20.0f;
    func_800058DC(arg0, func_80242048);
}
