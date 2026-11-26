#include "common.h"
extern u8 D_80037358[];
void func_8000070C(u8 *arg0);
void func_80000A0C(u8 *arg0, void *arg1);
typedef struct func_80000F9C_StructSub {
    u8 pad[0xF8];
    s32 unkF8;
    u8 pad2[0x10];
    s32 unk10C;
} func_80000F9C_StructSub;
typedef struct func_80000F9C_Struct {
    u8 pad[0x20];
    func_80000F9C_StructSub sub;
    u8 pad2[0x120 - 0x20 - sizeof(func_80000F9C_StructSub)];
    s32 unk120;
} func_80000F9C_Struct;
void func_80000F9C(func_80000F9C_Struct *arg0);
extern void func_800266B0(void *a0, void *a1, s32 a2);

#if __LINE__ == 4
void func_80000774_alignment(void) { D_80037358[0] = 0; }
void func_80000774_alignment2(void) {
}
#endif

extern s32 D_80037354;
extern s32 D_80037350;
extern void func_80002BAC(s32);
extern void func_80034DE0(f32);
extern func_80000F9C_Struct *func_80034A70(void);
extern s32 func_8002FC30();
extern void func_800295D0(u8);

/* debug print, compiled out in the release build */
#define DPRINTF(args)

void func_80000774(u8 *arg0) {
    func_80000F9C_Struct *task;
    s32 sp60;
    s32 i;

    sp60 = 0;
    while (1) {
        func_800266B0(arg0 + 0xB0, &sp60, 1);
        switch (sp60) {
        case 0x29A:
            func_80000A0C(arg0, arg0);
            if (D_80037350 != 0) {
                if (D_80037354 == 0) {
                    func_80034DE0(1.0f);
                    func_800295D0(1);
                    for (i = 0; i != 4; i++) {
                        func_80002BAC(i & 0xFF);
                    }
                } else if (D_80037354 >= 0x14 && D_80037350 == 1) {
                    if (func_8002FC30() == 0) {
                        D_80037350 = 2;
                    } else {
                        DPRINTF(("prenmi: wait\n"));
                    }
                }
                D_80037354++;
            }
            break;
        case 0x29D:
            D_80037350 = 1;
            D_80037354 = 0;
            func_8000070C(arg0);
            func_80000A0C(arg0, arg0 + 2);
            break;
        case 0x29E:
            task = func_80034A70();
            if (task != NULL) {
                func_80000F9C(task);
                func_80000A0C(arg0, arg0 + 4);
            }
            break;
        }
    }
}
