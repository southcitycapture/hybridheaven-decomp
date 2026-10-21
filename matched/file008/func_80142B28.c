#include "context.h"
struct func_80142B28_Struct { u8 b[4]; };
extern struct func_80142B28_Struct D_801814B0;
extern u8 D_8018F364[], D_8018F370[], D_8018F37C[], D_8018F388[];

void func_80142B28(u8 arg0, u8 arg1) {
    struct func_80142B28_Struct sp2C;
    extern void func_8001A804();

    sp2C = D_801814B0;
    if (arg1 == 0) {
        func_8001A804(sp2C.b[(arg0 & 1) * 2], D_8018F364, 0, 0xFF, 0, 0xFF);
    } else {
        func_8001A804(sp2C.b[(arg0 & 1) * 2], D_8018F370, 0x80, 0x80, 0x80, 0x80);
    }
    if (arg1 == 1) {
        func_8001A804(sp2C.b[(arg0 & 1) * 2 + 1], D_8018F37C, 0, 0xFF, 0, 0xFF);
        return;
    }
    func_8001A804(sp2C.b[(arg0 & 1) * 2 + 1], D_8018F388, 0x80, 0x80, 0x80, 0x80);
}
