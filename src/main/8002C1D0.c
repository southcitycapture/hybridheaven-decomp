#include "common.h"

#define func_800268C0 func_800268C0__func_8002C1D0
#define func_8002CD2C func_8002CD2C__func_8002C1D0
#define func_8002CDD4 func_8002CDD4__func_8002C1D0
#define func_8002CE7C func_8002CE7C__func_8002C1D0
#define func_8002CF08 func_8002CF08__func_8002C1D0
#define func_8002CF5C func_8002CF5C__func_8002C1D0
#define func_8002CFB0 func_8002CFB0__func_8002C1D0
#define func_8002D000 func_8002D000__func_8002C1D0
#define func_8002DDB0 func_8002DDB0__func_8002C1D0
#define func_8002E3C8 func_8002E3C8__func_8002C1D0
#define func_8002EB40 func_8002EB40__func_8002C1D0
#define func_8002F010 func_8002F010__func_8002C1D0
#define func_8003089C func_8003089C__func_8002C1D0
#define func_80034A10 func_80034A10__func_8002C1D0
#define func_80034E40 func_80034E40__func_8002C1D0
extern void func_800268C0(s32, void *);

struct func_8002C1D0_StructB {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 padC[4];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 unk1C;
};
struct func_8002C1D0_StructN {
    u8 pad0[8];
    s32 unk8;
    u8 *unkC;
    u8 unk10[0x58 - 0x10];
    u8 unk58[0x8C - 0x58];
    u8 unk8C[0xDC - 0x8C];
};
struct func_8002C1D0_StructA {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    struct func_8002C1D0_StructN *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    void *unk2C;
    u8 *unk30;
    u8 *unk34;
    u8 *unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
};
extern void func_8002CF08(u8 *, u8 *, s32);
extern void func_8002CF5C(u8 *, u8 *, s32);
extern void func_8002CFB0(u8 *);
extern void func_8002D000(u8 *, s32, u8 *);
extern void func_8002DDB0(u8 *, s32, u8 *);
extern void func_8002E3C8(u8 *, s32, u8 *);
extern void func_8002EB40(u8 *, s32, u8 *);
extern void func_8002F010(u8 *, s32, s32);
extern void func_8003089C(u8 *, s32, u8 *);
extern void func_8002CD2C(u8 *, s32);
extern void func_8002CDD4(u8 *, s32, s32);
extern void func_8002CE7C(u8 *, s32);
extern u8 *func_80034A10(s32, s32, s32, s32, s32);
extern void func_80034E40(void *, s32, void *, s32);

void func_8002C1D0(struct func_8002C1D0_StructA *arg0, struct func_8002C1D0_StructB *arg1) {
    s32 s4;
    s32 s7;
    u8 *v1;
    u8 *s0;
    u8 *n;
    struct func_8002C1D0_StructN *e;
    u8 *sp5C;
    s32 pad1;
    s32 pad2;

    s7 = arg1->unk14;
    arg0->unk0 = 0;
    arg0->unk3C = arg1->unk4;
    arg0->unk20 = 0;
    arg0->unk1C = 0;
    arg0->unk44 = arg1->unk18;
    arg0->unk48 = 0xA0;
    arg0->unk24 = arg1->unk10;
    sp5C = func_80034A10(0, 0, s7, 1, 0x1C);
    func_8002CFB0(sp5C);
    arg0->unk38 = sp5C;
    arg0->unk34 = func_80034A10(0, 0, s7, 1, 0x4C);
    arg0->unk40 = 1;
    func_8002CF08(arg0->unk34, func_80034A10(0, 0, s7, arg1->unk4, 4), arg1->unk4);
    arg0->unk30 = func_80034A10(0, 0, s7, 1, 0x20);
    func_8002CF5C(arg0->unk30, func_80034A10(0, 0, s7, arg1->unk4, 4), arg1->unk4);
    if (arg1->unk1C != 0) {
        func_80034E40(arg0, 0, arg1, s7);
    } else {
        func_8002D000(arg0->unk30, 2, arg0->unk34);
    }
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    n = func_80034A10(0, 0, s7, arg1->unk4, 0xDC);
    s4 = 0;
    s0 = n;
    for (s4 = 0; s4 < arg1->unk4; s4++) {
        e = &((struct func_8002C1D0_StructN *)s0)[s4];
        func_800268C0((s32)e, &arg0->unk4);
        e->unk8 = 0;
        func_8002CDD4(e->unk10, arg0->unk24, s7);
        func_8002F010(e->unk10, 1, 0);
        func_8002CE7C(e->unk58, s7);
        func_8002EB40(e->unk58, 1, e->unk10);
        func_8002CD2C(e->unk8C, s7);
        func_8002E3C8(e->unk8C, 1, e->unk58);
        func_8002DDB0(arg0->unk34, 2, e->unk8C);
        e->unkC = e->unk8C;
    }
    s4 = 0;
    func_8003089C(sp5C, 1, arg0->unk30);
    v1 = func_80034A10(0, 0, s7, arg1->unk8, 0x1C);
    arg0->unk2C = 0;
    if (arg1->unk8 > 0) {
        do {
            s4 += 1;
            *(void **)v1 = arg0->unk2C;
            arg0->unk2C = v1;
            v1 += 0x1C;
        } while (s4 < arg1->unk8);
    }
    arg0->unk28 = s7;
}
#undef func_800268C0
#undef func_8002CD2C
#undef func_8002CDD4
#undef func_8002CE7C
#undef func_8002CF08
#undef func_8002CF5C
#undef func_8002CFB0
#undef func_8002D000
#undef func_8002DDB0
#undef func_8002E3C8
#undef func_8002EB40
#undef func_8002F010
#undef func_8003089C
#undef func_80034A10
#undef func_80034E40

#define D_800498F0 D_800498F0__func_8002C4D0
#define func_8002C6A0_Struct func_8002C6A0_Struct__func_8002C4D0
#define func_8002C6E8 func_8002C6E8__func_8002C4D0
#define func_8002C780 func_8002C780__func_8002C4D0
#define func_8002C780_Struct func_8002C780_Struct__func_8002C4D0
#define func_8002C7F4 func_8002C7F4__func_8002C4D0
#define func_8002C7F4_Node func_8002C7F4_Node__func_8002C4D0
#define func_8002C7F4_Root func_8002C7F4_Root__func_8002C4D0
struct func_8002C6A0_Struct {
    u8 pad[0x2C];
    struct func_8002C6A0_Struct *unk2C;
};
extern struct func_8002C6A0_Struct *D_800498F0;
extern void func_8002C6E8(void *arg0);
struct func_8002C780_Struct {
    u8 pad[0x44];
    s32 unk44;
};
extern s32 func_8002C780(struct func_8002C780_Struct *arg0, s32 arg1);
struct func_8002C7F4_Node {
    struct func_8002C7F4_Node *next;
    u8 pad[0xC];
    s32 key;
};
struct func_8002C7F4_Root {
    struct func_8002C7F4_Node *head;
    u8 pad[0x1C];
    s32 base;
};
extern s32 func_8002C7F4(struct func_8002C7F4_Root *arg0, struct func_8002C7F4_Node **arg1);

struct func_8002C4D0_StructG {
    u32 w0;
    u32 w1;
};
struct func_8002C4D0_StructV;
struct func_8002C4D0_StructV {
    u8 pad0[4];
    struct func_8002C4D0_StructG *(*handler)(struct func_8002C4D0_StructV *, s16 *, s32, s32, struct func_8002C4D0_StructG *);
    s32 (*setParam)(struct func_8002C4D0_StructV *, s32, void *);
};
struct func_8002C4D0_StructN {
    u8 pad0[8];
    s32 (*handler)(struct func_8002C4D0_StructN *);
    u8 padC[4];
    s32 samplesLeft;
};
struct func_8002C4D0_Struct {
    s32 head;
    u8 pad4[0x18];
    s32 paramSamples;
    s32 curSamples;
    u8 pad24[0x14];
    struct func_8002C4D0_StructV *outputFilter;
    u8 pad3C[0xC];
    s32 maxOutSamples;
};

struct func_8002C4D0_StructG *func_8002C4D0(struct func_8002C4D0_StructG *cmdList, s32 *cmdLen, s16 *outBuf, s32 outLen) {
    struct func_8002C4D0_StructN *client;
    struct func_8002C4D0_StructV *output;
    struct func_8002C4D0_Struct *drvr = (struct func_8002C4D0_Struct *)D_800498F0;
    s16 tmp = 0;
    struct func_8002C4D0_StructG *cmdlEnd = cmdList;
    struct func_8002C4D0_StructG *cmdPtr;
    s32 nOut;
    s16 *lOutBuf = outBuf;

    if (drvr->head == 0) {
        *cmdLen = 0;
        return cmdList;
    }

    for (drvr->paramSamples = func_8002C7F4((void *)drvr, (void *)&client);
         drvr->paramSamples - drvr->curSamples < outLen;
         drvr->paramSamples = func_8002C7F4((void *)drvr, (void *)&client)) {
        drvr->paramSamples &= ~0xf;
        client->samplesLeft += func_8002C780((void *)drvr, (*client->handler)(client));
    }

    drvr->paramSamples &= ~0xf;

    while (outLen > 0) {
        nOut = (drvr->maxOutSamples < outLen) ? drvr->maxOutSamples : outLen;

        cmdPtr = cmdlEnd;
        {
            struct func_8002C4D0_StructG *_a = cmdPtr++;
            _a->w0 = ((u32)(((u32)(7) & ((0x01 << (8)) - 1)) << (24)));
            _a->w1 = ((u32)(((u32)(0) & ((0x01 << (8)) - 1)) << (24))) | ((u32)(((u32)(0) & ((0x01 << (24)) - 1)) << (0)));
        }
        output = drvr->outputFilter;
        (*output->setParam)(output, 6, lOutBuf);
        cmdlEnd = (*output->handler)(output, &tmp, nOut, drvr->curSamples, cmdPtr);

        outLen -= nOut;
        lOutBuf += nOut << 1;
        drvr->curSamples += nOut;
    }
    *cmdLen = (s32)(cmdlEnd - cmdList);

    func_8002C6E8(drvr);

    return cmdlEnd;
}
#undef D_800498F0
#undef func_8002C6A0_Struct
#undef func_8002C6E8
#undef func_8002C780
#undef func_8002C780_Struct
#undef func_8002C7F4
#undef func_8002C7F4_Node
#undef func_8002C7F4_Root


struct func_8002C6A0_Struct {
    u8 pad[0x2C];
    struct func_8002C6A0_Struct *unk2C;
};

extern struct func_8002C6A0_Struct *D_800498F0;

struct func_8002C6A0_Struct *func_8002C6A0(void) {
    struct func_8002C6A0_Struct *base;
    struct func_8002C6A0_Struct *node;
    struct func_8002C6A0_Struct *ret;

    ret = NULL;
    base = D_800498F0;
    node = base->unk2C;
    if (node != NULL) {
        ret = node;
        base->unk2C = *(struct func_8002C6A0_Struct **)node;
        *(struct func_8002C6A0_Struct **)node = NULL;
    }
    return ret;
}


struct func_8002C6D0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};


void func_8002C6D0(s32 *arg0) {
    struct func_8002C6D0_Struct *temp_v0;

    temp_v0 = D_800498F0;
    *arg0 = temp_v0->unk2C;
    temp_v0->unk2C = (s32)arg0;
}


extern void func_80026890(s32);
extern void func_800268C0(s32, void *);

void func_8002C6E8(void *arg0) {
    s32 var_s0;

    var_s0 = *(s32 *)((u8 *)arg0 + 0x14);
    if (var_s0 != 0) {
        do {
            func_80026890(var_s0);
            func_800268C0(var_s0, (u8 *)arg0 + 4);
            var_s0 = *(s32 *)((u8 *)arg0 + 0x14);
        } while (var_s0 != 0);
    }
}



void func_8002C748(s32 arg0, s32 arg1) {
    func_80026890(arg1);
    func_800268C0(arg1, arg0 + 0x14);
}



struct func_8002C780_Struct {
    u8 pad[0x44];
    s32 unk44;
};

s32 func_8002C780(struct func_8002C780_Struct *arg0, s32 arg1) {
    f32 tmp;

    tmp = ((f64) ((f32) arg1 * (f32) arg0->unk44) / 1000000.0) + 0.5;
    return (s32) tmp;
}


s32 func_8002C7CC(struct func_8002C780_Struct *arg0, s32 arg1) {
    return (s64)(func_8002C780(arg0, arg1) & ~0xF);
}


struct func_8002C7F4_Node {
    struct func_8002C7F4_Node *next;
    u8 pad[0xC];
    s32 key;
};

struct func_8002C7F4_Root {
    struct func_8002C7F4_Node *head;
    u8 pad[0x1C];
    s32 base;
};

s32 func_8002C7F4(struct func_8002C7F4_Root *arg0, struct func_8002C7F4_Node **arg1) {
    struct func_8002C7F4_Node *node;
    s32 best;

    *arg1 = NULL;
    best = 0x7FFFFFFF;
    node = arg0->head;
    if (node != NULL) {
        do {
            if ((node->key - arg0->base) < best) {
                *arg1 = node;
                best = node->key - arg0->base;
            }
            node = node->next;
        } while (node != NULL);
    }
    return (*arg1)->key;
}

