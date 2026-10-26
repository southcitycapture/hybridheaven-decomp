#include "common.h"
typedef struct func_8014D070_Struct_Table {
    u16 unk0;
    u8 pad[18];
} func_8014D070_Struct_Table;
extern func_8014D070_Struct_Table D_80182950[];
extern u8 D_801BBBF0[];
float func_8001EAD0(short);
float func_8001EB64(short);
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
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_8014F400_Struct_Pos {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F400_Struct_Pos;
typedef struct func_8014F400_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8014F400_Struct_Pos *unk38;
    u8 pad3C[0x90 - 0x3C];
    u8 unk90;
    u8 unk91;
    u8 unk92;
} func_8014F400_Struct;


typedef struct func_8014FB38_Struct_G {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0x198 - 0x34];
    f32 unk198, unk19C, unk1A0;
    u8 pad1A4[0x328 - 0x1A4];
    f32 unk328, unk32C, unk330;
    u8 pad334[0x3A7 - 0x334];
    u8 unk3A7;
    f32 unk3A8, unk3AC, unk3B0, unk3B4;
} func_8014FB38_Struct_G;
extern u8 D_801904A0[];
extern f64 D_801906C0;
extern f64 D_801906C8;
#define FBG ((func_8014FB38_Struct_G *)D_801BBBF0)
#define FBT(i) (*(u16 *)&D_80182950[i].pad[6])

void func_8014FB38(func_8014F400_Struct *arg0, s32 arg1) {
    u16 angle;
    f32 distance;

    if (D_80182950[arg0->unk90].unk0 == 0) {
        distance = 10.0f;
    } else {
        distance = 25.0f;
    }
    if (FBG->unk3A7 == 1 || FBG->unk3A7 == 2) {
        if (FBG->unk3A7 == 1) {
            angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF & 0xFFFF;
        } else {
            angle = arg0->unk24->unk30->unk12;
        }
        FBG->unk198 = func_8001EAD0((s16)angle) * distance + arg0->unk24->unk30->unk4;
        FBG->unk1A0 = func_8001EB64((s16)angle) * distance + arg0->unk24->unk30->unkC;
        FBG->unk19C = arg0->unk24->unk30->unk8;
        FBG->unk32 = angle;
        FBG->unk328 = (f64)func_8001EAD0((s16)angle) * ((f64)(f32)FBT(arg0->unk90) * 0.5 + 5.0 + D_801906C0) + (f64)(f32)arg0->unk38->unk6 / 10.0;
        FBG->unk32C = (f64)(f32)arg0->unk38->unk8 / 10.0 + 15.0;
        FBG->unk330 = (f64)func_8001EB64((s16)angle) * ((f64)(f32)FBT(arg0->unk90) * 0.5 + 5.0 + D_801906C8) + (f64)(f32)arg0->unk38->unkA / 10.0;
        func_8011AAF4(D_801904A0, 0x85A, (s32)arg0, 2, 1, 0.0f, FBG->unk328, FBG->unk32C, FBG->unk330, 0.0f, FBG->unk198, FBG->unk19C + 18.0f, FBG->unk1A0, 0.0f, 35.0f, -1, -1);
    }
    FBG->unk3A8 = arg0->unk24->unk30->unk4;
    FBG->unk3AC = arg0->unk24->unk30->unk8;
    FBG->unk3B0 = arg0->unk24->unk30->unkC;
    FBG->unk3B4 = arg0->unk24->unk30->unk12;
}
