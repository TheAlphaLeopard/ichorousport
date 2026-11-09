// gml_Script_anon_21361_DefineTrinkets_TRINKETSINIT @ 0x1405fa350

undefined8 *
gml_Script_anon_21361_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___261@anon@20358@DefineTrinkets@TRINKETSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x346;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0c50) {
    _Init_thread_header(&DAT_141de0c50);
    if (DAT_141de0c50 == -1) {
      DAT_141de0c48 = FUN_140e63aa0(DAT_1419ffcf8);
      _Init_thread_footer(&DAT_141de0c50);
    }
  }
  FUN_140e643a0(param_1,DAT_141de0c48);
  local_18 = 0x346;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5da8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x403e000000000000;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

