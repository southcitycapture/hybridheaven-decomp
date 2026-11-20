#include "context.h"
s32 func_801E27C8(s32 arg0, s32 arg1) {
    if (D_801F2A58 == 0) goto state0;
    if (D_801F2A58 == 1) goto state1;
    return 0x22;
state0:
    {
        if (func_8038BEF8(0.0f, (0.45f), 17.8f, 47.5f, (-75.3f), (3.4f), (35.6f), -68.0f, 1.0f, (18.2f), -51.5f, (-1.3f), (17.6f), (-53.3f)) != 0) {
            func_8038BED4();
            D_801F2A58 = 1;
        }
    }
    goto done;
state1:
    {
        if (func_8038BEF8(0.0f, 1.0f, 5.0f, 25.5f, (-47.4f), (-7.8f), (14.6f), (-52.6f), (-2.6f), (21.6f), (-56.6f), (-5.9f), (18.6f), (-56.9f)) != 0) {
            return 0x23;
        }
    }
done:
    return 0x22;
}
