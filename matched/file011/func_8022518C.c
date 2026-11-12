#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
s16 func_8001EF38(f32, f32);


struct func_8022518C_StructInner {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
};
struct func_8022518C_StructArg {
    u8 pad0[0x68];
    struct func_8022518C_StructInner *unk68;
};
struct func_8022518C_StructState {
    u8 pad0[0x328];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
};
#define WRAP2(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

void func_8022518C(struct func_8022518C_StructArg *arg0) {
    struct func_8022518C_StructState *var_v1;
    struct func_8022518C_StructInner *var_v0;
    f32 fa0;
    f32 fa1;
    f64 sum;
    s32 var_a1;
    s32 var_a2;
    s32 var_a0;
    s16 var_v0_2;

    if ((s32)arg0 == D_801BBCCC) {
        var_v1 = (struct func_8022518C_StructState *)&D_801BC03C;
    } else {
        var_v1 = (struct func_8022518C_StructState *)&D_801BC3D8;
    }
    var_v0 = arg0->unk68;
    fa0 = (f32) ((f64) (-var_v0->unk6) / 20.0);
    fa1 = (f32) ((f64) var_v0->unk8 / 20.0);
    switch (var_v1->unk328) {
    case 0:
        sum = (f64) ((fa0 * fa0) + (fa1 * fa1));
        if (10.0 < sum) {
            var_v1->unk329 = 0;
            var_v1->unk32A = func_8001EF38(fa0, fa1);
            var_v1->unk328 = var_v1->unk328 + 1;
        }
        break;
    case 1:
        var_v1->unk329++;
        if (var_v1->unk329 < 5) {
            sum = (f64) ((fa0 * fa0) + (fa1 * fa1));
            if (sum < 5.0) {
                var_v1->unk329 = 0;
                var_v1->unk328 = var_v1->unk328 + 1;
            }
        } else {
            var_v1->unk328 = 0;
        }
        break;
    case 2:
        var_v1->unk329++;
        if (var_v1->unk329 < 5) {
            sum = (f64) ((fa0 * fa0) + (fa1 * fa1));
            if (10.0 < sum) {
                var_v0_2 = func_8001EF38(fa0, fa1);
                var_a2 = WRAP2((s16) (var_v0_2 - var_v1->unk32A));
                if (var_a2 < 0) {
                    var_a1 = WRAP2((s16) (var_v0_2 - var_v1->unk32A));
                    var_a0 = -var_a1;
                } else {
                    var_a1 = WRAP2((s16) (var_v0_2 - var_v1->unk32A));
                    var_a0 = var_a1;
                }
                if (var_a0 < 0x300) {
                    var_v1->unk329 = 0;
                    var_v1->unk32A = var_v0_2;
                    var_v1->unk328 = var_v1->unk328 + 1;
                }
            }
        } else {
            var_v1->unk328 = 0;
        }
        break;
    case 3:
    case 4:
        break;
    default:
        var_v1->unk328 = 0;
        break;
    }
}
