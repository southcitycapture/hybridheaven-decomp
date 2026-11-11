#include "common.h"
extern s32 func_800058DC(s32, void *);
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
void func_80243B4C(struct func_80243B4C_Struct *arg0, s32 arg1);

#undef func_80243920
#undef func_80243C3C
extern void func_80243C3C();

struct func_80243920_StructB {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_80243920_StructC {
    u8 pad[0xC];
    s16 unkC;
};

struct func_80243920_Struct {
    u8 pad0[0x2C];
    struct func_80243920_StructB *unk2C;
    u8 pad30[4];
    struct func_80243920_StructC *unk34;
    u8 pad38[4];
    u16 unk3C;
    u8 pad3E[4];
    u8 unk42;
    u8 pad43;
    u8 *unk44;
};

extern u8 D_8038CD70[];
extern u8 D_8038CE18[];
extern u8 D_8038CEC0[];

void func_80243920(arg0, arg1)
struct func_80243920_Struct *arg0;
u8 arg1;
{
    struct func_80243920_StructB *temp_v0;
    struct func_80243920_StructC *temp_a2;
    u16 temp_v1;
    u8 temp_a3;

    temp_v0 = arg0->unk2C;
    temp_a2 = arg0->unk34;
    temp_a3 = temp_v0->unkA5;
    temp_v1 = arg0->unk3C;
    arg0->unk42 = arg0->unk42 + 1;
    if (arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        switch (temp_v1) {
        case 2:
        case 8:
            arg0->unk44 = D_8038CEC0;
            arg1 = 0;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            arg0->unk44 = D_8038CEC0;
            arg1 = 1;
            break;
        case 9:
        case 10:
            arg0->unk44 = D_8038CD70;
            arg1 = 2;
            break;
        case 1:
            arg0->unk44 = D_8038CE18;
            arg1 = 1;
            break;
        default:
        case 0:
        case 3:
            arg0->unk44 = D_8038CD70;
            arg1 = 0;
            break;
        }
        if (temp_a3 == arg1) {
            temp_a2->unkC = 0x100;
            if (arg1 == 2) {
                func_800058DC((s32)arg0, (void *)func_80243C3C);
                return;
            }
            func_800058DC((s32)arg0, (void *)func_80243B4C);
            return;
        }
        if (temp_a3 < arg1) {
            temp_a2->unkC = 0x400;
            return;
        }
        temp_a2->unkC = 0x800;
    }
}
