#ifndef GGA_AUDIO_H
#define GGA_AUDIO_H

/* The audio manager (GGA src/audio.c, include/audio.h): libultra's sample audio manager as Konami
 * built it. libultra types are opaque byte arrays here (HH has no libultra headers).
 * From the Goemon's Great Adventure decomp, CC0-1.0,
 * https://github.com/PandaPandel/Goemons-Great-Adventure-Decomp (same studio, KCE Osaka, and engine).
 * Confirmed in HH by main/func_8001F8A0 (= amCreateAudioMgr) and main/func_8001FBA8 (= __amMain).
 * HH addresses: __am = D_80091BD8, sched_cmdQ = D_80091BD0, audFrameCt = D_80047950,
 * dmaState = D_80096020, dmaBuffs = D_80096030, minFrameSize/frameSize/maxFrameSize/maxRSPCmds =
 * D_8009633C/D_80096340/D_80096344/D_80096348, audDMAMessageQ = D_80096950, its buffer D_80096968.
 * HH's amCreateAudioMgr ends after osStartThread (GGA then calls osCartRomInit). */

#include "common.h"

typedef struct AmConfig {
    /* 0x0 */ u32 outputRate;
    /* 0x4 */ u32 framesPerField;
    /* 0x8 */ u32 maxACMDSize;
} AmConfig;

typedef union AudioMsg {
    struct {
        s16 type;
    } gen;
    struct {
        s16 type;
        struct AudioInfo *info;
    } done;
} AudioMsg;

typedef struct AudioInfo {
    /* 0x00 */ s16 *data;        /* the output buffer */
    /* 0x04 */ s16 frameSamples; /* samples made this frame */
    /* 0x06 */ s16 pad6;
    /* 0x08 */ u8 task[0x58];    /* OSScTask */
    /* 0x60 */ AudioMsg msg;     /* the done message */
} AudioInfo; /* size 0x68 */

typedef struct AMDMABuffer {
    /* 0x00 */ struct AMDMABuffer *next, *prev; /* ALLink */
    /* 0x08 */ u32 startAddr;
    /* 0x0C */ u32 lastFrame;
    /* 0x10 */ char *ptr;
} AMDMABuffer; /* size 0x14 */

typedef struct AMDMAState {
    /* 0x0 */ u8 initialized;
    /* 0x4 */ AMDMABuffer *firstUsed;
    /* 0x8 */ AMDMABuffer *firstFree;
} AMDMAState;

typedef struct AMAudioMgr {
    /* 0x000 */ void *ACMDList[2];
    /* 0x008 */ AudioInfo *audioInfo[3];
    /* 0x018 */ u64 thread[0x1B0 / 8];       /* OSThread */
    /* 0x1C8 */ u8 audioFrameMsgQ[0x18];     /* OSMesgQueue */
    /* 0x1E0 */ void *audioFrameMsgBuf[64];
    /* 0x2E0 */ u8 audioReplyMsgQ[0x18];     /* OSMesgQueue */
    /* 0x2F8 */ void *audioReplyMsgBuf[64];
    /* 0x3F8 */ u8 g[4];                     /* ALGlobals (size not needed here) */
} AMAudioMgr;

#endif
