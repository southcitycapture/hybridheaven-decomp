#include "common.h"
extern s32 D_801F4D08;
extern u8 *D_801DAB14;
typedef struct func_801ED14C_Struct0 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801ED14C_Struct0;
#define OBJ ((func_801ED14C_Struct0 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 8) + 8) + 0x24) + 0x2C)))
extern void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern s32 func_801D271C(s32);


s32 func_801F1370(s32 arg0, s32 arg1) {
    func_801ED14C_Struct0 *p;
    u32 n;
    f32 k;

    if (D_801F4D08 == 0) goto c0;
    if (D_801F4D08 == 1) goto c1;
    return 0x1A;
c0:
    func_801C0D04(4, 2);
    func_801D271C(1);
    D_801F4D08 = 1;
    goto end;
c1:
    if (func_801C0DE4(4, 2, 0x3FC00000) != 0) {
        func_801C0EB0(4, 2);
        func_801D271C(0);
        return 0x1B;
    }
    p = OBJ;
    k = 1.5f;
    n = k * 30.0f;
    p->unk12 += (s16)((2048.0f * (180.0f / n)) / 90.0f);
end:
    return 0x1A;
}
