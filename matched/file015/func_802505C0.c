#include "context.h"
typedef struct func_802507D8_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802507D8_Struct;
void func_802507D8(func_802507D8_Struct *arg0, void *arg1);
struct func_802515AC_Struct {
    u8 pad[0x92];
    u16 unk92;
};
void func_802515AC(struct func_802515AC_Struct *arg0);

typedef struct func_802505C0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad60[0x30];
    u16 unk90;
} func_802505C0_Struct;
typedef struct func_802505C0_StructB { u8 pad[0x22]; u8 unk22; } func_802505C0_StructB;
extern void func_8001E978();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_80010550(void *, s32);
extern u8 D_80259DFC[];
extern u8 D_80259E3C[];
extern s16 D_80089354;
extern f32 D_8025A140, D_8025A144, D_8025A148, D_8025A14C, D_8025A150, D_8025A154, D_8025A158, D_8025A15C;

void func_802505C0(func_802505C0_Struct *arg0, func_802505C0_StructB **arg1) {
    s32 sp5C;
    s32 sp58;

    sp5C = arg0->unk5C;
    sp58 = arg0->unk90++;
    func_802515AC((struct func_802515AC_Struct *)arg0);
    D_80010550(arg1, sp5C);
    if (sp58 == 0x82) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x1E, 0, 1, 0);
    }
    if (D_8011AAF4(D_80259DFC, 0x5A4, arg0, 0, 2, D_8025A140, D_8025A144, GG(1), GG(2), 0.0f, GG(3), GG(4), GG(5), 0.0f, 35.0f, -1, -1) == 0) {
        GG(0) = D_8025A148;
        GG(1) = D_8025A14C;
        GG(2) = D_8025A150;
        GG(3) = D_8025A154;
        GG(4) = D_8025A158;
        GG(5) = D_8025A15C;
        func_8011AAF4(D_80259E3C, 0x5B0, arg0, 0, 1, 0.0f, GG(0), GG(1), GG(2), 0.0f, GG(3), GG(4), GG(5), 0.0f, 35.0f, -1, -1);
        (*arg1)->unk22 = 0;
        func_80133980(0x7B);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802507D8);
    }
}
