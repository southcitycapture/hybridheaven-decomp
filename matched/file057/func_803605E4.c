#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_80363340_StructFlags {
    u8 pad0[2];
    u16 unk2;
} func_80363340_StructFlags;
typedef struct func_80363340_StructValue {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_80363340_StructValue;
typedef struct func_80363340_StructSub {
    u8 pad0[0x1C];
    func_80363340_StructValue unk1C;
    u8 pad28[0x7C - 0x28];
    s32 unk7C;
    u16 unk80;
    u8 pad82[2];
    u8 unk84;
} func_80363340_StructSub;
typedef struct func_80363340_StructActor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80363340_StructSub *unk5C;
    u8 pad60[8];
    func_80363340_StructFlags *unk68;
} func_80363340_StructActor;
typedef struct func_80363340_StructEffect {
    u8 pad0[0x5C];
    u16 unk5C;
} func_80363340_StructEffect;
typedef struct func_80363340_StructGlobals {
    u8 pad0[0x1B];
    u8 unk1B;
    u8 pad1C[0xDC - 0x1C];
    func_80363340_StructActor *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80363340_StructActor *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
    u8 pad1031[0x1118 - 0x1031];
    func_80363340_StructEffect *unk1118;
} func_80363340_StructGlobals;
#define G ((func_80363340_StructGlobals *)D_801BBBF0)
typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;
typedef struct func_8036104C_Data {
    u8 pad0[0x12];
    u16 unk12;
} func_8036104C_Data;
typedef struct func_8036104C_State {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30 : 9;
    u32 f : 2;
    u32 pad31 : 21;
    u8 pad34[0x2D4 - 0x34];
    func_8036104C_Data *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
    u8 pad2DD;
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x2F9 - 0x2F0];
    u8 unk2F9;
    u8 pad2FA[0x314 - 0x2FA];
    func_80360588_Struct unk314;
    u8 pad320[0x392 - 0x320];
    u8 unk392;
} func_8036104C_State;


#undef b
#undef G

/* arg1 is the state struct (context.h's func_8036104C_State: bitfield f = bits 21-22 of word 0x30,
   byte unk2D9).  arg0 is a table of node pointers; arg2 is used directly (no local copy). */

typedef struct func_803605E4_Flags {
    u8 pad0[0x6C];
    u16 flags;
} func_803605E4_Flags;

typedef struct func_803605E4_Mid {
    u8 pad0[0x2C];
    func_803605E4_Flags *flags;
} func_803605E4_Mid;

typedef struct func_803605E4_Node {
    u8 pad0[4];
    func_803605E4_Mid *p4;
    func_803605E4_Mid *p8;
    func_803605E4_Mid *pC;
    u8 pad10[0x18 - 0x10];
    func_803605E4_Mid *p18;
    func_803605E4_Mid *p1C;
    func_803605E4_Mid *p20;
    func_803605E4_Mid *p24;
    func_803605E4_Mid *p28;
    func_803605E4_Mid *p2C;
    func_803605E4_Mid *p30;
    u8 pad34[0x38 - 0x34];
    func_803605E4_Mid *p38;
    func_803605E4_Mid *p3C;
    u8 pad40[0x44 - 0x40];
    func_803605E4_Mid *p44;
    func_803605E4_Mid *p48;
    u8 pad4C[0x58 - 0x4C];
    func_803605E4_Mid *p58;
    func_803605E4_Mid *p5C;
    func_803605E4_Mid *p60;
} func_803605E4_Node;

#define ND ((func_803605E4_Node *) arg0)
#define ST ((func_8036104C_State *) arg1)

void func_803605E4(s32 arg0, void *arg1, u8 arg2)
{
    u8 v;

    if (ST->f == 3 && arg2 < 4) {
        arg2 ^= 1;
    }
    switch (arg2) {
    case 0:
        ND->p20->flags->flags = (u16) (ND->p20->flags->flags | 0x200);
        ND->p24->flags->flags = (u16) (ND->p24->flags->flags | 0x200);
        v = ST->unk2D9;
        if (v != 6 && v != 7) {
            return;
        }
        ND->p1C->flags->flags = (u16) (ND->p1C->flags->flags | 0x200);
        return;
    case 1:
        ND->p2C->flags->flags = (u16) (ND->p2C->flags->flags | 0x200);
        ND->p30->flags->flags = (u16) (ND->p30->flags->flags | 0x200);
        v = ST->unk2D9;
        if (v == 6 || v == 7) {
            ND->p28->flags->flags = (u16) (ND->p28->flags->flags | 0x200);
        }
        return;
    case 6:
        ND->p44->flags->flags = (u16) (ND->p44->flags->flags | 0x200);
        ND->p48->flags->flags = (u16) (ND->p48->flags->flags | 0x200);
        /* fallthrough */
    case 2:
        ND->p38->flags->flags = (u16) (ND->p38->flags->flags | 0x200);
        ND->p3C->flags->flags = (u16) (ND->p3C->flags->flags | 0x200);
        return;
    case 3:
        ND->p44->flags->flags = (u16) (ND->p44->flags->flags | 0x200);
        ND->p48->flags->flags = (u16) (ND->p48->flags->flags | 0x200);
        return;
    case 5:
        ND->p4->flags->flags = (u16) (ND->p4->flags->flags | 0x200);
        ND->p8->flags->flags = (u16) (ND->p8->flags->flags | 0x200);
        ND->pC->flags->flags = (u16) (ND->pC->flags->flags | 0x200);
        return;
    case 4:
        ND->p58->flags->flags = (u16) (ND->p58->flags->flags | 0x200);
        ND->p5C->flags->flags = (u16) (ND->p5C->flags->flags | 0x200);
        ND->p60->flags->flags = (u16) (ND->p60->flags->flags | 0x200);
        return;
    case 7:
        ND->p18->flags->flags = (u16) (ND->p18->flags->flags | 0x200);
        return;
    default:
        ND->p18->flags->flags = (u16) (ND->p18->flags->flags | 0x200);
        break;
    }
}
