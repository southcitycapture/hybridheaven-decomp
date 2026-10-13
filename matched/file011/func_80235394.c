#include "context.h"

typedef struct func_80235394_Entry {
    s16 unk0;
    s16 unk2;
    s32 unk4;
} func_80235394_Entry;

typedef struct func_80235394_Struct {
    u8 pad0[0xA2];
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
} func_80235394_Struct;

#define ARG0_80235394 ((func_80235394_Struct *)arg0)

struct func_802380EC_Struct;
extern struct func_802348C8_StructNode **D_80240864;
extern struct func_802348C8_StructNode **D_80240868;
extern s32 D_8024086C;
extern s32 D_80240870;
extern u8 D_80240550[];
extern u8 D_80240558[];
extern u8 D_80240828[];
extern void func_80006088(s32);
extern void func_800317D0(void *, void *, s32);
extern void func_80147D60(s32, s32);
extern void func_8001B204(s32, s16, s16, void *, s32, s32, s32);

void func_80235394(struct func_802380EC_Struct *arg0, s32 arg1, s32 arg2) {
    s16 x;
    s16 b;
    s16 mid;
    s16 off;
    s16 step;
    s16 pos;
    s8 i;
    s8 r;
    s32 stride;
    s16 half;

    x = D_80240864[0]->unk30->unk0;
    half = D_80240864[0]->unk30->unk4 / 2;
    if (ARG0_80235394->unkA3 == 1) {
        b = D_80240864[0]->unk30->unk0;
    } else {
        b = D_80240864[1]->unk30->unk0;
    }
    mid = (x + b) / 2 + half;
    off = x + half - mid;
    if (mid == 160) {
        for (i = 0; i < ARG0_80235394->unkA4; i++) {
            func_80006088(((s32 *)D_8024086C)[i]);
            func_80006088(((s32 *)D_80240870)[i]);
        }
        ARG0_80235394->unkA4 = ARG0_80235394->unkA3;
        r = func_80006214(arg0);
        D_8024086C = (r - ARG0_80235394->unkA4 * 2) * 4 + arg1;
        D_80240870 = (r - ARG0_80235394->unkA4) * 4 + arg1;
        ARG0_80235394->unkA2 = 0;
        func_800317D0(D_802407E8, D_80240828, 60);
        return;
    }
    func_80147D60(10, mid);
    step = (160 - mid) / 3;
    if ((step < 0 ? -step : step) < 10) {
        step = step / (step < 0 ? -step : step) * 10;
    }
    stride = 12;
    for (i = 0; i < ARG0_80235394->unkA4; i++) {
        ((struct func_802348C8_StructNode **)D_8024086C)[i]->unk30->unk0 += step;
        ((struct func_802348C8_StructNode **)D_80240870)[i]->unk30->unk0 += step;
        if ((u8)arg2 & 1) {
            ((func_80235394_Entry *)(D_80240828 + i * stride))->unk0 += step;
            func_8001B204((u8)(i + 5), ((func_80235394_Entry *)(D_80240828 + i * stride))->unk0 + 1000,
                          ((func_80235394_Entry *)(D_80240828 + i * stride))->unk2, D_80240550, 0x82, 4,
                          ((func_80235394_Entry *)(D_80240828 + i * stride))->unk4);
        }
    }
    i = 0;
    stride = 12;
    if (ARG0_80235394->unkA3 > 0) {
        pos = mid + step;
        do {
            D_80240864[i]->unk30->unk0 += step;
            D_80240868[i]->unk30->unk0 += step;
            if (pos >= 0x97 && pos < 0xAA) {
                if (i == 1) {
                    off *= -1;
                }
                D_80240864[i]->unk30->unk0 = off - half + 160;
                D_80240868[i]->unk30->unk0 = off - D_80240868[i]->unk30->unk4 / 2 + 160;
                if ((u8)arg2 & 2) {
                    ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk0 = 160 - step;
                }
            }
            if ((u8)arg2 & 2) {
                ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk0 += step;
                func_8001B204((u8)i, ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk0 + 1000,
                              ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk2, D_80240558, 0x82, 4,
                              ((func_80235394_Entry *)(D_802407E8 + i * stride))->unk4);
            }
            i++;
        } while (i < ARG0_80235394->unkA3);
    }
}
