// gml_Object_oParBreakable_Alarm_3 @ 0x140b9d9b0

longlong * gml_Object_oParBreakable_Alarm_3(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  undefined4 uVar11;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  uint local_114;
  double local_110;
  undefined8 uStack_108;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong local_98;
  longlong lStack_90;
  longlong *local_88;
  double *local_80;
  longlong local_78 [8];
  
  uVar11 = 0;
  local_130 = "gml_Script_anon@1275@gml_Object_oParBreakable_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x3c;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x3e;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56b8);
  pdVar5 = (double *)FUN_140e63610(param_1,param_2,&local_170,0,uVar4,0,uVar11);
  if (pdVar5 != &local_d8) {
    local_110 = *pdVar5;
    uStack_108 = pdVar5[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_110);
  }
  local_128 = 0x3f;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0;
  local_128 = 0x41;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_174 = 0;
  local_180 = 0;
  bVar2 = true;
  while( true ) {
    iVar3 = 0;
    if (!bVar2) {
      local_128 = 0x41;
      FUN_140162d40(&local_180,2);
    }
    bVar2 = false;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56d8);
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar3 = *(int *)(*plVar6 + 0x24);
    }
    local_bc = 0;
    local_c8 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_180,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar3 == -2 || -1 < iVar3) break;
    local_128 = 0x42;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56d8);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56e8);
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56d8);
    iVar3 = FUN_140e4a740(&local_180);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != local_78) {
      local_98 = *plVar7;
      lStack_90 = plVar7[1];
      if ((1 << ((byte)local_78[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_98);
    }
    local_88 = local_78;
    local_80 = &local_d8;
    uStack_13c = local_174;
    uStack_140 = local_178;
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
      local_148 = local_180;
    }
    else {
      FUN_1400419b0(&local_148,&local_180);
    }
    uVar11 = 1;
    uStack_108 = (double)CONCAT44(7,(undefined4)uStack_108);
    local_110 = (double)CONCAT44(local_110._4_4_,1);
    FUN_1400460e0(&local_148,&local_110);
    if ((1 << ((byte)((ulonglong)uStack_108 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    iVar3 = FUN_140e4a740(&local_148);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar4 = FUN_140e63610(param_1,param_2,&local_170,2,uVar4,&local_88,uVar11);
    local_154 = *(undefined4 *)((longlong)plVar6 + 0xc);
    local_158 = (undefined4)plVar6[1];
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_160 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_160,plVar6);
    }
    FUN_140042560(&local_160,uVar4);
    FUN_1400460e0(&local_120,&local_160);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  local_128 = 0x45;
  if ((local_114 & 0xffffff) != 0) {
    FUN_140e4b060(&local_120);
  }
  uVar4 = FUN_140e79480();
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_128 = 0x46;
  local_b8 = uVar4;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  local_128 = 0x48;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_174 = 0;
  local_180 = 0;
  bVar2 = true;
  do {
    plVar6 = (longlong *)0x0;
    if (!bVar2) {
      local_128 = 0x48;
      FUN_140162d40(&local_180,2);
    }
    bVar2 = false;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56d8);
    plVar7 = plVar6;
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      plVar7 = (longlong *)(ulonglong)*(uint *)(*plVar8 + 0x24);
    }
    uStack_108 = (double)((ulonglong)uStack_108 & 0xffffffff);
    local_110 = (double)(int)plVar7;
    iVar3 = FUN_140e851f0(&local_180,&local_110,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_108 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    if (iVar3 == -2 || -1 < iVar3) goto LAB_140b9e351;
    local_128 = 0x49;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56d8);
    iVar3 = FUN_140e4a740(&local_180);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = plVar6;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_f8) {
      local_98 = *plVar7;
      lStack_90 = plVar7[1];
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_98);
    }
    local_128 = 0x4a;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56d8);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56e8);
    local_88 = &local_f8;
    local_80 = &local_d8;
    local_154 = local_174;
    local_158 = local_178;
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
      local_160 = local_180;
    }
    else {
      FUN_1400419b0(&local_160,&local_180);
    }
    uVar11 = 4;
    local_bc = 7;
    local_c8 = (double)CONCAT44(local_c8._4_4_,1);
    FUN_1400460e0(&local_160,&local_c8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    iVar3 = FUN_140e4a740(&local_160);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    pplVar10 = &local_88;
    uVar9 = FUN_140e63610(param_1,param_2,&local_170,2,uVar4,pplVar10,uVar11);
    uStack_13c = *(undefined4 *)((longlong)plVar6 + 0xc);
    uStack_140 = (undefined4)plVar6[1];
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = *plVar6;
    }
    else {
      FUN_1400419b0(&local_148,plVar6);
    }
    FUN_140042560(&local_148,uVar9);
    lStack_90 = CONCAT44(uStack_13c,uStack_140);
    local_98 = local_148;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_98);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uVar11 = 0;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    local_128 = 0x4c;
    FUN_1400460e0(&local_e8,&local_a8);
    local_128 = 0x4d;
    iVar3 = FUN_140e851f0(&local_b8,&local_e8,DAT_141955260,1,uVar4,pplVar10,uVar11);
  } while (iVar3 == -2 || 0 < iVar3);
  local_128 = 0x4e;
  if (&local_f8 != param_3) {
    lStack_90 = CONCAT44(uStack_ec,uStack_f0);
    local_98 = local_f8;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
LAB_140b9e351:
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

