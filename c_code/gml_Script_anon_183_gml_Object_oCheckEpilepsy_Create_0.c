// gml_Script_anon_183_gml_Object_oCheckEpilepsy_Create_0 @ 0x1408a1b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_183_gml_Object_oCheckEpilepsy_Create_0(longlong *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
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
  
  local_20 = "gml_Object_oCheckEpilepsy_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 4;
  FUN_140e98b30();
  local_18 = 6;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a47588);
  if (puVar1 != &DAT_141dd74b8) {
    local_48 = _DAT_141dd74b8;
    uStack_44 = uRam0000000141dd74bc;
    uStack_40 = uRam0000000141dd74c0;
    uStack_3c = DAT_141dd74c4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_18 = 8;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a475c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Object_oCheckEpilepsy_Draw_0,param_1);
  if (&local_48 != puVar2) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0xe;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a47748);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Object_oCheckFullScreen_Create_0,param_1);
  if (&local_48 != puVar2) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

