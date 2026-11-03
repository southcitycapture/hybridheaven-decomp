# Credits

## Goemon's Great Adventure decomp (CC0-1.0)

Hybrid Heaven and Goemon's Great Adventure (Mystical Ninja 2) are both by KCE Osaka and share an
engine: the sound driver, audio manager, heap, file loader ("Nisitenma-Ichigo" file system), PIC
image decoder, LZ ROM decoder and maths helpers are the same code. The
[Goemon's Great Adventure decomp](https://github.com/PandaPandel/Goemons-Great-Adventure-Decomp)
is released under CC0-1.0 (public domain). We use it as follows (Task 25):

- `include/gga/snd.h`, `heap.h`, `file.h`, `audio.h`, `pic.h`: its type definitions, adapted where
  HH differs (for example HH's `SndTrack` is 0xD8 bytes, GGA's 0xDC) and with libultra types made
  opaque. Each header says which HH functions confirm it.
- `queue/gga_names.tsv`: GGA names for 165 HH functions (160 matched, 5 not yet), with similarity and evidence. The names
  appear as `/* GGA: name */` comments above the matched definitions; HH symbols are not renamed.
- Templates: GGA's C, mapped to HH's symbols, matched 8 HH functions (heapInit, trkUpdate,
  sndServeRequests, sndCmdInstrumentSetup, `__amMain`, amCreateAudioMgr, sndStartSlide, mathSinCos).

Thanks to its authors.
