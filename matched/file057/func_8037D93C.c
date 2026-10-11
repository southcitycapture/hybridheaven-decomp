#include "context.h"

struct func_8037D93C_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x93 - 0x91];
    u8 unk93;
    u8 pad94[0x98 - 0x94];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xA0 - 0x9C];
    u16 unkA0;
    u16 unkA2;
    u8 padA4[0xA9 - 0xA4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[0xB0 - 0xAB];
    s16 unkB0;
};

struct func_8037D93C_Entry {
    s16 unk0;
    s16 unk2;
};

struct func_8037D93C_Table {
    u8 pad[0x30];
    struct func_8037D93C_Entry *unk30;
};

extern void func_8037D5B4();
extern s32 func_8037D320(void *, u8);
extern void func_8001B204();
extern s32 func_800058DC(void *, void *);
extern void func_8037DC64();
extern void func_8037DAE0();
extern u8 D_8038BC14[];
extern u8 D_8038BC1C[];
extern u8 D_801BBBF0[];

void func_8037D93C(void *arg0, s32 arg1) {
    struct func_8037D93C_Struct *obj = arg0;
    struct func_8037D93C_Entry *entry;
    s32 temp;

    func_8037D5B4(obj, obj->unk90);
    temp = func_8037D320(obj, obj->unk90);

    entry = ((struct func_8037D93C_Table *) *(u8 **) &D_8008DA88)->unk30;
    func_8001B204(obj->unkA9, (s16) (entry->unk0 + 0x468), (s16) (entry->unk2 - obj->unk9A + 3), D_8038BC14,
        (obj->unkB0 * 0xFF) / 4, obj->unk98, temp);

    temp = func_8037D320(obj, (obj->unk90 ^ 1) & 0xFF);

    entry = ((struct func_8037D93C_Table *) ((u8 **) &D_8008DA88)[1])->unk30;
    func_8001B204(obj->unkAA, (s16) (entry->unk0 + 0x468), (s16) (entry->unk2 - obj->unk9B + 3), D_8038BC1C,
        (obj->unkB0 * 0xFF) / 4, obj->unk99, temp);

    obj->unkB0 = obj->unkB0 + 1;
    if (obj->unkB0 >= 5) {
        obj->unkA0 = *(u16 *) &D_801BBBF0[0x4E6];
        obj->unkA2 = *(u16 *) &D_801BBBF0[0x882];
        if (obj->unk93 == 0xA) {
            obj->unkB0 = 0xA;
            func_800058DC(obj, func_8037DC64);
            return;
        }
        obj->unkB0 = 0x20;
        func_800058DC(obj, func_8037DAE0);
    }
}
