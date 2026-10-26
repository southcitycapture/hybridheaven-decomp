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
extern void func_802429F8();


typedef struct func_80242B50_Struct2C {
    u8 pad0[4];
    f32 unk4;
} func_80242B50_Struct2C;

typedef struct func_80242B50_Struct {
    u8 pad0[0x2C];
    func_80242B50_Struct2C *unk2C;
} func_80242B50_Struct;

extern f32 D_8024EDB4;
extern f32 D_8024EDB8;
extern s32 B_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 D_80133A24(s32);

void func_80242B50(void *arg0, s32 arg1) {
    f32 t;

    t = (*(func_80242B50_Struct **)&D_801BBCD0)->unk2C->unk4;
    B_801C3DC8((s32)arg0, t + 68.0f, 2.0f, 75.0f, t, D_8024EDB4, 75.0f, D_8024EDB8, 35.0f);
    if ((D_8024F4F0 + 85.0f) <= (*(func_80242B50_Struct **)&D_801BBCD0)->unk2C->unk4) {
        func_800058DC(arg0, (void *)func_802429F8);
    }
    if (func_801C3D20(221.0f, 42.0f, 0x41880000) != 0) {
        func_800058DC(arg0, (void *)func_80242660);
    }
    if (D_80133A24(0xBE) != 0) {
        func_800058DC(arg0, (void *)func_802427D0);
    }
}
