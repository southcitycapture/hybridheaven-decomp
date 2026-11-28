#include "common.h"
struct func_8037B5A0_Struct1 {
    u8 pad[0x44];
    s32 unk44;
};
struct func_8037B5A0_Struct0 {
    u16 *unk0;
    struct func_8037B5A0_Struct1 *unk4;
};
extern struct func_8037B5A0_Struct0 *D_80172574;
struct func_8037B5A0_Struct2 {
    u8 pad[0xC];
    void *unkC;
};
extern struct func_8037B5A0_Struct2 D_80181A84;
extern u8 D_801BCC20;
void func_80146088(void *a0, void *a1, s32 a2);
struct func_8037AD08_Struct2 {
    u8 pad[0xC];
    void *unkC;
};


struct func_8037BBCC_Struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u16 unk10;
    u16 unk12;
    u8 pad14[4];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 pad34[8];
};

s32 func_8037BBCC(arg0, arg1, arg2, arg3, arg4, arg5)
    void *arg0;
    s16 arg1;
    s16 arg2;
    u16 arg3;
    u8 arg4;
    s8 *arg5;
{
    struct func_8037BBCC_Struct s;
    s32 idx;
    struct func_8037B5A0_Struct0 **tex = &D_80172574;

    if (arg4 == 6) {
        idx = 9;
    } else {
        idx = (u16)(arg4 + 10);
    }
    s.unk0 = arg1;
    s.unk30 = s.unk4 = 0x40;
    if (arg4 == 6) {
        s.unk2 = arg2;
        s.unk32 = s.unk6 = 0x18;
    } else {
        s.unk2 = arg2 + 6;
        s.unk32 = s.unk6 = 0x10;
    }
    if (arg4 < 6) {
        s.unk8 = 0xFF;
        s.unk9 = 0xFF;
        s.unkA = 0xFF;
        s.unkB = 0xFF;
    } else if (D_801BCC20 == 0) {
        s.unk8 = 0xFF;
        s.unk9 = 0x80;
        s.unkA = 0;
        s.unkB = 0xFF;
    } else {
        s.unk8 = 0;
        s.unk9 = 0xA0;
        s.unkA = 0xFF;
        s.unkB = 0xFF;
    }
    s.unkC = 0;
    s.unkD = 0;
    s.unkE = 0;
    s.unkF = 0xFF;
    s.unk10 = (arg3 & 0xFFFF) | 0x46;
    s.unk12 = 0;
    s.unk18 = *(*tex)->unk0;
    s.unk1C = ((s32 *)(*tex)->unk4)[idx];
    s.unk28 = 0x40;
    if (arg4 == 6) {
        s.unk2A = 0x18;
    } else {
        s.unk2A = 0x10;
    }
    s.unk2C = 0;
    s.unk2E = 0;
    ((struct func_8037AD08_Struct2 *)&D_80181A84)->unkC = &s.unk0;
    func_80146088(arg0, &D_80181A84, (s32)arg5);
}
