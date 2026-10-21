#include "context.h"
struct func_80242840_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x90 - 0x30];
    s16 unk90;
};
void func_80242840(struct func_80242840_Struct *arg0, s32 arg1);

extern s32 func_8000522C(u16, s32);
extern s32 D_80006214();
extern u8 D_80164F30[];
struct func_80242780_StructA { u16 *unk0; struct func_80242780_StructB *unk4; };
struct func_80242780_StructB { u8 pad[0x24]; s32 unk24; };
struct func_80242780_StructC { u8 pad[0x18]; f32 unk18; f32 unk1C; f32 unk20; };
struct func_80242780_StructD { u8 pad[0x2C]; struct func_80242780_StructC *unk2C; };
struct func_80242780_StructE { struct func_80242780_StructD *unk0; };
struct func_80242780_Self {
    u8 pad[0x74]; s32 unk74; f32 unk78; f32 unk7C; f32 unk80;
    s16 unk84; s16 unk86; s16 unk88; u8 pad2[6]; s16 unk90;
};
extern struct func_80242780_StructA *D_80171EEC;

void func_80242780(struct func_80242780_Self *arg0, struct func_80242780_StructE *arg1) {
    struct func_80242780_StructA *p;
    func_80005F6C(arg0, D_80164F30);
    D_80006214(arg0);
    p = D_80171EEC;
    arg0->unk74 = func_8000522C(*p->unk0, p->unk4->unk24);
    arg1->unk0->unk2C->unk18 = 1.0f;
    arg1->unk0->unk2C->unk1C = 1.0f;
    arg1->unk0->unk2C->unk20 = 1.0f;
    arg0->unk84 = 0;
    arg0->unk86 = 0;
    arg0->unk88 = 0;
    arg0->unk90 = 0x64;
    arg0->unk78 = 0.0f;
    arg0->unk7C = 0.0f;
    arg0->unk80 = 0.0f;
    func_800058DC(arg0, func_80242840);
}
