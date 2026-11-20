#include "common.h"
extern void D_80130E34(s32, s32, f32, s32, f32 *, f32 *);
typedef struct func_803794DC_StructG {
    u8 pad0[0x2C];
    s32 unk2C;
} func_803794DC_StructG;
extern func_803794DC_StructG *D_801BBCD8;
extern u8 D_801BBE22[];
extern u8 D_80388968[];
extern u8 D_803889B0;
extern s32 D_8038A900;
extern s32 D_8038A90C;
extern s32 func_80005670(s32, void *);
extern void func_800058DC(s32, void *);
extern s32 func_8013D5F4(u8);
typedef struct func_803794DC_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_803794DC_StructB;
typedef struct func_803794DC_StructA {
    u8 pad0[0x30];
    func_803794DC_StructB *unk30;
} func_803794DC_StructA;
extern func_803794DC_StructA *func_801494A4(s32, u8, s32, s32, f32, s32);
extern void func_80149580(s32, void *, u8);
extern s32 func_8014B3F0(s32);
extern void func_8014B4A0(u16, f32 *);
extern s32 func_8014C068(u16);
extern s32 func_8014C1F0(u16);
typedef struct func_803787F0_S1 {
    u8 pad0[0x1C];
    s32 unk1C;
} func_803787F0_S1;
typedef struct func_803787F0_S0 {
    u8 pad0[0x5C];
    func_803787F0_S1 *unk5C;
} func_803787F0_S0;
void func_80378CD8(s32 arg0, s32 arg1);


typedef struct func_8037890C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_8037890C_StructB;

typedef struct func_8037890C_StructA {
    u8 pad0[0x30];
    func_8037890C_StructB *unk30;
} func_8037890C_StructA;

typedef struct func_8037890C_StructVec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037890C_StructVec;
extern void func_80133980(s32);
extern void D_8001B204(s32, s32, s32, void *, ...);
extern void func_8013A28C(s32, func_8037890C_StructVec);
extern s32 func_8013D520(u8, s32, s32);
extern void func_8014B034(u16, s32);
extern void func_8014B3B0(u16, s32);
extern func_8037890C_StructVec D_80388988;
extern func_8037890C_StructVec D_803889A0;
extern u8 D_80389454[];
extern u8 D_8038947C[];
extern u8 D_80389484[];
extern u8 D_803894A0[];
extern u8 D_803894C8[];

void func_8037890C(s32 arg0, s32 arg1) {
    func_803787F0_S1 *sp6C;
    s32 storage_id;
    u8 sp67;
    s32 transfer_failed;
    s32 item_name;
    f32 sp58;
    f32 sp54;
    s32 elevation_mode;
    s32 alternate_transfer_failed;
    s32 alternate_item_name;
    s32 model;
    f32 scale;
    f32 sp34[3];
    s32 container_mode;
    s32 icon;

    sp6C = ((func_803787F0_S0 *)arg0)->unk5C;
    sp58 = 160.0f;
    sp54 = 120.0f;
    storage_id = *(u16 *)(D_801BBE22 + 0x12);
    sp67 = (u8)func_8014B3F0(storage_id);
    model = func_80005670(arg0, D_80388968);
    D_8038A90C = model;
    D_803889B0 = 0;
    container_mode = func_8014C068(*(u16 *)(D_801BBE22 + 0x12));
    if (container_mode != 0) {
        if ((sp67 & 0xFF) != 0) {
            icon = (s32)func_801494A4(arg0, sp67, 0x43610000, 0x42A00000, 0.0f, 1);
            D_8038A900 = icon;
            func_8014B4A0(*(u16 *)(D_801BBE22 + 0x12), sp34);
            elevation_mode = func_8014C1F0(*(u16 *)(D_801BBE22 + 0x12));
            if (!(elevation_mode & 0xFF)) {
                D_80130E34(D_801BBCD8->unk2C, *(s32 *)&sp34[0], sp34[1] + 5.0f, *(s32 *)&sp34[2], &sp58, &sp54);
            } else {
                D_80130E34(D_801BBCD8->unk2C, *(s32 *)&sp34[0], sp34[1] + 15.0f, *(s32 *)&sp34[2], &sp58, &sp54);
            }
            if (sp58 < 0.0f) {
                sp58 = 0.0f;
            }
            if (sp54 < 0.0f) {
                sp54 = 0.0f;
            }
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk4 = sp58;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk8 = sp54;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk20 = 0.01313f;
            scale = ((func_8037890C_StructA *)D_8038A900)->unk30->unk20;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk1C = scale;
            ((func_8037890C_StructA *)D_8038A900)->unk30->unk18 = scale;
            transfer_failed = func_8013D520(sp67, 1, 0);
            if (transfer_failed != 0) {
                D_8001B204(0xF, 0x7D0, 0xB0, D_80389454, 4, 0);
                D_803889B0 = 1;
            } else {
                item_name = func_8013D5F4(sp67);
                D_8001B204(0xF, 0x7D0, 0xB0, D_8038947C, 4, 0, item_name);
                func_8014B3B0(*(u16 *)(D_801BBE22 + 0x12), 0);
            }
            func_80149580(arg0, (void *)D_8038A900, sp67);
        } else {
            D_8001B204(0xF, 0x7D0, 0xB0, D_80389484, 4, 0);
        }
    } else {
        alternate_transfer_failed = func_8013D520(sp67, 1, 0);
        if (alternate_transfer_failed != 0) {
            D_8001B204(0xF, 0x7D0, 0xB0, D_803894A0, 4, 0);
        } else {
            alternate_item_name = func_8013D5F4(sp67);
            D_8001B204(0xF, 0x7D0, 0xB0, D_803894C8, 4, 0, alternate_item_name);
            func_8014B034(*(u16 *)(D_801BBE22 + 0x12), 0);
            if (sp67 == 0x26) {
                func_80133980(0x272);
            }
        }
    }
    if (sp6C->unk1C == 0x0168003C) {
        func_8013A28C(arg1, D_80388988);
    } else {
        func_8013A28C(arg1, D_803889A0);
    }
    func_800058DC(arg0, func_80378CD8);
}
