// gml_Script_anon_11944_anon_11810_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc5cb0

undefined8 *
gml_Script_anon_11944_anon_11810_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
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
  
  local_20 = "gml_Script_anon@11677@anon@9910@gml_Object_oRogueLevelManager_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 500;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57c50);
  uStack_3c = DAT_141ddad24;
  uStack_40 = DAT_141ddad20;
  if ((1 << ((byte)DAT_141ddad24 & 0x1f) & 0x46U) == 0) {
    local_48 = DAT_141ddad18;
  }
  else {
    FUN_1400419b0(&local_48,&DAT_141ddad18);
  }
  iVar2 = FUN_140e851f0(uVar3,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9cc8);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_18 = 0x1f5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e88);
      uStack_3c = 0xd;
      local_48 = 0x3ff0000000000000;
      if (&local_48 != puVar4) {
        local_38 = 0;
        uStack_34 = 0x3ff00000;
        uStack_30 = uStack_40;
        uStack_2c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_38);
      }
    }
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

