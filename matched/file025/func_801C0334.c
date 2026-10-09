#include "context.h"

s32 func_801C0334(s32 arg0) {
    s32 var_v1;

    var_v1 = arg0 == 4;
    if (var_v1 == 0) {
        var_v1 = arg0 == 0xB;
        if (var_v1 == 0) {
            var_v1 = arg0 == 0xC;
            if (var_v1 == 0) {
                var_v1 = arg0 == 0xE;
                if (var_v1 == 0) {
                    var_v1 = arg0 == 0xF;
                    if (var_v1 == 0) {
                        var_v1 = arg0 == 0x10;
                        if (var_v1 == 0) {
                            var_v1 = arg0 == 9;
                            if (var_v1 == 0) {
                                var_v1 = arg0 == 0xA;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v1;
}
