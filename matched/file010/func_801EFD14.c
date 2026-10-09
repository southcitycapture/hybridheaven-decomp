#include "context.h"
extern u16 D_801BCAE0;
s32 func_800058DC(void *arg0, void *arg1);

typedef struct func_801EFD14_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_801EFD14_Struct;

typedef struct func_801EFD14_Obj {
    u8 pad[0x1C];
    s32 unk1C;
} func_801EFD14_Obj;

typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;

extern s32 func_80010550(s32, void *);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216BCC;
extern void func_801E5010(void);

void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1) {
    func_801EFD14_Obj *temp_a1;
    s32 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    temp_v1 = temp_a1->unk1C;
    if (temp_v1 == 0x01680041) {
        D_801BCAE0 = 0x80;
        func_800058DC(arg0, func_801E5010);
    } else if (temp_v1 != 0x03480010) {
        func_80011140(arg1, temp_a1, D_80216BCC, 0x14);
    } else {
        if (func_80010550(arg1, temp_a1) != 0) {
            func_80011140(arg1, temp_a1, D_80216B90, 0xA);
        }
    }
}
