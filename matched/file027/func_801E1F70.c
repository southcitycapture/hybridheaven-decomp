#include "context.h"

extern f32 D_801F5698;
extern f32 D_801F569C;
extern f32 D_801F56A0;
extern f32 D_801F56A4;

s32 func_801E1F70(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x48) || (func_801C1B1C() == 0)) {
        return 8;
    }
    func_8038BD50(D_801F5698, D_801F569C, 0x423E0000);
    D_8038BD88(D_801F56A0, D_801F56A4, 0xC0900000);
    return 9;
}
