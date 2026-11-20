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
extern void func_801CF450(s32 arg0);
typedef struct func_801E65C4_S4 { u8 pad[0x12]; s16 unk12; } func_801E65C4_S4;
typedef struct func_801E65C4_S3 { u8 pad[0x2C]; func_801E65C4_S4 *unk2C; } func_801E65C4_S3;
typedef struct func_801E65C4_S2 { u8 pad[0x24]; func_801E65C4_S3 *unk24; } func_801E65C4_S2;
typedef struct func_801E65C4_S1 { u8 pad[8]; func_801E65C4_S2 *unk8; } func_801E65C4_S1;
typedef struct func_801E65C4_S0 { u8 pad[8]; func_801E65C4_S1 *unk8; } func_801E65C4_S0;

extern s32 func_801C0DE4(s32, s32, s32);
s32 func_801E6078(s32 arg0, s32 arg1) {
    u64 t;
    f32 f;

    if (D_801E8DF8 == 0) goto c0;
    if (D_801E8DF8 == 1) goto c1;
    if (D_801E8DF8 == 2) goto c2;
    return 0x17;
c0:
    D_801E8DF8 = 1;
    func_801C0D04(4, 1);
    return 0x17;
c1:
    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        func_801CF450(0);
        D_801E8DF8 = 2;
        return 0x17;
    }
    t = func_801C0F18(4, 1);
    f = (func_80034C24(t) / 1000000.0) / 2;
    ((func_801E65C4_S0 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 =
        (s16)(s32)((((-90.0f * f) + 406.6f) * 2048.0f) / 90.0f);
    goto done;
c2:
    if (D_801CF3CC() != 0) {
        return 0x18;
    }
done:
    return 0x17;
}
