#include "common.h"
extern void D_800062F8(void *, s32);
extern u8 D_80164F40[];
typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;
extern func_8024C58C_StructGlobal D_801BBBF0;
extern u8 D_80258FE0[];
extern u8 *D_8025C6F0;
typedef struct func_80249A58_StructTbl {
    u8 unk0;
    u8 pad1[0x13];
} func_80249A58_StructTbl;
extern struct func_80249A58_StructTbl D_8025C728[];
extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern s32 func_80005F6C(void *, void *);
extern s32 func_80006214(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8001F74C();
extern s32 func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012CF8C(void *, s32, s32, s32);
extern void func_8013A334(f32 *, s32, s32, s32);
typedef struct func_80244AB0_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80244AB0_Node;
typedef struct func_80244AB0_Mid {
    u8 pad0[0x2C];
    func_80244AB0_Node *unk2C;
} func_80244AB0_Mid;
struct func_80248D10_Struct {
    u8 pad[0x98];
    s16 unk98;
};
void func_80248D10(struct func_80248D10_Struct *arg0);
typedef struct func_8024AF84_StructA0 {
    u8 pad0[0x44];
    f32 unk44;
    u8 pad48[0x92 - 0x48];
    s16 unk92;
    s16 unk94;
    u8 pad96[4];
    s16 unk9A;
} func_8024AF84_StructA0;
typedef struct func_8024AF84_StructIn {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024AF84_StructIn;
typedef struct func_8024AF84_StructObj {
    u8 pad0[0x30];
    func_8024AF84_StructIn *unk30;
} func_8024AF84_StructObj;
typedef struct func_8024AF84_StructA1 {
    func_8024AF84_StructObj *objs[11];
} func_8024AF84_StructA1;
void func_8024AF84(func_8024AF84_StructA0 *arg0, func_8024AF84_StructA1 *arg1);


extern f32 D_8025C63C;

typedef struct func_8024AAEC_StructArg {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[5];
    u8 unk35;
    u8 pad36[0xA];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x44];
    s16 unk90;
    s16 unk92;
    s16 unk94;
} func_8024AAEC_StructArg;

typedef struct func_8024AAEC_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[6];
    u8 unk3A;
    u8 pad3B[5];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024AAEC_StructInner;

typedef struct func_8024AAEC_StructObj {
    u8 pad0[0x30];
    func_8024AAEC_StructInner *unk30;
} func_8024AAEC_StructObj;

typedef struct func_8024AAEC_StructGlobal {
    u8 pad0[0x24];
    func_80244AB0_Mid *unk24;
    u8 pad28[0x34];
    s32 unk5C;
} func_8024AAEC_StructGlobal;

void func_8024AAEC(func_8024AAEC_StructArg *arg0, func_8024AAEC_StructObj **arg1) {
    f32 pos[4];
    s32 i;
    s16 base;
    s16 angle;
    s32 value;
    f32 scale;

    func_8001F74C();
    i = 0;
    arg0->unk35 = D_801BBBF0.unk104;
    D_801BBBF0.unk104++;
loop:
    if (func_80005F6C(arg0, D_80164F40) == 0) {
        func_80005700(arg0);
        D_8025C728[arg0->unk90].unk0 = 0;
        return;
    }
    i++;
    if (i != 11) {
        goto loop;
    }
    func_80006214(arg0);
    arg0->unk44 = 10.0f;
    base = ((func_8024AAEC_StructGlobal *)D_8025C6F0)->unk24->unk2C->unk12;
    switch (arg0->unk92) {
    case 0:
        angle = base + -256.0;
        arg0->unk40 = func_8001EAD0(angle) * 10.0;
        arg0->unk48 = func_8001EB64(angle) * 10.0;
        break;
    case 1:
        angle = base + -128.0;
        arg0->unk40 = func_8001EAD0(angle) * 10.0;
        arg0->unk48 = func_8001EB64(angle) * 10.0;
        break;
    case 2:
        angle = base + 128.0;
        arg0->unk40 = func_8001EAD0(angle) * 10.0;
        arg0->unk48 = func_8001EB64(angle) * 10.0;
        break;
    case 3:
        angle = base + 0x100;
        arg0->unk40 = func_8001EAD0(angle) * 10.0;
        arg0->unk48 = func_8001EB64(angle) * 10.0;
        break;
    }
    arg0->unk2C |= 0x60;
    if (D_8025C6F0 != NULL) {
        value = ((func_8024AAEC_StructGlobal *)D_8025C6F0)->unk5C;
        func_80006214(D_8025C6F0);
        func_8013A334(pos, (s32)arg1, value, 6);
        func_80006214(arg0);
    }
    func_8012C89C(arg0, 0, 3, 4);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30->unk40, 0x3D0, 6);
    (*arg1)->unk30->unk3A = 0;
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (s32)D_80258FE0 | 0x40000000;
    D_800062F8(*arg1, 0x80000600);
    scale = D_8025C63C;
    (*arg1)->unk30->unk18 = scale;
    (*arg1)->unk30->unk1C = scale;
    (*arg1)->unk30->unk20 = scale;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4 = pos[0];
    (*arg1)->unk30->unk8 = pos[1];
    (*arg1)->unk30->unkC = pos[2];
    D_8025C728[arg0->unk90].unk0 = 1;
    arg0->unk92 = 2;
    arg0->unk94 = 0;
    func_80248D10((struct func_80248D10_Struct *)arg0);
    func_800058DC(arg0, (void *)func_8024AF84);
}
