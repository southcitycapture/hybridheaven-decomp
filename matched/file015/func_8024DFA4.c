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
extern u8 D_80254214[];
extern u8 D_8025422C[];
extern u8 D_80254250[];
extern s32 D_8025A2E4;
extern void func_800058DC(void *, void *);
s32 func_800178E8();
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern void func_801511C4(s32, void *, s32);
extern s32 func_80151790(s32);
typedef struct func_8024E2BC_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024E2BC_Struct;
void func_8024E2BC(func_8024E2BC_Struct *arg0, s32 arg1);


struct func_8024DFA4_StructArg {
    u8 pad[0x90];
    u16 state;
};
struct func_8024DFA4_StructCamera {
    u8 pad[0x1E8];
    f32 x, y, z, a, b, c;
};
extern void func_80017990(void *);
extern u8 D_802546C4[];
extern u8 D_80254760[];
extern u8 D_802547D4[];
extern u8 D_80254864[];
extern u8 D_80254940[];
extern u8 D_802549F0[];
extern u8 D_80254244[];
extern u8 D_80254238[];
extern u8 D_802599E8[];
extern u8 D_80259A28[];
extern f32 D_80259AE8;
extern f32 D_80259AEC;
extern f32 D_80259AF0;
extern f32 D_80259AF4;
extern f32 D_80259AF8;
extern f32 D_80259AFC;
extern f32 D_80259B00;
extern f32 D_80259B04;
extern f32 D_80259B08;
extern f32 D_80259B0C;

void func_8024DFA4(struct func_8024DFA4_StructArg *arg0, s32 arg1)
{
    if (func_80151790(D_8025A2E4) != 0) return;
    if (func_800178E8() == 0) return;
    switch (arg0->state++) {
    case 0:
        func_8015115C(D_8025A2E4, D_8025422C);
        func_80017990(D_802546C4);
        return;
    case 1:
        func_8015115C(D_8025A2E4, D_8025422C);
        func_80017990(D_80254760);
        return;
    case 2:
        func_8015115C(D_8025A2E4, D_8025422C);
        func_80017990(D_802547D4);
        return;
    case 3:
        func_8015115C(D_8025A2E4, D_80254244);
        func_80017990(D_80254864);
        return;
    case 4:
        func_8015115C(D_8025A2E4, D_80254214);
        func_80017990(D_80254940);
        return;
    case 5:
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->x = D_80259AE8;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->y = D_80259AEC;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->z = D_80259AF0;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->a = D_80259AF4;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->b = D_80259AF8;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->c = 110.0f;
        func_8011AAF4(D_802599E8, 0x2BB, arg0, 0, 1, 0.0f,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->x,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->y,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->z, 0.0f,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->a,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->b,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->c, 0.0f, 35.0f, -1, -1);
        func_8015115C(D_8025A2E4, D_80254238);
        func_800179B0(D_802549F0);
        return;
    case 6:
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->x = D_80259AFC;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->y = -117.0f;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->z = D_80259B00;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->a = D_80259B04;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->b = D_80259B08;
        ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->c = D_80259B0C;
        func_8011AAF4(D_80259A28, 0x2CD, arg0, 0, 1, 0.0f,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->x,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->y,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->z, 0.0f,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->a,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->b,
            ((struct func_8024DFA4_StructCamera *)&D_801BBBF0)->c, 0.0f, 35.0f, -1, -1);
        func_801511C4(D_8025A2E4, D_80254250, 10);
        func_800058DC(arg0, func_8024E2BC);
        break;
    }
}
