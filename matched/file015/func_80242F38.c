#include "context.h"

typedef struct func_80242F38_StructInner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x6];
    s16 unk12;
} func_80242F38_StructInner;

typedef struct func_80242F38_StructNode {
    u8 pad0[0x2C];
    func_80242F38_StructInner *unk2C;
} func_80242F38_StructNode;

typedef struct func_80242F38_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242F38_StructArg;

typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

extern s32 func_80011140(void **, s32, func_80242F38_StructGlobal, s32);
extern func_80242F38_StructGlobal D_802520F8;
extern u8 D_80252320[];
extern void func_80242FE8(void);

void func_80242F38(func_80242F38_StructArg *arg0, void ** volatile arg1) {
    s32 temp;

    temp = arg0->unk5C;
    ((func_80242F38_StructNode *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80242F38_StructNode *) *arg1)->unk2C->unk12 = 0x1EAA;
    if ((func_80011140(arg1, temp, D_802520F8, 0x1E) != 0) && (func_800178E8() != 0)) {
        func_800179B0(D_80252320);
        func_800058DC(arg0, func_80242FE8);
    }
}
