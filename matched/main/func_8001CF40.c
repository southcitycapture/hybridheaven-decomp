#include "common.h"


typedef struct func_8001CF40_StructBytes {
    u8 values[16];
} func_8001CF40_StructBytes;

typedef struct func_8001CF40_StructMasks {
    u16 values[16];
} func_8001CF40_StructMasks;

extern func_8001CF40_StructBytes D_800447A0;
extern func_8001CF40_StructMasks D_800447B0;
extern func_8001CF40_StructMasks D_800447D0;
extern u16 *D_80044360[];

u16 func_8001CF40(u16 arg0) {
    u8 low;
    u8 high;
    u16 *data;
    u16 result;
    u16 bits;
    func_8001CF40_StructBytes counts;
    func_8001CF40_StructMasks masks;
    func_8001CF40_StructMasks partial;
    s32 i;

    counts = D_800447A0;
    masks = D_800447B0;
    high = (arg0 >> 8) - 0xA0;
    partial = D_800447D0;
    low = (arg0 & 0xFF) - 0xA0;
    if (high >= 0x30) {
        high = 0;
    }
    data = D_80044360[high];
    if (data == NULL) {
        result = 0;
    } else {
        result = data[0];
        if (!(data[(low >> 4) + 1] & masks.values[low & 0xF])) {
            result = 0;
        } else {
            for (i = 0; i < (low >> 4); i++) {
                bits = data[i + 1];
                result += counts.values[bits & 0xF];
                result += counts.values[(bits >> 4) & 0xF];
                result += counts.values[(bits >> 8) & 0xF];
                result += counts.values[(bits >> 12) & 0xF];
            }
            bits = data[i + 1] & partial.values[low & 0xF];
            result += counts.values[bits & 0xF];
            result += counts.values[(bits >> 4) & 0xF];
            result += counts.values[(bits >> 8) & 0xF];
            result += counts.values[(bits >> 12) & 0xF];
            result--;
        }
    }
    return result;
}
