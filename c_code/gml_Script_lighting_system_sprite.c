// gml_Script_lighting_system_sprite @ 0x1403acd90

undefined8 *
gml_Script_lighting_system_sprite(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_lighting_system";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x122;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddea64) {
    _Init_thread_header(&DAT_141ddea64);
    if (DAT_141ddea64 == -1) {
      DAT_141ddea48 = (longlong *)FUN_140e63aa0(DAT_1419f52b8);
      _Init_thread_footer(&DAT_141ddea64);
    }
  }
  if (DAT_141ddc167 == '\0') {
    FUN_140e64380(DAT_141ddea48,"gml_Script_lighting_system");
    FUN_140e64380(param_1,"gml_Script_lighting_system");
  }
  local_18 = 0x123;
  if (DAT_141ddc167 == '\0') {
    DAT_141ddc167 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddea48 + 0x10))(DAT_141ddea48,DAT_1419f5378);
    FUN_140e609c0(DAT_141ddea48);
    puVar2 = (undefined4 *)gml_Script_lighting_system_tilemap(param_1,param_2,&local_48,0,0);
    if (puVar2 != puVar1) {
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    FUN_140e60910(1);
  }
  local_18 = 0x124;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddea48 + 8))(DAT_141ddea48,DAT_1419f5378);
  if (puVar3 != param_3) {
    local_38 = *(undefined4 *)puVar3;
    uStack_34 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_30 = *(undefined4 *)(puVar3 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

