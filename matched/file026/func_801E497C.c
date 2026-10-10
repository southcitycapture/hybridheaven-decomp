#include "context.h"

extern struct func_801EC668_StructA func_801DAAF0;
extern void func_80005670(void *a, void *b);
extern void func_801CC530(void);
extern void func_801D03E0(s32 a);
extern void func_801D03EC(s32 a);
extern void func_801D048C(s32 a);

struct func_801E497C_Struct {
    u8 pad0[0x8];
    struct func_801E497C_Struct *unk8;
};

struct func_801E497C_Root {
    u8 pad0[0x24];
    struct func_801E497C_Struct *unk24;
};

extern void func_801CEDBC(s32 a);
extern void func_801CEDC8(s32 a);
extern u8 D_801DAD14[];
extern u8 D_801DADE8[];
extern u8 D_801DB130[];

s32 func_801E497C(s32 arg0, s32 arg1) {
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24, D_801DB130);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24->unk8, D_801DAD14);
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24->unk8->unk8, D_801DADE8);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(((struct func_801E497C_Root *)&func_801DAAF0)->unk24->unk8->unk8->unk8, func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}
