#include "context.h"

struct func_8037AD08_Struct {
    u8 pad0[8];
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
    s16 unk10;
    u8 pad12[6];
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
struct func_8037AD08_Struct0 {
    u16 *unk0;
    s32 *unk4;
};
struct func_8037AD08_Struct2 {
    u8 pad[0xC];
    void *unkC;
};
void func_80146088(void *a0, void *a1, s32 a2);
extern struct func_8037B5A0_Struct0 *D_80172574;
extern struct func_8037B5A0_Struct2 D_80181A84;

void func_8037AD08(arg0, arg1, arg2, arg3, arg4)
    void *arg0; s16 arg1; s16 arg2; s32 arg3; s8 *arg4;
{
    struct func_8037AD08_Struct s;

    s.unk0 = arg1;
    s.unk2 = arg2;
    *(s32 *)((u8 *)&s + 0x50) = arg3;
    s.unk30 = s.unk4 = s.unk28 = 8;
    s.unk32 = s.unk6 = s.unk2A = 8;
    s.unk9 = s.unk8 = 0xFF;
    s.unkA = 0;
    s.unkB = 0xFF;
    s.unkC = s.unkD = s.unkE = 0;
    s.unkF = 0xFF;
    s.unk10 = 0x66;
    s.unk18 = *((struct func_8037AD08_Struct0 *)D_80172574)->unk0;
    arg3 &= 0xFF;
    s.unk1C = ((struct func_8037AD08_Struct0 *)D_80172574)->unk4[(u16)(arg3 + 0x12)];
    s.unk2E = s.unk2C = 0;
    ((struct func_8037AD08_Struct2 *)&D_80181A84)->unkC = &s.unk0;
    func_80146088(arg0, &D_80181A84, (s32)arg4);
}
