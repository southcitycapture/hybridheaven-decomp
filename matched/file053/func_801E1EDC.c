#include "context.h"
struct func_801E1EDC_S4 { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801E1EDC_S3 { u8 pad0[0x2C]; struct func_801E1EDC_S4 *unk2C; };
struct func_801E1EDC_S2 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; u8 pad0c[0x18]; struct func_801E1EDC_S3 *unk24; };
struct func_801E1EDC_S1 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; };
struct func_801E1EDC_R { u8 pad[0x24]; s32 unk24; };
extern f32 D_801E98E0, D_801E98E4, D_801E98E8, D_801E98EC, D_801E98F0;
extern f32 D_801E98F4, D_801E98F8, D_801E98FC, D_801E9900;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
#define G ((struct func_801E1EDC_S1 *)D_801DAB14)

s32 func_801E1EDC(s32 arg0, s32 arg1) {
    if (((struct func_801E1EDC_R *)func_801BF6B0(4))->unk24 >= 0xA) {
        func_8038BE98(D_801E98E0);
        func_8038BD50(D_801E98E4, D_801E98E8, 0xC3D9B333);
        D_8038BD88(D_801E98EC, D_801E98F0, 0xC3E86666);
        G->unk8->unk24->unk2C->unk4 = D_801E98F4;
        G->unk8->unk24->unk2C->unk8 = 0.0f;
        G->unk8->unk24->unk2C->unkC = D_801E98F8;
        G->unk8->unk24->unk2C->unk12 = 0x1000;
        G->unk8->unk8->unk24->unk2C->unk4 = D_801E98FC;
        G->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        G->unk8->unk8->unk24->unk2C->unkC = D_801E9900;
        G->unk8->unk8->unk24->unk2C->unk12 = 0x1E38;
        func_801CC470(1, 0x02A80045, 0, 0, 3.0f);
        return 5;
    }
    return 4;
}
