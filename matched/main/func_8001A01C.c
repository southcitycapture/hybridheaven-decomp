#include "context.h"

typedef struct func_8001A01C_Struct {
    u8 pad0[2];
    u8 unk2;
    u8 pad3;
    u16 unk4;
    u8 pad6[6];
} func_8001A01C_Struct;

extern u8 D_8008ED28[];
extern void func_8001A0A4();

void func_8001A01C(s32 arg0, s32 arg1) {
    if (func_80018BD8() == 0) {
        D_8008EE80 = 0;
        func_8001C0B0(((func_8001A01C_Struct *)(D_8008ED28 + (u8)D_8008EE80 * 12))->unk2,
                      ((func_8001A01C_Struct *)(D_8008ED28 + (u8)D_8008EE80 * 12))->unk4,
                      D_8008EBE7, (u16)func_8001D394(D_8008EBE7, 0xA1FC));
        func_800058DC(arg0, &func_8001A0A4);
    }
}
