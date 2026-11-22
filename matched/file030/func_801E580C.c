#include "common.h"

typedef struct func_801E5470_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E5470_StructC;
typedef struct func_801E5470_StructP3 {
    u8 pad0[0x2C];
    func_801E5470_StructC *unk2C;
} func_801E5470_StructP3;
typedef struct func_801E5470_StructP2 {
    u8 pad0[0x24];
    func_801E5470_StructP3 *unk24;
} func_801E5470_StructP2;
typedef struct func_801E5470_StructP1 {
    u8 pad0[0x8];
    func_801E5470_StructP2 *unk8;
} func_801E5470_StructP1;
extern func_801E5470_StructP1 *D_801DAB14;
extern s32 D_801EB924;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CE274();
extern s32 func_801CE284(void);
typedef struct func_801E580C_Struct {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E580C_Struct;
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
s32 func_801E580C(s32 arg0, s32 arg1) {
    func_801E580C_Struct *p;
    s32 v = D_801EB924;

    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 7;
c0:
    if (func_801CE274() == 0) {
        p = (func_801E580C_Struct *)D_801DAB14->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67A, 1.20000005f, 1.0f);
        func_801CC470(0, 0x03480019, 0, 0, 2.0f);
        D_801EB924 = 1;
    }
    goto end;
c1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x04100026, 0, 0, 15.0f);
        D_801EB924 = 2;
    }
    goto end;
c2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100026, 0, 0, 3.0f);
        D_801EB924 = 3;
    }
    goto end;
c3:
    if (func_801CE284() != 0) {
        return 8;
    }
end:
    return 7;
}
