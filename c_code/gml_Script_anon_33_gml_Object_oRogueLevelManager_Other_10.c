// gml_Script_anon_33_gml_Object_oRogueLevelManager_Other_10 @ 0x140cdb750

void gml_Script_anon_33_gml_Object_oRogueLevelManager_Other_10(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oRogueLevelManager_Other_5";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_4c = 0xffffff;
  local_58 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  local_18 = 2;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_58);
  uStack_3c = 0xf;
  local_48 = 0x10000030000001f;
  iVar1 = FUN_140e851f0(&local_58,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 == 0) {
    local_18 = 4;
    uStack_3c = 0xd;
    local_48 = 0x3ff0000000000000;
    if (&local_48 != puVar2) {
      local_38 = 0;
      uStack_34 = 0x3ff00000;
      uStack_30 = uStack_40;
      uStack_2c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_38);
    }
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

