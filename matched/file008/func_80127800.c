#include "context.h"

typedef struct func_80127800_Struct {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[4];
    void *unk28;
} func_80127800_Struct;

typedef struct func_80127800_Mid {
    u8 pad[0x2C];
    func_80127800_Struct *unk2C;
} func_80127800_Mid;

typedef struct func_80127800_Obj {
    u8 pad[0x24];
    func_80127800_Mid *unk24;
} func_80127800_Obj;

typedef struct func_80127800_Globals {
    u8 pad[0x112];
    s16 unk112;
    s16 unk114;
    s16 unk116;
    s16 unk118;
    s16 unk11A;
    s16 unk11C;
} func_80127800_Globals;

extern f32 D_8018CC10;
extern u8 D_3000210[];

void func_80127800(void *arg0, func_80127800_Mid **arg1) {
    f32 temp;

    func_80005F6C((s32) arg0, D_80164F30);
    func_80006214((s32) arg0);
    if (1) {
        temp = D_8018CC10;
    }
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk0 = 0x73;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk28 = D_3000210;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk4 = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk112;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk8 = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk114;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unkC = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk116;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk10 = ((func_80127800_Globals *) &D_801BBBF0)->unk118;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk12 = ((func_80127800_Globals *) &D_801BBBF0)->unk11A;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk14 = ((func_80127800_Globals *) &D_801BBBF0)->unk11C;
    (*arg1)->unk2C->unk18 = temp;
    (*arg1)->unk2C->unk1C = temp;
    (*arg1)->unk2C->unk20 = temp;
    func_800058DC((s32) arg0, (void *) func_80127918);
}
