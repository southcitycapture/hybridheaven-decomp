#include "context.h"
struct func_8037296C_Struct;
typedef struct func_80372784_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x6C - 0x10];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_80372784_Struct;
extern f32 D_8038B440;
extern f32 D_8038B444;
extern void func_80006214(void *);
extern void func_800058DC(void *a0, void *a1);
void func_8037296C(struct func_8037296C_Struct *arg0, s32 arg1);

void func_80372784(func_80372784_Struct *arg0, s32 arg1) {
    f32 v[3];
    u8 pad[8];
    f32 k;

    func_80006214(arg0->unkC);
    func_80372654(v, arg0->unkC, D_8008DA88);
    func_80006214(arg0);
    k = D_8038B440;
    arg0->unk6C = v[0];
    arg0->unk70 = v[1];
    arg0->unk74 = v[2];
    func_801CE1C8(arg0, 0x32, v[0], v[1], v[2], 0xFF, 0, 0xFF, 0, 0xFF, 0xFF, 0, 0x80, 0, 0xFF, 0xFF, 0, 0xFF, 0, 0xFF, 0x80, 2, 0x18, k, k, k, 0.0f, 4);
    func_801CE1C8(arg0, 0x31, v[0], v[1], v[2], 0xFF, 0, 0xFF, 0x40, 0xFF, 0xFF, 0, 0x80, 0, 0xFF, 0xFF, 0xC0, 0xFF, 0, 0xFF, 0x40, 1, 0x18, D_8038B444, D_8038B444, D_8038B444, 0.0f, 5);
    func_800058DC(arg0, func_8037296C);
}
