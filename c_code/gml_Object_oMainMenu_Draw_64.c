// gml_Object_oMainMenu_Draw_64 @ 0x140b50250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMainMenu_Draw_64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oMainMenu_Other_5";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  puVar1 = (undefined *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 2;
  gml_Script_jb_stack_get(param_1,param_2,&local_48,0,0);
  local_18 = 3;
  if (puVar1 != &DAT_141dd9a88) {
    local_38 = _DAT_141dd9a88;
    uStack_34 = uRam0000000141dd9a8c;
    uStack_30 = uRam0000000141dd9a90;
    uStack_2c = DAT_141dd9a94;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

