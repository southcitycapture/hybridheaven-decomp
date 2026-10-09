#include "context.h"

extern u8 D_8018F46C[];
extern u8 D_8018F478[];
extern u8 D_8018F484[];
extern u8 D_8018F490[];

void func_80142FC4(void) {
    extern void func_8001A804();

    func_8001A804(1, D_8018F46C, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F478, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F484, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F490, 0x80, 0x80, 0x80, 0x80);
}
