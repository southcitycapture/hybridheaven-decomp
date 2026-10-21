#include "context.h"
extern s32 D_8023C2BC[];
extern void func_8013C6FC(s32, s32, s32);
extern void func_80222C30();

typedef struct {
    u8 pad0[0x30];
    u8 a : 1;
    u8 b : 2;
    u8 pad30 : 4;
    u8 c : 1;
    u8 b31;
    u8 d : 3;
    u8 pad32 : 5;
} func_80222B08_Struct;

void func_80222B08(struct func_8021F9C8_Actor *arg0, s32 arg1) {
    s32 sp3C;
    func_80222B08_Struct *p;
    struct func_8021E52C_Struct sp2C;

    sp3C = arg0->unk5C;
    if ((s32)arg0 == ((struct func_8021F9C8_Dev *)&D_801BBBF0)->unkDC) {
        p = (func_80222B08_Struct *)&D_801BC03C;
    } else {
        p = (func_80222B08_Struct *)&D_801BC3D8;
    }
    sp2C = *(struct func_8021E52C_Struct *)D_8023C2BC;
    if (((struct func_8021F9C8_Dev *)&D_801BBBF0)->unk1031 != 0xF) {
        p->d = 0;
        p->b = 1;
        p->c = 1;
        p->a = 1;
        func_802237B0((s32)arg0, 1);
        func_800113D0(arg1, sp3C + 0x22);
        func_8013C6FC((s32)arg0, arg1, 0);
        if (func_80011140(arg1, sp3C, sp2C, 3) != 0) {
            func_800058DC((s32)arg0, func_80222C30);
        }
    }
}
