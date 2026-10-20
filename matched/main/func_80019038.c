#include "context.h"

extern u8 D_800441D0[];


void func_80019038(void) {
    func_80019038_Struct sp28;

    *(func_80018E9C_Struct *) &sp28 = *(func_80018E9C_Struct *) D_800441D0;
    D_8008EE8C[0] = ((u16 *) &D_8008EBE6)[0];
    D_8008EE8C[1] = D_8008EE96;
    D_8008EE8C[3] = D_8008EE94;
    D_8008EE8C[4] = func_8001BD20(((u8 *) &D_8008EBE6)[1], 0xA2A7);
    D_8008EE8C[5] = ((u16 *) &D_8008EBEA)[0];
    if (((u16 *) &D_8008EBE8)[0] != 0) {
        D_8008EE8C[2] = 0;
    } else {
        D_8008EE8C[2] = 0xFF;
    }
    D_8008EE8C[7] = 0x10;
    func_8001C0B0(D_8008EE81, D_8008EE98, D_8008EBE7, func_8001D394(D_8008EBE7, 0xA2A7) & 0xFFFF);
    *(func_80019038_Struct *) (D_8008EE8C + 8) = sp28;
}
