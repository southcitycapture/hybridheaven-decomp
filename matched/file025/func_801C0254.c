#include "context.h"

extern s32 func_801BFF20();
extern s32 func_801C2090(s32, s32);
extern s32 D_801D8C00[];
extern s32 D_801DE828;
extern s32 D_801D8CE4;
extern s32 D_801D8CE8;
extern s32 D_801D8CF0;

typedef struct func_801C0254_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unk12;
    s32 unk16;
    s32 unk20;
} func_801C0254_Struct;

void func_801C0254(void) {
    func_801BFF20();
    D_801D8CF8 = 1;
    if (D_801DE828 != 0) {
        D_801D8CF4 = ((func_801C0254_Struct *)((s32 *)D_801D8C00[D_801D8CE4])[D_801D8CE8])[D_801D8CF0].unk8;
        return;
    }
    D_801D8CF4 = func_801C2090(D_801D8CE4, D_801D8CE8);
}
