#include "context.h"

typedef struct func_8024F2D4_Sub {
    u8 pad[0x12];
    s16 unk12;
} func_8024F2D4_Sub;

typedef struct func_8024F2D4_Obj {
    u8 pad[0x2C];
    func_8024F2D4_Sub *unk2C;
} func_8024F2D4_Obj;

extern s32 func_80010550(void **, s32, void **);
extern void func_800179B0(void *);
extern void func_8024F334(void);
extern u8 D_80254E1C[];

void func_8024F2D4(void *arg0, func_8024F2D4_Obj **arg1) {
    func_8024F2D4_Obj **temp_a2;
    s32 temp_a1;
    func_8024F2D4_Sub *temp_v0;

    temp_a2 = arg1;
    temp_a1 = *(s32 *) ((u8 *) arg0 + 0x5C);
    temp_v0 = (*temp_a2)->unk2C;
    temp_v0->unk12 = (s16) (temp_v0->unk12 - 0x3A);
    if (func_80010550((void **) temp_a2, temp_a1, (void **) temp_a2) != 0) {
        func_800179B0(D_80254E1C);
        func_800058DC(arg0, func_8024F334);
    }
}
