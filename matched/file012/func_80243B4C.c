#include "common.h"
extern s32 func_800058DC(s32, void *);
typedef struct {
    u8 unk0;
    u8 pad1[3];
    void *unk4;
} func_80243A48_Entry;
typedef struct {
    u8 unk0;
    u8 pad1[3];
    func_80243A48_Entry e[1];
} func_80243A48_Struct;
void func_80243A48(func_80243A48_Struct *arg0, u16 arg1, s8 *arg2, s8 *arg3);
extern void func_80243DDC();


struct func_80243B4C_Struct_B { u8 pad[0xA1]; u8 unkA1; u8 pad2[3]; u8 unkA5; };
struct func_80243B4C_Struct_C { u8 pad[0xC]; s16 unkC; };
struct func_80243B4C_Struct {
    u8 pad0[0x2C];
    struct func_80243B4C_Struct_B *unk2C;
    u8 pad30[4];
    struct func_80243B4C_Struct_C *unk34;
    u8 pad38[0x3E - 0x38];
    u16 unk3E;
    u8 pad40[2];
    u8 unk42;
    u8 pad43;
    s32 unk44;
};

void func_80243B4C(struct func_80243B4C_Struct *arg0, s32 arg1) {
    struct func_80243B4C_Struct_B *b = arg0->unk2C;
    struct func_80243B4C_Struct_C *c = arg0->unk34;
    u8 *p = &arg0->unk42;
    s32 s = arg0->unk44;
    u16 h = arg0->unk3E;
    u8 sp2D;
    u8 sp2C;
    u8 sp2B;
    u8 sp2A;

    sp2D = b->unkA5;
    sp2C = b->unkA1;
    arg0->unk42 = arg0->unk42 + 1;
    if (arg0->unk42 >= 0x15) {
        *p = 0;
        func_80243A48((func_80243A48_Struct *)s, h, (s8 *)&sp2B, (s8 *)&sp2A);
        if (sp2C != sp2B) {
            c->unkC = 0x100;
            return;
        }
        if (sp2D != sp2A) {
            *p = 0xA;
            if (sp2D < sp2A) {
                c->unkC = 0x400;
                return;
            }
            c->unkC = 0x800;
            return;
        }
        func_800058DC((s32)arg0, (void *)func_80243DDC);
    }
}
