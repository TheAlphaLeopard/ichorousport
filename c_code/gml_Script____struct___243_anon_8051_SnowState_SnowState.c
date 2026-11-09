// gml_Script____struct___243_anon_8051_SnowState_SnowState @ 0x1404f74b0

undefined8 *
gml_Script____struct___243_anon_8051_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  byte bVar12;
  byte local_res8;
  undefined4 uVar13;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  longlong local_c8;
  byte local_bc;
  longlong *local_88 [9];
  
  local_120 = "gml_Script_anon@7164@SnowState@SnowState";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0xf5;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_110 = 0xffffff;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_res8 = 0xff;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0xf7;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcdf8);
  if (plVar6 != &local_e8) {
    local_148 = *plVar6;
    uStack_140 = plVar6[1];
    FUN_140041b80(&local_e8,&local_148);
    local_110 = uStack_dc;
  }
  local_118 = 0xf8;
  local_d8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcb58);
  if (local_d8 != &local_f8) {
    local_148 = *local_d8;
    uStack_140 = local_d8[1];
    FUN_140041b80(&local_f8,&local_148);
    local_res8 = (byte)uStack_ec;
  }
  local_118 = 0xf9;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcdf8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    plVar8 = &DAT_1419df7b0;
  }
  else {
    plVar8 = (longlong *)param_5[1];
  }
  if (plVar8 != plVar7) {
    local_148 = *plVar8;
    uStack_140 = plVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0xfa;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcb58);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    plVar10 = &DAT_1419df7b0;
  }
  else {
    plVar10 = (longlong *)param_5[2];
  }
  if (plVar10 != plVar8) {
    local_148 = *plVar10;
    uStack_140 = plVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar8);
    }
    FUN_140041b80(plVar8,&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0xfd;
  iVar5 = FUN_140e851f0(plVar6,&DAT_1419df7b0,DAT_141955260,0);
  lVar4 = local_e8;
  lVar2 = CONCAT44(uStack_dc,uStack_e0);
  if (iVar5 == 0) {
    local_118 = 0xfd;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcdf8);
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcdf8);
    FUN_140e609c0(param_1);
    if (&local_e8 != plVar7) {
      local_148 = lVar4;
      uStack_140 = lVar2;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_148);
    }
  }
  else {
    local_118 = 0xfe;
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fccc8);
    FUN_140e609c0(param_1);
    if (&local_e8 != plVar10) {
      local_148 = lVar4;
      uStack_140 = lVar2;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar10);
      }
      FUN_140041b80(plVar10,&local_148);
    }
  }
  FUN_140e60910(1);
  local_118 = 0xff;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 4) {
    plVar10 = &DAT_1419df7b0;
LAB_1404f7828:
    local_148 = *plVar10;
    uStack_140 = plVar10[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    plVar10 = (longlong *)param_5[3];
    if (plVar10 != &local_c8) goto LAB_1404f7828;
  }
  local_88[0] = &local_c8;
  FUN_140e63610(param_1,param_2,&local_108,1,plVar6,local_88);
  uVar13 = (undefined4)((ulonglong)plVar6 >> 0x20);
  local_118 = 0x102;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
  if (((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) && (0 < *(int *)(*plVar6 + 0x24)))
  {
    local_118 = 0x103;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdf8);
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcee8);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbe8);
    FUN_140e609c0(param_1);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_140 = plVar6[1];
    bVar12 = (byte)*(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (bVar12 & 0x1f) & 0x46U) == 0) {
      local_148 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_148,plVar6);
      bVar12 = uStack_140._4_1_;
    }
    plVar6 = (longlong *)FUN_140e48e40(puVar9,0);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    if (&local_148 != plVar6) {
      local_138 = local_148;
      uStack_130 = uStack_140;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_138);
    }
    if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e60910(2);
    local_118 = 0x104;
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcee8);
    FUN_140e609c0(param_1);
    plVar10 = (longlong *)FUN_140e8da20(&local_108,param_1,0);
    if (plVar10 != plVar6) {
      local_138 = *plVar10;
      uStack_130 = plVar10[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_138);
    }
    FUN_140e60910(1);
  }
  local_118 = 0x108;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbc8);
  FUN_140e609c0(param_1);
  plVar10 = (longlong *)FUN_140e634e0(param_1,param_2,&local_158,0,CONCAT44(uVar13,DAT_1419fca88),0)
  ;
  if (plVar10 != plVar6) {
    local_138 = *plVar10;
    uStack_130 = plVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar6);
    }
    FUN_140041b80(plVar6,&local_138);
  }
  FUN_140e60910(1);
  local_118 = 0x109;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf08);
  if (param_4 < 1) {
    plVar6 = &DAT_1419df7b0;
LAB_1404f7b7c:
    local_138 = *plVar6;
    uStack_130 = plVar6[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_138);
  }
  else {
    plVar6 = (longlong *)*param_5;
    if (plVar6 != &local_c8) goto LAB_1404f7b7c;
  }
  local_88[0] = &local_c8;
  FUN_140e63610(param_1,param_2,&local_158,1,uVar11,local_88);
  local_118 = 0x10c;
  iVar5 = FUN_140e851f0(local_d8,&DAT_1419df7b0,DAT_141955260,0);
  lVar3 = local_f8;
  lVar1 = CONCAT44(uStack_ec,uStack_f0);
  if (iVar5 == 0) {
    local_118 = 0x10c;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcb58);
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcb58);
    FUN_140e609c0(param_1);
    if (&local_f8 != plVar8) {
      local_138 = lVar3;
      uStack_130 = lVar1;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_138);
    }
  }
  else {
    local_118 = 0x10d;
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fccc8);
    FUN_140e609c0(param_1);
    if (&local_f8 != plVar6) {
      local_138 = lVar3;
      uStack_130 = lVar1;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_138);
    }
    plVar6 = local_d8;
  }
  FUN_140e60910(1);
  local_118 = 0x10e;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (param_4 < 4) {
    plVar10 = &DAT_1419df7b0;
  }
  else {
    plVar10 = (longlong *)param_5[3];
    if (plVar10 == &local_c8) goto LAB_1404f7d41;
  }
  local_138 = *plVar10;
  uStack_130 = plVar10[1];
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_138);
LAB_1404f7d41:
  local_88[0] = &local_c8;
  FUN_140e63610(param_1,param_2,&local_158,1,plVar6,local_88);
  local_118 = 0x111;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fccc8);
  FUN_140e609c0(param_1);
  if (puVar9 != &DAT_1419df7b0) {
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_138);
  }
  FUN_140e60910(1);
  local_118 = 0x113;
  FUN_140e609c0(param_1);
  if (&local_e8 != plVar7) {
    local_138 = lVar4;
    uStack_130 = lVar2;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_138);
  }
  FUN_140e60910(1);
  local_118 = 0x114;
  FUN_140e609c0(param_1);
  if (&local_f8 != plVar8) {
    local_138 = lVar3;
    uStack_130 = lVar1;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar8);
    }
    FUN_140041b80(plVar8,&local_138);
  }
  FUN_140e60910(1);
  local_118 = 0x116;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar11 = FUN_140e5c910();
  FUN_140e42c10(uVar11,param_1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << (local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_110 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

