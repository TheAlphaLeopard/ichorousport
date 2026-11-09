// gml_Script_anon_2632_GuardPulse_GuardPulse @ 0x1402923b0

undefined8 *
gml_Script_anon_2632_GuardPulse_GuardPulse(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___98@anon@2496@GuardPulse@GuardPulse";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x57;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddde18) {
    _Init_thread_header(&DAT_141ddde18);
    if (DAT_141ddde18 == -1) {
      DAT_141ddde28 = FUN_140e63aa0(DAT_141a58030);
      _Init_thread_footer(&DAT_141ddde18);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddde28);
  local_18 = 0x57;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58020);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

