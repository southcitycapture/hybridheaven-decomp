#include "common.h"

extern s16 D_801BBD84;
extern u8 D_8024A240[];
extern void func_800058DC(void *, void *);
extern void func_80020744(s32);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80240BE4_Struct {
    u8 pad0[0x3E];
    u8 unk3E;
} func_80240BE4_Struct;
void func_80240CD4(s32 arg0, s32 arg1);
void func_80240BE4(func_80240BE4_Struct *arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A240, 0x87, arg0, 0, 2, 4.0f, (-413.0f), -54.0f, -250.0f, 4.0f, -380.0f, -90.0f, (-311.0f), 0.0f, 35.0f, -1, -1) == 0) {
        arg0->unk3E = 0xA;
        D_801BBD84 = 2;
        func_80020744(0x145);
        func_800058DC(arg0, &func_80240CD4);
    }
}
