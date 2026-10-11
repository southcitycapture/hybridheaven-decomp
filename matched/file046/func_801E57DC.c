#include "context.h"

struct func_801E57DC_StructRet {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_80005670(s32 arg0, void *arg1);
extern void func_801CEDBC(s32 arg0);
extern void func_801CEDC8(s32 arg0);
extern void func_801D367C(s32 arg0);
extern void func_801D2094(s32 arg0);
extern void func_801D20A0(s32 arg0);
extern void func_801CC530(void);
struct func_801E5908_StructA;
extern struct func_801E5908_StructA *D_801DAB14;
extern u8 func_801DAAF0[];
extern void func_8038D28C(s32 arg0);
extern u8 func_801DAC30[];
extern u8 D_801DAD14[];
extern u8 D_801DB360[];
extern u8 D_801DB184[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];

#define N(p) (*(s32 *)((p) + 8))
#define ROOT (*(s32 *)(func_801DAAF0 + 0x24))

s32 func_801E57DC(s32 arg0, s32 arg1) {
    if (((struct func_801E57DC_StructRet *)func_801BF6B0(3))->unkC < 2) {
        return 1;
    }
    func_80005670(ROOT, func_801DAC30 + 0x2C);
    func_801CEDBC(1);
    func_801CEDC8(1);
    func_80005670(N((s32)D_801DAB14), D_801DAD14);
    func_801D367C(0);
    func_80005670(N(N(ROOT)), D_801DB360);
    func_801D2094(0);
    func_801D20A0(0);
    func_80005670(N(N(N((s32)D_801DAB14))), D_801DB184);
    func_80005670(N(N(N(N(ROOT)))), D_801DB300);
    func_80005670(N(N(N(N(N((s32)D_801DAB14))))), D_801DB320);
    func_801CC530();
    func_8038D28C(8);
    return 2;
}
