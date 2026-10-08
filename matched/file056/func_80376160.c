#include "context.h"

struct func_80376160_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1C[0x4];
    void *unk20;
    u8 pad24[0x14];
    struct func_80376160_Inner *unk38;
};

struct func_80376160_Inner {
    u8 pad0[0x2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10;
};

extern void func_80126968(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80376218(void);

void func_80376160(struct func_80376160_Struct *arg0, s32 arg1) {
    struct func_80376160_Inner *temp_v1;
    u32 temp_v0;

    temp_v1 = arg0->unk38;
    temp_v0 = temp_v1->unk10 >> 0x18;
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        if ((temp_v1->unk10 >> 0x18) == 2) {
            func_8013B570(arg0, temp_v1->unk2, 2, 3, func_80376218);
            func_80126968();
            return;
        }
        func_8013B570(arg0, temp_v1->unk2, 2, 4, func_80376218);
    }
}
