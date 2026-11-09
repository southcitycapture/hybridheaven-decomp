#include "common.h"

extern s32 func_8001F290(u32);

struct func_8000BBF4_Struct {
    u8 pad[0x4280];
    s32 start1;
    s32 end1;
    s32 start2;
    s32 end2;
};
extern struct func_8000BBF4_Struct D_800892B0[];

void func_8000BBF4(u16 arg0) {
    D_800892B0->start1 = func_8001F290((u32)(arg0 << 6) & (arg0 << 6));
    if (D_800892B0->start1) {}
    D_800892B0->end1 = D_800892B0->start1 + (arg0 << 6);
    D_800892B0->start2 = func_8001F290((u32)(arg0 << 6));
    if (D_800892B0->start2) {}
    D_800892B0->end2 = D_800892B0->start2 + (arg0 << 6);
}
