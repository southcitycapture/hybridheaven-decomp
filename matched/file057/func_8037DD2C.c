#include "context.h"

struct func_8037DD2C_Struct1 { s16 unk0; s16 unk2; u8 pad[0x1E]; u8 unk22; u8 pad2[0xD]; func_8037DCEC_Inner *unk30; };
struct func_8037DD2C_Struct0 { struct func_8037DD2C_Struct1 *unk0; struct func_8037DD2C_Struct1 *unk4; };
struct func_8037DD2C_Arg { u8 pad[0x90]; u8 unk90; u8 pad91[5]; u8 unk96; u8 pad97[0xA4-0x97]; s16 unkA4; s16 unkA6; u8 padA8[8]; s16 unkB0; };
extern u8 D_8038BC34[];
extern void func_8037E1C4();
extern u8 func_8037DEE4[];
#define G ((struct func_8037DD2C_Struct0 *)&D_8008DA88)

void func_8037DD2C(struct func_8037DD2C_Arg *arg0, s32 arg1) {
    s32 v;
    func_8037DCEC((s32)arg0, (void *)G->unk0, 0xFF);
    if (arg0->unk96 == 0) {
        func_8037DCEC((s32)arg0, (void *)G->unk4, 0xFF);
    }
    if (arg0->unkB0++ > 0) {
        arg0->unkB0 = 0;
        if (arg0->unk96 == 0) {
            if (arg0->unk90 == 0) {
                func_8037DCEC((s32)arg0, (void *)G->unk0, 0);
                G->unk0->unk30->unk9 = 0xFF;
                G->unk0->unk30->unkD = 0xFF;
                func_8037DCEC((s32)arg0, (void *)G->unk4, 0);
                G->unk4->unk30->unk8 = 0xFF;
                G->unk4->unk30->unkC = 0xFF;
            } else {
                func_8037DCEC((s32)arg0, (void *)G->unk0, 0);
                G->unk0->unk30->unk8 = 0xFF;
                G->unk0->unk30->unkC = 0xFF;
                func_8037DCEC((s32)arg0, (void *)G->unk4, 0);
                G->unk4->unk30->unk9 = 0xFF;
                G->unk4->unk30->unkD = 0xFF;
            }
            arg0->unkB0 = *(u8 *)&arg0->unkA4 = 8;
            func_800058DC(arg0, (void *)func_8037E1C4);
            return;
        }
        func_8001B204(0xD, 0, 0x64, D_8038BC34);
        G->unk0->unk22 = 0;
        arg0->unkA4 = ((s16 *)G->unk4->unk30)[0];
        arg0->unkA6 = ((s16 *)G->unk4->unk30)[1];
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037DEE4);
    }
}
