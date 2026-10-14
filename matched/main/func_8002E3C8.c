#include "context.h"

typedef struct func_8002E3C8_Obj {
    void *unk0;
    u8 pad04[4];
    void (*unk8)(void *, s32, void *);
    u8 pad0C[0x0E];
    s16 unk1A;
    u8 pad1C[0x1C];
    s32 unk38;
    void *unk3C;
    void *unk40;
    u8 pad44[4];
    s32 unk48;
} func_8002E3C8_Obj;

s32 func_8002E3C8(func_8002E3C8_Obj *arg0, s32 arg1, void *arg2) {
    func_8002E3C8_Obj *temp_a0;
    void *temp_v0;

    switch (arg1) {
    case 3:
        temp_v0 = arg0->unk40;
        if (temp_v0 != NULL) {
            *(void **)temp_v0 = arg2;
        } else {
            arg0->unk3C = arg2;
        }
        arg0->unk40 = arg2;
        break;
    case 4:
        temp_a0 = arg0->unk0;
        arg0->unk38 = 1;
        arg0->unk48 = 0;
        arg0->unk1A = 1;
        if (temp_a0 != NULL) {
            temp_a0->unk8(temp_a0, 4, arg2);
        }
        break;
    case 9:
        temp_a0 = arg0->unk0;
        arg0->unk48 = 1;
        if (temp_a0 != NULL) {
            temp_a0->unk8(temp_a0, 9, arg2);
        }
        break;
    case 1:
        arg0->unk0 = arg2;
        break;
    default:
        temp_a0 = arg0->unk0;
        if (temp_a0 != NULL) {
            temp_a0->unk8(temp_a0, arg1, arg2);
        }
        break;
    }
    return 0;
}
