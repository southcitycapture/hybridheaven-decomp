#include "context.h"

typedef struct func_801F9104_StructObj {
    u8 pad[0x5C];
    void *unk5C;
} func_801F9104_StructObj;

typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;

extern f32 D_80218D18;
extern s32 D_8012A94C(void *, s32);
extern void func_8013A334(f32 *, s32, void *, s32);
void func_800058DC(void *, s32);
void func_801F91C0(u8 *arg0, s32 arg1);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);

#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)

void func_801F9104(func_801F9104_StructObj *arg0, s32 arg1) {
    void *t;
    f32 vec[3];

    t = arg0->unk5C;
    func_8013A334(vec, arg1, t, 6);
    arg1 = D_8012A94C(arg0, 0x100);
    if (D_801F3C90(arg0, 1.0f, D_80218D18, POS->unk4, POS->unk8 + 25.0f, POS->unkC, D_80218D18, vec[0], vec[1], vec[2], D_80218D18, 35.0f) != 0) {
        func_800058DC(arg0, (s32)func_801F91C0);
    }
}
