#include "context.h"

extern void func_800023EC();
extern void func_80005700(void *);
extern s8 D_8023E3A0;
extern s32 D_8023E3B8;
extern s32 D_8023E3BC;

typedef struct func_8023A0EC_Inner {
    u8 pad[0x74];
    u8 unk74;
} func_8023A0EC_Inner;

typedef struct func_8023A0EC_Struct {
    u8 pad[0x90];
    func_8023A0EC_Inner *unk90;
} func_8023A0EC_Struct;

void func_8023A0EC(func_8023A0EC_Struct *arg0, s32 arg1) {
    func_8023A0EC_Inner *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk90;
    temp_v1 = temp_v0->unk74;
    if (temp_v1 == 0 || temp_v1 == 1 || temp_v1 == 2) {
        func_800023EC();
        D_8023E3A0 = 0;
        D_8023E3B8 = 0;
    }
    D_8023E3BC = 0;
    func_80005700(arg0);
}
