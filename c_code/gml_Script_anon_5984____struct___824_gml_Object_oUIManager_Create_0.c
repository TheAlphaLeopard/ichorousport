// gml_Script_anon_5984____struct___824_gml_Object_oUIManager_Create_0 @ 0x140e02f80

undefined8 *
gml_Script_anon_5984____struct___824_gml_Object_oUIManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [12];
  byte local_64;
  undefined4 local_60 [3];
  byte local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_38;
  
  local_80 = "gml_Script_anon@5216@___struct___824@gml_Object_oUIManager_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x12d;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_44 = 0;
  local_50 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x12e;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa98);
  local_ac = DAT_141ddbdc4;
  local_b0 = DAT_141ddbdc0;
  if ((1 << ((byte)DAT_141ddbdc4 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141ddbdb8;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141ddbdb8);
  }
  uVar4 = 1 << ((byte)local_ac & 0x1f) & 0x46;
  uStack_a0 = local_b0;
  uStack_9c = local_ac;
  if (uVar4 == 0) {
    local_a8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_b8);
  }
  FUN_1400460e0(&local_a8,puVar1);
  local_98 = (undefined4)local_a8;
  uStack_94 = local_a8._4_4_;
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_98);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (uVar4 != 0) {
    FUN_140041a50(&local_b8);
  }
  local_40 = local_70;
  if (puVar1 != local_60) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_98);
  }
  local_38 = local_60;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_50,2,&local_40);
  if (puVar1 != puVar2) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  local_78 = 0x12f;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9e58);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02f78);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar2) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  local_78 = 0x130;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_78 = 0x131;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

