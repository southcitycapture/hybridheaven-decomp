#include "common.h"
extern u8 D_8025C6F4[];
extern s8 D_8025C6F9;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern void func_80020744(s32);
extern void func_8012A7F4(void *, f32, f32, s32);
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern void func_801300B0(f32, s32, s32, f32, f32);
typedef struct func_80244CEC_StructNode {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 id;
} func_80244CEC_StructNode;
typedef struct func_80244CEC_StructMid {
    u8 pad[0x2C];
    func_80244CEC_StructNode *node;
} func_80244CEC_StructMid;
typedef struct func_80244CEC_StructObj {
    u8 pad[0x24];
    func_80244CEC_StructMid *mid;
} func_80244CEC_StructObj;
s32 func_80244CEC(func_80244CEC_StructObj *arg0);
void func_802472C8();
typedef struct func_802475F0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    void *unk54;
    void *unk58;
    void *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_802475F0_Struct;
void func_802475F0(func_802475F0_Struct *arg0, void *arg1);


typedef struct func_80246814_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80246814_StructInner;

typedef struct func_80246814_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x28];
    u32 unk5C;
} func_80246814_Struct;

typedef struct func_80246814_StructNode {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80246814_StructNode;

typedef struct func_80246814_StructMid {
    u8 pad0[0x30];
    func_80246814_StructNode *unk30;
} func_80246814_StructMid;

typedef struct func_80246814_StructGlobal {
    u8 pad0[0x24];
    func_80246814_StructMid *unk24;
} func_80246814_StructGlobal;

extern func_80246E60_StructGlobal D_80258F54;
extern u8 D_8025C6FB;
extern void func_801268F4(s32);

void func_80246814(arg0, arg1)
    void *arg0;
    s32 arg1;
{
    void *inner;
    void **p;

    p = &inner;
    *p = (void *)((func_80246814_Struct *)arg0)->unk5C;
    do {
    } while (0);
    if (func_80244CEC((func_80244CEC_StructObj *)arg0) != 0) {
        return;
    }
    if (func_8012CE9C(arg1, inner, D_80258F54, 10) != 0) {
        return;
    }
    {
        func_80010550(arg1, inner);
        arg0 = arg0;
        if (((func_80246814_Struct *)arg0)->unk30 & 8) {
            D_8025C6FB += 1;
            func_801300B0(2.0f, 0, 30, 0.7f, 5.0f);
            func_80020744(0x235);
            D_8025C6F9 = 1;
            if (D_8025C6FB == 4) {
                ((func_80246814_StructInner *)inner)->unk78 = 1;
                func_801268F4(0);
                func_800058DC(arg0, (void *)func_802475F0);
            } else {
                ((func_80246814_StructInner *)inner)->unk78 = 1;
                func_800058DC(arg0, (void *)func_802472C8);
            }
        } else {
            func_8012A7F4(arg0,
                (*(func_80246814_StructGlobal **)D_8025C6F4)->unk24->unk30->unk4,
                (*(func_80246814_StructGlobal **)D_8025C6F4)->unk24->unk30->unkC,
                0x80);
        }
    }
}
