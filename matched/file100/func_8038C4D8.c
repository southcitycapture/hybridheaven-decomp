#include "context.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} func_8038C4D8_Struct;

void func_8038C4D8(s32 arg0, s32 arg1) {
    if (D_8038D8F0 < 8) {
        if (D_8038D8F0 != 0) {
            ((func_8038C4D8_Struct *)&D_8038E070)[D_8038D8F0 - 1].c = ((func_8038C4D8_Struct *)&D_8038E070)[D_8038D8F0 - 1].a;
            ((func_8038C4D8_Struct *)&D_8038E070)[D_8038D8F0 - 1].d = ((func_8038C4D8_Struct *)&D_8038E070)[D_8038D8F0 - 1].b;
        }
        D_8038D8F0++;
        ((func_8038C4D8_Struct *)&D_8038E070)[D_8038D8F0 - 1].a = arg0;
        ((func_8038C4D8_Struct *)&D_8038E070)[D_8038D8F0 - 1].b = 0;
    }
    D_8038DB48 = arg1;
}
