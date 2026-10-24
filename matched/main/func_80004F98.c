#define LQ(p,l) p##_##l
#define LP(p,l) LQ(p,l)
#define func_80004EE8 LP(fA, __LINE__)
#include "context.h"
#undef func_80004EE8

extern u16 D_800399B8[];
extern s32 D_80039A78[];

u32 func_80004F98(s32 arg0, s32 arg1) {
    s32 sp34;
    s32 address;
    s32 end;
    s32 i;

    if ((u32)arg0 >= 0x8B8A) {
        if (arg1 != 0) {
            *(s32 *)arg1 = 0;
        }
        return 0;
    }
    if ((u32)arg0 >= 0x8000) {
        for (i = 0; D_800399B8[i] != 0 && (u32)arg0 >= D_800399B8[i]; i += 2) {
        }
        i -= 2;
#define entry (&D_800399B8[i])
        sp34 = func_8000511C(entry[1]);
        end = func_80005144(entry[1]);
#define data ((s32 *)((u32)arg0 * 4 + 0xFFFE0000 + (u32)D_80039A78))
        address = (data[0] & 0xFFFFFF) + sp34;
        if (data[1] != 0 && (entry[2] == 0 || (u32)(arg0 + 1) < entry[2])) {
            end = data[1] - data[0];
        } else {
            end = end - address;
        }
        if (arg1 != 0) {
            *(s32 *)arg1 = address;
        }
        return end;
    }
    if (arg1 != 0) {
        *(s32 *)arg1 = func_8000511C(arg0);
    }
    {
        u16 id;

        id = arg0;
        return func_80005144(id) - func_8000511C(id);
    }
}
