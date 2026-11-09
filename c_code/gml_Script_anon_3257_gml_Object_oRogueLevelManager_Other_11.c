// gml_Script_anon_3257_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce6610

longlong *
gml_Script_anon_3257_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  double dVar6;
  uint uVar7;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@2548@gml_Object_oRogueLevelManager_Other_11";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x79;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa0b8);
  FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_a8);
  local_48 = 0x7a;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa0b8);
  FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_a8);
  local_48 = 0x7c;
  bVar1 = false;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  uStack_9c = *(uint *)((longlong)puVar3 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_a8);
  }
  FUN_1400462a0(&local_a8,&local_88);
  if ((uStack_9c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_a8;
  }
  else {
    uVar5 = FUN_140e4b060(&local_a8);
  }
  dVar6 = (double)FUN_140e78d00(uVar5);
  uVar7 = 0x3ff00000;
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (dVar6 <= 1.0) {
    if (1 < param_4) {
      puVar4 = (undefined8 *)param_5[1];
    }
    uStack_9c = *(uint *)((longlong)puVar4 + 0xc);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_a8,puVar4);
    }
    FUN_1400462a0(&local_a8,&local_98);
    if ((uStack_9c & 0xffffff) == 0) {
      uVar5 = (undefined4)local_a8;
    }
    else {
      uVar5 = FUN_140e4b060(&local_a8);
    }
    dVar6 = (double)FUN_140e78d00(uVar5);
    bVar1 = dVar6 <= 1.0;
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (!bVar1) {
    uVar7 = 0;
  }
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

