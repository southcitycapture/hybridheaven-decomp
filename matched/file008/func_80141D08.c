#include "context.h"

extern void func_80144E68(u8 **);
extern void func_8014B8DC(void);
extern u8 *func_8014C294(void);
extern s32 func_8014C2A0(void);
extern u8 D_8008DC18[];

typedef struct func_80141D08_Struct {
    u8 pad0[2];
    s16 unk2;
    s16 unk4;
    u16 unk6;
    s16 unk8;
    s16 unkA;
    u8 padC[2];
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s8 unk16;
    u8 unk17;
    s8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
    u8 unk1D;
    u8 pad1E[0x16E];
    u16 unk18C;
    u8 pad18E[0x20F];
    u8 unk39D;
} func_80141D08_Struct;

s32 func_80141D08(s32 arg0) {
    u8 *sp2C;
    u8 sp2B;
    s32 count;
    s32 i;
    u8 *q;
    u8 *p;

    i = 0;
    count = 0;
    q = (u8 *)arg0;
    do {
        i++;
        count += *q;
        count &= 0xFFFF;
        q++;
    } while (i < 0xCFF);
    if ((count & 0xFF) != *q) {
        sp2B = 0xE;
    } else {
        sp2B = 0;
        sp2C = (u8 *)arg0;
        func_80144E68(&sp2C);
        sp2C = D_8008DC18 + 8;
        count = 0x64;
        i = 0;
        p = (u8 *)arg0 + 0x300;
        do {
            sp2C[i++] = *p++;
        } while (i < count);
        func_8014B8DC();
        sp2C = func_8014C294();
        count = func_8014C2A0();
        i = 0;
        if (count > 0) {
            do {
                sp2C[i++] = *p++;
            } while (i < count);
        }
#define STATE ((func_80141D08_Struct *)&D_801BBBF0)
        STATE->unk2 = (p[0] << 8) + p[1];
        STATE->unk4 = (p[2] << 8) + p[3];
        p += 0x1C;
        STATE->unk6 = (p[-0x18] << 8) + p[-0x17];
        STATE->unkE = (p[-0x16] << 8) + p[-0x15];
        STATE->unk10 = (p[-0x14] << 8) + p[-0x13];
        STATE->unk12 = (p[-0x12] << 8) + p[-0x11];
        STATE->unk14 = (p[-0x10] << 8) + p[-0xF];
        STATE->unk16 = (p[-0xE] << 8) + p[-0xD];
        STATE->unk18 = (p[-0xC] << 8) + p[-0xB];
        STATE->unk8 = (p[-10] << 8) + p[-9];
        STATE->unk19 = p[-8];
        STATE->unk17 = p[-7];
        STATE->unk39D = p[-6];
        STATE->unkA = (p[-5] << 8) + p[-4];
        STATE->unk1A = p[-3];
        STATE->unk1B = p[-2];
        STATE->unk1C = p[-1];
        STATE->unk1D = p[0];
        STATE->unk18C = STATE->unk6;
    }
    return sp2B;
}
