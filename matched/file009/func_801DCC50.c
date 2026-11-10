#include "common.h"


s32 func_801DCC50(arg0, arg1, arg2)
u16 arg0;
s32 arg1;
u16 *arg2;
{
    switch (arg0 + (arg1 != 0 ? 0 : 0) + (arg2 != NULL ? 0 : 0)) {
    case 0x674:
    case 0x675:
        return 5;
    case 0x672:
    case 0x673:
        return 4;
    case 0x67C:
    case 0x67D:
        return 3;
    case 0x67A:
    case 0x67B:
    case 0x67E:
    case 0x67F:
        return 2;
    case 0x670:
    case 0x671:
    case 0x678:
    case 0x679:
        return 1;
    case 0x661:
    default:
        return 0;
    }
}
