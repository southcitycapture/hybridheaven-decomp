#include "context.h"
void func_8024133C(u64 arg0);

typedef struct func_802411D0_StructArgs {
    s32 a, b, c, d, e;
} func_802411D0_StructArgs;
typedef struct func_802411D0_StructObj {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad1[0x72 - 0x36];
    u16 unk72;
    u8 pad2[0x90 - 0x74];
    u16 unk90;
} func_802411D0_StructObj;
typedef struct func_802411D0_StructGlobal {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0x104 - 0x48];
    u16 unk104;
    u8 pad2[0x1088 - 0x106];
    func_802411D0_StructObj *unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
    u8 pad4[0x10B8 - 0x10A4];
    func_802411D0_StructObj *unk10B8;
    u8 pad5[0x10D0 - 0x10BC];
    func_802411D0_StructObj *unk10D0;
    u8 pad6[0x1100 - 0x10D4];
    func_802411D0_StructObj *unk1100;
} func_802411D0_StructGlobal;
extern func_802411D0_StructObj *func_8012C4D0(void *, func_802411D0_StructArgs, s32);
extern func_802411D0_StructObj *func_80005670(s32, void *);
extern u8 D_8024823C[];
extern func_802411D0_StructArgs D_8024F230;
extern func_802411D0_StructArgs D_8024F244;
extern u8 D_8024F258[];

void func_802411D0(func_802411D0_StructObj *arg0, s32 arg1) {
    func_802411D0_StructObj *temp;
    #define G ((func_802411D0_StructGlobal *)&D_801BBBF0)
    func_8001F74C();
    func_80203830((s32)arg0, D_8024823C);
    G->unk1088 = arg0;
    G->unk10A0 = G->unk40;
    temp = func_8012C4D0(arg0, D_8024F230, 3);
    G->unk10B8 = temp;
    G->unk10B8->unk35 = G->unk104;
    G->unk104++;
    temp = func_8012C4D0(arg0, D_8024F244, 3);
    G->unk10D0 = temp;
    G->unk10D0->unk90 = arg0->unk72;
    G->unk10D0->unk35 = G->unk104;
    G->unk104++;
    temp = func_80005670(G->unk44, D_8024F258);
    G->unk1100 = temp;
    G->unk1100->unk90 = arg0->unk72;
    G->unk1100->unk35 = G->unk104;
    G->unk104++;
    func_800058DC(arg0, func_8024133C);
}
