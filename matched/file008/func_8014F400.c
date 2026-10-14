#include "context.h"

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

typedef struct func_8014F400_Struct_Table {
    u8 pad0[0x6];
    u16 unk6;
    u8 pad8[0xC - 0x8];
    u16 unkC;
    u8 padE[0x14 - 0xE];
} func_8014F400_Struct_Table;

typedef struct func_8014F400_Struct_Mtx {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F400_Struct_Mtx;

typedef struct func_8014F400_Struct_Obj {
    u8 pad0[0x2C];
    func_8014F400_Struct_Mtx *unk2C;
} func_8014F400_Struct_Obj;

typedef struct func_8014F400_Struct_G {
    u8 pad0[0xE8];
    func_8014F400_Struct_Obj *unkE8;
    u8 padEC[0x1E8 - 0xEC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x334 - 0x200];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
    u8 pad34C[0x380 - 0x34C];
    f32 unk380;
    f32 unk384;
    f32 unk388;
} func_8014F400_Struct_G;

#define GG ((func_8014F400_Struct_G *)D_801BBBF0)
#define TBL ((func_8014F400_Struct_Table *)D_8018294C)

extern void func_80005670(void *, void *);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern u8 D_801826AC[];
extern f64 D_80190688;
extern f64 D_80190690;
extern f64 D_80190698;
extern f64 D_801906A0;
extern f64 D_801906A8;
extern f64 D_801906B0;
extern f64 D_801906B8;

void func_8014F400(arg0)
    func_8014F400_Struct *arg0;
{
    s32 angle;

    if (arg0->unk92 == 2) {
        GG->unk334 = (f32)arg0->unk38->unk6 / 10.0 -
                     func_8001EAD0(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190688 + 50.0);
        GG->unk33C = (f32)arg0->unk38->unkA / 10.0 -
                     func_8001EB64(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190690 + 50.0);
    } else {
        GG->unk334 = func_8001EAD0(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190698 + 50.0) +
                     (f32)arg0->unk38->unk6 / 10.0;
        GG->unk33C = func_8001EB64(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_801906A0 + 50.0) +
                     (f32)arg0->unk38->unkA / 10.0;
    }
    GG->unk338 = arg0->unk24->unk30->unk8 + 20.0f;
    if (arg0->unk92 == 2) {
        angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
    } else {
        angle = arg0->unk24->unk30->unk12;
    }
    GG->unk340 = func_8001EAD0(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + D_801906A8) +
                 (f32)arg0->unk38->unk6 / 10.0;
    GG->unk344 = (f32)TBL[arg0->unk90].unk6 * D_801906B0 + 10.0f + (f32)arg0->unk38->unk8 / 10.0;
    GG->unk348 = func_8001EB64(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + D_801906B8) +
                 (f32)arg0->unk38->unkA / 10.0;
    if (func_8010843C(GG->unk340, GG->unk344, GG->unk348, GG->unk334, GG->unk338, GG->unk33C) != 0) {
        GG->unk334 = GG->unk380;
        GG->unk338 = GG->unk384;
        GG->unk33C = GG->unk388;
    }
    GG->unk1E8 = GG->unkE8->unk2C->unk30;
    GG->unk1EC = GG->unkE8->unk2C->unk34;
    GG->unk1F0 = GG->unkE8->unk2C->unk38;
    GG->unk1F4 = GG->unkE8->unk2C->unk3C;
    GG->unk1F8 = GG->unkE8->unk2C->unk40;
    GG->unk1FC = GG->unkE8->unk2C->unk44;
    func_80005670(arg0, D_801826AC);
}
