// gml_Script_anon_30622____struct___663_gml_Object_oPlayer_Create_0 @ 0x140c19dd0

undefined8 *
gml_Script_anon_30622____struct___663_gml_Object_oPlayer_Create_0
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
  
  local_20 = "gml_Script____struct___662@gml_Object_oPlayer_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x63e;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2e78) {
    _Init_thread_header(&DAT_141de2e78);
    if (DAT_141de2e78 == -1) {
      DAT_141de2c68 = FUN_140e63aa0(DAT_1419f8658);
      _Init_thread_footer(&DAT_141de2e78);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2c68);
  local_18 = 0x640;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcb58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_30549____struct___662_gml_Object_oPlayer_Create_0,param_1)
  ;
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
  local_18 = 0x64b;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script____struct___662_gml_Object_oPlayer_Create_0,param_1);
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
  local_18 = 0x67e;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcdf8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,
                gml_Script____struct___664_anon_30622____struct___663_gml_Object_oPlayer_Create_0,
                param_1);
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

