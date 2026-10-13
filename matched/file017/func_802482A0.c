#include "context.h"

extern void func_800058DC(void *arg0, void *arg1);
extern void *func_801505AC(s32 arg0);
void func_80248334(void);

typedef struct func_802482A0_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_802482A0_StructObj;

typedef struct func_802482A0_StructSub {
    u8 pad[0x91];
    u8 unk91;
} func_802482A0_StructSub;

void func_802482A0(func_802482A0_StructObj *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    func_802482A0_StructSub *temp_v0_2;
    func_802482A0_StructSub *temp_v0_3;

    temp_v0 = arg0->unk3C;
    temp_v1 = arg0->unk3C < 2;
    arg0->unk3C = temp_v0 + 1;
    if (!temp_v1) {
        if (func_80133A24(0x125) != 0) {
            temp_v0_2 = func_801505AC(3);
            temp_v0_2->unk91 = temp_v0_2->unk91 | 0x40;
        }
        if (func_80133A24(0x124) != 0) {
            temp_v0_3 = func_801505AC(2);
            temp_v0_3->unk91 = temp_v0_3->unk91 | 0x40;
        }
        func_800058DC(arg0, &func_80248334);
    }
}
