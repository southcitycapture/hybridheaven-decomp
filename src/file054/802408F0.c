#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80240EBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802410C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802414E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80241FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024231C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802425EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802428BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80242D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80243018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802432D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802434E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024372C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80243A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80243CD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80244014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024421C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802445C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80244874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80244E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024506C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_8024541C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802456C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802458F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80245E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802460D0.s")


extern s32 func_80130078(void);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80020718(s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_80246160(void);
extern u16 D_80089474[];

void func_802460DC(void *arg0, s32 arg1) {
    if (func_80130078() == 0) {
        if (D_80089474[2] & 0x1000) {
            func_8001E978(arg0, 0, 0, 0, 0x18, 0, 1, 0);
            func_80020718(0xA);
            *(s16 *)((u8 *)arg0 + 0x3C) = 0;
            func_800058DC(arg0, func_80246160);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80246160.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802461AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802461B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80246360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802463F0.s")


struct func_80246598_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern s32 func_8012D918(void *, s32, s16, s32, s32);
extern s16 D_802473F0[];

void func_80246598(void *arg0, s32 arg1) {
    struct func_80246598_Struct *s;
    s32 temp_v1;

    s = arg0;
    temp_v1 = s->unk3C++;
    func_8012D918(arg0, 0x2DD, D_802473F0[temp_v1 % 8], 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_802465F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80246694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/func_80246730.s")

