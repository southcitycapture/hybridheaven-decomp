#include "common.h"



s32 func_80243E50(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    if ((u32)arg0 == 0) {
        if ((u32)arg2 == 0) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 0);
            case 1: return (u8)(arg1 ^ 2);
            case 2: return (u8)(arg1 ^ 6);
            default: return (u8)(arg1 ^ 4);
            }
        } else if (arg2 != 0) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 8);
            case 1: return (u8)(arg1 ^ 10);
            case 2: return (u8)(arg1 ^ 6);
            default: return (u8)(arg1 ^ 12);
            }
        }
    } else if (arg0 == 1) {
        if ((u32)arg2 == 0) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 26);
            case 1: return (u8)(arg1 ^ 14);
            case 2: return (u8)(arg1 ^ 32);
            default: return (u8)(arg1 ^ 20);
            }
        } else if (arg2 == 1) {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 28);
            case 1: return (u8)(arg1 ^ 16);
            case 2: return (u8)(arg1 ^ 32);
            default: return (u8)(arg1 ^ 22);
            }
        } else {
            switch (arg3) {
            case 0: return (u8)(arg1 ^ 30);
            case 1: return (u8)(arg1 ^ 18);
            case 2: return (u8)(arg1 ^ 32);
            default: return (u8)(arg1 ^ 24);
            }
        }
    }
    return 0;
}



s32 func_8024402C(u8 arg0) {
    if (arg0 >= 0x41) {
        switch (arg0) {
        case 0x41:
            return 0;
        case 0x42:
            return 1;
        case 0x43:
            return 2;
        case 0x44:
            return 0;
        case 0x45:
            return 0;
        case 0x46:
            return 1;
        case 0x47:
            return 0;
        case 0x48:
            return 1;
        case 0x49:
            return 2;
        case 0x4A:
            return 3;
        case 0x4B:
            return 0xA;
        case 0x4C:
            return 1;
        default:
            return 0;
        }
    } else {
        if (arg0 >= 0x3E) {
            return (arg0 - 0x3E) & 0xFF;
        }
        if (arg0 >= 0x39) {
            if (arg0 == 0x3D) {
                return 0xA;
            }
            return (arg0 - 0x39) & 0xFF;
        }
        if (arg0 >= 0x25) {
            if (arg0 >= 0x35) {
                return (arg0 - 0xD) & 0xFF;
            }
            if (arg0 >= 0x31) {
                return (arg0 - 0x13) & 0xFF;
            }
            if (arg0 >= 0x2D) {
                return (arg0 - 0x19) & 0xFF;
            }
            if (arg0 >= 0x29) {
                return (arg0 - 0x1F) & 0xFF;
            }
            return (arg0 - 0x25) & 0xFF;
        }
        return 0;
    }
}

#define D_8017DC44 D_8017DC44__func_80244174
#define D_8017DC4A D_8017DC4A__func_80244174
#define D_8017DC92 D_8017DC92__func_80244174
#define D_8017DC93 D_8017DC93__func_80244174
#define D_8017DC94 D_8017DC94__func_80244174
#define D_8017DC95 D_8017DC95__func_80244174
#define D_80388410 D_80388410__func_80244174
#define func_80376D10 func_80376D10__func_80244174
extern s32 func_80376D10(void);
extern u8 D_8017DC44[];
extern u8 D_8017DC4A[];
extern u8 D_8017DC92[];
extern u8 D_8017DC93[];
extern u8 D_8017DC94[];
extern u8 D_8017DC95[];
extern u8 D_80388410[];

#undef D_8017DC44
#undef D_8017DC4A
#undef D_8017DC92
#undef D_8017DC93
#undef D_8017DC94
#undef D_8017DC95
#undef D_80388410
#undef func_80376D10
#define D_8017DC44 D_8017DC44__func_80244174_8b1c8a88
#define D_8017DC4A D_8017DC4A__func_80244174_8b1c8a88
#define D_8017DC92 D_8017DC92__func_80244174_8b1c8a88
#define D_8017DC93 D_8017DC93__func_80244174_8b1c8a88
#define D_8017DC94 D_8017DC94__func_80244174_8b1c8a88
#define D_8017DC95 D_8017DC95__func_80244174_8b1c8a88
#define D_80388410 D_80388410__func_80244174_8b1c8a88
#define func_80376D10 func_80376D10__func_80244174_8b1c8a88
extern s32 func_80376D10(void);
extern u8 D_8017DC44[];
extern u8 D_8017DC4A[];
extern u8 D_8017DC92[];
extern u8 D_8017DC93[];
extern u8 D_8017DC94[];
extern u8 D_8017DC95[];
extern u8 D_80388410[];

s32 func_80244174(u8 arg0, u8 arg1, s8 arg2) {
    s32 var_sp34;
    u16 var_sp32;
    s16 count;
    s32 end;
    s16 val;

    val = 0;
    switch (arg0) {
    case 0:
        var_sp32 = D_8017DC44[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x6F6;
        break;
    case 1:
        var_sp32 = D_8017DC4A[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x882;
        break;
    case 2:
        var_sp32 = D_8017DC92[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0xC6;
        break;
    case 3:
        var_sp32 = D_8017DC93[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x252;
        break;
    case 4:
        var_sp32 = D_8017DC95[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x56A;
        break;
    case 5:
        var_sp32 = D_8017DC94[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x3DE;
        break;
    }
    count = 0;
    if (((arg2 < 0) ? -arg2 : arg2) > 0) {
        end = var_sp32;
        do {
            if (arg2 < 0) {
                if ((end - count) > 0) {
                    var_sp34 -= 2;
                    val = val - *(u16 *)var_sp34;
                }
            } else {
                if (func_80376D10() > (end + count)) {
                    val += *(u16 *)var_sp34;
                    var_sp34 += 2;
                }
            }
            count++;
        } while (count < ((arg2 < 0) ? -arg2 : arg2));
    }
    return val & 0xFFFF;
}
#undef D_8017DC44
#undef D_8017DC4A
#undef D_8017DC92
#undef D_8017DC93
#undef D_8017DC94
#undef D_8017DC95
#undef D_80388410
#undef func_80376D10
#define D_8017DC44 D_8017DC44__func_80244174
#define D_8017DC4A D_8017DC4A__func_80244174
#define D_8017DC92 D_8017DC92__func_80244174
#define D_8017DC93 D_8017DC93__func_80244174
#define D_8017DC94 D_8017DC94__func_80244174
#define D_8017DC95 D_8017DC95__func_80244174
#define D_80388410 D_80388410__func_80244174
#define func_80376D10 func_80376D10__func_80244174
#undef D_8017DC44
#undef D_8017DC4A
#undef D_8017DC92
#undef D_8017DC93
#undef D_8017DC94
#undef D_8017DC95
#undef D_80388410
#undef func_80376D10

#define D_8017DC40 D_8017DC40__func_80244410
#define D_8017DCDE D_8017DCDE__func_80244410
#define D_8017DD8A D_8017DD8A__func_80244410
#define D_8017DD8B D_8017DD8B__func_80244410
#define D_801BBBF0 D_801BBBF0__func_80244410
#define func_8022C5AC func_8022C5AC__func_80244410
#define func_80244174 func_80244174__func_80244410
extern s32 func_80244174(s32, u8, s8);
extern void func_8022C5AC();
extern u8 D_8017DC40[];
extern u8 D_8017DCDE[];
extern s8 D_8017DD8A;
extern s8 D_8017DD8B;
extern u8 D_801BBBF0[];

typedef struct {
    s16 f0;
    s16 f2;
    u8 pad4[0x4A];
    u16 f4E;
    u16 f50;
    u16 f52;
    u16 f54;
    u8 pad56[2];
    u16 f58;
    u16 f5A;
    u8 pad5C[0x26];
    u16 f82[6];
    u16 f8E[6];
} func_80244410_Struct;

#undef D_8017DC40
#undef D_8017DCDE
#undef D_8017DD8A
#undef D_8017DD8B
#undef D_801BBBF0
#undef func_8022C5AC
#undef func_80244174
#define D_8017DC40 D_8017DC40__func_80244410_3cbd4f9f
#define D_8017DCDE D_8017DCDE__func_80244410_3cbd4f9f
#define D_8017DD8A D_8017DD8A__func_80244410_3cbd4f9f
#define D_8017DD8B D_8017DD8B__func_80244410_3cbd4f9f
#define D_801BBBF0 D_801BBBF0__func_80244410_3cbd4f9f
#define func_8022C5AC func_8022C5AC__func_80244410_3cbd4f9f
#define func_80244174 func_80244174__func_80244410_3cbd4f9f
#define func_80244410_Struct func_80244410_Struct__func_80244410_3cbd4f9f
s32 func_80244174(u8 arg0, u8 arg1, s8 arg2);
extern void func_8022C5AC();
extern u8 D_8017DC40[];
extern u8 D_8017DCDE[];
extern s8 D_8017DD8A;
extern s8 D_8017DD8B;
extern u8 D_801BBBF0[];

typedef struct {
    s16 f0;
    s16 f2;
    u8 pad4[0x4A];
    u16 f4E;
    u16 f50;
    u16 f52;
    u16 f54;
    u8 pad56[2];
    u16 f58;
    u16 f5A;
    u8 pad5C[0x26];
    u16 f82[6];
    u16 f8E[6];
} func_80244410_Struct;

/* add to a u16 stat; a result of 0, or one past 0x7FFF, becomes 1 */
#define func_80244410_ADD_STAT(stat, delta) \
    do {                                    \
        (stat) += (delta);                  \
        if ((stat) <= 0) {                  \
            (stat) = 1;                     \
        }                                   \
        if ((stat) >= 0x8000) {             \
            (stat) = 1;                     \
        }                                   \
    } while (0)

void func_80244410(func_80244410_Struct *arg0) {
    s8 amount;
    s16 i;
    s32 diff;
    u8 *base = (u8 *)arg0 - 0x44C;
    u8 *self;
    u8 *other;
    u8 side;

    if (base == D_801BBBF0) {
        amount = D_8017DD8A;
    } else {
        amount = D_8017DD8B;
    }
    if (base == D_801BBBF0) {
        self = D_8017DC40;
    } else {
        self = D_8017DCDE;
    }
    if (base == D_801BBBF0) {
        other = D_8017DCDE;
    } else {
        other = D_8017DC40;
    }
    if (base == D_801BBBF0) {
        side = 0;
    } else {
        side = 1;
    }
    if (amount == 0) {
        return;
    }
    arg0->f2 += func_80244174(0, side, amount);
    arg0->f0 = arg0->f2;
    arg0->f4E += func_80244174(2, side, amount);
    arg0->f50 += func_80244174(3, side, amount);
    arg0->f54 += func_80244174(4, side, amount);
    arg0->f52 += func_80244174(5, side, amount);
    arg0->f58 = arg0->f4E;
    arg0->f5A = arg0->f50;
    diff = (s8)(*(u16 *)(self + 0x48) - *(u16 *)(other + 0x48));
    if (diff != 0) {
        for (i = 0; i < 6; i++) {
            func_80244410_ADD_STAT(arg0->f82[i], amount / 2);
            func_80244410_ADD_STAT(arg0->f8E[i], amount / 2);
        }
    }
    func_8022C5AC(arg0);
}
#undef func_80244410_ADD_STAT
#undef D_8017DC40
#undef D_8017DCDE
#undef D_8017DD8A
#undef D_8017DD8B
#undef D_801BBBF0
#undef func_8022C5AC
#undef func_80244174
#undef func_80244410_Struct
#define D_8017DC40 D_8017DC40__func_80244410
#define D_8017DCDE D_8017DCDE__func_80244410
#define D_8017DD8A D_8017DD8A__func_80244410
#define D_8017DD8B D_8017DD8B__func_80244410
#define D_801BBBF0 D_801BBBF0__func_80244410
#define func_8022C5AC func_8022C5AC__func_80244410
#define func_80244174 func_80244174__func_80244410
#undef D_8017DC40
#undef D_8017DCDE
#undef D_8017DD8A
#undef D_8017DD8B
#undef D_801BBBF0
#undef func_8022C5AC
#undef func_80244174

