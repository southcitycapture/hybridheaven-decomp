#include "common.h"
typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;
extern func_8021B150_Struct D_8017DD7C;
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_802176D0[];
extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *obj, void *fn);
extern void func_80146B04();
extern void func_8021BF74();
typedef struct func_8021CD9C_Struct {
    u8 pad[0xB0];
    s16 unkB0;
} func_8021CD9C_Struct;
void func_8021CD9C(func_8021CD9C_Struct *arg0, void *arg1);
typedef struct func_8021CDE8_Struct {
    u8 pad0[0x9B];
    u8 unk9B;
    u8 pad1[0xAE - 0x9C];
    u8 unkAE;
    u8 unkAF;
    s16 unkB0;
} func_8021CDE8_Struct;
void func_8021CDE8(func_8021CDE8_Struct *arg0, s32 arg1);
void func_8021CE7C(struct func_8021CDE8_Struct *arg0, s32 arg1);
void func_8021D034(s32 arg0, s32 arg1);
extern u8 func_8021D040[];
extern void func_8021D1A8();
void func_8021D72C(s32 arg0, s32 arg1);
void func_802322E8();
extern void func_802329F8();

extern s32 func_8037C530();
extern void func_80379904(void *, u8 *);
extern void func_800208C4(s32);
extern u8 D_8017DC40[];

typedef struct func_8021C934_StructBits {
    u32 b : 1;
    u32 rest : 31;
} func_8021C934_StructBits;

typedef struct func_8021C934_StructGlobal {
    u8 pad0[0x2C]; u16 unk2C;
    u8 pad1[0x44E - 0x2E]; s16 unk44E;
    u8 pad2[0x47C - 0x450]; func_8021C934_StructBits unk47C;
    u8 pad3[0x7EA - 0x480]; s16 unk7EA;
    u8 pad4[0x818 - 0x7EC]; func_8021C934_StructBits unk818;
    u8 pad5[0x1030 - 0x81C]; u8 unk1030; u8 unk1031; u8 unk1032;
} func_8021C934_StructGlobal;
#define GLOBAL934 ((func_8021C934_StructGlobal *)D_801BBBF0)

void func_8021C934(u8 *arg0, s32 arg1) {
    s32 count;
    u8 *a1;

    a1 = (GLOBAL934->unk1030 == 0) ? D_801BC03C : D_801BC3D8;
    GLOBAL934->unk1032 = 0;
    if (a1[0x2D8] == 0xB) {
        func_8037C530();
        func_80379904(arg0, a1);
        if ((a1[0x2D9] == 0x13) && (a1[0x2DA] != 0)) {
            func_802322E8();
            count = *(u16 *)&D_8017DC40[0x9A];
            if (count < 0xFFFF) {
                *(u16 *)&D_8017DC40[0x9A] = count + 1;
            }
            *(s16 *)&arg0[0xB0] = 5;
            GLOBAL934->unk1031 = 0xD;
            func_800058DC(arg0, func_8021CDE8);
            return;
        }
        GLOBAL934->unk1031 = 5;
        func_800058DC(arg0, func_8021BF74);
        return;
    }
    if (GLOBAL934->unk2C != 0xA && GLOBAL934->unk2C != 0xB && GLOBAL934->unk2C != 0xF) {
        if (GLOBAL934->unk7EA <= 0) {
            GLOBAL934->unk1031 = 0xA;
            *(s16 *)&arg0[0xB0] = 5;
            func_800058DC(arg0, func_8021CE7C);
            return;
        }
        if (GLOBAL934->unk44E <= 0) {
            func_80146B04();
            func_802329F8();
            GLOBAL934->unk1031 = 0xB;
            if (D_8017DD7C.unk16 == 2 && ((u8 *)&D_8017DD7C)[0x17] != 0) {
                func_800058DC(arg0, func_8021D72C);
                return;
            }
            *(s32 *)&arg0[0x9C] = func_80005670(arg0, D_802176D0);
            func_800058DC(arg0, func_8021D034);
            return;
        }
        func_800058DC(arg0, func_8021CD9C);
        GLOBAL934->unk1031 = 9;
        *(s16 *)&arg0[0xB0] = 0;
        arg0[0xAE] = 0;
        GLOBAL934->unk818.b = 0;
        GLOBAL934->unk47C.b = GLOBAL934->unk818.b;
        return;
    }
    if (GLOBAL934->unk7EA <= 0 || GLOBAL934->unk44E <= 0) {
        if (GLOBAL934->unk2C == 0xF) {
            *(s16 *)&arg0[0xA4] = 2;
            func_800058DC(arg0, func_8021D1A8);
            return;
        }
        GLOBAL934->unk1031 = 0xC;
        func_800208C4(0x6C7);
        func_800058DC(arg0, func_8021D040);
        return;
    }
    func_800058DC(arg0, func_8021CD9C);
    GLOBAL934->unk1031 = 9;
    *(s16 *)&arg0[0xB0] = 0;
    arg0[0xAE] = 0;
    GLOBAL934->unk818.b = 0;
    GLOBAL934->unk47C.b = GLOBAL934->unk818.b;
}
