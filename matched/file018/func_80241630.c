#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_80020744(s32);
typedef struct func_80241630_Struct {
    u8 pad0[0x92];
    u16 unk92;
} func_80241630_Struct;
typedef struct func_80241630_Struct4 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_80241630_Struct4;
typedef struct func_80241630_Struct3 {
    u8 pad0[0x30];
    func_80241630_Struct4 *unk30;
} func_80241630_Struct3;
typedef struct func_80241630_Struct2 {
    u8 pad0[0x14];
    func_80241630_Struct3 *unk14;
} func_80241630_Struct2;
struct func_802416A8_Struct0 {
    u8 pad[0x92];
    u16 unk92;
};
struct func_802416A8_Struct1 {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
};
struct func_802416A8_Struct3 {
    u8 pad0[0x30];
    struct func_802416A8_Struct1 *unk30;
};
struct func_802416A8_Struct2 {
    u8 pad0[0x14];
    struct func_802416A8_Struct3 *unk14;
};
void func_802416A8(struct func_802416A8_Struct0 *arg0, struct func_802416A8_Struct2 *arg1);
void func_80241630(func_80241630_Struct *arg0, func_80241630_Struct2 *arg1) {
    s32 temp_v0;
    func_80241630_Struct4 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + 0.0005);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC((s32) arg0, &func_802416A8);
}
