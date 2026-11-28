#include "common.h"
typedef struct func_80242F60_Struct {
    u8 pad0[6];
    u16 unk6;
} func_80242F60_Struct;
void func_80242F60(func_80242F60_Struct *arg0);
void func_80242F70(u8 *arg0);
typedef struct func_80242FD0_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242FD0_StructB;
typedef struct func_80242FD0_StructC {
    u8 pad0[0x2C];
    func_80242FD0_StructB *unk2C;
} func_80242FD0_StructC;
typedef struct func_8024310C_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_8024310C_StructE;
typedef struct func_8024310C_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_8024310C_StructE *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91[3];
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u8 pad98[4];
    s16 unk9C;
    u8 pad9E[2];
    s16 unkA0;
} func_8024310C_Struct;


void func_80242F80(void *arg0, void *arg1) {
    if (((func_8024310C_Struct *)arg0)->unk95 == 1) {
        func_80242F70(arg1);
        return;
    }
    func_80242F60(arg1);
}
