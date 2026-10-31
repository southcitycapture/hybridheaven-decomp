#include "common.h"
s32 D_801CF3CC(void);
struct func_801E58F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E58F0_StructB {
    u8 pad0[0x2C];
    struct func_801E58F0_StructC *unk2C;
};
struct func_801E58F0_StructA {
    u8 pad0[8];
    struct func_801E58F0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E58F0_StructB *unk24;
};
extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 D_801E8DF8;
extern f64 func_80034C24();
void func_801C0D04(s32 arg0, s32 arg1);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CF3BC(void);
extern void func_801CF450(s32 arg0);
typedef struct func_801E65C4_S4 { u8 pad[0x12]; s16 unk12; } func_801E65C4_S4;

extern s32 func_801C0DE4();
extern f64 D_801E9690;
extern f32 D_801E9698;
extern f32 D_801E969C;

s32 func_801E5C9C(s32 arg0, s32 arg1) {
    f64 time;
    if (D_801E8DF8 == 0) goto c0;
    if (D_801E8DF8 == 1) goto c1;
    if (D_801E8DF8 == 2) goto c2;
    if (D_801E8DF8 != 3) goto end;
    goto c3;
c0:
    func_801CF450(1);
    func_801CC4D8(1, 0x0410000F, 0, 0x1000, 6.0f);
    D_801E8DF8 = 1;
    goto end;
c1:
    if (func_801CF3BC() == 0) {
        func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
        func_801C0D04(4, 1);
        D_801E8DF8 = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        D_801E8DF8 = 3;
        return 0xF;
    }
    time = (func_80034C24(func_801C0F18(4, 1)) / 1000000.0) / 2;
    ((func_801E65C4_S4 *)D_801DAB14->unk8->unk8->unk24->unk2C)->unk12 =
        (s16)((2048.0f * ((*(f32 *)((u8 *)&D_801E9690 + 8) * (f32)time) + D_801E969C)) / 90.0f);
    goto end;
c3:
    if (D_801CF3CC() != 0) {
        func_801CF450(0);
        return 0x10;
    }
end:
    return 0xF;
}
