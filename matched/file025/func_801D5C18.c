#include "context.h"

struct func_801D5C18_Struct { s32 a; s32 b; s32 c; };
struct func_801D5C18_StructF { s32 a; s32 b; f32 c; };
struct func_801D5C18_Obj { u8 pad[0x5C]; u8 *unk5C; };

extern s32 func_801CC540();
extern void func_80006214(void *);
extern s32 func_80010550(s32, void *);
extern s32 func_80011140(s32, void *, struct func_801D5C18_Struct, u32);
extern void func_8013A28C(void *, struct func_801D5C18_Struct);
extern void func_801D5E9C(void *);
extern u8 D_8008DA88[];
extern u8 D_801D5C18[];
extern u8 D_801BC025[];

void func_801D5C18(struct func_801D5C18_Obj *arg0, s32 arg1) {
    struct func_801D5C18_StructF *p;
    u8 *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D5C18);
        return;
    }
    if (D_801DB7F8 != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D5C18_Struct *)D_801DB7F8);
        q = arg0->unk5C;
        q[0x76] = 1;
        D_801DB7F8 = 0;
    }
    p = (struct func_801D5C18_StructF *)D_801DB7FC;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *(struct func_801D5C18_Struct *)p, (u32)p->c) != 0) {
            D_801DB7FC = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DB804 = 1;
        } else {
            D_801DB804 = 0;
        }
        *(struct func_801D5C18_Struct *)&D_801E16D0 = *(struct func_801D5C18_Struct *)(D_801BC025 + 3);
    }
    if (D_801DB7E0 != 0) {
        func_801D5E9C(arg0);
    }
}
