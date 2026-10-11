#include "context.h"

typedef struct func_80240DB4_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_80240DB4_Struct;

extern void func_8001F74C();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80240E10(void *arg0, s32 arg1);
extern void func_8013B570(void *, u16, s32, s32, void *);

void func_80240DB4(func_80240DB4_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x32, 0, 4, func_80240E10);
}
