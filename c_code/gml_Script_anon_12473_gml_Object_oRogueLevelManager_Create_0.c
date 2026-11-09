// gml_Script_anon_12473_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc9430

undefined8 *
gml_Script_anon_12473_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@13589@anon@12473@gml_Object_oRogueLevelManager_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x23a;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9dc8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
  iVar2 = FUN_140e851f0(uVar3,puVar4,DAT_141955260,0);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9c88);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a18);
    iVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,0);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9bb8);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9978);
      iVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,0);
      bVar9 = iVar2 != 0;
    }
    else {
      bVar9 = true;
    }
  }
  else {
    bVar9 = true;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0xd;
  if (bVar9) {
    local_a8 = 0x3ff0000000000000;
  }
  else {
    local_a8 = 0;
  }
  local_48 = 0x23b;
  cVar1 = FUN_140e491e0(&local_a8);
  if (cVar1 == '\0') {
    local_48 = 0x23b;
  }
  else {
    local_48 = 0x23c;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9978);
    uStack_5c = 0;
    local_68 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar3,&local_68,DAT_141955260,0);
    bVar9 = iVar2 == 0;
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (!bVar9) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9ab8);
      FUN_140e87440(uVar3,DAT_1419f9d48,0x80000000,&local_78,bVar9,bVar9);
      FUN_140e87440(&local_78,DAT_1419f9bc8,0x80000000,&local_88,bVar9,bVar9);
      cVar1 = FUN_140e491e0(&local_88);
      if (cVar1 == '\0') {
        local_48 = 0x23c;
        goto LAB_140cc98ea;
      }
    }
    local_48 = 0x23e;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9c88);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a18);
    iVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,0);
    if (iVar2 != 0) {
      local_48 = 0x23f;
      pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9968);
      uStack_5c = 6;
      local_68 = param_1;
      FUN_140e87440(&local_68,DAT_141a0a728,0x80000000,&local_98,0,0);
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140e609c0(param_1);
      if (&local_98 != pplVar6) {
        local_68 = local_98;
        uStack_60 = uStack_90;
        uStack_5c = uStack_8c;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar6);
        }
        FUN_140041b80(pplVar6,&local_68);
      }
      FUN_140e60910(1);
      local_48 = 0x240;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9c88);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a18);
      FUN_140e609c0(param_1);
      if (puVar7 != puVar8) {
        local_68 = (longlong *)*puVar7;
        uStack_60 = *(undefined4 *)(puVar7 + 1);
        uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_68);
      }
      FUN_140e60910(1);
      local_48 = 0x241;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e68);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
    }
    local_48 = 0x244;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9dc8);
    FUN_140e609c0(param_1);
    if (puVar4 != puVar7) {
      local_68 = (longlong *)*puVar4;
      uStack_60 = *(undefined4 *)(puVar4 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_68);
    }
    FUN_140e60910(1);
    local_48 = 0x245;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9bb8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9978);
    FUN_140e609c0(param_1);
    if (puVar4 != puVar7) {
      local_68 = (longlong *)*puVar4;
      uStack_60 = *(undefined4 *)(puVar4 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_68);
    }
    FUN_140e60910(1);
  }
LAB_140cc98ea:
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

