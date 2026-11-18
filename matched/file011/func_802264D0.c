#include "common.h"
struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};
extern struct func_802253B8_Struct D_801BBBF0;
struct func_80224B64_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};


struct func_802264D0_StructActor {
    u8 pad[0x36];
    u16 kind;
};
union func_802264D0_StructTable { u16 values[2][2]; u32 alignment[2]; };
union func_802264D0_StructOther { u16 value; u32 alignment; };
extern union func_802264D0_StructTable D_8023C90C;
extern void func_801DFCAC(s32, u8 *, u8 *);
extern void func_80020718(u16);

void func_802264D0(s32 arg0, u16 arg1)
{
    u16 firstKind;
    union func_802264D0_StructOther other;
    union func_802264D0_StructTable table;
    u8 x;
    u8 y;

    other.value = ((struct func_802264D0_StructActor *)
        (arg0 != D_801BBBF0.unkDC ? D_801BBBF0.unkDC :
         ((struct func_80224B64_Globals *)&D_801BBBF0)->unkEC))->kind;
    firstKind = ((struct func_802264D0_StructActor *)arg0)->kind;
    table = D_8023C90C;
    if ((firstKind == 0x29 || firstKind == 0x2D || firstKind == 0x2C || firstKind == 0x2B ||
         firstKind == 0x2E || firstKind == 0x31 || firstKind == 0x32 || firstKind == 0x57 ||
         firstKind == 0x58 || firstKind == 0x59) && arg1 == 0x281) {
        func_801DFCAC(arg0, &x, &y);
        arg1 = table.values[y][x];
    }
    if (0xF6 == firstKind || 0xF4 == firstKind || 0xF5 == firstKind) {
        switch (arg1) {
        case 0x281:
            func_80020718(0x22D);
        case 0x3B3:
        case 0x3B4:
        case 0x3B5:
        case 0x3B6:
        case 0x3B7:
        case 0x3B8:
        case 0x3B9:
        case 0x3BA:
            arg1 = 0x229;
            break;
        case 0x3BD:
            arg1 = 0x230;
            break;
        case 0x27B:
            arg1 = 0x22B;
            break;
        }
    } else if (other.value == 0xF6 || other.value == 0xF4 || other.value == 0xF5) {
        switch (arg1) {
        case 0x27B:
        case 0x3B3:
        case 0x3B7:
            arg1 = 0x22B;
            break;
        case 0x3B4:
        case 0x3B8:
            arg1 = 0x22C;
            break;
        case 0x3B5:
        case 0x3B9:
            arg1 = 0x22D;
            break;
        case 0x3BB:
            arg1 = 0x22A;
            break;
        case 0x3BC:
            arg1 = 0x22F;
            break;
        case 0x3BD:
            arg1 = 0x230;
            break;
        }
    }
    func_80020718(arg1);
}
