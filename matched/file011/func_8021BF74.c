#include "context.h"

extern void func_8022BD28();
extern void func_8022BECC();
extern void func_8022C010();
extern void func_8022D9EC();
extern void func_8022F850();
extern void func_8022F99C();
extern void func_8022FC38();
extern void func_8022FFFC();
extern void func_802300F0();
extern s32 func_80236C9C();
extern u8 D_80089474[];
extern u8 D_80389AE8[];
extern u8 func_8021C198[];

struct func_8021CC30_Struct;
void func_8021CC30(struct func_8021CC30_Struct *arg0, s32 arg1);
void func_8021D8B8(s32 arg0, s32 arg1);

typedef struct func_8021BF74_Struct {
    u8 pad[0x94];
    u8 unk94;
    u8 pad2[0xA4 - 0x95];
    s32 unkA4;
} func_8021BF74_Struct;

void func_8021BF74(u8 *arg0, s32 arg1) {
    func_8021BF74_Struct *temp_v0;

    if (D_801BBBF0[0x1031] == 0xF) {
        D_801BBBF0[0x1031] = 5;
    }
    func_8021B790();
    func_8022C010(D_801BC03C);
    func_8022C010(D_801BC3D8);
    func_8022F850(D_801BC03C);
    func_8022F850(D_801BC3D8);
    func_8022FC38(D_801BC03C);
    func_8022FC38(D_801BC3D8);
    func_8022F99C(D_801BC03C);
    func_8022F99C(D_801BC3D8);
    func_8022D9EC(D_801BC03C);
    func_8022D9EC(D_801BC3D8);
    func_8022BD28(D_801BC03C);
    func_8022BD28(D_801BC3D8);
    func_8022BECC(D_801BC03C);
    func_8022BECC(D_801BC3D8);
    func_8022FFFC(D_801BC03C);
    func_8022FFFC(D_801BC3D8);
    func_802300F0(D_801BC03C);
    func_802300F0(D_801BC3D8);
    if (*(s16 *)&D_801BBBF0[0x44E] <= 0 || *(s16 *)&D_801BBBF0[0x7EA] <= 0) {
        if (*(s16 *)&D_801BBBF0[0x44E] <= 0) {
            D_801BBBF0[0x744] = 5;
            *(u16 *)&D_801BBBF0[0x4EA] = 0xFFFF;
        } else {
            D_801BBBF0[0xAE0] = 5;
            *(u16 *)&D_801BBBF0[0x886] = 0xFFFF;
        }
        arg0[0xAE] = 1;
        D_801BBBF0[0x1031] = 8;
        func_800058DC(arg0, func_8021CC30);
        return;
    }
    if (D_801BBBF0[0x1031] == 6) {
        func_800058DC(arg0, func_8021C198);
        return;
    }
    if ((*(u16 *)&D_80089474[4] & 0x1000) && *(u16 *)&D_801BBBF0[0x2C] != 0xA && *(u16 *)&D_801BBBF0[0x2C] != 0xB && *(u16 *)&D_801BBBF0[0x2C] != 0xF && func_80236C9C() == 0) {
        temp_v0 = (func_8021BF74_Struct *)func_80005670(arg0, D_80389AE8);
        temp_v0->unkA4 = (s32)arg0;
        temp_v0->unk94 = 0;
        D_801BBBF0[0x1031] = 0xF;
        func_800058DC(arg0, func_8021D8B8);
    }
}
