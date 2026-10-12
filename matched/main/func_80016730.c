#include "context.h"

extern void func_80016B40(s32, s32);
extern s32 D_8008DC94;
extern s32 D_8008DC98;
extern s32 D_8008DFAC;
extern s32 D_8008DFB4;

void func_80016730(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int new_var;
  if ((((arg1 >= 0) && (arg1 < D_8008DC94)) && (arg2 >= 0)) && (D_8008DC98 >= arg2))
  {
    new_var = arg3 & 0x7C0;
 do { *((u16 *) ((D_8008DFAC + ((D_8008DC94 * arg2) * 2)) + (arg1 * 2))) = (((((arg3 & 0x3E) >> 1) << 11) | ((new_var >> 6) << 6)) | (((arg3 & 0xF800) >> 11) * 2)) | (arg3 & 1); } while (0);
    func_80016B40(D_8008DFB4, (D_8008DC94 * arg2) + arg1);
  }
}
