#include "context.h"

extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern void func_801CC530(void);
extern u8 D_801DAD14[];
extern u8 D_801DB64C[];
extern u8 func_801DAC30[];

struct func_801E4794_Struct1 {
    u8 pad0[0x8];
    void *unk8;
};

struct func_801E4794_Struct0 {
    u8 pad0[0x24];
    struct func_801E4794_Struct1 *unk24;
};

extern struct func_801E4794_Struct0 func_801DAAF0;

s32 func_801E4794(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DAD14);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(((struct func_801E4794_Struct1 *)func_801DAAF0.unk24->unk8)->unk8, D_801DB64C);
    func_801CC530();
    return 2;
}
