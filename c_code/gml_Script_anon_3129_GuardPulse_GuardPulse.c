// gml_Script_anon_3129_GuardPulse_GuardPulse @ 0x1402929c0

undefined8 *
gml_Script_anon_3129_GuardPulse_GuardPulse(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___99@anon@2703@GuardPulse@GuardPulse";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x65;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddde30) {
    _Init_thread_header(&DAT_141ddde30);
    if (DAT_141ddde30 == -1) {
      DAT_141ddde20 = FUN_140e63aa0(DAT_141a58120);
      _Init_thread_footer(&DAT_141ddde30);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddde20);
  local_18 = 0x65;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58020);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

