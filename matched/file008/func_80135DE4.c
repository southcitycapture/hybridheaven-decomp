#include "common.h"

typedef struct func_80135DE4_StructInner {
    u8 pad0[0x14];
    u32 unk14;
} func_80135DE4_StructInner;

typedef struct func_80135DE4_Struct {
    u8 pad0[0x38];
    func_80135DE4_StructInner *unk38;
    u8 pad1[0x54];
    u16 unk90;
} func_80135DE4_Struct;

s32 func_8012A630(func_80135DE4_Struct *arg0, f32 arg1);
void func_80133980(u32 arg0);
void func_800058DC(void *arg0, void *arg1);
extern void func_80135E54(void);

void func_80135DE4(func_80135DE4_Struct *arg0, s32 arg1) {
    if (func_8012A630(arg0, (f32) (arg0->unk90 * 0xA)) != 0) {
        func_80133980(arg0->unk38->unk14 >> 0x10);
        func_800058DC(arg0, func_80135E54);
    }
}
