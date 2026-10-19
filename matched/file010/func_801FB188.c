#include "context.h"

struct func_801FB2FC_Obj;
extern void func_80005700(s32);
extern void func_80145310(s32, s32, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern s32 func_800058DC(s32, void *);
void func_801FB2FC(s32 arg0, struct func_801FB2FC_Obj **arg1);

struct func_801FB188_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801FB188_StructB { u8 pad0[0x24]; struct func_801FB188_StructB *unk24; u8 pad28[4]; struct func_801FB188_StructC *unk2C; };
struct func_801FB188_StructG { u8 pad0[0xEC]; struct func_801FB188_StructB *unkEC; };
struct func_801FB188_StructS { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u16 pad10; u8 pad12[6]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30; };
struct func_801FB188_StructO { u8 pad0[0x30]; struct func_801FB188_StructS *unk30; };
extern s32 D_801BBCDC;
extern u8 D_80216F30[];
extern f32 D_80218E40;
extern f64 D_80218E48;
extern void func_8012C89C(s32, s32, s32, s32);

void func_801FB188(s32 arg0, struct func_801FB188_StructO **arg1) {
    f32 k;
    func_8001F74C((void *)arg0);
    if (D_801BBCDC != 0) {
        func_80005E44((void *)arg0, &D_80164F40);
        func_80006214((void *)arg0);
        func_8012C89C(arg0, 0, 0x225, 2);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32)D_80216F30 | 0x40000000;
        func_80145310((s32)*arg1, 1, 0xD);
        k = D_80218E40;
        (*arg1)->unk30->unk4 = ((struct func_801FB188_StructG *)D_801BBBF0)->unkEC->unk24->unk2C->unk4;
        (*arg1)->unk30->unk8 = ((struct func_801FB188_StructG *)D_801BBBF0)->unkEC->unk24->unk2C->unk8 + D_80218E48;
        (*arg1)->unk30->unkC = ((struct func_801FB188_StructG *)D_801BBBF0)->unkEC->unk24->unk2C->unkC;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = k;
        (*arg1)->unk30->unk20 = k;
        *(s16 *)((u8 *)(*arg1)->unk30 + 0x10) = -0x800;
    } else {
        func_80005700(arg0);
    }
    func_800058DC(arg0, (void *)func_801FB2FC);
}
