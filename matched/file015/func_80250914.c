#include "context.h"
typedef struct func_80250AB0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80250AB0_Struct;
void func_80250AB0(func_80250AB0_Struct *arg0, s32 arg1);
extern void func_8015115C(s32, void *);

extern s32 func_801517CC(s32);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_80151430(s32, s32);
extern s32 func_801516CC(s32);
extern void func_80151700(s32, s32, void *);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_8017AF90[];
extern u8 D_80254B48[];
extern u8 D_80259E9C[];
extern f32 D_8025A168;
extern f32 D_8025A16C;
extern f32 D_8025A170;
extern f32 D_8025A174;
extern s32 D_8025A2FC;

typedef struct func_80250914_Struct { u8 pad[0x90]; s16 unk90; } func_80250914_Struct;

void func_80250914(func_80250914_Struct *arg0, s32 arg1) {
    s32 i;

    if (func_801517CC(D_8025A2FC) != 0) {
        func_801512CC(D_8025A2FC, 0xC340B333, 0xC3020000, 0x43E13333);
        func_80151430(D_8025A2FC, 0x800);
        func_8015115C(D_8025A2FC, D_80254B48);
        i = 0;
        if (func_801516CC(D_8025A2FC) > 0) {
            do {
                func_80151700(D_8025A2FC, i & 0xFF, D_8017AF90);
                i += 1;
            } while (i < func_801516CC(D_8025A2FC));
        }
        D_80089354 = 0;
        func_8001E978(D_8025A2F0, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2, 0);
        func_8011AAF4(D_80259E9C, 0x607, arg0, 0, 1, 0.0f, D_8025A168, D_8025A16C, 450.0f, 0.0f, D_8025A170, D_8025A174, 450.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80250AB0);
    }
}
