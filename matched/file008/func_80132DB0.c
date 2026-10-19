#include "context.h"

typedef struct func_80132DB0_Struct30 {
    u8 pad[0x4B];
    u8 unk4B;
} func_80132DB0_Struct30;
typedef struct func_80132DB0_Struct24 {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    func_80132DB0_Struct30 *unk30;
} func_80132DB0_Struct24;
typedef struct func_80132DB0_Struct {
    u8 pad[0x24];
    func_80132DB0_Struct24 *unk24;
    u8 pad2[0x68];
    u16 unk90;
    u8 pad3[2];
    f32 unk94;
} func_80132DB0_Struct;

extern f64 D_8018D760;
struct func_80132ED0_Struct;
void func_80132ED0(struct func_80132ED0_Struct *arg0, s32 arg1);

void func_80132DB0(func_80132DB0_Struct *arg0, s32 arg1) {
    f32 k = (f32)2.0;
    arg0->unk24->unk30->unk4B = (u32)(arg0->unk94 * k);
    arg0->unk94 = arg0->unk94 - D_8018D760;
    if (arg0->unk94 <= 1.5) {
        arg0->unk24->unk22 = 0;
        D_80089356 = 0;
        arg0->unk90 = 5;
        func_800058DC((s32)arg0, (void (*)(void))func_80132ED0);
    }
}
