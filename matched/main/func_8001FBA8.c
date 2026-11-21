#include "common.h"
extern u32 D_80047950;
extern s32 D_80091BD0;
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

typedef struct GgaOSScClient { struct GgaOSScClient *next; void *msgQ; } GgaOSScClient;
extern u8 D_8005C4B0[];          /* GGA gMainSched */
void func_80000934(void *sc, GgaOSScClient *c, void *msgQ);
s32 func_800006F4(void *sc);
void func_800268E4(void *g);
s32 func_800266B0(void *mq, void **msg, s32 flag); /* osRecvMesg */

/* GGA: __amMain */
void func_8001FBA8(void *arg) {
    u8 done = 0;
    GgaAudioMsg *msgs[2];
    GgaAudioInfo *lastInfo = NULL;
    GgaOSScClient client;
    s32 type;

    func_80000934(D_8005C4B0, &client, D_80091BD8.audioFrameMsgQ);
    D_80091BD0 = func_800006F4(D_8005C4B0);
    while (!done) {
        func_800266B0(D_80091BD8.audioFrameMsgQ, msgs, 1);
        type = msgs[0]->gen.type;
        switch (type) {
            case 1:
                if (func_8001FD14((void *) D_80091BD8.audioInfo[D_80047950 % 3], (void *) lastInfo)) {
                    func_800266B0(D_80091BD8.audioReplyMsgQ, msgs, 1);
                    func_8001FEBC((s32) msgs[0]->done.info);
                    lastInfo = msgs[0]->done.info;
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
