#include "context.h"

extern s32 func_80006088();
extern s32 func_80147174();
typedef struct func_8037DD6C_StructSub {
    s16 unk0;
    s16 unk2;
} func_8037DD6C_StructSub;
typedef struct func_8037DD6C_Struct {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad1[0x1C];
    func_8037DD6C_StructSub *unk30;
} func_8037DD6C_Struct;
extern func_8037DD6C_Struct *D_8038A9C4;

s32 func_8037DD6C(arg0, arg1, arg2, arg3)
    void *arg0;
    s32 arg1;
    s32 arg2;
    s16 arg3;
{
    s32 pad;
    u8 pad2;
    u8 sp22;
    s16 sp20;
    f32 sp1C;
    f32 d;
    f32 a;

    sp22 = 0;
    sp20 = ((func_8037DD6C_Struct *)arg1)->unk30->unk2;
    d = (f32)((f64)((f32)arg3 - sp20) * 0.5);
    sp1C = d;
    if (d < 0.0f) {
        a = -d;
    } else {
        a = d;
    }
    if (a < 1.0f) {
        if (d < 0.0f) {
            a = -d;
        } else {
            a = d;
        }
        if (a > 0.0f) {
            if (d < 0.0f) {
                a = -d;
            } else {
                a = d;
            }
            sp1C = d / a;
        }
    }
    sp20 = sp20 + sp1C;
    func_80006088(arg1);
    func_80006088(arg2);
    if (sp1C < 0.0f) {
        a = -sp1C;
    } else {
        a = sp1C;
    }
    if (a > 2.0f) {
        func_8037DC30((s32)arg0, 0x78, sp20);
        func_8037DCC8(arg0, 0x78, sp20);
    }
    if (D_8038A9C4->unk10 != 0) {
        func_80147174(D_8038A9C4->unk10);
        sp22 = 1;
    }
    D_8038A9B0 = func_8037DC30((s32)arg0, 0x78, sp20);
    D_8038A9B4 = func_8037DCC8(arg0, 0x78, sp20);
    return sp22;
}
