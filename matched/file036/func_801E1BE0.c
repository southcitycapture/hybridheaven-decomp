#include "context.h"
typedef struct func_801E2E4C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2E4C_Struct;
extern func_801E2E4C_Struct D_801E5200;
extern void func_801BF628(s32 arg0, s32 *arg1);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);
extern void func_8038BE98(f32);
extern void func_801C7A74(void *arg0);
extern void func_8038BED4(void);
typedef struct func_801E1BE0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
} func_801E1BE0_Struct;
extern void func_801C7944(void);
extern void func_801C7964(f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E4F40;
extern f32 D_801E4F44;
extern f32 D_801E4F48;
extern f32 D_801E4F4C;
extern f32 D_801E4F50;
extern f32 D_801E4F54;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    s32 sp28[0x1F8 / 4];

    func_801BF628(3, sp28);
    if (sp28[3] < 2) {
        return 0;
    }
    func_801C7944();
    func_801C7964(10.0f, 50.0f, 80.0f, 70.0f, 1.0f, D_801E4F40, D_801E4F44, D_801E4F48);
    ((func_801E1BE0_Struct *)&D_801E5200)->unk0 = 10.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk4 = 50.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk8 = 80.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unkC = 1.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk10 = D_801E4F4C;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk14 = D_801E4F50;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk18 = D_801E4F54;
    func_801C7A74(&D_801E5200);
    if (func_801C0B8C(0) != 0) {
        func_8038BE98(20.0f);
        func_8038BED4();
        return 1;
    }
    return 0;
}
