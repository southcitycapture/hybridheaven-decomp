#include "common.h"
struct func_80242F10_Inner {
    u8 pad[4];
    f32 unk4;
};
struct func_80242F10_Outer {
    u8 pad[0x2C];
    struct func_80242F10_Inner *unk2C;
};
extern struct func_80242F10_Outer *D_801BBCD0;
extern f32 D_8024F4F0;
void func_800058DC(void *, void *);
extern s32 func_801C3D20(f32, f32, s32);
void func_80242660(s32 arg0, s32 arg1);
extern void func_802427D0();
typedef struct func_80242C5C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80242C5C_Struct;
void func_80242C5C(func_80242C5C_Struct *arg0, void *arg1);

extern u8 func_80242B50[];
extern f32 D_8024EDB0__load_func_802429F8;
extern s32 D_80133A24(s32);
extern s32 B_801C3DC8(void *, f32, s32, f32, f32, f32, f32, f32, f32);

void func_802429F8(void *arg0, void *arg1) {
    f32 t = D_801BBCD0->unk2C->unk4;
    B_801C3DC8(arg0, t + 110.0f, 0x425C0000, 75.0f, t, 10.0f, 75.0f, D_8024EDB0__load_func_802429F8, 35.0f);
    if (D_80133A24(0xBD) == 0 && D_801BBCD0->unk2C->unk4 <= 30.0f) {
        func_800058DC(arg0, func_80242C5C);
        return;
    }
    if (D_801BBCD0->unk2C->unk4 <= D_8024F4F0 + 80.0f) {
        func_800058DC(arg0, func_80242B50);
    }
    if (func_801C3D20(221.0f, 42.0f, 0x41880000)) {
        func_800058DC(arg0, func_80242660);
    }
    if (D_80133A24(0xBE)) {
        func_800058DC(arg0, func_802427D0);
    }
}
