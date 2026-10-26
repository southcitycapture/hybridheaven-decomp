#include "common.h"
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
extern f32 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;
extern void (*D_80216D10[])(void *, s32);
void func_800058DC(void *, s32);                    /* extern */
extern s32 func_80010550();
void func_80020744(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);


typedef struct func_801F9664_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9664_Struct;

extern u8 D_80218B38[];
extern u8 func_801F97E0[];
extern s32 D_8013A334(f32 *, s32, void *, s32);

void func_801F9664(u8 *arg0, s32 arg1) {
    u8 *sp64;
    f32 sp58[3];

    sp64 = *(u8 **)(arg0 + 0x5C);
    D_8013A334(sp58, arg1, sp64, 6);
    func_8011AAF4(D_80218B38, 0x8F8, arg0, 0, 1, 10.0f, ((func_801F9664_Struct *)D_801BBCD0->unk2C)->unk4, D_801BBCD0->unk2C->unk8 + 22.0f, ((func_801F9664_Struct *)D_801BBCD0->unk2C)->unkC, 0.0f, sp58[0], sp58[1], sp58[2], 0.0f, 50.0f, -1, -1);
    if (*(u16 *)(arg0 + 0x70) == 0x33) {
        func_80020744(0x13C);
        *(f32 *)(arg0 + 0x48) = 0.0f;
        *(f32 *)(arg0 + 0x40) = 0.0f;
    }
    if (func_80010550(arg1, sp64) != 0) {
        *(s16 *)(sp64 + 0x78) = 1;
        D_8021B028 = (f32) (func_8012C6B4(0xA) - 5);
        D_8021B02C = (f32) func_8012C6B4(0x14);
        D_8021B030 = (f32) (func_8012C6B4(0xA) - 5);
        func_800058DC(arg0, (s32)func_801F97E0);
    }
}
