#include "context.h"
typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;
extern func_80124C0C_Struct D_801BBBF0;

extern void func_80002364(s32, s32, s32, s32);
extern void func_80005670(s32, void *);
extern void func_800058DC(s32, void *);
extern void func_80020744(s32);
extern u8 D_80044220[];
extern u8 D_80044434[];
extern u8 D_800447F0[];
extern u8 D_80163704[];
extern void func_8038B7E0(void);

void func_80123850(s32 arg0, s32 arg1) {
    s8 var_v0;

    D_801BBBF0.unk17E = 2;
    for (var_v0 = 0; var_v0 < 0x10; var_v0++) {
        *(s32 *)((u8 *)&D_801BBBF0 + 0x258 + var_v0 * 4) = 0;
    }
    *(s16 *)((u8 *)&D_801BBBF0 + 0x6) = 0;
    *(s8 *)((u8 *)&D_801BBBF0 + 0x2AD) = 1;
    *(s8 *)((u8 *)&D_801BBBF0 + 0x2AE) = -1;
    *(s16 *)((u8 *)&D_801BBBF0 + 0x36) = 0;
    func_80005670(arg0, D_80163704);
    func_80005670(arg0, D_80044434);
    func_80005670(arg0, D_800447F0);
    func_80005670(arg0, D_80044220);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_80020744(1);
    func_800058DC(arg0, func_8038B7E0);
}
