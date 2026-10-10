#include "context.h"

extern void func_8012CF8C(s32, s32, s32, s32);
extern struct func_801F6914_Struct1 *D_8038D8D0;

s32 func_801E4088(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x08EC8BBF) != 0) {
        return 2;
    }
    func_8012CF8C(func_8038D8B8[5], ((s32 *)((s32 *)D_8038D8D0)[1])[12] + 0x40, 0x25B, 1);
    return 1;
}
