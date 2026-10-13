#include "context.h"

typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x62 - 0x4];
    u8 unk62;
    u8 unk63;
    u8 unk64;
    u8 unk65;
    u16 unk66;
    u8 pad68[0x74 - 0x68];
    u16 unk74;
    u8 pad76[0x82 - 0x76];
    u16 unk82;
    u16 unk84;
    u8 unk86;
    u8 unk87;
} func_802322E8_Struct;

typedef struct {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    u8 pad4[2];
} func_802322E8_Entry;

typedef struct {
    u8 b[12];
} func_802322E8_Copy;

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_802322E8_Flags;

extern void func_80379410(u8 *, s32, void *);
extern struct func_80233288_Struct D_80183CE0[];
extern u8 D_8017DC50[];
extern u8 D_8017DC5C[];
extern u8 D_8017DC68[];
extern u8 D_8017DC74[];
extern u8 D_8017DC96[];
extern func_802322E8_Flags D_8017DD7C;

#define DC40 ((func_802322E8_Struct *)&D_8017DC40)
#define SRC ((func_802322E8_Entry *)(D_801BBBF0 + 0x4F4))
#define DST ((func_802322E8_Entry *)D_80183CE0)
#define COPY(x) (*(func_802322E8_Copy *)(x))

void func_802322E8(void) {
    u8 i;
    u32 v;

    DC40->unk2 = *(s16 *)(D_801BBBF0 + 0x44E);
    DC40->unk62 = D_801BBBF0[0x4EE];
    DC40->unk63 = D_801BBBF0[0x4EF];
    DC40->unk64 = D_801BBBF0[0x4F0];
    DC40->unk65 = D_801BBBF0[0x4F1];
    for (i = 0; i < 0x56; i++) {
        DST[i].unk2 = SRC[i].unk2;
        DST[i].unk0 = SRC[i].unk0;
        if (DST[i].unk0 == 2) {
            DST[i].unk0 = 1;
            DST[i].unk2 = 0;
        }
    }
    COPY(D_8017DC96) = COPY(D_801BC03C + 0x2C4);
    COPY(D_8017DC50) = COPY(D_801BC03C + 0x82);
    COPY(D_8017DC5C) = COPY(D_801BC03C + 0x8E);
    COPY(D_8017DC68) = COPY(D_801BC03C + 0x6A);
    COPY(D_8017DC74) = COPY(D_801BC03C + 0x76);
    DC40->unk82 += D_801BBBF0[0x749];
    DC40->unk66 += D_801BBBF0[0x748];
    if (DC40->unk66 == 0) {
        DC40->unk86 = 0;
    } else {
        DC40->unk86 = (f32)(u32)DC40->unk82 / (f32)(u32)DC40->unk66 * 100.0f;
    }
    DC40->unk84 += D_801BBBF0[0xAE5];
    DC40->unk74 += D_801BBBF0[0xAE4];
    if (DC40->unk74 == 0) {
        DC40->unk87 = 0;
    } else {
        DC40->unk87 = (f32)(u32)DC40->unk84 / (f32)(u32)DC40->unk74 * 100.0f;
    }
    func_80379410(D_801BC03C, 0, &D_8017DC40);
    if (D_801BBBF0[0xB7D] != 0x26) {
        if (D_801BBBF0[0xB7D] < 8) {
            D_8017DD7C.unk2 |= 1 << D_801BBBF0[0xB7D];
        } else if (D_801BBBF0[0xB7D] < 0x10) {
            D_8017DD7C.unk3 |= 1 << (D_801BBBF0[0xB7D] + 0x18);
        } else if (D_801BBBF0[0xB7D] < 0x18) {
            D_8017DD7C.unk4 |= 1 << (D_801BBBF0[0xB7D] + 0x10);
        } else if (D_801BBBF0[0xB7D] < 0x20) {
            D_8017DD7C.unk5 |= 1 << (D_801BBBF0[0xB7D] + 8);
        } else if (D_801BBBF0[0xB7D] < 0x28) {
            D_8017DD7C.unk6 |= 1 << D_801BBBF0[0xB7D];
        } else if (D_801BBBF0[0xB7D] < 0x30) {
            D_8017DD7C.unk7 |= 1 << (D_801BBBF0[0xB7D] + 0x18);
        }
        if (D_801BBBF0[0xB7D] == 0x28) {
            D_8017DD7C.unk7 |= 3;
        }
    }
}
