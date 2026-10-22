#include "context.h"

#if __LINE__ == 3
#define func_801D5658_S12 func_801D5C18_Struct
#define func_801D5658_S12F func_801D5C18_StructF
#else
struct func_801D5658_S12 { s32 a; s32 b; s32 c; };
struct func_801D5658_S12F { s32 a; s32 b; f32 c; };
extern s32 func_801CC540();
extern void func_80006214();
extern s32 func_80010550();
extern s32 func_80011140();
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801E1680;
extern struct func_801D5998_Struct D_801E1690;
extern s32 D_801DB714;
extern u8 D_801E16A0;
extern u8 D_801E16B0;
#endif
struct func_801D5658_Obj { u8 pad[0x5C]; u8 *unk5C; };
struct func_801D5658_Q { u8 pad[0x4]; struct func_801D5658_R *unk4; };
struct func_801D5658_R { u8 pad[0x2C]; struct func_801D5658_T *unk2C; };
struct func_801D5658_T { u8 pad[0x5C]; struct func_801D5658_S12 v; };
extern void func_8013A1B4();
extern void func_8013A334(void *, s32, u8 *, s32);
extern void func_801D5A00(void *);
extern u8 D_801D5658[];

void func_801D5658(void *arg0, void *arg1) {
    struct func_801D5658_S12F *p;
    u8 *q;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D5658);
        return;
    }
    if (D_801DB730 != 0) {
        func_80006214(arg0);
        func_8013A1B4(D_8008DA88, *(struct func_801D5658_S12 *)D_801DB730, 0x1BFFFF);
        q = ((struct func_801D5658_Obj *)arg0)->unk5C;
        q[0x76] = 1;
        D_801DB730 = 0;
    }
    p = (struct func_801D5658_S12F *)D_801DB734;
    if (p != 0) {
        if (func_80011140((s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C, *(struct func_801D5658_S12 *)p, (u32)p->c) != 0) {
            D_801DB734 = 0;
        }
    } else {
        if (func_80010550((s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C) != 0) {
            D_801DB754 = 1;
        } else {
            D_801DB754 = 0;
        }
        *(struct func_801D5658_S12 *)&D_801E1690 = ((struct func_801D5658_Q *)arg1)->unk4->unk2C->v;
        *(struct func_801D5658_S12 *)&D_801E1680 = *(struct func_801D5658_S12 *)(D_801BC025 + 3);
        D_801DB714 = (s32)arg1;
        func_8013A334(&D_801E16A0, (s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C, 0xF);
        func_8013A334(&D_801E16B0, (s32)arg1, ((struct func_801D5658_Obj *)arg0)->unk5C, 0x12);
    }
    if (D_801DB74C != 0) {
        OBJ->unk22 = D_801DB750;
    }
    if (D_801DB718 != 0) {
        func_801D5A00(arg0);
    }
}
