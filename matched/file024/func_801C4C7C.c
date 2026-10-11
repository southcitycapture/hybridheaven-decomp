#include "context.h"

extern u8 D_801BBC0D;
extern u8 D_801CEEEC[];
extern u8 D_801CEEF8[];
extern u8 D_801CEF04[];
extern u8 D_801CEF10[];
extern u8 D_801CEF1C[];
extern u8 D_801CEF28[];
extern u8 D_801CEF34[];
extern u8 D_801CEF40[];
extern u8 D_801CEF4C[];
extern u8 D_801CEF58[];
extern u8 D_801CEF64[];
extern u8 D_801CEF70[];
extern u8 D_801CEF74[];
extern void func_801C4E90(void);

void func_801C4C7C(s32 arg0, s32 arg1) {
    if (D_801BBC0D != 0) {
        if (D_801BBC0D != 1) {
            if (D_801BBC0D == 2) {
                func_8001B204(1, 0x7D0, 0x8A, D_801CEEEC, 2);
                func_8001B204(2, 0x7D0, 0x94, D_801CEEF8, 6);
                func_8001B204(3, 0x7D0, 0x9E, D_801CEF04, 6);
                D_801CC8C8 = 0;
            }
        } else {
            func_8001B204(1, 0x7D0, 0x8A, D_801CEF10, 6);
            func_8001B204(2, 0x7D0, 0x94, D_801CEF1C, 2);
            func_8001B204(3, 0x7D0, 0x9E, D_801CEF28, 6);
            D_801CC8C8 = 1;
        }
    } else {
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF34, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF40, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF4C, 2);
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEF58);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEF64);
    func_8001B204(5, 0, 0, D_801CEF70);
    func_8001B204(6, 0, 0, D_801CEF74);
    func_800058DC(arg0, func_801C4E90);
}
