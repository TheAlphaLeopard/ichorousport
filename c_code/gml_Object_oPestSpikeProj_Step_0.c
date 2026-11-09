// gml_Object_oPestSpikeProj_Step_0 @ 0x140be1910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPestSpikeProj_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  longlong *local_res18 [2];
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong in_stack_ffffffffffffff00;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  double local_a0;
  uint local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_b0 = "gml_Object_oPestSpikeLeader_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_a8 = 4;
  FUN_140e98b30(param_1,param_2);
  local_a8 = 6;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe308);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_a8 = 8;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    uStack_ec = 6;
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
    uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_60,uVar13,in_stack_ffffffffffffff00);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_ec = 6;
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0a778,0x80000000,&local_a0,uVar13,in_stack_ffffffffffffff00);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    dVar10 = local_a0;
    if ((local_94 & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_a0);
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar11 = *pdVar6;
    }
    else {
      dVar11 = (double)FUN_140e4b060(pdVar6);
    }
    fVar9 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
    FUN_140162c50(&local_60,(double)fVar9);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_60);
    local_a8 = 9;
    uStack_ec = 6;
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_70,uVar13,in_stack_ffffffffffffff00);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_ec = 6;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0a778,0x80000000,&local_a0,uVar13,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    dVar10 = local_a0;
    if ((local_94 & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_a0);
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar11 = *pdVar6;
    }
    else {
      dVar11 = (double)FUN_140e4b060(pdVar6);
    }
    fVar9 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
    FUN_140162c50(&local_70,(double)fVar9);
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_70);
    local_a8 = 0xb;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    local_e8 = CONCAT44(uRam0000000141dc73e4,_DAT_141dc73e0);
    uStack_e0 = uRam0000000141dc73e8;
    uStack_dc = uRam0000000141dc73ec;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
    local_res18[0] = &local_d8;
    pcVar12 = (code *)CONCAT44(uVar14,DAT_141a0a0d8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,1,pcVar12,local_res18);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_f8,puVar7);
    }
    uStack_dc = 0;
    local_e8 = 0x400c000000000000;
    FUN_140042560(&local_f8,&local_e8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar3 = FUN_140e851f0(uVar5,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (uVar3 < 0x80000000) {
      local_a8 = 0xd;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
      FUN_140edd0e0(param_1,param_2,0,0);
      local_a8 = 0xe;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7648);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != &local_d8) {
        local_e8 = *plVar8;
        uStack_e0 = (undefined4)plVar8[1];
        uStack_dc = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_e8);
      }
      local_res18[0] = &local_d8;
      FUN_140edd0e0(param_1,param_2,1,local_res18);
      local_a8 = 0xf;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7648);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != &local_d8) {
        local_e8 = *plVar8;
        uStack_e0 = (undefined4)plVar8[1];
        uStack_dc = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_e8);
      }
      local_res18[0] = &local_d8;
      FUN_140edd0e0(param_1,param_2,1,local_res18);
      local_a8 = 0x10;
      goto LAB_140be22e5;
    }
  }
  uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20);
  local_a8 = 0x15;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  local_e8 = CONCAT44(uRam0000000141dc73e4,_DAT_141dc73e0);
  uStack_e0 = uRam0000000141dc73e8;
  uStack_dc = uRam0000000141dc73ec;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_e8);
  local_res18[0] = &local_d8;
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar14,DAT_141a0a0d8),local_res18);
  uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_f8,puVar7);
  }
  uStack_dc = 7;
  local_e8 = CONCAT44(local_e8._4_4_,3);
  FUN_140042560(&local_f8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uVar3 = FUN_140e851f0(uVar5,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (uVar3 < 0x80000000) {
    local_a8 = 0x17;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe308);
    uStack_dc = 0xd;
    local_e8 = 0x3ff0000000000000;
    if (&local_e8 != puVar7) {
      local_f8 = (longlong *)0x3ff0000000000000;
      uStack_f0 = uStack_e0;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_f8);
    }
    local_a8 = 0x18;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7648);
    local_e8 = 0x3ff0000000000000;
    uStack_dc = 0xd;
    local_f8 = (longlong *)0x3ff0000000000000;
    uStack_f0 = uStack_e0;
    uStack_ec = 0xd;
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_f8);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar8,DAT_1419fe308,0x80000000,&local_80);
    local_a8 = 0x19;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7648);
    local_e8 = 0x3ff0000000000000;
    uStack_dc = 0xd;
    local_f8 = (longlong *)0x3ff0000000000000;
    uStack_f0 = uStack_e0;
    uStack_ec = 0xd;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_f8);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar8,DAT_1419fe308,0x80000000,&local_90);
  }
  local_a8 = 0x1d;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar5,uVar4);
  FUN_140e60910(1);
LAB_140be22e5:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

