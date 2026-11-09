// gml_Script_anon_12624_SnowState_SnowState @ 0x1405005b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12624_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
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
  undefined4 local_70 [3];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_50;
  byte local_44;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_80 = "gml_Script_anon@11976@SnowState@SnowState";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x177;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x178;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcab8);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_78 = 0x181;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
    FUN_140e609c0(param_1);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_9c = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_a0 = (undefined4)plVar5[1];
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_a8,plVar5);
    }
    uVar10 = uStack_9c;
    puVar9 = (undefined8 *)FUN_140e48e40(puVar6,1);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    if (&local_a8 != puVar9) {
      local_98 = (undefined4)local_a8;
      uStack_94 = local_a8._4_4_;
      uStack_90 = uStack_a0;
      uStack_8c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_98);
    }
    if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140e60910(2);
    local_78 = 0x182;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
    FUN_140e609c0(param_1);
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*param_5;
    }
  }
  else {
    local_78 = 0x179;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))();
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    puVar9 = &DAT_1419df7b0;
    iVar3 = FUN_140e851f0(plVar5,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar3 != 0) {
      local_78 = 0x17d;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
      if (puVar8 != local_70) {
        local_98 = *puVar8;
        uStack_94 = puVar8[1];
        uStack_90 = puVar8[2];
        uStack_8c = puVar8[3];
        if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_70);
        }
        FUN_140041b80(local_70,&local_98);
      }
      local_40 = local_70;
      local_98 = _DAT_141dc66a0;
      uStack_94 = uRam0000000141dc66a4;
      uStack_90 = uRam0000000141dc66a8;
      uStack_8c = uRam0000000141dc66ac;
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_98);
      local_38 = local_60;
      if ((param_4 < 1) || (puVar9 = (undefined8 *)*param_5, puVar9 != &local_50)) {
        local_98 = *(undefined4 *)puVar9;
        uStack_94 = *(undefined4 *)((longlong)puVar9 + 4);
        uStack_90 = *(undefined4 *)(puVar9 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_50);
        }
        FUN_140041b80(&local_50,&local_98);
      }
      local_30 = &local_50;
      FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar10,DAT_1419fe1d8),&local_40);
      local_78 = 0x17e;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdc8);
      FUN_140e63610(param_1,param_2,&local_b8,0,uVar4,0);
      goto LAB_140500b6e;
    }
    local_78 = 0x17a;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
    FUN_140e609c0(param_1);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_9c = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_a0 = (undefined4)plVar5[1];
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_a8,plVar5);
    }
    uVar10 = uStack_9c;
    puVar7 = (undefined8 *)FUN_140e48e40(puVar6,1);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    if (&local_a8 != puVar7) {
      local_98 = (undefined4)local_a8;
      uStack_94 = local_a8._4_4_;
      uStack_90 = uStack_a0;
      uStack_8c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_98);
    }
    if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140e60910(2);
    local_78 = 0x17b;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
    FUN_140e609c0(param_1);
    if (0 < param_4) {
      puVar9 = (undefined8 *)*param_5;
    }
  }
  puVar7 = (undefined8 *)FUN_140e48e40(puVar6,0);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  if (puVar9 != puVar7) {
    local_98 = *(undefined4 *)puVar9;
    uStack_94 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_90 = *(undefined4 *)(puVar9 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_98);
  }
  FUN_140e60910(2);
LAB_140500b6e:
  local_78 = 0x185;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

