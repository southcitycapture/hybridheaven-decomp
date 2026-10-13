#include "context.h"

typedef struct func_80241C34_StructCmd {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80241C34_StructCmd;

typedef struct func_80241C34_StructSub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x14];
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80241C34_StructSub;

typedef struct func_80241C34_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    func_80241C34_StructSub *unk30;
} func_80241C34_StructNode;

typedef struct func_80241C34_StructSelf {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    s16 unk3C;
    u8 pad2[0x36];
    s32 unk74;
    u8 pad3[0x18];
    s16 unk90;
    u8 pad4[0x6];
    u8 unk98;
} func_80241C34_StructSelf;

typedef struct func_80241C34_StructCam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_80241C34_StructCam;

typedef struct func_80241C34_StructCamOwner {
    u8 pad0[0x2C];
    func_80241C34_StructCam *unk2C;
} func_80241C34_StructCamOwner;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_801FBB30(void);
extern void func_80020718(s32);
extern void func_8012C89C(void *, s32, s32, s32);
void func_802441AC(void);
extern struct func_802441AC_Struct D_801BBBF0;
extern u8 D_8017AD28[];
extern void func_8024245C();
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_802585E8[];
extern u8 D_80258688[];
extern u8 D_8025C324[];
extern f32 D_8025C6BC;
extern f32 D_8025C6C0;
extern f32 D_8025C6C4;
extern f32 D_8025C6C8;
extern f32 D_8025C6CC;
extern f32 D_8025C6D0;
extern f32 D_8025C6D4;
extern f32 D_8025C6D8;
extern f32 D_8025C6DC;
extern f32 D_8025C6E0;
extern f32 D_8025DDA0;
extern f32 D_8025DDA4;
extern f32 D_8025DDA8;

#define GB(off) (((u8 *)&D_801BBBF0)[off])
#define CAM (((func_80241C34_StructCamOwner **)((u8 *)&D_801BBBF0 + 0xE0))[0]->unk2C)

void func_80241C34(func_80241C34_StructSelf *arg0, func_80241C34_StructNode **arg1) {
    func_80241C34_StructCmd sp70;

    sp70 = *(func_80241C34_StructCmd *)D_80164F40;
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000300;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000900;
    func_80005E44(arg0, &sp70);
    sp70.unk4 = 0x80000600;
    func_80005E44(arg0, &sp70);
    func_80006214(arg0);

    func_8012C89C(arg0, 0, 0x303, 0);
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[0]->unk30->unk4 = 0.0f;
    arg1[0]->unk30->unk8 = D_8025C6BC;
    arg1[0]->unk30->unkC = 0.0f;
    arg1[0]->unk30->unk4C = GB(0xF32);
    arg1[0]->unk30->unk4D = GB(0xF33);
    arg1[0]->unk30->unk4E = GB(0xF34);
    arg1[0]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 1, 0x303, 1);
    arg1[1]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4 = 0.0f;
    arg1[1]->unk30->unk8 = D_8025C6C0;
    arg1[1]->unk30->unkC = 0.0f;
    arg1[1]->unk30->unk4C = GB(0xF32);
    arg1[1]->unk30->unk4D = GB(0xF33);
    arg1[1]->unk30->unk4E = GB(0xF34);
    arg1[1]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 2, 0x303, 3);
    arg1[2]->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    arg1[2]->unk30->unk24 |= 0x400;
    arg1[2]->unk30->unk4 = 0.0f;
    arg1[2]->unk30->unk8 = D_8025C6C4;
    arg1[2]->unk30->unkC = 0.0f;
    arg1[2]->unk30->unk4C = GB(0xF32);
    arg1[2]->unk30->unk4D = GB(0xF33);
    arg1[2]->unk30->unk4E = GB(0xF34);
    arg1[2]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 3, 0x303, 4);
    func_8012CF8C(arg0, arg1[3]->unk30->unk40, 0x2F8, 0xF);
    arg1[3]->unk30->unk24 |= 0x4000;
    arg1[3]->unk30->unk30 = (s32)D_802585E8 | 0x40000000;
    arg1[3]->unk30->unk4 = 0.0f;
    arg1[3]->unk30->unk8 = D_8025C6C8;
    arg1[3]->unk30->unkC = 0.0f;
    arg1[3]->unk30->unk4C = 0;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0xFF;
    arg1[3]->unk30->unk4F = 0xFF;

    func_8012C89C(arg0, 4, 0x304, 0);
    func_8012CF8C(arg0, arg1[4]->unk30->unk40, 0x2F8, 0x12);
    arg1[4]->unk30->unk24 |= 0x4100;
    arg1[4]->unk30->unk30 = (s32)D_80258688 | 0x40000000;
    arg1[4]->unk30->unk4 = 0.0f;
    arg1[4]->unk30->unk8 = D_8025C6CC;
    arg1[4]->unk30->unkC = 0.0f;
    arg1[4]->unk30->unk48 = 0xFF;
    arg1[4]->unk30->unk49 = 0xFF;
    arg1[4]->unk30->unk4A = 0xFF;
    arg1[4]->unk30->unk4B = 0x9A;
    arg1[4]->unk30->unk4C = 0;
    arg1[4]->unk30->unk4D = 0;
    arg1[4]->unk30->unk4E = 0xFF;
    arg1[4]->unk30->unk4F = 0xFF;

    func_8012C89C(arg0, 5, 0x2FA, 0xD);
    arg1[5]->unk30->unk30 = (s32)D_8017AD28 | 0x40000000;
    arg1[5]->unk30->unk24 |= 0x400;
    arg1[5]->unk30->unk4 = 0.0f;
    arg1[5]->unk30->unk8 = D_8025C6D0;
    arg1[5]->unk30->unkC = 0.0f;
    arg1[5]->unk30->unk4C = GB(0xF32);
    arg1[5]->unk30->unk4D = GB(0xF33);
    arg1[5]->unk30->unk4E = GB(0xF34);
    arg1[5]->unk30->unk4F = GB(0xF35);

    func_8012C89C(arg0, 6, 0x2FA, 9);
    arg1[6]->unk30->unk30 = (s32)D_8017AD28 | 0x40000000;
    arg1[6]->unk30->unk24 |= 0x400;
    arg1[6]->unk30->unk4C = GB(0xF32);
    arg1[6]->unk30->unk4D = GB(0xF33);
    arg1[6]->unk30->unk4E = GB(0xF34);
    arg1[6]->unk30->unk4F = GB(0xF35);
    arg1[6]->unk22 = 0;

    func_8012C89C(arg0, 7, 0x2FA, 0xB);
    arg1[7]->unk30->unk24 |= 0x100;
    arg1[7]->unk30->unk30 = (s32)D_8017B5A8 | 0x40000000;
    arg1[7]->unk30->unk4 = 162.0f;
    arg1[7]->unk30->unk8 = -1.0f;
    arg1[7]->unk30->unkC = 0.0f;
    arg1[7]->unk30->unk48 = 0xFF;
    arg1[7]->unk30->unk49 = 0xAF;
    arg1[7]->unk30->unk4A = 0;
    arg1[7]->unk30->unk4B = 0x80;
    arg1[7]->unk22 = 0;

    D_8025DDA0 = 0.0f;
    D_8025DDA4 = D_8025C6D4;
    D_8025DDA8 = 0.0f;
    arg0->unk2C = 0xC00;
    arg0->unk74 = func_8012C97C(0x303, 2);
    CAM->unk4 = -76.0f;
    CAM->unk8 = D_8025C6D8;
    CAM->unkC = 0.0f;
    CAM->unk12 = 0x800;
    arg0->unk3C = 0;
    arg0->unk90 = 0;
    arg0->unk98 = 0;
    func_801C3B2C(2);
    func_801C3B10(1);
    func_8011AAF4(D_8025C324, 0x214, arg0, 0, 1, 0.0f, -65.0f, D_8025C6DC, 15.0f, 0.0f, -76.0f, D_8025C6E0, 0.0f, 0.0f, 35.0f, -1, -1);
    func_802441AC();
    func_801FBB30();
    func_80020718(0x194);
    func_80020718(0x6C6);
    func_800058DC(arg0, func_8024245C);
}
