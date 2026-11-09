// gml_Script_anon_30291_SnowState_SnowState @ 0x140510210

undefined8 *
gml_Script_anon_30291_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined8 *local_78;
  uint local_70 [2];
  undefined8 *local_68;
  
  local_90 = "gml_Script_anon@30291@SnowState@SnowState";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x3c1;
  FUN_140041df0(local_70,param_4,2,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x3c1;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_70[0];
  if ((int)local_70[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_68[1];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_88 = 0x3c1, 1 < (int)local_70[0])) &&
     (puVar7 = (undefined8 *)local_68[1], puVar7 != &DAT_1419df7b0)) {
    local_c8 = (undefined4)DAT_1419df7b0;
    uStack_c4 = DAT_1419df7b0._4_4_;
    uStack_c0 = DAT_1419df7b8;
    uStack_bc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  local_88 = 0x3c2;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((int)local_70[0] < 1) {
    plVar10 = &DAT_1419df7b0;
LAB_1405103b9:
    local_c8 = (undefined4)*plVar10;
    uStack_c4 = *(undefined4 *)((longlong)plVar10 + 4);
    uStack_c0 = (undefined4)plVar10[1];
    uStack_bc = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  else {
    plVar10 = (longlong *)*local_68;
    if (plVar10 != &local_b8) goto LAB_1405103b9;
  }
  local_80 = &local_b8;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar11,DAT_1419fdb88),&local_80);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    local_88 = 0x3c3;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0.0;
    if ((int)local_70[0] < 1) {
      plVar10 = &DAT_1419df7b0;
    }
    else {
      plVar10 = (longlong *)*local_68;
    }
    iVar3 = 0;
    if ((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) {
      iVar3 = *(int *)(*plVar10 + 0x24);
    }
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      local_88 = 0x3c4;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdd8);
      iVar4 = FUN_140e4a740(&local_d8);
      if ((int)local_70[0] < 1) {
        plVar10 = &DAT_1419df7b0;
      }
      else {
        plVar10 = (longlong *)*local_68;
      }
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar10 != &local_b8) {
        local_c8 = (undefined4)*plVar10;
        uStack_c4 = *(undefined4 *)((longlong)plVar10 + 4);
        uStack_c0 = (undefined4)plVar10[1];
        uStack_bc = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_c8);
      }
      local_80 = &local_b8;
      if ((int)local_70[0] < 2) {
        puVar8 = &DAT_1419df7b0;
LAB_1405105a2:
        local_c8 = *(undefined4 *)puVar8;
        uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_c0 = *(undefined4 *)(puVar8 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_c8);
      }
      else {
        puVar8 = (undefined8 *)local_68[1];
        if (puVar8 != &local_a8) goto LAB_1405105a2;
      }
      local_78 = &local_a8;
      uVar6 = FUN_140e63610(param_1,param_2,&local_e8,2,uVar6,&local_80);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        local_88 = 0x3c4;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = 0x3ff0000000000000;
        goto LAB_140510802;
      }
      local_88 = 0x3c5;
      uVar5 = local_cc & 0xffffff;
      if (uVar5 == 0) {
LAB_14051065b:
        local_d8 = local_d8 + 1.0;
      }
      else {
        if (uVar5 == 1) {
          local_d8 = (double)FUN_140e4b060(&local_d8);
          local_cc = 0;
          goto LAB_14051065b;
        }
        if (uVar5 == 7) {
          local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_d8 = (double)((longlong)local_d8 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_cc = 0;
            goto LAB_14051065b;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
      }
    }
    local_88 = 0x3c7;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140510802;
  }
  local_88 = 0x3c9;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdd8);
  if ((int)local_70[0] < 1) {
    plVar10 = &DAT_1419df7b0;
LAB_14051072b:
    local_c8 = (undefined4)*plVar10;
    uStack_c4 = *(undefined4 *)((longlong)plVar10 + 4);
    uStack_c0 = (undefined4)plVar10[1];
    uStack_bc = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  else {
    plVar10 = (longlong *)*local_68;
    if (plVar10 != &local_b8) goto LAB_14051072b;
  }
  local_80 = &local_b8;
  if (((int)local_70[0] < 2) || (puVar8 = (undefined8 *)local_68[1], puVar8 != &local_a8)) {
    local_c8 = *(undefined4 *)puVar8;
    uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_c0 = *(undefined4 *)(puVar8 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  local_78 = &local_a8;
  puVar8 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_e8,2,uVar6,&local_80);
  if (puVar8 != param_3) {
    local_c8 = *(undefined4 *)puVar8;
    uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_c0 = *(undefined4 *)(puVar8 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
LAB_140510802:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,2,FUN_140041b30);
  if (0 < (int)local_70[0]) {
    puVar8 = local_68;
    do {
      puVar7 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_68);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

