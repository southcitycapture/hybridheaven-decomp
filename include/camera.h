#ifndef HH_CAMERA_H
#define HH_CAMERA_H

#include "common.h"

/* Camera operation with original __FILE__/__LINE__ metadata. Returns a status.
 * The ten floats occupy single o32 stack words: this is NOT a variadic printf.
 * Opt-in while older registry snippets still have private, incompatible decls.
 */
s32 func_8011AAF4(void *file, s32 line, void *owner, s32 mode, s32 operation,
                  f32 a5, f32 a6, f32 a7, f32 a8, f32 a9,
                  f32 a10, f32 a11, f32 a12, f32 a13, f32 a14,
                  s32 a15, s32 a16);

#endif
