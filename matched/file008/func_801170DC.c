#include "common.h"
extern u8 D_801BBBF0[];
extern s32 D_801BBE40;
typedef struct func_8011744C_StructB {
    s16 h0; s16 h2; s16 h4; s16 h6;
    s32 w8; s32 wC; s32 w10; s32 w14;
    u16 h18; u8 pad1A[2];
    f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C; f32 f30; f32 f34; f32 f38;
    f32 f3C; f32 f40; f32 f44; f32 f48; f32 f4C; f32 f50; f32 f54;
    s32 w58;
} func_8011744C_StructB;
typedef struct func_8011744C_StructC {
    u8 pad[0x2C];
    func_8011744C_StructB *p;
} func_8011744C_StructC;
typedef struct {
    u8 pad0[0xE8];
    func_8011744C_StructC *e8;
    u8 pad1[0x258 - 0xEC];
    func_8011744C_StructC *arr[1];
} func_8011744C_StructG;
#define G (*(func_8011744C_StructG *)D_801BBBF0)
extern void func_800058DC(s32 a, void (*f)(s32, s32));
s32 func_80117204(u16 arg0);

extern void func_80006088(void *a, s32 b, u8 *c);

s32 func_801170DC(u16 arg0) {
    s32 idx;

    idx = func_80117204(arg0);
    if (G.arr[idx] == 0) {
        if (arg0 == 4 || arg0 == 0x10 || arg0 == 0x20 || arg0 == 0x40 || arg0 == 8 || arg0 == 0x80 || arg0 == 0x100 || arg0 == 0x200 || arg0 == 0x400 || arg0 == 1 || arg0 == 2 || arg0 == 3) {
        }
        return -1;
    } else {
        idx = idx & 0xFF;
    }
    if (arg0 == 4 || arg0 == 0x10 || arg0 == 0x20 || arg0 == 0x40 || arg0 == 8 || arg0 == 0x80 || arg0 == 0x100 || arg0 == 0x200 || arg0 == 0x400 || arg0 == 1 || arg0 == 2 || arg0 == 3) {
    }
    func_80006088(G.arr[idx], idx, D_801BBBF0);
    G.arr[idx] = 0;
    if (0x40 == arg0) {
        func_800058DC(D_801BBE40, 0);
    }
    return 0;
}
