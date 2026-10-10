#include "context.h"

extern void func_800023A8();
extern void func_801CACE4();
extern u8 D_801BBF0A[];
extern u8 D_801CE3DC[];

void func_801CACF0(s32 arg0, s32 arg1) {
    u8 *temp;
    s32 idx;

    idx = (u8)D_801CFDE0;
    if (idx == 0) {
        D_801BBF0A[0x33] = 0;
    } else {
        D_801BBF0A[0x33] = 1;
    }
    temp = D_801CE3DC + idx * 0x30;
    (*(void (**)())(temp + 4))(temp);
    func_800023A8(0);
    func_800058DC(arg0, func_801CACE4);
}
