#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_8014F940_Struct_Cam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F940_Struct_Cam;
typedef struct func_8014F940_Struct_E8 {
    u8 pad0[0x2C];
    func_8014F940_Struct_Cam *unk2C;
} func_8014F940_Struct_E8;
typedef struct func_8014F940_Struct_G {
    u8 pad0[0xE8];
    func_8014F940_Struct_E8 *unkE8;
    u8 pad1[0x198 - 0xEC];
    f32 unk198;
    u8 pad2[0x1A0 - 0x19C];
    f32 unk1A0;
    u8 pad3[0x1E8 - 0x1A4];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    f32 unk200;
    u8 pad4[0x328 - 0x204];
    f32 unk328;
    f32 unk32C;
    f32 unk330;
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014F940_Struct_G;
#define GF ((func_8014F940_Struct_G *)D_801BBBF0)
typedef struct func_8014FF14_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x2AC - 0x200];
    u8 unk2AC;
    u8 pad2AD[0x334 - 0x2AD];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014FF14_Struct;
#define S ((func_8014FF14_Struct *)D_801BBBF0)
typedef struct func_8014CE54_Struct_Pos {
    u8 pad[6];
    s16 x, y, z;
} func_8014CE54_Struct_Pos;
typedef struct func_8014CE54_Struct {
    u8 pad0[0x38];
    func_8014CE54_Struct_Pos *pos;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    u8 pad78[0x90 - 0x78];
    u8 unk90, unk91, unk92, unk93;
    f32 unk94;
    s32 unk98;
    u8 pad9C[2];
    u16 unk9E;
    u8 padA0[5];
    u8 unkA5;
} func_8014CE54_Struct;
extern s32 (*D_80182104[])(func_8014CE54_Struct *, s32);
typedef struct func_8014C2B0_Struct_Info {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_8014C2B0_Struct_Info;
typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;
typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;
typedef struct func_8014C2B0_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x2C - 0x28];
    s32 unk2C;
    u8 pad30[0x36 - 0x30];
    u16 unk36;
    func_8014C2B0_Struct_Info *unk38;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92;
    u8 unk93;
    f32 unk94;
    u8 pad98[0x9C - 0x98];
    u8 unk9C;
    u8 pad9D;
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
} func_8014C2B0_Struct;
typedef struct func_8014C2B0_Struct_ObjSub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8014C2B0_Struct_ObjSub;
typedef struct func_8014C2B0_Struct_Obj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8014C2B0_Struct_ObjSub *unk30;
} func_8014C2B0_Struct_Obj;
extern void (*D_80182268[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern void func_80005700(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);


extern u8 D_80190548[];
extern u8 D_80190580[];
extern s32 D_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_801501C0(s32 arg0, s32 arg1) {
    if (D_8011AAF4(D_80190548, 0x8AF, arg0, 0, 2,
        GF->unk200, GF->unk334, GF->unk338, GF->unk33C,
        GF->unk200, GF->unk340, GF->unk344, GF->unk348,
        0.0f, 35.0f, -1, -1) == 0) {
        GF->unk1E8 = GF->unk334;
        GF->unk1EC = GF->unk338;
        GF->unk1F0 = GF->unk33C;
        func_8011AAF4(D_80190580, 0x8B8, arg0, 2, 1,
            0.0f, GF->unk334, GF->unk338, GF->unk33C,
            0.0f, GF->unk340, GF->unk344, GF->unk348,
            0.0f, 35.0f, -1, -1);
        S->unk2AC = 1;
        func_80005700(arg0);
    }
}
