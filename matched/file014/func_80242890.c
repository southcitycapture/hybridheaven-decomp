#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern u16 D_801BBBF4;
typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802455D8_Sub;
typedef struct {
    u8 pad0[0x2C];
    func_802455D8_Sub *unk2C;
} func_802455D8_Mid;
extern func_802455D8_Mid *D_801BBCD0;
extern s16 D_8024AB46;
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
struct func_80244F98_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244F98_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80244F98_Child *unk5C;
};
void func_80244F98(struct func_80244F98_Obj *arg0, void *arg1);
struct func_80245B2C_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80245B2C_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_80245B2C_Mid {
    u8 pad0[0x2C];
    struct func_80245B2C_Sub *unk2C;
};
struct func_80245B2C_Obj {
    u8 pad0[0x24];
    struct func_80245B2C_Mid *unk24;
    u8 pad1[0x16];
    u8 unk3E;
    u8 pad2[0x1D];
    struct func_80245B2C_Child *unk5C;
    u8 pad3[0x42];
    u16 unkA2;
};
void func_80245AFC(struct func_80245B2C_Obj *arg0, s32 arg1);
extern void func_8037BB4C(s16, f32, f32, s16);


struct func_80242890_Struct_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_80242890_Struct_Mid {
    u8 pad0[0x2C];
    struct func_80242890_Struct_Sub *unk2C;
};
struct func_80242890_Struct_Obj {
    u8 pad0[0x24];
    struct func_80242890_Struct_Mid *unk24;
};
extern s32 func_80150584();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80244C38();
extern f32 D_8024AA9C;
extern void D_80127430(f32, f32, f32, s32, f32, f32);

s32 func_80242890(struct func_80242890_Struct_Obj *arg0) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    u8 pad[8];
    f32 sp28;
    f32 fv0;
    f32 fv1;
    f32 fa0;
    f32 ft4;
    struct func_80242890_Struct_Sub *v1;
    func_802455D8_Sub *v0;

    if (func_80150584() != 0) {
        func_800058DC(arg0, func_80244F98);
        return 1;
    }
    if (D_801BBCD0->unk2C->unk8 < -136.0f && func_80133A24(0x4D) == 0 && D_801BBBF4 == 0xD) {
        func_800058DC(arg0, func_80245AFC);
        return 1;
    }
    if (func_80133A24(0x68) != 0) {
        func_800058DC(arg0, func_80244C38);
        return 1;
    }
    sp34 = func_8001EAD0(arg0->unk24->unk2C->unk12);
    sp38 = func_8001EAD0(arg0->unk24->unk2C->unk12);
    sp3C = func_8001EB64(arg0->unk24->unk2C->unk12);
    fv0 = func_8001EB64(arg0->unk24->unk2C->unk12);
    v0 = D_801BBCD0->unk2C;
    v1 = arg0->unk24->unk2C;
    ft4 = v1->unkC;
    fv1 = v0->unkC;
    fa0 = v0->unk4;
    sp28 = v1->unk4;
    if ((((fv1 - ((fv0 * 20.0f) + ft4)) * (fv1 - (ft4 + (sp3C * 20.0f)))) + ((fa0 - (sp28 + (sp38 * 20.0f))) * (fa0 - (sp28 + (sp34 * 20.0f))))) < 400.0f) {
        D_80127430(sp28, v1->unk8, ft4, 0x6BD, D_8024AA9C, 1.0f);
        func_8037BB4C(arg0->unk24->unk2C->unk12, 2.0f, 2.0f, D_8024AB46);
    }
    return 0;
}
