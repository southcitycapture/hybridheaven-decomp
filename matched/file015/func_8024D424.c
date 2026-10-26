#include "common.h"
struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};
extern struct func_8024D2A4_Top D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
void func_8024D564(void *arg0, void *arg1);

extern s32 func_801C2F0C(s32, void *);

typedef struct func_8024D424_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x12];
} func_8024D424_Struct;

typedef struct func_8024D424_Struct2 {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024D424_Struct2;
extern s32 func_801C3044(void);
extern u8 D_80259850[];
extern f32 D_80259A70;
extern f32 D_80259A74;
extern f32 D_80259A78;
extern f32 D_80259A7C;
extern f32 D_80259A80;

void func_8024D424(void *arg0, s32 arg1) {
    func_8024D424_Struct sp50;

    if (func_801C3044() == 0) {
        sp50.a = 0x1100;
        sp50.b = 0x0348007A;
        sp50.d = 0x14;
        sp50.c = 10.0f;
        func_801C2F0C(5, (f32 *)&sp50);
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1E8 = D_80259A70;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1EC = -117.0f;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F0 = D_80259A74;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F4 = D_80259A78;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F8 = D_80259A7C;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1FC = D_80259A80;
        func_8011AAF4(D_80259850, 0x14B, arg0, 0, 1, 0.0f,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1E8,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1EC,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F0, 0.0f,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F4,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F8,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1FC, 0.0f, 35.0f, -1, -1);
        func_80133980(0x73);
        func_800058DC(arg0, func_8024D564);
    }
}
