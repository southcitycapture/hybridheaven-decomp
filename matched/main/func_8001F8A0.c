#include "common.h"
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
