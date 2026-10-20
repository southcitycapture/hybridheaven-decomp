#include "context.h"

extern void func_80143C08(s32 arg0);
extern void func_80143E38(u8 *arg0);
extern void func_8014405C(s32 arg0);
extern void func_8014428C(u8 *arg0);
extern u8 D_801BEC50;

void func_80143AC4(u8 arg0, u8 arg1, s32 arg2) {
    s32 temp;

    temp = (D_801BEC50 = arg0 * 2 + arg1);
    if (temp == 0) goto case0;
    if (temp == 1) goto case1;
    if (temp == 2) goto case2;
    if (temp != 3) goto end;
    goto case3;
case0:
    func_80143C08(arg2);
    goto end;
case1:
    func_80143E38((u8 *)arg2);
    goto end;
case2:
    func_8014405C(arg2);
    goto end;
case3:
    func_8014428C((u8 *)arg2);
end:
    ;
}
