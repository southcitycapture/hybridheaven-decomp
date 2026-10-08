#include "context.h"

typedef struct func_8014D070_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014D070_Struct_Data;

typedef struct func_8014D070_Struct_Sub {
    u8 pad0[0x30];
    func_8014D070_Struct_Data *unk30;
} func_8014D070_Struct_Sub;

typedef struct func_8014D070_Struct {
    u8 pad0[0x24];
    func_8014D070_Struct_Sub *unk24;
    u8 pad1[0x74 - 0x28];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad2[0x90 - 0x8A];
    u8 unk90;
    u8 pad3[0x98 - 0x91];
    s32 unk98;
} func_8014D070_Struct;

typedef struct func_8014D070_Struct_Table {
    u16 unk0;
    u8 pad[18];
} func_8014D070_Struct_Table;

extern void func_8014BC18();
extern void func_801C3B7C(s32);
extern s32 (*D_801823CC[])(func_8014D070_Struct *, s32);
extern s32 (*D_80182530[])(func_8014D070_Struct *, s32);
extern func_8014D070_Struct_Table D_80182950[];
extern void func_8014D190();

void func_8014D070(func_8014D070_Struct *arg0, s32 arg1) {
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = arg0->unk24->unk30->unk10;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = arg0->unk24->unk30->unk14;
    if ((D_801823CC[D_80182950[arg0->unk90].unk0] != NULL) &&
        (D_801823CC[D_80182950[arg0->unk90].unk0](arg0, arg1) == 0)) {
        arg0->unk74 = arg0->unk98;
        func_801C3B7C(0);
        func_8014BC18();
        if (D_80182530[D_80182950[arg0->unk90].unk0] != NULL) {
            D_80182530[D_80182950[arg0->unk90].unk0](arg0, arg1);
        }
        func_800058DC((s32) arg0, func_8014D190);
    }
}
