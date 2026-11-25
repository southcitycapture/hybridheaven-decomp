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
void func_80146088(void *a0, void *a1, s32 a2);
struct func_8037AD08_Struct0 {
    u16 *unk0;
    s32 *unk4;
};


struct func_8037D218_Struct {
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    u8 c0[4];
    u8 c1[4];
    s16 a;
    s16 b;
    u8 pad2[4];
    u16 f34;
    u8 pad36[2];
    s32 f38;
    u8 pad3C[8];
    s16 s44;
    s16 s46;
    s16 s48;
    s16 s4A;
    s16 s4C;
    s16 s4E;
    u8 pad50[8];
};

void func_8037D218(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 *arg4) {
    struct func_8037D218_Struct s;
    struct func_8037B5A0_Struct0 **tex;

    tex = &D_80172574;
    s.x = arg1;
    s.y = arg2;
    s.w = 0x100;
    s.h = 0x10;
    s.s4C = s.s44 = 0x80;
    s.s4E = s.s46 = 0x10;
    if (arg3 == 0) {
        s.c0[0] = 0;
        s.c0[1] = 0xA0;
        s.c0[2] = 0;
        s.c0[3] = 0xFF;
    } else {
        s.c0[0] = 0xA0;
        s.c0[1] = 0;
        s.c0[2] = 0;
        s.c0[3] = 0xFF;
    }
    s.c1[0] = 0;
    s.c1[1] = 0;
    s.c1[2] = 0;
    s.c1[3] = 0xFF;
    s.a = 0xE6;
    s.b = 0;
    s.f34 = *D_80172574->unk0;
    s.f38 = ((struct func_8037AD08_Struct0 *)*tex)->unk4[6];
    s.s4A = s.s48 = 0;
    D_80181A84.unkC = &s;
    func_80146088(arg0, &D_80181A84, (s32)arg4);
}
