#include "common.h"
typedef struct func_8002059C_C { u8 pad[0x8]; s32 v8; } func_8002059C_C;
typedef struct func_8002059C_B { u8 pad[0x10]; func_8002059C_C *p10; } func_8002059C_B;
typedef struct func_8002059C_A { u8 pad[0xC]; func_8002059C_B *arr[1]; } func_8002059C_A;
typedef struct func_8002059C_T { u8 pad[4]; func_8002059C_A *p4; } func_8002059C_T;
extern func_8002059C_T *D_80096A98[];
extern void (*D_80047E0C[])(void);
typedef struct func_800203C4_Struct { s32 unk0; void *unk4; void *unk8; } func_800203C4_Struct;
void func_800203C4(func_800203C4_Struct *arg0);


typedef struct { s32 a, b, c, d; s32 e; void *f; s32 g; s8 h; void *i; } func_800201D0_StructA;
typedef struct { s32 a, b, c; } func_800201D0_StructB;
extern void func_80001FE8();
extern void func_8001F8A0();
extern void func_80028694();
extern void func_800305D0();
extern s32 D_80047960[];
extern s32 D_80047978[];
extern s32 D_80047990[];
extern s32 D_800479A8[];
extern u8 D_800479C0[];
extern u8 D_80096A70[];
extern u8 D_80096A88[];
extern u8 D_80096AB0[];
extern u8 D_80191520[];

/* GGA: sndInit */
void func_800201D0(void) {
    func_800201D0_StructA a;
    func_800201D0_StructB b;
    s32 i;
    s32 off;
    s32 n;
    s32 s;
    s32 j;

    for (i = 0; i < 0x100000;) {
        i++;
    }
    func_800305D0(D_80096A88, D_80096AB0, 0x35000);
    off = 0;
    for (j = 0; j < 6; j++) {
        n = D_80047978[j] - D_80047960[j];
        s = D_80047960[j];
        D_80096A98[j] = (func_8002059C_T *)(D_80191520 + off);
        for (i = 0; i != n; i++) {
            (D_80191520 + off)[i] = 0;
        }
        func_80001FE8(s, D_80096A98[j], n);
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
    func_800203C4((func_800203C4_Struct *)D_80096A70);
    for (i = 0; i < 0x100000;) {
        i++;
    }
}
