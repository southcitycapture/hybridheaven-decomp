#include "common.h"
struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};
extern struct func_80246730_Struct D_801BBBF0;
typedef struct func_802456C8_StructCamera {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_802456C8_StructCamera;
#define CAMERA ((func_802456C8_StructCamera *)&D_801BBBF0)
extern u8 D_802468A0[];
extern s32 D_80248800;
extern void func_800058DC(void *, void (*)(void));
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
typedef struct func_80244874_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80244874_Inner;
typedef struct func_80244874_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80244874_Inner *unk30;
} func_80244874_Node;
typedef struct func_80244874_Args {
    u8 pad0[0xC];
    func_80244874_Node *unkC;
    func_80244874_Node *unk10;
} func_80244874_Args;
void func_80245E94(u8 *arg0, u8 *arg1);
void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);


extern u8 D_80248090[];

struct func_80245AF4_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x98 - 0x3E];
    f32 unk98;
    f32 unk9C;
};

void func_80245AF4(struct func_80245AF4_Obj *arg0, func_80244874_Args *arg1) {
    s32 sp5C;
    f64 sp58;

    sp5C = arg0->unk3C;
    arg0->unk3C++;
    if (sp5C < 0x2A) {
        arg1->unkC->unk30->unk14 = (s16)(u32) arg0->unk98;
        arg0->unk98 = arg0->unk98 + arg0->unk9C;
        arg0->unk9C = (f32)((f64) arg0->unk9C + 0.7590000000000001);
    }
    if (sp5C >= 0x2A) {
        if (sp5C == 0x2A) {
            func_80020718(0x19F);
        }
        switch ((sp5C - 0x2A) % 12) {
        case 0:
            func_802465F8(7.0f, 11.0f, 44.0f, 0.3f);
            break;
        case 4:
            func_802465F8(-17.0f, 11.0f, 45.0f, 0.3f);
            break;
        case 8:
            func_802465F8(-2.0f, 18.0f, 47.0f, 0.3f);
            break;
        }
    }
    func_8011AAF4(&D_80248090, 0x83C, arg0, 0, 1, 0.0f, CAMERA->unk1E8, CAMERA->unk1EC, CAMERA->unk1F0, 0.0f, CAMERA->unk1F4, CAMERA->unk1F8, CAMERA->unk1FC, 0.0f, 29.5f, -1, -1);
    CAMERA->unk1E8 = (f32)((f64) CAMERA->unk1E8 + -0.018333333333333333);
    CAMERA->unk1EC = (f32)((f64) CAMERA->unk1EC + 0.1);
    CAMERA->unk1F0 = (f32)((f64) CAMERA->unk1F0 + 0.35833333333333334);
    CAMERA->unk1F4 = (f32)(f64) CAMERA->unk1F4;
    CAMERA->unk1F8 = (f32)(f64) CAMERA->unk1F8;
    CAMERA->unk1FC = (f32)(f64) CAMERA->unk1FC;
    sp58 = (!(sp5C % 2)) ? 0.5 : -0.5;
    CAMERA->unk1EC = (f32)((f64) CAMERA->unk1EC + sp58);
    if (sp5C >= 0x3C) {
        CAMERA->unk1E8 = 22.8f;
        CAMERA->unk1EC = 1.9f;
        CAMERA->unk1F0 = -125.7f;
        CAMERA->unk1F4 = 5.9f;
        CAMERA->unk1F8 = 18.4f;
        CAMERA->unk1FC = -140.6f;
        func_8015115C(D_80248800, D_802468A0);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_80245E94);
    }
}
