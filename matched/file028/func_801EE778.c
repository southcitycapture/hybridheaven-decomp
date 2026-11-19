#include "common.h"
typedef struct func_801E3D90_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E3D90_StructE;
typedef struct func_801E3D90_StructD {
    u8 pad0[0x2C];
    func_801E3D90_StructE *unk2C;
} func_801E3D90_StructD;
typedef struct func_801E3D90_StructC {
    u8 pad0[0x24];
    func_801E3D90_StructD *unk24;
} func_801E3D90_StructC;
typedef struct func_801E3D90_StructB {
    u8 pad0[8];
    func_801E3D90_StructC *unk8;
} func_801E3D90_StructB;
typedef struct func_801E3D90_StructA {
    u8 pad0[8];
    func_801E3D90_StructB *unk8;
} func_801E3D90_StructA;
extern struct func_801E3D90_StructA *D_801DAB14;
extern s32 func_801C0B8C(u64);


extern s32 D_80206474;
extern f32 D_802089E4;
extern void func_801C0D04(s32, s32);
extern s32 func_801CC470(s32, s32, s32, s32, f32);

#define FUNC_801EE778_NX(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EE778_BASE (FUNC_801EE778_NX(FUNC_801EE778_NX(FUNC_801EE778_NX(FUNC_801EE778_NX(*(u8 **)&D_801DAB14)))))
#define FUNC_801EE778_SUB (*(u8 **)((u8 *)FUNC_801EE778_BASE + 0x24))
#define FUNC_801EE778_OBJ (*(u8 **)((u8 *)FUNC_801EE778_SUB + 0x2C))

s32 func_801EE778(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        *(f32 *)((u8 *)FUNC_801EE778_OBJ + 0x4) = 0.0f;
        *(f32 *)((u8 *)FUNC_801EE778_OBJ + 0x8) = 21.0f;
        *(f32 *)((u8 *)FUNC_801EE778_OBJ + 0xC) = D_802089E4;
        *(u16 *)((u8 *)FUNC_801EE778_OBJ + 0x12) = 0x1000;
        func_801CC470(3, 0x03480011, 0, 1, 1.0f);
        func_801C0D04(4, 3);
        D_80206474 = 0;
        return 3;
    }
    return 2;
}
