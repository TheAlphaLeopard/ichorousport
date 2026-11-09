// gml_Script____struct___782_anon_3771_gml_Object_oRunManager_Create_0 @ 0x140d45810

undefined8 *
gml_Script____struct___782_anon_3771_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double local_b8;
  uint local_ac;
  double local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Script_anon@2308@gml_Object_oRunManager_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0.0;
  local_68 = 0x66;
  local_ac = 0;
  local_b8 = 0.0;
  bVar2 = true;
LAB_140d4589c:
  local_9c = 0;
LAB_140d458a0:
  do {
    if (!bVar2) {
      local_68 = 0x66;
      uVar3 = local_ac & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_b8 = (double)((longlong)local_b8 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_ac = 0;
              goto LAB_140d458e8;
            }
            FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
          }
          goto LAB_140d458f1;
        }
        local_b8 = (double)FUN_140e4b060(&local_b8);
        local_ac = 0;
      }
LAB_140d458e8:
      local_b8 = local_b8 + 1.0;
    }
LAB_140d458f1:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56c8);
    iVar4 = FUN_140e851f0(&local_b8,uVar6,DAT_141955260,1);
    if (iVar4 == -2) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)(ulonglong)(iVar4 < 0);
    }
    if ((char)plVar7 == '\0') {
LAB_140d45b2c:
      local_68 = 0x6d;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_ac = 0;
      local_b8 = 0.0;
      bVar2 = true;
      goto LAB_140d45b56;
    }
    if (param_4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*param_5;
    }
    iVar4 = FUN_140e851f0(&local_a8,puVar8,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) goto LAB_140d45b2c;
    local_68 = 0x67;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
    iVar4 = FUN_140e4a740(&local_b8);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_8c = 10;
    local_98 = 9.88131291682493e-324;
    iVar4 = FUN_140e851f0(plVar7,&local_98,DAT_141955260,0);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
  } while (iVar4 != 0);
  local_68 = 0x68;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
  FUN_140e609c0(param_1);
  uVar5 = FUN_140e4a740(&local_b8);
  puVar9 = (undefined8 *)FUN_140e48e40(puVar8,uVar5);
  FUN_140e609c0(*(undefined8 *)*puVar8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
  *puVar9 = 0;
  FUN_140e60910(2);
  local_68 = 0x69;
  uVar3 = local_9c & 0xffffff;
  if (uVar3 != 0) {
    if (uVar3 == 1) goto LAB_140d45b15;
    if (uVar3 == 7) {
      local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
      goto LAB_140d458a0;
    }
    if (uVar3 == 10) {
      local_a8 = (double)((longlong)local_a8 + 1);
      goto LAB_140d458a0;
    }
    if (uVar3 != 0xd) {
      FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
      goto LAB_140d458a0;
    }
    local_9c = 0;
  }
  local_a8 = local_a8 + 1.0;
  goto LAB_140d458a0;
LAB_140d45b56:
  if (!bVar2) {
    local_68 = 0x6d;
    uVar3 = local_ac & 0xffffff;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 == 7) {
          local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_b8 = (double)((longlong)local_b8 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_ac = 0;
            goto LAB_140d45baa;
          }
          FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
        }
        goto LAB_140d45bb3;
      }
      local_b8 = (double)FUN_140e4b060(&local_b8);
      local_ac = 0;
    }
LAB_140d45baa:
    local_b8 = local_b8 + 1.0;
  }
LAB_140d45bb3:
  bVar2 = false;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56c8);
  iVar4 = FUN_140e851f0(&local_b8,uVar6,DAT_141955260,1);
  if ((iVar4 == -2) || (-1 < iVar4)) {
    local_68 = 0x72;
    uStack_8c = local_9c;
    uStack_90 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_98 = local_a8;
    }
    else {
      FUN_1400419b0(&local_98,&local_a8);
    }
    uStack_7c = 7;
    local_88 = 10;
    FUN_140042560(&local_98,&local_88);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (&local_98 != param_3) {
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_80 = uStack_90;
      uStack_7c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_88);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    DAT_141dc7a50 = (undefined8 *)local_78;
    return param_3;
  }
  local_68 = 0x6e;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
  iVar4 = FUN_140e4a740(&local_b8);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uStack_8c = 10;
  local_98 = 4.94065645841247e-324;
  iVar4 = FUN_140e851f0(plVar7,&local_98,DAT_141955260,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar4 == 0) {
    local_68 = 0x6f;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
    FUN_140e609c0(param_1);
    uVar5 = FUN_140e4a740(&local_b8);
    puVar9 = (undefined8 *)FUN_140e48e40(puVar8,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
    *puVar9 = 0;
    FUN_140e60910(2);
  }
  goto LAB_140d45b56;
LAB_140d45b15:
  local_a8 = (double)FUN_140e4b060(&local_a8);
  local_a8 = local_a8 + 1.0;
  goto LAB_140d4589c;
}

