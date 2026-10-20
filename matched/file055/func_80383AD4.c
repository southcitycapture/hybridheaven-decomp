#include "context.h"
void *func_80383E54(void *arg0, void *arg1);

extern void func_800057DC(s32, void *);
extern void func_80133AAC(s32);
extern void func_80383BCC(void);
extern void func_80383D08(void);
extern u8 D_80089474[];
extern u8 D_80164E30[];
extern u8 D_8038DBB0;
extern s32 D_8038DBB8;
extern s32 D_8038DBC8;
extern s32 D_8038DBCC;
extern void *D_8038DDC4;

void func_80383AD4(s32 arg0, s32 arg1) {
    u16 buttons;

    buttons = 0;
    if (D_8038DBC8 == 0) {
        buttons = *(u16 *)(D_80089474 + 4);
    } else {
        D_8038DBC8 -= 1;
    }
    if (buttons & 0x1000) {
        if (D_8038DBB8 < 3) {
            D_8038DBB8 = 3;
            D_8038DBCC = 2;
        } else if (D_8038DBCC == 1) {
            D_8038DBCC = 2;
        } else if (D_8038DBCC == 2) {
            D_8038DBCC = 3;
        }
    }
    func_80383BCC();
    func_80383D08();
    func_80383E54(NULL, D_8038DDC4);
    if (D_8038DBB0 != 0) {
        func_80133AAC(2);
        func_800057DC(arg0, D_80164E30);
    }
}
