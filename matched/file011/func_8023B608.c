#include "context.h"

extern s8 func_8024402C(u8);
extern void func_8023A790(s32);
extern void func_8023B2E8(void);
extern s8 func_8023A398(void *, s32);

typedef struct func_8023B608_Ent {
    u8 unk0;
    u8 pad1[7];
} func_8023B608_Ent;

void func_8023B608(void *arg0, void *arg1) {
    s32 v;
    s32 i;
    s32 n;
    u8 *data;

    D_80240880.unk6A = D_80240880.unk6B = 0xFF;
    *(void **)(B + 0xC) = arg1;
    B[0x23] = *(u8 *)arg1;
    B[0x20] = 0;
    v = B[0x23];
    i = 0;
    B[0x22] = (v - 1) / 4;
    if (v > 0) {
        data = (u8 *)arg1 + 4;
        do {
            B[0x38 + i] = ((func_8023B608_Ent *)data)[i].unk0;
            B[0x51 + i] = func_8024402C(func_8023A398(arg0, i & 0xFF));
            i = (i + 1) & 0xFF;
        } while (i < B[0x23]);
    }
    func_8023AB40((s32)arg0);
    func_8023AB94((s32)arg0);
    func_8023AC94();
    func_8023B2E8();
    func_8023A790((s32)arg0);
}
