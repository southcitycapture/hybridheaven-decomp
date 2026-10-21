#include "context.h"

typedef struct func_802454C4_Struct {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    void *unk5C;
} func_802454C4_Struct;

struct func_8024557C_Struct;
void func_8024557C(struct func_8024557C_Struct *arg0, s32 *arg1);

void func_802454C4(func_802454C4_Struct *arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, *(func_80246E60_StructGlobal *)&D_80258F0C, 10) == 0) {
        func_80010550(arg1, temp_a1);
        arg0->unk24->unk2C->unk12 = 0x1000;
        if (func_80133A24(0x140) != 0) {
            D_8025C7E8 = 0;
            ((s8 *)D_801BBF7C)[0x10] = 1;
            D_8025C704 = 1;
            func_800058DC(arg0, func_8024557C);
        }
    }
}
