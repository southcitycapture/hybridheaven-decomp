#include "context.h"
typedef struct func_80142F2C_Struct { u8 b[2][2]; } func_80142F2C_Struct;
extern func_80142F2C_Struct D_801814B4;
void func_80142F2C(u8 arg0) {
    extern void func_8001A804();
    func_80142F2C_Struct sp24;

    sp24 = D_801814B4;
    func_8001A804(sp24.b[arg0 & 1][0], "fr fg fb fa", 0x80, 0x80, 0x80, 0x80);
    func_8001A804(sp24.b[arg0 & 1][1], "fr fg fb fa", 0x80, 0x80, 0x80, 0x80);
}
