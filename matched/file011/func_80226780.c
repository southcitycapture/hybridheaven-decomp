#include "context.h"

typedef struct func_80226780_StructInner {
    u8 pad0[0x6C];
    u16 unk6C;
    u8 pad6E[0x70 - 0x6E];
    void *unk70;
} func_80226780_StructInner;

typedef struct func_80226780_StructTail {
    u8 pad0[0x74];
    u8 unk74;
} func_80226780_StructTail;

typedef struct func_80226780_StructOuter {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80226780_StructTail *unk5C;
} func_80226780_StructOuter;

extern u16 D_801BBC1C;
extern u8 D_8023C8F8[];
void *func_80005670(void *arg0, void *arg1);

void func_80226780(func_80226780_StructOuter *arg0) {
    func_80226780_StructInner *temp_v0;
    func_80226780_StructTail *temp_v1;

    temp_v1 = arg0->unk5C;
    if ((D_801BBC1C != 0xA) && (temp_v1->unk74 == 3) && (arg0->unk36 == 0x11B)) {
        temp_v0 = func_80005670(arg0, D_8023C8F8);
        if (temp_v0 != NULL) {
            temp_v0->unk6C = 0;
            temp_v0->unk70 = arg0;
        }
    }
}
