#include "context.h"
typedef struct func_80001B30_Struct {
    u8 pad[0x40];
    s32 unk40;
} func_80001B30_Struct;
typedef struct func_80001B30_Struct2 {
    u8 pad[0x10000];
    func_80001B30_Struct sub;
    u8 pad2[0x10048 - 0x10044];
} func_80001B30_Struct2;
extern func_80001B30_Struct2 D_800692B0[];
extern u8 D_800892B0[];
extern func_80001B30_Struct2 *D_8008D5BC;
extern func_80001B30_Struct *D_8008D5C0;
extern s32 *D_8008D5C4;
extern s32 D_8008D5C8;
extern s32 D_8008D5CC;

void func_80001B30(void) {
    D_8008D5BC = &D_800692B0[*(s16 *)(D_800892B0 + 0x9C)];
    D_8008D5C0 = &D_800692B0[*(s16 *)(D_800892B0 + 0x9C)].sub;
    D_8008D5C8 = D_800692B0[*(s16 *)(D_800892B0 + 0x9C)].sub.unk40;
    D_8008D5C4 = &D_8008D5C0->unk40;
    D_8008D5CC = D_8008D5C8 + (*(u16 *)(D_800892B0 + 0x90) << 6);
}
