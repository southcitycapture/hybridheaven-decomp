#include "context.h"
struct func_801D87AC_V { s32 a; s32 b; s32 c; };
struct func_801D87AC_F { s32 a; s32 b; f32 c; };
struct func_801D87AC_P { u8 pad[0x5C]; struct func_801D87AC_V v; };
struct func_801D87AC_R { u8 pad[0x2C]; struct func_801D87AC_P *p; };
struct func_801D87AC_B { u8 pad[0x76]; u8 f; };
struct func_801D87AC_A { u8 pad[0x5C]; struct func_801D87AC_B *p; };
struct func_801D87AC_Q { u8 pad[4]; struct func_801D87AC_R *p; };
extern s32 func_801CC540();
extern s32 func_800058DC();
void func_801D8BD0(s32 arg0);
extern void func_80006214();
struct func_801D8AA4_Struct;
extern struct func_801D8AA4_Struct D_801E1BC8;
extern void func_8013A28C(void *, struct func_801D87AC_V);
extern s32 func_80011140(void *, void *, struct func_801D87AC_F, u32);
extern s32 func_80010550(void *, void *);
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801D87AC[];

void func_801D87AC(struct func_801D87AC_A *arg0, void *arg1) {
    void *v;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)())D_801D87AC);
        return;
    }
    if (D_801DBB74 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D87AC_V *)D_801DBB74);
        v = arg0->p;
        ((struct func_801D87AC_B *)v)->f = 1;
        D_801DBB74 = 0;
    }
    v = (void *)D_801DBB78;
    if (v != 0) {
        if (func_80011140(arg1, arg0->p, *(struct func_801D87AC_F *)v, (u32)((struct func_801D87AC_F *)v)->c) != 0) {
            D_801DBB78 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p) != 0) {
            D_801DBB7C = 1;
        } else {
            D_801DBB7C = 0;
        }
        *(struct func_801D87AC_V *)&D_801E1BC8 = ((struct func_801D87AC_Q *)arg1)->p->p->v;
        *(struct func_801D87AC_V *)&D_801E1BB8 = *(struct func_801D87AC_V *)(D_801BC025 + 3);
    }
    if (D_801DBB80 != 0) {
        func_801D8BD0((s32)arg0);
    }
}
