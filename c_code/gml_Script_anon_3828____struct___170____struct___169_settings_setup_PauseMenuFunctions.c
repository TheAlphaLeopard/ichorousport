// gml_Script_anon_3828____struct___170____struct___169_settings_setup_PauseMenuFunctions @ 0x14041e6f0

undefined8 *
gml_Script_anon_3828____struct___170____struct___169_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___168@___struct___167@settings_setup@PauseMenuFunctions";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x8d;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddec98) {
    _Init_thread_header(&DAT_141ddec98);
    if (DAT_141ddec98 == -1) {
      DAT_141dded88 = FUN_140e63aa0(DAT_1419f6968);
      _Init_thread_footer(&DAT_141ddec98);
    }
  }
  FUN_140e643a0(param_1,DAT_141dded88);
  local_18 = 0x8e;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a467b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script____struct___167_settings_setup_PauseMenuFunctions,param_1);
  if (&local_48 != puVar1) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

