// gml_Script_anon_17688_INIT @ 0x1402ea700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_anon_17688_INIT(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_28 = DAT_141dc7a50;
  local_20 = "gml_Script_anon@17366@INIT";
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x29e;
  if (param_3 != (undefined8 *)&DAT_141dcf398) {
    local_38 = _DAT_141dcf398;
    uStack_34 = uRam0000000141dcf39c;
    uStack_30 = uRam0000000141dcf3a0;
    uStack_2c = DAT_141dcf3a4;
    FUN_140041b80(param_3,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

