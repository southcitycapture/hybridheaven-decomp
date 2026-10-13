#include "context.h"

s32 func_801E2BE0(void)
{
    s32 temp_t7;

    func_801CCEC8(0, *(((s8 *) (&D_801E7FE8)) + 3), 0, 0);
    if ((D_801E7FE8 += 4) >= 0x70)
    {
        D_801E7FE8 = 0x10;
    }
}
