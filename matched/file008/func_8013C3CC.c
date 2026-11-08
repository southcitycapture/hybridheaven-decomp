#include "common.h"
extern u16 D_8017D1D4[];
extern u8 D_801BBBF0[];
extern void func_8012D844(void *, u16, u16);
extern void func_8012D894(void *, u16, u16);
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
struct func_8013C244_In { u8 pad[0xE]; u16 unkE; };
struct func_8013C244_Obj { u8 pad[0x5C]; struct func_8013C244_In *unk5C; };
s32 func_8013C244(struct func_8013C244_Obj *arg0);


typedef struct func_8013C3CC_G {
    u8 pad0[0x34E];
    u16 unk34E;
    u16 unk350;
} func_8013C3CC_G;

s32 func_8013C3CC(void *arg0, u16 *arg1)
{
    struct func_8013BFB8_Struct2 *inner;
    u16 id;
    u8 result;

    inner = ((struct func_8013BFB8_Struct *)arg0)->unk5C;
    id = inner->unkE;
    switch (((func_8013C3CC_G *)D_801BBBF0)->unk350) {
    case 0x10:
        result = 4;
        break;
    case 0x30:
    case 0x40:
    case 0x50:
        if (id == 0x36) {
            result = 4;
        } else {
            result = 5;
        }
        break;
    case 0x20:
    case 0x60:
    default:
        result = 2;
        break;
    }
    if ((((func_8013C3CC_G *)D_801BBBF0)->unk34E == 0) ||
        (func_8013C244((struct func_8013C244_Obj *)arg0) == 0)) {
        result = 2;
        inner->unkA0 = 1;
    } else if (--inner->unkA0 != 0) {
        return result;
    } else {
        inner->unkA0 = 3;
    }
    if ((id == 0x141) || (id == 0x142)) {
        func_8012D894(arg0, D_8017D1D4[0], D_8017D1D4[result]);
    } else {
        if ((arg1[1] & 0xFF) == 0) {
            return result;
        }
        func_8012D844(arg0, arg1[0], arg1[result]);
    }
    return result;
}
