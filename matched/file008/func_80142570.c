#include "context.h"

extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001B204();
void func_80142570(void) {
    s32 i;

    for (i = 0; i < 0x1C; i++) {
        func_8001B204(i & 0xFF, 0, 0, "");
    }
    for (i = 0; i < 8; i++) {
        func_8001A804(i & 0xFF, "px py sx sy sf wr wg wb wa fr fg fb fa", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    func_8001A804(8, "px py sx sy sf wr wg wb wa fr fg fb fa", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8001A804(9, "px py sx sy sf wr wg wb wa fr fg fb fa", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
