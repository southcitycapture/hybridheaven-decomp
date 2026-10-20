#include "context.h"
struct func_80385208_Arg;
void func_80385208(struct func_80385208_Arg *arg0, void *arg1);
extern void func_80384F24();
extern void func_80002364();
extern u8 D_8038CB30[];
extern u8 D_8038CB40[];
extern u8 D_8038CB50[];
extern u8 D_8038CB5C[];

void func_80385060(s32 arg0, s32 arg1) {
    s8 sp37;

    sp37 = 0;
    if (func_80126A0C(arg0, 0x12F, 0) != 0) {
        func_80384F24(arg0, 0x64, 0x7C, 0, &sp37);
        func_80384F24(arg0, 0x74, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0x84, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0x94, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0xA4, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0xB4, 0x7C, 2, &sp37);
        func_80006214(arg0);
        func_8001B204(0xA, 0x76, 0x80, D_8038CB30, 1);
        func_8001B204(0xB, 0x76, 0x8C, D_8038CB40, 1);
        func_8001B204(0xC, 0x76, 0x98, D_8038CB50, 1);
        func_8001B204(0xD, 0x6A, 0x80, D_8038CB5C, 1, 1, 8);
        func_80002364(0x0C000000, 0xA, 3, 0);
        func_80002364(0x0C000000, 0xA, 3, 1);
        func_800058DC(arg0, (void *)func_80385208);
    }
}
