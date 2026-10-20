#include "context.h"

extern u8 D_8018F394[], D_8018F3A0[], D_8018F3AC[], D_8018F3B8[], D_8018F3C4[], D_8018F3D0[], D_8018F3DC[], D_8018F3E8[];
extern u8 D_8018F3F4[], D_8018F400[], D_8018F40C[], D_8018F418[], D_8018F424[], D_8018F430[], D_8018F43C[], D_8018F448[];

void func_80142C50(u8 arg0, u8 arg1) {
    s32 v;
    extern void func_8001A804();
    v = arg0 * 2 + arg1;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v != 3) goto end;
    goto c3;
c0:
    func_8001A804(1, D_8018F394, 0, 0xFF, 0, 0xFF);
    func_8001A804(2, D_8018F3A0, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F3AC, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F3B8, 0x80, 0x80, 0x80, 0x80);
    goto end;
c1:
    func_8001A804(1, D_8018F3C4, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F3D0, 0, 0xFF, 0, 0xFF);
    func_8001A804(3, D_8018F3DC, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F3E8, 0x80, 0x80, 0x80, 0x80);
    goto end;
c2:
    func_8001A804(1, D_8018F3F4, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F400, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F40C, 0, 0xFF, 0, 0xFF);
    func_8001A804(4, D_8018F418, 0x80, 0x80, 0x80, 0x80);
    goto end;
c3:
    func_8001A804(1, D_8018F424, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(2, D_8018F430, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(3, D_8018F43C, 0x80, 0x80, 0x80, 0x80);
    func_8001A804(4, D_8018F448, 0, 0xFF, 0, 0xFF);
end:
    return;
}
