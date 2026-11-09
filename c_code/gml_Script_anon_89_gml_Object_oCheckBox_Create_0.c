// gml_Script_anon_89_gml_Object_oCheckBox_Create_0 @ 0x1408a0b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_89_gml_Object_oCheckBox_Create_0(longlong *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
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
  
  local_20 = "gml_Object_oCheckBox_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 2;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a47588);
  if (puVar1 != &DAT_141dd74a8) {
    local_48 = _DAT_141dd74a8;
    uStack_44 = uRam0000000141dd74ac;
    uStack_40 = uRam0000000141dd74b0;
    uStack_3c = DAT_141dd74b4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_18 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a59310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4059000000000000;
  local_18 = 6;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a475c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_129_gml_Object_oCheckBox_Create_0,param_1);
  if (&local_48 != puVar3) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0xc;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a47748);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,&LAB_1408a0700,param_1);
  if (&local_48 != puVar3) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  local_18 = 0x12;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a47718);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Object_oCheckBox_Step_0,param_1);
  if (&local_48 != puVar3) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

