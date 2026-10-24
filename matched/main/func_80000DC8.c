#include "context.h"
#if __LINE__ == 2
void func_80000DC8_alignment(void) {
}
#endif

typedef struct func_80000DC8_StructMessage {
    u8 pad[0xC];
    s32 unkC;
} func_80000DC8_StructMessage;

extern void func_800266B0(void *, void *, s32);
extern s32 func_80028F20(void);
extern void func_80030DC0(s32);
extern s32 func_80035050(void);

void func_80000DC8(u8 *arg0) {
    void *sp54;
    func_80000DC8_StructMessage *sp50;
    func_80000934_Struct sp48;
    s32 temp_s0;
    u8 *temp_s1;

    sp54 = NULL;
loop_1:
        func_800266B0(arg0 + 0x78, &sp50, 1);
        if (*(s32 *)(arg0 + 0x8A4) == 0) {
            temp_s0 = func_80035050();
            temp_s1 = arg0 + 0x190;
            if (func_80028F20() != temp_s0) {
                do {
                    func_80000934((func_80000934_Head *)arg0, &sp48, (s32)temp_s1);
                    func_800266B0(temp_s1, &sp54, 1);
                    func_80000984(arg0, (s32 *)&sp48);
                    temp_s0 = func_80035050();
                } while (func_80028F20() != temp_s0);
            }
        } else {
            *(s32 *)(arg0 + 0x8A4) = 0;
        }
        func_80030DC0(sp50->unkC);
    goto loop_1;
}
