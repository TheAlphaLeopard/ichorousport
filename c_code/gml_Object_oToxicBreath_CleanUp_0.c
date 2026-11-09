// gml_Object_oToxicBreath_CleanUp_0 @ 0x140dc9b50

void gml_Object_oToxicBreath_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *plVar11;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffec0;
  longlong *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 *local_70;
  undefined8 *local_68 [6];
  
  local_e0 = "gml_Object_oToxicBreath_Step_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_fc = 0xffffff;
  local_108 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d8 = 1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f88);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2e98);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_140042560(&local_138,uVar4);
  FUN_1400460e0(uVar6,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_d8 = 2;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f78);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ec8);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_140042560(&local_138,uVar4);
  FUN_1400460e0(uVar6,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_d8 = 3;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2fa8);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fd8);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_140042560(&local_138,uVar4);
  FUN_1400460e0(uVar6,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_d8 = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a018a8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2e98);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2f58);
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe698);
  FUN_140e609c0(param_1);
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar7;
  }
  else {
    uVar10 = FUN_140e4b060(puVar7);
  }
  FUN_140e78ee0(uVar10);
  local_128 = (longlong *)thunk_FUN_1412ac390();
  uStack_11c = 0;
  FUN_140042560(&local_128,uVar6);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_1400460e0(&local_138,&local_128);
  if (&local_138 != pplVar8) {
    local_118 = local_138;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_118);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_d8 = 7;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_11c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_108,uVar13,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_140042560(&local_138,uVar4);
  FUN_1400460e0(&local_108,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_108);
  local_d8 = 8;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2fd8);
  uStack_11c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_a0,uVar13,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar9;
  }
  else {
    uVar10 = FUN_140e4b060(puVar9);
  }
  FUN_140e78ee0(uVar10);
  dVar1 = (double)thunk_FUN_1412ac390();
  uStack_12c = *(uint *)((longlong)puVar7 + 0xc);
  uStack_130 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_138,puVar7);
  }
  FUN_140162c50(&local_138,SUB84(dVar1 * 0.08,0));
  uStack_11c = uStack_12c;
  uStack_120 = uStack_130;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_128 = local_138;
  }
  else {
    FUN_1400419b0(&local_128,&local_138);
  }
  FUN_140042560(&local_128,uVar4);
  FUN_1400460e0(&local_a0,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
  local_d8 = 10;
  uStack_11c = 0;
  local_128 = (longlong *)0x0;
  iVar3 = FUN_140e851f0(puVar5,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (0 < iVar3) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a018a8);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uStack_11c = 6;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_b0,uVar13,in_stack_fffffffffffffec0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_f8);
    uStack_12c = local_ec;
    uStack_130 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_138 = local_f8;
    }
    else {
      FUN_1400419b0(&local_138,&local_f8);
    }
    FUN_1400460e0(&local_138,uVar6);
    uStack_11c = uStack_12c;
    uStack_120 = uStack_130;
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_128 = local_138;
    }
    else {
      FUN_1400419b0(&local_128,&local_138);
    }
    uStack_10c = 7;
    local_118 = (longlong *)CONCAT44(local_118._4_4_,4);
    FUN_1400460e0(&local_128,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    iVar3 = FUN_140e851f0(&local_b0,&local_128,DAT_141955260,1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0 < iVar3) {
      local_d8 = 10;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a018a8);
      uStack_12c = *(uint *)((longlong)puVar7 + 0xc);
      uStack_130 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
        local_138 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_138,puVar7);
      }
      uStack_10c = 7;
      local_118 = (longlong *)CONCAT44(local_118._4_4_,4);
      FUN_1400460e0(&local_138,&local_118);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      plVar11 = local_138;
      if ((uStack_12c & 0xffffff) != 0) {
        plVar11 = (longlong *)FUN_140e4b060(&local_138);
      }
      local_118 = (longlong *)((ulonglong)plVar11 ^ 0x8000000000000000);
      uStack_10c = 0;
      local_128 = (longlong *)((ulonglong)plVar11 ^ 0x8000000000000000);
      uStack_120 = uStack_110;
      uStack_11c = 0;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_128);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_108);
    }
  }
  local_d8 = 0xb;
  uStack_10c = 0;
  local_118 = (longlong *)0x0;
  iVar3 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a018a8);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uStack_10c = 6;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_b0,uVar13,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uStack_12c = *(uint *)((longlong)puVar5 + 0xc);
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_138,puVar5);
    }
    uStack_10c = 7;
    local_118 = (longlong *)CONCAT44(local_118._4_4_,4);
    FUN_1400460e0(&local_138,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    plVar11 = local_138;
    if ((uStack_12c & 0xffffff) != 0) {
      plVar11 = (longlong *)FUN_140e4b060(&local_138);
    }
    uStack_11c = 0;
    local_128 = (longlong *)((ulonglong)plVar11 ^ 0x8000000000000000);
    iVar3 = FUN_140e851f0(&local_b0,&local_128,DAT_141955260,1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_d8 = 0xb;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a018a8);
      FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_f8);
      uStack_12c = local_ec;
      uStack_130 = local_f0;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
        local_138 = local_f8;
      }
      else {
        FUN_1400419b0(&local_138,&local_f8);
      }
      FUN_1400460e0(&local_138,uVar6);
      uStack_11c = uStack_12c;
      uStack_120 = uStack_130;
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
        local_128 = local_138;
      }
      else {
        FUN_1400419b0(&local_128,&local_138);
      }
      uStack_10c = 7;
      local_118 = (longlong *)CONCAT44(local_118._4_4_,4);
      FUN_1400460e0(&local_128,&local_118);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = local_128;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_108);
    }
  }
  uVar10 = (undefined4)(uVar13 >> 0x20);
  local_d8 = 0xd;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  FUN_140e609c0(param_1);
  FUN_1400462a0(uVar6,uVar4);
  FUN_140e60910(1);
  local_d8 = 0xe;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  uStack_10c = 0;
  local_118 = (longlong *)0x0;
  iVar3 = FUN_140e851f0(uVar4,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar3 != -2 && iVar3 < 1) {
    local_d8 = 0xf;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3058);
    if (puVar5 != &local_90) {
      local_118 = (longlong *)*puVar5;
      uStack_110 = *(undefined4 *)(puVar5 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_118);
    }
    local_70 = &local_90;
    uVar6 = CONCAT44(uVar10,DAT_141a04798);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_c0,1,uVar6,&local_70);
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') {
      local_d8 = 0xf;
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      local_d0 = 0;
      local_c8 = 0;
      local_c4 = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3058);
      if (puVar5 != &local_80) {
        local_118 = (longlong *)*puVar5;
        uStack_110 = *(undefined4 *)(puVar5 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        FUN_140041b80(&local_80,&local_118);
      }
      local_68[0] = &local_80;
      FUN_140e634e0(param_1,param_2,&local_d0,1,CONCAT44(uVar10,DAT_141a04918),local_68);
    }
    local_d8 = 0x10;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

