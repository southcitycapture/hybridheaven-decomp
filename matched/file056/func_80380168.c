#include "context.h"

extern s32 D_8038A9AC;
extern s8 func_8037ED08(void *);
extern void func_803803E4();

void func_80380168(s32 arg0, s32 *arg1) {
    s16 sp46;
    u8 sp45;
    struct func_8037EABC_Struct *temp_t6;
    extern u8 func_80006214();

    sp45 = func_80006214();
    func_80146208(arg0, &sp46, 0x66, 0x20, 0x3C, 0x100, 8, 0, 0, 0xFF, 0x21E, 6);
    func_80145348(arg0, 1, 0);
    func_80146208(arg0, &sp46, 0x76, 0x20, 0x44, 0x100, 0x88, 0, 0, 0xFF, 0x21E, 7);
    func_80145348(arg0, 1, 0);
    func_80146208(arg0, &sp46, 0x66, 0x20, 0xCC, 0x100, 8, 0, 0, 0xFF, 0x21E, 8);
    func_80145348(arg0, 1, 0);
    D_8038A9AC = arg1[sp45];
    sp45 = func_80006214(arg0);
    func_80146208(arg0, &sp46, 0x66, 0x29, 0x4A, 8, 8, 0, 0, 0xFF, 0x209, 5);
    func_80145348(arg0, 0, 1);
    func_80146208(arg0, &sp46, 0xE6, 0x29, 0xBE, 8, 8, 0, 8, 0xFF, 0x209, 5);
    func_80145348(arg0, 0, 1);
    D_8038A9C0 = (struct func_8037EABC_Struct *) arg1[sp45];
    D_8038A9C0->unk10->unk22 = 0;
    D_8038A9C0->unk22 = D_8038A9C0->unk10->unk22;
    ((struct func_8037EABC_Struct *) arg0)->unk95 = func_8037ED08((void *) arg0);
    func_800058DC((void *) arg0, func_803803E4);
}
