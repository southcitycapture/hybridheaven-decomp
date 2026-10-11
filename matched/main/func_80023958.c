#include "context.h"

extern void *D_800CBDA4;
extern void func_800255FC(void);
extern void func_800250D4(void);
extern void func_80023BF4(void);
extern void func_8002430C(void);
extern void func_800242C8(void);
extern void func_80024358(void);
extern void func_80023D04(void);
extern void func_80023A74(void);

typedef struct func_80023958_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x1A];
    u8 unk21;
    u8 unk22;
    u8 pad23;
    u8 unk24;
    u8 pad25[0x4C - 0x25];
    u16 unk4C;
    u8 pad4E[0x7D - 0x4E];
    u8 unk7D;
    u8 pad7E[0x9A - 0x7E];
    u16 unk9A;
} func_80023958_Struct;

void func_80023958(void) {
    u8 temp_v1;

    if (((func_80023958_Struct *) D_800CBDA4)->unk7D != 0) {
        func_800255FC();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk9A != 0) {
        func_800250D4();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk6 & 2) {
        func_80023BF4();
    }
    if ((((func_80023958_Struct *) D_800CBDA4)->unk22 != 0) && (((func_80023958_Struct *) D_800CBDA4)->unk21 == 1)) {
        func_8002430C();
        return;
    }
    temp_v1 = ((func_80023958_Struct *) D_800CBDA4)->unk24;
    if (temp_v1 != 0) {
        ((func_80023958_Struct *) D_800CBDA4)->unk24 = (u8) (temp_v1 - 1);
        if (((func_80023958_Struct *) D_800CBDA4)->unk24 == 0) {
            func_800242C8();
            return;
        }
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk4C != 0) {
        func_80024358();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk6 & 1) {
        func_80023D04();
        return;
    }
    func_80023A74();
}
