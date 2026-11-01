#include "common.h"
#include "common.h"
typedef struct func_801D3060_V { f32 x, y, z; } func_801D3060_V;
typedef struct func_801D3060_T { u16 h[5]; } func_801D3060_T;
extern s32 func_8012C6B4(s32);
extern void func_8013A334(f32 *, s32, void *, u16);
extern u16 D_8017BC7C[];
extern func_801D3060_T D_801E1448;
func_801D3060_V func_801D3060(void *arg1, s32 arg2) {
    u8 *sp44;
    func_801D3060_V a;
    func_801D3060_V b;
    u16 v;
    u16 w;
    sp44 = *(u8 **)((u8 *)arg1 + 0x5C);
    v = func_8012C6B4(*(u16 *)(sp44 + 0xC));
    if (v < 2) {
        func_801D3060_T t;
        t = D_801E1448;
        v = t.h[func_8012C6B4(5)];
    }
    w = D_8017BC7C[v];
    func_8013A334(&a.x, arg2, sp44, v);
    func_8013A334(&b.x, arg2, sp44, w);
    a.x += (b.x - a.x) * func_8012C6B4(100) / 100.0;
    a.y += (b.y - a.y) * func_8012C6B4(100) / 100.0;
    a.z += (b.z - a.z) * func_8012C6B4(100) / 100.0;
    return a;
}
