// gml_Script___ol_cache @ 0x1400ecba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script___ol_cache(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___36@___struct___33@__ol_cache@__scr_outline";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x1d;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddca3c) {
    _Init_thread_header(&DAT_141ddca3c);
    if (DAT_141ddca3c == -1) {
      DAT_141ddcb60 = FUN_140e63aa0(DAT_141a04998);
      _Init_thread_footer(&DAT_141ddca3c);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddcb60);
  local_18 = 0x1e;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04488);
  if (puVar1 != &DAT_141dcb378) {
    local_38 = _DAT_141dcb378;
    uStack_34 = uRam0000000141dcb37c;
    uStack_30 = uRam0000000141dcb380;
    uStack_2c = DAT_141dcb384;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x23;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a048c8);
  if (puVar1 != &DAT_141dcb368) {
    local_38 = _DAT_141dcb368;
    uStack_34 = uRam0000000141dcb36c;
    uStack_30 = uRam0000000141dcb370;
    uStack_2c = DAT_141dcb374;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

