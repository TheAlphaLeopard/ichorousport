// gml_Script_anon_395_BossAttribute_gml_Object_oInfinityManager_Create_0 @ 0x140b2fcd0

void gml_Script_anon_395_BossAttribute_gml_Object_oInfinityManager_Create_0
               (longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Object_oInfinityManager_Create_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_58 = 3;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3ad8);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a8,0,CONCAT44(uVar5,DAT_1419ff3e8),0);
  if (puVar3 != puVar2) {
    local_98 = *puVar3;
    uStack_94 = puVar3[1];
    uStack_90 = puVar3[2];
    uStack_8c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0xc010000000000000;
  local_58 = 7;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1edb0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1628_gml_Object_oInfinityManager_Create_0,0);
  if (&local_98 != puVar2) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_58 = 0x2b;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar5 = 0;
  gml_Script_BM_SETTINGS(param_1,param_2,&local_a8,0,0);
  local_58 = 0x2e;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45a18);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_1846_gml_Object_oInfinityManager_Create_0,param_1);
  if (&local_98 != puVar2) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x46;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a38);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_2724_anon_2664_gml_Object_oInfinityManager_Create_0,
                param_1);
  if (&local_98 != puVar2) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x4f;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3368);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,FUN_140b2e750,param_1);
  if (&local_98 != puVar2) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x70;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (puVar1 != local_50) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  FUN_140e645a0(&local_98,FUN_140b2fa40,param_1);
  local_78 = local_98;
  uStack_74 = uStack_94;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_80 = local_40;
  FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar5,DAT_1419f4b88),&local_88);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

