#include "common.h"
typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;
extern func_8013CC10_Struct D_8017DF14[];
extern func_8013CC10_Struct D_8017DF2C[];
extern u8 D_801842A0[];
extern u8 D_801BBBF0[];


extern u8 D_8017DEE4[][4];
extern u8 D_8017DEEC[][5];
extern u8 D_8017DEF8[][6];
extern u8 D_8017DF04[][7];

typedef struct func_8013C8F0_Struct {
    u8 pad[6];
    s16 unk6;
    u8 pad2[0x2BC - 8];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_8013C8F0_Struct;

typedef struct func_8013C8F0_Entry {
    u8 pad[9];
    u8 kind;
    u8 pad2[0x12];
} func_8013C8F0_Entry;

s32 func_8013C8F0(func_8013C8F0_Struct *arg0, u8 arg1) {
    u8 count;
    u8 i;
    u8 j;
    u8 *ptr;
    u8 *owner;
    s32 k;
    s32 selection;
    register s32 three = 3;

    if (arg1 < 2) {
        count = arg0->unk6 / 100;
        selection = count;
        if (selection == 2) goto c2;
        if (selection == three) goto c3;
        if (selection == 4) goto c4;
        if (selection != 5) goto done;
        goto c5;
c2:
        ptr = &D_8017DEE4[arg1][1];
        if (1) goto done;
c3:
        ptr = &D_8017DEEC[arg1][1];
        if (1) goto done;
c4:
        ptr = &D_8017DEF8[arg1][1];
        if (1) goto done;
c5:
        ptr = &D_8017DF04[arg1][1];
        if (1) goto done;
    } else {
        owner = (u8 *)arg0 - 0x44C;
        if (owner == D_801BBBF0) {
            k = arg1 * 7;
            count = ((u8 *)D_8017DF14)[k - 14];
        } else {
            k = arg1 * 7;
            count = ((u8 *)D_8017DF2C)[k - 14];
        }
        if (owner == D_801BBBF0) {
            ptr = k - 13 + (u8 *)D_8017DF14;
            if (1) goto done;
        } else {
            ptr = k - 13 + (u8 *)D_8017DF2C;
            if (1) goto done;
        }
    }
done:
    if (arg1 == three) {
    }
    if (arg0->unk2BC < 0) {
        for (i = 0; i < count; i++) {
            if (D_801842A0[ptr[i] * 0x1C + 9] == 0) {
                return 0;
            }
        }
    } else if (arg0->unk2BE < 0) {
        for (j = 0; j < count; j++) {
            if (D_801842A0[ptr[j] * 0x1C + 9] == 1) {
                return 0;
            }
        }
    } else if (arg0->unk2C0 < 0) {
        for (i = 0; i < count; i++) {
            if (D_801842A0[ptr[i] * 0x1C + 9] == 2) {
                return 0;
            }
        }
    } else if (arg0->unk2C2 < 0) {
        for (i = 0; i < count; i++) {
            if (three == D_801842A0[ptr[i] * 0x1C + 9]) {
                return 0;
            }
        }
    }
    if (arg1 < 2) {
        return 1;
    }
    if (arg0->unk6 >= count * 100) {
        return 1;
    }
    return 0;
}
