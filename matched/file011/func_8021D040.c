#include "common.h"
extern s16 D_80089356;
typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;
extern func_8021B150_Struct D_8017DD7C;
extern u8 D_801BC3D8[];
extern s8 D_801BCC21;
extern void func_800023EC();
extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *obj, void *fn);
extern void func_80020744(s32);


typedef struct func_8021D040_Struct {
    u8 pad[0xA4];
    s16 unkA4;
    u8 pad2[2];
    u8 unkA8;
    u8 pad3[5];
    u8 unkAE;
    u8 pad4;
    s16 unkB0;
    u8 unkB2;
} func_8021D040_Struct;
typedef struct func_8021D040_StructGlobal {
    u8 unk0;
    u8 unk1;
    u8 pad[12];
    s8 unkE;
    s8 unkF;
} func_8021D040_StructGlobal;
extern u16 D_801BCAE0;
extern u16 B_801BCAE0;
extern void func_8021D1A8();
extern u8 D_80389740[];
extern u8 D_80389BA0[];
#define STATE ((func_8021D040_StructGlobal *)&D_8017DD7C)

void func_8021D040(func_8021D040_Struct *arg0, s32 arg1) {
    s32 temp;
    func_8021D040_Struct *obj;

    D_801BCAE0 = B_801BCAE0 | 0x10;
    if (arg0->unkAE != 0) {
        if (arg0->unkB2 == 0) {
            obj = (func_8021D040_Struct *)func_80005670(arg0, D_80389740);
            if (*(s16 *)(D_801BC3D8 + 2) <= 0) {
                obj->unkA8 = 0;
                STATE->unk0++;
                if (STATE->unk0 >= 100) {
                    STATE->unk0 = 99;
                }
            } else {
                obj->unkA8 = 1;
                STATE->unk1++;
                if (STATE->unk1 >= 100) {
                    STATE->unk1 = 99;
                }
            }
            func_80005670(arg0, D_80389BA0);
            arg0->unkA4 = 0;
            arg0->unkB2++;
        }
        if (arg0->unkA4 & 0x80) {
            arg0->unkB0 = 0;
            D_80089356 = 0;
            func_800023EC();
            func_80020744(7);
            temp = arg0->unkA4 & 0x7F;
            if (temp != 0) {
                if (temp == 1) {
                    STATE->unkF = 0;
                    STATE->unkE = STATE->unkF;
                } else {
                    STATE->unk0 = STATE->unk1 = 0;
                }
            }
            D_801BCC21 = 14;
            func_800058DC(arg0, func_8021D1A8);
        }
    }
}
