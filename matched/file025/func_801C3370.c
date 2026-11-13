#include "common.h"
typedef struct func_801C354C_StructObject {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_801C354C_StructObject;
extern func_801C354C_StructObject *D_8008DA88[];
extern void func_801C0D04(s32, s32);
typedef struct func_801C354C_StructData {
    u8 pad0[4];
    s32 *unk4;
    u8 pad8[4];
    u16 unkC;
} func_801C354C_StructData;
typedef struct func_801C354C_StructArg {
    u8 pad0[0x5C];
    func_801C354C_StructData *unk5C;
    u8 pad60[0x30];
    s32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s32 unkA0;
} func_801C354C_StructArg;


typedef struct func_801C3370_StructModel {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801C3370_StructModel;

typedef struct func_801C3370_StructObj {
    u8 pad0[0x2C];
    func_801C3370_StructModel *unk2C;
} func_801C3370_StructObj;

extern u8 D_801D9160[];
extern u8 D_801D91B8[];
extern u8 D_801D9210[];
extern u8 D_801D9268[];
extern u8 D_801D92C0[];
extern u8 D_801D9310[];

void func_801C3370(func_801C354C_StructArg *arg0, s32 arg1, f32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6,
    s32 arg7) {
    func_801C3370_StructObj **slot;
    s32 i;
    s32 *p;
    s32 temp_s4;
    func_801C354C_StructData *data;
    if (arg7) {}

    data = arg0->unk5C;
    p = data->unk4;
    if (p) {}
    temp_s4 = arg3 & 0xFF;
    if (temp_s4) {}
    if (data) {}
    for (i = 1; i < data->unkC; i++) {
        slot = (func_801C3370_StructObj **)((u8 *)&D_8008DA88 + i * 4);
        if (p[i] < 0) {
        } else {
            (*slot)->unk2C->unk24 |= 0x100;
            if (((*slot)->unk2C->unk24 & 0xFF) == 0x15) {
                if (arg6 != 0) {
                    if (arg7 != 0) {
                        (*slot)->unk2C->unk30 = (s32)D_801D9210 | 0x40000000;
                    } else {
                        (*slot)->unk2C->unk30 = (s32)D_801D91B8 | 0x40000000;
                    }
                } else {
                    (*slot)->unk2C->unk30 = (s32)D_801D9160 | 0x40000000;
                }
            } else {
                if (arg6 != 0) {
                    if (arg7 != 0) {
                        (*slot)->unk2C->unk30 = (s32)D_801D9310 | 0x40000000;
                    } else {
                        (*slot)->unk2C->unk30 = (s32)D_801D92C0 | 0x40000000;
                    }
                } else {
                    (*slot)->unk2C->unk30 = (s32)D_801D9268 | 0x40000000;
                }
            }
            (*slot)->unk2C->unk4B = temp_s4;
        }
    }
    arg0->unk90 = arg1;
    arg0->unk94 = arg2;
    arg0->unk98 = (f32)(u32)temp_s4;
    arg0->unk9C = (f32)(u32)arg4;
    arg0->unkA0 = arg5;
    func_801C0D04(4, arg1);
}
