#include "context.h"

typedef struct func_802380EC_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_802380EC_Part;

typedef struct func_802380EC_Struct {
    u8 pad0[0x94];
    func_802380EC_Part *unk94;
    u8 pad1[0xA];
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    u8 pad2[6];
    u16 unkAC;
} func_802380EC_Struct;

typedef struct func_802380EC_Table {
    s16 unk0;
    s16 unk2;
    s32 unk4;
} func_802380EC_Table;

extern s32 func_80235EB4(void);
extern void func_80020744(s32);
extern void func_80236700(func_802380EC_Struct *, s32);
extern void func_80234724(func_802380EC_Struct *, s32, s32);
extern void func_80235394(func_802380EC_Struct *, s32, s32);
extern void func_8001B204(s32, s16, s16, void *, s32, s32, s32);
extern u8 D_80240578[];
extern u8 D_80240828[];
extern void func_80237EC8(void);
extern void func_80239DFC(void);

void func_802380EC(func_802380EC_Struct *arg0, s32 arg1) {
    func_802380EC_Part *temp_v1;
    func_802380EC_Table *temp_v0_2;
    s8 temp_v1_2;
    s32 temp_v0;

    temp_v1 = arg0->unk94;
    if (arg0->unkA2 == 0) {
        if (func_80235EB4() == 0) {
            if ((temp_v1->unkC & 0x200) || (temp_v0 = temp_v1->unk4, (temp_v0 & 0x4000))) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                func_80236700(arg0, arg1);
            } else if ((temp_v0 & 0x8000) && (arg0->unkA5 < arg0->unkA4)) {
                func_80020744(0x104);
                temp_v1_2 = arg0->unkA5;
                arg0->unkAC = 0;
                temp_v0_2 = (func_802380EC_Table *) (D_80240828 + (temp_v1_2 * 0xC));
                func_8001B204(temp_v1_2 & 0xFF, temp_v0_2->unk0 + 0x3E8, temp_v0_2->unk2, D_80240578, 8, 4, temp_v0_2->unk4);
                func_800058DC(arg0, func_80239DFC);
            }
            func_80234724(arg0, arg1, 1);
        }
    }
    if (arg0->unkA2 == 1) {
        func_80235394(arg0, arg1, 1);
        arg0->unkA5 = 1;
        if (arg0->unkA2 == 0) {
            func_800058DC(arg0, func_80237EC8);
        }
    }
}
