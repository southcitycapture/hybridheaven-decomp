#include "context.h"

extern u8 *D_8008DA88;
extern s32 func_800058DC(void *, void *);
extern void func_8037B23C();

void func_8037B530(struct func_8037EB58_Struct *arg0, s32 arg1) {
    if ((*(s16 *) ((u8 *) arg0 + 0xB0))-- == 0) {
        func_800058DC(arg0, func_8037B23C);
        return;
    }
    (*(u8 **) (D_8008DA88 + 0x30))[0xB] = (s8) ((s32) (*(s16 *) ((u8 *) arg0 + 0xB0) * 0xFF) / 20);
}
