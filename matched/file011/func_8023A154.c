#include "context.h"

typedef struct func_8023A154_Struct90 {
    u8 pad[0x74];
    u8 unk74;
} func_8023A154_Struct90;

typedef struct func_8023A154_Struct98 {
    u8 pad[0x31];
    u8 unk31;
} func_8023A154_Struct98;

typedef struct func_8023A154_Struct {
    u8 pad[0x90];
    func_8023A154_Struct90 *unk90;
    u8 pad2[0x4];
    func_8023A154_Struct98 *unk98;
} func_8023A154_Struct;

extern s8 D_801BCC21;

void func_8023A154(func_8023A154_Struct *arg0, s32 arg1) {
    s32 temp_a1;
    func_8023A154_Struct98 *temp_v0;
    func_8023A154_Struct90 *temp_v1;

    temp_v0 = arg0->unk98;
    temp_v1 = arg0->unk90;
    D_801BCC21 = 5;
    temp_v0->unk31 = temp_v0->unk31 & 0xFFF8;
    temp_a1 = temp_v1->unk74;
    if (temp_a1 == 0 || temp_a1 == 1 || temp_a1 == 2) {
        func_800023EC(arg0);
        D_8023E3A0 = 0;
        D_8023E3B8 = 0;
    }
    func_80005700(arg0);
}
