#include "context.h"

typedef struct { s32 a, b, c, d; s32 e; void *f; s32 g; s8 h; void *i; } func_800201D0_StructA;
typedef struct { s32 a, b, c; } func_800201D0_StructB;

extern void func_80001FE8();
extern void func_8001F8A0();
extern void func_800203C4();
extern void func_80028694();
extern void func_800305D0();
extern s32 D_80047960[];
extern s32 D_80047978[];
extern s32 D_80047990[];
extern s32 D_800479A8[];
extern u8 D_800479C0[];
extern u8 D_80096A70[];
extern u8 D_80096A88[];
extern u8 *D_80096A98[];
extern u8 D_80096AB0[];
extern u8 D_80191520[];

void func_800201D0(void) {
    func_800201D0_StructA a;
    func_800201D0_StructB b;
    s32 i;
    s32 off;
    s32 n;
    s32 s;
    s32 j;

    for (i = 0; i < 0x100000; i++) {}
    func_800305D0(D_80096A88, D_80096AB0, 0x35000);
    off = 0;
    for (j = 0; j < 6; j++) {
        n = D_80047978[j] - D_80047960[j];
        s = D_80047960[j];
        D_80096A98[j] = D_80191520 + off;
        for (i = 0; i != n; i++) {
            (D_80191520 + off)[i] = 0;
        }
        func_80001FE8(s * 1, D_80096A98[j], n, s);
        off += n;
    }
    for (j = 0; j < 6; j++) {
        func_80028694(D_80096A98[j], D_80047990[j]);
    }
    a.a = 0x10;
    a.b = 0x10;
    a.c = 0xA0;
    a.e = 0;
    a.g = 0;
    a.f = D_80096A88;
    a.h = 6;
    a.i = D_800479C0;
    b.a = 0xAC44;
    b.b = 1;
    b.c = 0x1000;
    func_8001F8A0(&a, 0xC, &b);
    func_800203C4(D_80096A70);
    for (i = 0; i < 0x100000; i++) {}
}
