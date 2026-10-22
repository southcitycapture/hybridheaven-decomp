#include "context.h"

struct func_801D0818_Struct { s32 a; s32 b; f32 c; };
struct func_801D0818_In { u8 pad[0x76]; u8 f; };
struct func_801D0818_Obj { u8 pad[0x5C]; struct func_801D0818_In *p; };
extern s32 func_801CC540();
extern void func_8013A28C(void *, struct func_801D0818_Struct);
extern s32 func_80011140(s32, void *, struct func_801D0818_Struct, u32);
extern s32 func_80010550(s32, void *);
extern s32 func_80129554(void *, s32, s32);
extern void func_801D0B64(void *);
extern u8 D_801BC025[];
extern u8 D_801D0818[];

void func_801D0818(struct func_801D0818_Obj *arg0, s32 arg1) {
    struct func_801D0818_Struct *s;
    struct func_801D0818_In *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, D_801D0818);
        return;
    }
    if (D_801DAFD8 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(&D_8008DA88, *(struct func_801D0818_Struct *)D_801DAFD8);
        q = arg0->p;
        q->f = 1;
        D_801DAFD8 = 0;
    }
    s = (struct func_801D0818_Struct *)D_801DAFDC;
    if (s != 0) {
        if (func_80011140(arg1, arg0->p, *s, (u32)s->c) != 0) {
            D_801DAFDC = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p) != 0) {
            D_801DAFE4 = 1;
        } else {
            D_801DAFE4 = 0;
        }
        *(struct func_801D0818_Struct *)&D_801E1308 = *(struct func_801D0818_Struct *)(D_801BC025 + 3);
    }
    if (D_801DAFEC != 0 && func_80129554(arg0, 0xFF, 0x40) != 0) {
        D_801DAFEC = 0;
    }
    if (D_801DAFC0 != 0) {
        func_801D0B64(arg0);
    }
}
