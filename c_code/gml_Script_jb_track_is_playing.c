// gml_Script_jb_track_is_playing @ 0x14039db40

undefined8 *
gml_Script_jb_track_is_playing(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa0;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_jb_track_get_active";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x144;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4a68);
  local_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x145;
  FUN_140e87440(uVar1,DAT_1419f4b38,0x80000000,&local_58,
                in_stack_ffffffffffffff98 & 0xffffffffffffff00,
                in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  uVar1 = FUN_140069500(uVar1);
  puVar2 = (undefined8 *)FUN_140e63610(uVar1,param_2,&local_48,0,&local_58,0);
  if (puVar2 != param_3) {
    local_38 = *(undefined4 *)puVar2;
    uStack_34 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_30 = *(undefined4 *)(puVar2 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

