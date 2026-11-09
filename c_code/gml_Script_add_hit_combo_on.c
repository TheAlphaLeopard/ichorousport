// gml_Script_add_hit_combo_on @ 0x1402115d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_add_hit_combo_on
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  uint uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script__state_template";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  uVar2 = 0;
  *param_3 = 0;
  local_18 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_2c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_30 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) == 0) {
    local_38 = *param_5;
  }
  else {
    FUN_1400419b0(&local_38);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddaf4) &&
     (_Init_thread_header(&DAT_141dddaf4), DAT_141dddaf4 == -1)) {
    _DAT_141dddb0c = 0;
    _DAT_141dddb00 = 0x4000000000000000;
    _DAT_141dddb20 = 0;
    _DAT_141dddb14 = 0;
    _DAT_141dddb24 = 1;
    _DAT_141dddb34 = 0;
    _DAT_141dddb28 = 0x3ff0000000000000;
    _DAT_141dddb38 = 2;
    _DAT_141dddb48 = 0;
    _DAT_141dddb3c = 0x4008000000000000;
    _DAT_141dddb4c = 3;
    atexit((_func_5014 *)&LAB_14146f090);
    _Init_thread_footer(&DAT_141dddaf4);
  }
  do {
    iVar1 = FUN_140e851f0(&DAT_141dddb00 + (longlong)(int)uVar2 * 0x14,&local_38,DAT_141955260,0);
    if (iVar1 == 0) {
      iVar1 = (&DAT_141dddb10)[(longlong)(int)uVar2 * 5];
      if (iVar1 == 0) {
        local_18 = 7;
      }
      else if (iVar1 == 1) {
        local_18 = 0xb;
      }
      else if (iVar1 == 2) {
        local_18 = 0xf;
      }
      else if (iVar1 == 3) {
        local_18 = 0x13;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

