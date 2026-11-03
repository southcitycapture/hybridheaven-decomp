#include "common.h"


extern void func_80030388(s32 a0, s32 a1, s32 a2, f32 a3, f32 f4, f32 f5, f32 f6, f32 f7, f32 s0, f32 s1, f32 s2, f32 s3, f32 s4, f32 s5, f32 s6, f32 s7, f32 s8, f32 s9, s32 s10, s32 s11);

void func_8001F820(void) {
    func_80030388(0, 0, 0, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x20, 0x20);
}

#define D_80091BD8 D_80091BD8__func_8001F8A0
#define D_80096020 D_80096020__func_8001F8A0
#define D_80096030 D_80096030__func_8001F8A0
#define D_8009633C D_8009633C__func_8001F8A0
#define D_80096340 D_80096340__func_8001F8A0
#define D_80096344 D_80096344__func_8001F8A0
#define D_80096348 D_80096348__func_8001F8A0
#define D_80096950 D_80096950__func_8001F8A0
#define D_80096968 D_80096968__func_8001F8A0
#define func_8001FBA8 func_8001FBA8__func_8001F8A0
#define func_80020078 func_80020078__func_8001F8A0
#define func_80020078_Struct func_80020078_Struct__func_8001F8A0
#define func_800268C0 func_800268C0__func_8001F8A0
#define func_8002691C func_8002691C__func_8001F8A0
#define func_80028260 func_80028260__func_8001F8A0
#define func_80030610 func_80030610__func_8001F8A0
#define func_80031670 func_80031670__func_8001F8A0
#define func_80034A10 func_80034A10__func_8001F8A0
#define func_80034C90 func_80034C90__func_8001F8A0
struct func_80020078_Struct {
    u8 unk0;
    u8 pad[3];
    s32 unk4;
    void *unk8;
};
extern struct func_80020078_Struct D_80096020;
extern u32 D_8009633C;
extern u8 D_80096950[];
void *func_80020078(void **arg0);
extern void func_800268C0(void *a0, void *a1);


/* GGA (CC0) audio manager types (src/audio.c, include/audio.h); libultra's are opaque here */
typedef union GgaAudioMsg {
    struct { s16 type; } gen;
    struct { s16 type; struct GgaAudioInfo *info; } done;
} GgaAudioMsg;
typedef struct GgaAudioInfo {
    /* 0x00 */ s16 *data;
    /* 0x04 */ s16 frameSamples;
    /* 0x06 */ s16 pad6;
    /* 0x08 */ u8 task[0x58]; /* OSScTask */
    /* 0x60 */ GgaAudioMsg msg;
} GgaAudioInfo; /* size 0x68 */
typedef struct GgaAMAudioMgr {
    /* 0x000 */ void *ACMDList[2];
    /* 0x008 */ GgaAudioInfo *audioInfo[3];
    /* 0x018 */ u64 thread[0x1B0 / 8];    /* OSThread */
    /* 0x1C8 */ u8 audioFrameMsgQ[0x18];  /* OSMesgQueue */
    /* 0x1E0 */ void *audioFrameMsgBuf[64];
    /* 0x2E0 */ u8 audioReplyMsgQ[0x18];  /* OSMesgQueue */
    /* 0x2F8 */ void *audioReplyMsgBuf[64];
    /* 0x3F8 */ u8 g[1];                  /* ALGlobals */
} GgaAMAudioMgr;
extern GgaAMAudioMgr D_80091BD8; /* GGA __am */
typedef struct GgaAMDMABuffer {
    /* 0x00 */ struct GgaAMDMABuffer *next, *prev; /* ALLink */
    /* 0x08 */ u32 startAddr;
    /* 0x0C */ u32 lastFrame;
    /* 0x10 */ char *ptr;
} GgaAMDMABuffer;
typedef struct GgaALSynConfig {
    u32 maxVVoices, maxPVoices, maxUpdates, dmaproc_pad; /* 0x0-0xC */
    /* 0x10 */ void *dmaproc;
    /* 0x14 */ void *heap;
    /* 0x18 */ s32 outputRate;
} GgaALSynConfig;
typedef struct GgaAmConfig { u32 outputRate; u32 framesPerField; u32 maxACMDSize; } GgaAmConfig;

extern u32 D_80096340;              /* GGA frameSize */
extern u32 D_80096344;              /* GGA maxFrameSize */
extern u32 D_80096348;              /* GGA maxRSPCmds */
extern GgaAMDMABuffer D_80096030[39]; /* GGA dmaBuffs */
extern void *D_80096968[];          /* GGA audDMAMessageBuf */
void func_8001FBA8(void *arg);
s32 func_80031670(u32 rate);
void func_8002691C(void *g, GgaALSynConfig *c);
void *func_80034A10(void *file, s32 line, void *heap, s32 num, s32 size);
void func_80030610(void *mq, void *msg, s32 count);
void func_80028260(void *t, s32 id, void *entry, void *arg, void *sp, s32 pri);
void func_80034C90(void *t);

/* GGA: amCreateAudioMgr (HH has no osCartRomInit at the end) */
void func_8001F8A0(GgaALSynConfig *c, s32 pri, GgaAmConfig *amc) {
    u32 i;
    f32 fsize;

    c->dmaproc = func_80020078;
    c->outputRate = func_80031670(amc->outputRate);
    i = 16;
    do {
        i--;
    } while (i != 0);
    fsize = (f32) amc->framesPerField * c->outputRate / 60;
    D_80096340 = (s32) fsize;
    if (D_80096340 < fsize) {
        D_80096340++;
    }
    if (D_80096340 & 0xF) {
        D_80096340 = (D_80096340 & ~0xF) + 0x10;
    }
    D_8009633C = D_80096340 - 16;
    D_80096344 = D_80096340 + 240 + 16;
    func_8002691C(D_80091BD8.g, c);
    D_80096030[0].prev = NULL;
    D_80096030[0].next = NULL;
    for (i = 0; i < 39 - 1; i++) {
        func_800268C0(&D_80096030[i + 1], &D_80096030[i]);
        D_80096030[i].ptr = func_80034A10(NULL, 0, c->heap, 1, 0xA00);
    }
    D_80096030[i].ptr = func_80034A10(NULL, 0, c->heap, 1, 0xA00);
    for (i = 0; i < 2; i++) {
        D_80091BD8.ACMDList[i] = func_80034A10(NULL, 0, c->heap, 1, amc->maxACMDSize * 8);
    }
    D_80096348 = amc->maxACMDSize;
    for (i = 0; i < 3; i++) {
        D_80091BD8.audioInfo[i] = func_80034A10(NULL, 0, c->heap, 1, sizeof(GgaAudioInfo));
        D_80091BD8.audioInfo[i]->msg.done.type = 2;
        D_80091BD8.audioInfo[i]->msg.done.info = D_80091BD8.audioInfo[i];
        D_80091BD8.audioInfo[i]->data = func_80034A10(NULL, 0, c->heap, 1, 4 * D_80096344);
    }
    func_80030610(D_80091BD8.audioReplyMsgQ, D_80091BD8.audioReplyMsgBuf, 64);
    func_80030610(D_80091BD8.audioFrameMsgQ, D_80091BD8.audioFrameMsgBuf, 64);
    func_80030610(D_80096950, D_80096968, 64);
    func_80028260(D_80091BD8.thread, 3, func_8001FBA8, NULL, &D_80096020, pri);
    func_80034C90(D_80091BD8.thread);
}
#undef D_80091BD8
#undef D_80096020
#undef D_80096030
#undef D_8009633C
#undef D_80096340
#undef D_80096344
#undef D_80096348
#undef D_80096950
#undef D_80096968
#undef func_8001FBA8
#undef func_80020078
#undef func_80020078_Struct
#undef func_800268C0
#undef func_8002691C
#undef func_80028260
#undef func_80030610
#undef func_80031670
#undef func_80034A10
#undef func_80034C90

#define D_80047950 D_80047950__func_8001FBA8
#define D_8005C4B0 D_8005C4B0__func_8001FBA8
#define D_80091BD0 D_80091BD0__func_8001FBA8
#define D_80091BD8 D_80091BD8__func_8001FBA8
#define GgaAMAudioMgr GgaAMAudioMgr__func_8001FBA8
#define GgaAudioInfo GgaAudioInfo__func_8001FBA8
#define GgaAudioMsg GgaAudioMsg__func_8001FBA8
#define func_800006F4 func_800006F4__func_8001FBA8
#define func_80000934 func_80000934__func_8001FBA8
#define func_8001FD14 func_8001FD14__func_8001FBA8
#define func_8001FD14_Struct func_8001FD14_Struct__func_8001FBA8
#define func_8001FEBC func_8001FEBC__func_8001FBA8
#define func_800266B0 func_800266B0__func_8001FBA8
#define func_800268E4 func_800268E4__func_8001FBA8
extern u32 D_80047950;
extern s32 D_80091BD0;
struct func_8001FD14_Struct {
    void *unk0;
    s16 unk4;
    u8 pad6[2];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s32 unk1C;
    void *unk20;
    s32 unk24;
    void *unk28;
    s32 unk2C;
    void *unk30;
    s32 unk34;
    u8 pad38[0x10];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    void *unk58;
    void *unk5C;
};
s32 func_8001FD14(struct func_8001FD14_Struct *arg0, struct func_8001FD14_Struct *arg1);
void func_8001FEBC(s32 arg0);


/* GGA (CC0) audio manager types (src/audio.c, include/audio.h); libultra's are opaque here */
typedef union GgaAudioMsg {
    struct { s16 type; } gen;
    struct { s16 type; struct GgaAudioInfo *info; } done;
} GgaAudioMsg;
typedef struct GgaAudioInfo {
    /* 0x00 */ s16 *data;
    /* 0x04 */ s16 frameSamples;
    /* 0x06 */ s16 pad6;
    /* 0x08 */ u8 task[0x58]; /* OSScTask */
    /* 0x60 */ GgaAudioMsg msg;
} GgaAudioInfo; /* size 0x68 */
typedef struct GgaAMAudioMgr {
    /* 0x000 */ void *ACMDList[2];
    /* 0x008 */ GgaAudioInfo *audioInfo[3];
    /* 0x018 */ u64 thread[0x1B0 / 8];    /* OSThread */
    /* 0x1C8 */ u8 audioFrameMsgQ[0x18];  /* OSMesgQueue */
    /* 0x1E0 */ void *audioFrameMsgBuf[64];
    /* 0x2E0 */ u8 audioReplyMsgQ[0x18];  /* OSMesgQueue */
    /* 0x2F8 */ void *audioReplyMsgBuf[64];
    /* 0x3F8 */ u8 g[1];                  /* ALGlobals */
} GgaAMAudioMgr;
extern GgaAMAudioMgr D_80091BD8; /* GGA __am */
typedef struct GgaOSScClient { struct GgaOSScClient *next; void *msgQ; } GgaOSScClient;
extern u8 D_8005C4B0[];          /* GGA gMainSched */
void func_80000934(void *sc, GgaOSScClient *c, void *msgQ);
s32 func_800006F4(void *sc);
void func_800268E4(void *g);
s32 func_800266B0(void *mq, void **msg, s32 flag); /* osRecvMesg */

/* GGA: __amMain */
void func_8001FBA8(void *arg) {
    s32 pad;
    u8 done = 0;
    GgaAudioMsg *msg;
    GgaAudioInfo *lastInfo = NULL;
    GgaOSScClient client;

    func_80000934(D_8005C4B0, &client, D_80091BD8.audioFrameMsgQ);
    D_80091BD0 = func_800006F4(D_8005C4B0);
    while (!done) {
        func_800266B0(D_80091BD8.audioFrameMsgQ, (void **) &msg, 1);
        switch (msg->gen.type) {
            case 1:
                if (func_8001FD14((void *) D_80091BD8.audioInfo[D_80047950 % 3], (void *) lastInfo)) {
                    func_800266B0(D_80091BD8.audioReplyMsgQ, (void **) &msg, 1);
                    func_8001FEBC((s32) msg->done.info);
                    lastInfo = msg->done.info;
                }
                break;
            case 3:
                break;
            case 0x20:
                done = 1;
                break;
        }
    }
    func_800268E4(D_80091BD8.g);
}
#undef D_80047950
#undef D_8005C4B0
#undef D_80091BD0
#undef D_80091BD8
#undef GgaAMAudioMgr
#undef GgaAudioInfo
#undef GgaAudioMsg
#undef func_800006F4
#undef func_80000934
#undef func_8001FD14
#undef func_8001FD14_Struct
#undef func_8001FEBC
#undef func_800266B0
#undef func_800268E4


extern void func_800200B0(void);
extern s32 func_80028A10(s32);
extern u32 func_80033C60(void);
extern void func_80034F70(s32, s32);
extern s32 func_8002C4D0(s32, s32 *, s32, s16);
extern void func_80026300(s32, void *, s32, s32);
extern void func_800350D0(void);
extern u8 D_800351A0[];
extern u8 D_80036530[];
extern s32 D_80047958;
extern u8 D_8004D910[];
extern s32 D_80091BD0;
extern s32 D_80091BD8[];
extern u8 D_80091EB8[];
extern u32 D_8009633C;
extern s32 D_80096340;

struct func_8001FD14_Struct {
    void *unk0;
    s16 unk4;
    u8 pad6[2];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s32 unk1C;
    void *unk20;
    s32 unk24;
    void *unk28;
    s32 unk2C;
    void *unk30;
    s32 unk34;
    u8 pad38[0x10];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    void *unk58;
    void *unk5C;
};

/* GGA: __amHandleFrameMsg */
s32 func_8001FD14(struct func_8001FD14_Struct *arg0, struct func_8001FD14_Struct *arg1) {
    s32 sp3C;
    s32 sp34[2];
    s32 temp_a3;
    s32 pad[2];

    func_800200B0();
    sp3C = func_80028A10((s32) arg0->unk0);
    if (arg1 != NULL) {
        func_80034F70((s32) arg1->unk0, arg1->unk4 * 4);
    }
    arg0->unk4 = (s16) (((D_80096340 - (func_80033C60() >> 2)) + 0x100) & 0xFFF0);
    if ((u32) arg0->unk4 < D_8009633C) {
        arg0->unk4 = (s16) D_8009633C;
    }
    temp_a3 = func_8002C4D0(D_80091BD8[D_80047958], sp34, sp3C, arg0->unk4);
    if (sp34[0] == 0) {
        return 0;
    }
    arg0->unk8 = 0;
    arg0->unk58 = D_80091EB8;
    arg0->unk5C = (u8 *) arg0 + 0x60;
    arg0->unk48 = D_80091BD8[D_80047958];
    arg0->unk4C = ((temp_a3 - D_80091BD8[D_80047958]) >> 3) * 8;
    arg0->unk18 = 2;
    arg0->unk20 = func_800350D0;
    arg0->unk24 = (s32) (D_800351A0 - (u8 *) func_800350D0);
    arg0->unk1C = 0;
    arg0->unk28 = D_80036530;
    arg0->unk30 = D_8004D910;
    arg0->unk34 = 0x800;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    func_80026300(D_80091BD0, (u8 *) arg0 + 8, 1, temp_a3);
    D_80047958 ^= 1;
    return 1;
}


extern u32 D_8004795C;

void func_8001FEBC(s32 arg0) {
    u32 *flag;

    flag = &D_8004795C;
    if ((func_80033C60() >> 2) == 0) {
        if (D_8004795C == 0) {
            *flag = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FEFC.s")


struct func_80020078_Struct {
    u8 unk0;
    u8 pad[3];
    s32 unk4;
    void *unk8;
};

extern struct func_80020078_Struct D_80096020;
extern u8 D_80096030[];
extern void func_8001FEFC();

/* GGA: __amDmaNew */
void *func_80020078(void **arg0) {
    if (D_80096020.unk0 == 0) {
        D_80096020.unk4 = 0;
        D_80096020.unk8 = D_80096030;
        D_80096020.unk0 = 1;
    }
    *arg0 = &D_80096020;
    return func_8001FEFC;
}


struct func_800200B0_Struct {
    struct func_800200B0_Struct *unk0;
    s32 unk4;
    u8 pad[4];
    s32 unkC;
};

extern void func_800266B0(void *a0, void *a1, s32 a2);
extern void func_80026890(void *a0);
extern void func_800268C0(void *a0, void *a1);
extern u32 D_80047950;
extern u32 D_80047954;
extern u8 D_80096950[];

/* GGA: __clearAudioDMA */
void func_800200B0(void) {
    u32 sp40[2];
    u32 var_s0;
    struct func_800200B0_Struct *var_s0_2;
    struct func_800200B0_Struct *temp_v0;

    var_s0 = 0;
    if (D_80047954 != 0) {
        do {
            func_800266B0(D_80096950, sp40, 0);
            var_s0 += 1;
        } while (var_s0 < D_80047954);
    }
    var_s0_2 = (struct func_800200B0_Struct *) D_80096020.unk4;
    if (var_s0_2 != NULL) {
        do {
            temp_v0 = var_s0_2->unk0;
            if ((u32) (var_s0_2->unkC + 4) < D_80047950) {
                if (var_s0_2 == (struct func_800200B0_Struct *) D_80096020.unk4) {
                    D_80096020.unk4 = (s32) var_s0_2->unk0;
                }
                func_80026890(var_s0_2);
                if (D_80096020.unk8 != NULL) {
                    func_800268C0(var_s0_2, D_80096020.unk8);
                } else {
                    D_80096020.unk8 = var_s0_2;
                    var_s0_2->unk0 = NULL;
                    var_s0_2->unk4 = 0;
                }
            }
            var_s0_2 = temp_v0;
        } while (temp_v0 != NULL);
    }
    D_80047954 = 0;
    D_80047950 += 1;
}

