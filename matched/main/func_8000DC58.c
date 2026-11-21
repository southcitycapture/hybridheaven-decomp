#include "common.h"
typedef struct func_8000D100_StructOut {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u16 unk14;
    u16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;
} func_8000D100_StructOut;
typedef struct func_8000D100_StructArg0 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x2C - 0x23];
    func_8000D100_StructOut *unk2C;
} func_8000D100_StructArg0;


typedef struct func_8000DC58_StructElem {
    u32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_8000DC58_StructElem;

u8 func_8000DC58(func_8000D100_StructArg0 *arg0) {
    func_8000DC58_StructElem *rec;
    u8 ret;
    u32 cnt;

    if (arg0->unk2C->unk1C != arg0->unk2C->unk20) {
        arg0->unk2C->unk1C = arg0->unk2C->unk20;
        arg0->unk2C->unk18 = 0;
        arg0->unk2C->unk19 = 0;
        arg0->unk2C->unk1A = 0;
    }
    rec = (func_8000DC58_StructElem *)(arg0->unk2C->unk1C + arg0->unk2C->unk19 * 8);
    arg0->unk2C->unk2C = rec->unk0;
    arg0->unk2C->unk18++;
    if (arg0->unk2C->unk18 < rec->unk4) {
        ret = 0;
    } else {
        arg0->unk2C->unk18 = 0;
        rec++;
        cnt = rec->unk4;
        switch (cnt) {
        default:
            arg0->unk2C->unk19++;
            ret = 0;
            break;
        case 0xFF:
            ret = 0x81;
            break;
        case 0xFE:
            arg0->unk2C->unk1A++;
            if ((rec->unk0 == 0) || ((cnt = arg0->unk2C->unk1A) < rec->unk0)) {
                arg0->unk2C->unk19 = 0;
                ret = arg0->unk2C->unk1A;
            } else {
                ret = cnt | 0x80;
                arg0->unk2C->unk1A--;
            }
            break;
        case 0xFD:
            cnt = rec->unk0;
            arg0->unk2C->unk20 = cnt;
            arg0->unk2C->unk1C = cnt;
            arg0->unk2C->unk19 = 0;
            arg0->unk2C->unk1A = 0;
            ret = 0xFF;
            break;
        }
    }
    return ret;
}
