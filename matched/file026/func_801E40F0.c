#include "context.h"

extern s32 func_8012CF8C(s32, s32, s32, s32);
extern s32 func_8038D8B8;

s32 func_801E40F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x094B267FULL) != 0) {
        return 3;
    }
    func_8012CF8C(*(s32 *)((u8 *)&func_8038D8B8 + 0x14),
                  *(s32 *)((u8 *)(((s32 *)D_8038D8D0)[1]) + 0x30) + 0x40, 0x25B, 0);
    return 2;
}
