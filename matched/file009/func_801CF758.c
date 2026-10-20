#include "context.h"

typedef struct func_801CF758_StructConfig {
    u8 pad[0x4C];
    u16 unk4C;
} func_801CF758_StructConfig;

typedef struct func_801CF758_StructLink {
    u8 pad[0xC];
    func_801CF758_StructConfig *unkC;
} func_801CF758_StructLink;

typedef struct func_801CF758_StructObj {
    u8 pad0[0xC];
    func_801CF758_StructLink *unkC;
    u8 pad10[0x20];
    s32 unk30;
    u8 pad34[0x5C];
    u16 unk90;
    u16 unk92;
} func_801CF758_StructObj;

typedef struct func_801CF758_StructData {
    u8 pad[0x3E];
    u16 unk3E;
} func_801CF758_StructData;

typedef struct func_801CF758_StructInput {
    u8 pad[0x30];
    func_801CF758_StructData *unk30;
} func_801CF758_StructInput;

void func_801CF758(func_801CF758_StructObj *arg0, func_801CF758_StructInput **arg1) {
    u16 sp26;
    s32 var_v1;
    u16 temp_v0;

    sp26 = (*arg1)->unk30->unk3E;
    func_8012D7A8();
    func_801CD878(arg0, (void **)arg1);
    if (sp26 & 1) {
        var_v1 = 1;
    } else {
        var_v1 = (arg0->unk30 & 0x20) ? 1 : 0;
    }
    if (((arg0->unk90 < arg0->unk92++) && (var_v1 != 0)) || (arg0->unkC->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
