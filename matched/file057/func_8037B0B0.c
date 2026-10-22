#include "context.h"

void func_8037B0B0(void *arg0, s16 arg1, s16 arg2, s8 *arg3) {
    struct func_8037AD08_Struct s;

    s.unk0 = arg1;
    s.unk2 = arg2;
    s.unk30 = s.unk4 = s.unk28 = 0x40;
    s.unk32 = s.unk6 = s.unk2A = 0x10;
    s.unk9 = (s.unk8 = 0xFF, 0x40);
    s.unkA = 0;
    s.unkB = 0xFF;
    s.unkC = 0;
    s.unkD = 0;
    s.unkE = 0;
    s.unkF = 0xFF;
    s.unk10 = 0x66;
    s.unk18 = *((struct func_8037AD08_Struct0 *)D_80172574)->unk0;
    s.unk1C = ((struct func_8037AD08_Struct0 *)D_80172574)->unk4[0x10];
    s.unk2E = s.unk2C = 0;
    ((struct func_8037AD08_Struct2 *)&D_80181A84)->unkC = &s.unk0;
    func_80146088(arg0, &D_80181A84, (s32)arg3);
}
