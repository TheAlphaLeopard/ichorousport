// gml_Script_anon_4991_DefineTrinkets_TRINKETSINIT @ 0x1405e2620

undefined8 *
gml_Script_anon_4991_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
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
  
  local_20 = "gml_Script_rolled_list_clear";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x83;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  local_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x85;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_48,0,DAT_1419fd6d8,0);
  if (puVar2 != &local_58) {
    local_38 = *(undefined4 *)puVar2;
    uStack_34 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_30 = *(undefined4 *)(puVar2 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_38);
  }
  FUN_140e87930(uVar1,DAT_1419ffa58,0x80000000,&local_58);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

