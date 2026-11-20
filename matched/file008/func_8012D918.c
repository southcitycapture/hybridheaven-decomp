#include "common.h"
typedef struct func_8012C784_StructA {
    u16 unk0;
    u8 pad2[0x26];
    s32 unk28;
    u16 unk2C;
} func_8012C784_StructA;
typedef struct func_8012C784_StructB {
    u8 pad[0x2C];
    func_8012C784_StructA *unk2C;
    func_8012C784_StructA *unk30;
} func_8012C784_StructB;
extern func_8012C784_StructB *D_8008DA88[];
typedef struct func_8012C97C_Struct {
    u16 *unk0;
    s32 *unk4;
} func_8012C97C_Struct;
extern func_8012C97C_Struct *D_80171CEC[];
extern int func_80005204(unsigned short);
extern void func_80017064(u16, u8 *, u8 *, u8 *);


typedef struct func_8012D918_StructB { u8 pad[0x2C]; s32 unk2C; } func_8012D918_StructB;
typedef struct func_8012D918_StructA { u8 pad[0x24]; func_8012D918_StructB *unk24; } func_8012D918_StructA;
void func_8012D918(func_8012D918_StructA *arg0, u16 arg1, s32 arg2, u8 arg3, u8 arg4) {
    u32 resource_index;
    s32 sp20;
    u16 a0;
    u8 *v1;
    func_8012C97C_Struct *v0;
    u32 object_index;

    object_index = arg3;
    if (arg0->unk24->unk2C != 0) {
        if (arg4 == 0) {
            v1 = (u8 *)D_8008DA88[object_index]->unk2C + 0x40;
        } else {
            v1 = (u8 *)D_8008DA88[object_index]->unk2C + 0x44;
        }
    } else if (arg4 == 0) {
        v1 = (u8 *)D_8008DA88[object_index]->unk30 + 0x40;
    } else {
        v1 = (u8 *)D_8008DA88[object_index]->unk30 + 0x44;
    }
    resource_index = arg1;
    v0 = D_80171CEC[resource_index];
    sp20 = v0->unk4[arg2];
    if ((sp20 & 0x0F000000) == 0x0D000000) {
        a0 = v0->unk0[1];
        func_80017064(a0, (u8 *)resource_index, (u8 *)arg2, (u8 *)object_index);
        goto special_result;
    }
    goto regular_load;

special_result:
    *(s32 *)v1 = (func_80005204(a0) + sp20 + 0x80000000) & 0xFFFFFF;
    goto done;

regular_load:
    a0 = v0->unk0[0];
    func_80017064(a0, (u8 *)resource_index, (u8 *)arg2, (u8 *)object_index);
    goto regular_result;

done:
    return;

regular_result:
    *(s32 *)v1 = (func_80005204(a0) + sp20 + 0x80000000) & 0xFFFFFF;
}
