// gml_Script_InputIconTag @ 0x14032e240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputIconTag
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  uint local_res18;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffe90;
  longlong **pplVar15;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  uint local_158;
  longlong local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  longlong local_118;
  undefined4 local_10c;
  longlong local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  longlong local_f8;
  byte local_ec;
  longlong local_e8;
  byte local_dc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  uint local_a4;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  longlong *local_90;
  longlong *local_88;
  longlong local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  longlong local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  longlong local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  
  lVar9 = 0;
  local_c0 = "gml_Script_InputIconGetDirect";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 10;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_158 = 0xffffff;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_res18 = 0xffffff;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde2bc) &&
     (_Init_thread_header(&DAT_141dde2bc), DAT_141dde2bc == -1)) {
    DAT_141dde2c0 = (longlong *)FUN_140e63aa0(DAT_1419f1778);
    _Init_thread_footer(&DAT_141dde2bc);
  }
  if (DAT_141ddc0eb == '\0') {
    FUN_140e64380(DAT_141dde2c0,"gml_Script_InputIconGetDirect");
    FUN_140e64380(param_1,"gml_Script_InputIconGetDirect");
  }
  local_b8 = 0xc;
  if (DAT_141ddc0eb == '\0') {
    DAT_141ddc0eb = '\x01';
    plVar4 = (longlong *)(**(code **)(*DAT_141dde2c0 + 0x10))(DAT_141dde2c0,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde2c0);
    uVar13 = 0;
    plVar5 = (longlong *)FUN_1400ae430(param_1,param_2,&local_168,0,0);
    if (plVar5 != plVar4) {
      local_148 = *plVar5;
      uStack_140 = (undefined4)plVar5[1];
      uStack_13c = *(uint *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar4);
      }
      FUN_140041b80(plVar4,&local_148);
    }
    FUN_140e60910(1);
    uVar6 = (**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419fcb48);
    plVar4 = (longlong *)(**(code **)(*DAT_141dde2c0 + 0x10))(DAT_141dde2c0,DAT_1419f1518);
    in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a018d8,0x80000000,&local_58,uVar13,in_stack_fffffffffffffe90);
    FUN_140e609c0(DAT_141dde2c0);
    if (&local_58 != plVar4) {
      local_148 = local_58;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar4);
      }
      FUN_140041b80(plVar4,&local_148);
    }
    FUN_140e60910(1);
    plVar4 = (longlong *)(**(code **)(*DAT_141dde2c0 + 0x10))(DAT_141dde2c0,DAT_1419f14e8);
    uVar6 = (**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419fcb48);
    in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    pcVar12 = (code *)(uVar13 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a01998,0x80000000,&local_68,pcVar12,in_stack_fffffffffffffe90);
    FUN_140e609c0(DAT_141dde2c0);
    if (&local_68 != plVar4) {
      local_148 = local_68;
      uStack_140 = uStack_60;
      uStack_13c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar4);
      }
      FUN_140041b80(plVar4,&local_148);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0x10;
  plVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  uVar8 = local_res18;
  if (iVar3 == 0) {
    local_b8 = 0x12;
    uVar6 = (**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419fcb48);
    FUN_140e87440(uVar6,DAT_141a01958,0x80000000,&local_78,(ulonglong)pcVar12 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    if (&local_78 != param_3) {
      local_148 = local_78;
      uStack_140 = uStack_70;
      uStack_13c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_148);
    }
    goto LAB_14032ee09;
  }
  local_b8 = 0x15;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  cVar2 = FUN_140e491e0(puVar7);
  uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20);
  if (cVar2 == '\0') {
    local_b8 = 0x17;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    plVar5 = (longlong *)(**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419f1518);
    if (plVar5 != &local_f8) {
      local_148 = *plVar5;
      uStack_140 = (undefined4)plVar5[1];
      uStack_13c = *(uint *)((longlong)plVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_90 = &local_f8;
    if ((param_4 < 1) || (plVar4 = (longlong *)*param_5, plVar4 != &local_e8)) {
      local_148 = *plVar4;
      uStack_140 = (undefined4)plVar4[1];
      uStack_13c = *(uint *)((longlong)plVar4 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    local_88 = &local_e8;
    pplVar15 = &local_90;
    uVar13 = CONCAT44(uVar14,DAT_1419ff4f8);
    bVar1 = false;
    bVar11 = true;
    plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar13,pplVar15);
    if (plVar4 == &local_a0) {
      uVar8 = local_158;
    }
    else {
      local_148 = *plVar4;
      uStack_140 = (undefined4)plVar4[1];
      uStack_13c = *(uint *)((longlong)plVar4 + 0xc);
      FUN_140041b80(&local_a0,&local_148);
      lVar9 = local_a0;
      uVar8 = local_94;
    }
    if ((uVar8 & 0xffffff) == 3) {
      bVar10 = lVar9 == 0;
    }
    else {
      bVar10 = (uVar8 & 0xffffff) == 5;
    }
    if (bVar10) {
      uVar6 = (**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419fcb48);
      FUN_140e87440(uVar6,DAT_141a019a8,0x80000000,&local_128,uVar13 & 0xffffffffffffff00,
                    (ulonglong)pplVar15 & 0xffffffffffffff00);
      uStack_13c = uStack_11c;
      uStack_140 = uStack_120;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
        local_148 = local_128;
      }
      else {
        FUN_1400419b0(&local_148,&local_128);
      }
      plVar4 = &local_148;
      bVar1 = true;
      bVar11 = false;
    }
    else {
      uStack_fc = uVar8;
      uStack_100 = local_98;
      if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) == 0) {
        local_108 = lVar9;
      }
      else {
        FUN_1400419b0(&local_108,&local_a0);
      }
      plVar4 = &local_108;
    }
    if (plVar4 != param_3) {
      local_138 = (undefined4)*plVar4;
      uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_130 = (undefined4)plVar4[1];
      uStack_12c = *(uint *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_138);
    }
    if ((bVar11) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_108);
    }
    if ((bVar1) && ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_148);
    }
    goto LAB_14032ee09;
  }
  local_b8 = 0x1b;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419f14e8);
  if (plVar5 != &local_f8) {
    local_138 = (undefined4)*plVar5;
    uStack_134 = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_130 = (undefined4)plVar5[1];
    uStack_12c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  local_90 = &local_f8;
  if (param_4 < 3) {
    plVar5 = &DAT_1419df7b0;
LAB_14032e957:
    local_138 = (undefined4)*plVar5;
    uStack_134 = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_130 = (undefined4)plVar5[1];
    uStack_12c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    plVar5 = (longlong *)param_5[2];
    if (plVar5 != &local_e8) goto LAB_14032e957;
  }
  local_88 = &local_e8;
  uVar13 = CONCAT44(uVar14,DAT_1419ff4f8);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar13,&local_90);
  if (plVar5 != &local_118) {
    local_138 = (undefined4)*plVar5;
    uStack_134 = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_130 = (undefined4)plVar5[1];
    uStack_12c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_b8 = 0x1c;
  iVar3 = FUN_140e851f0(&local_118,&DAT_1419df7b0,DAT_141955260,0);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if (iVar3 == 0) {
    local_b8 = 0x1e;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    plVar5 = (longlong *)(**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419f14e8);
    if (plVar5 != &local_f8) {
      local_138 = (undefined4)*plVar5;
      uStack_134 = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_130 = (undefined4)plVar5[1];
      uStack_12c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_138);
    }
    local_90 = &local_f8;
    local_138 = _DAT_1419e4050;
    uStack_134 = uRam00000001419e4054;
    uStack_130 = uRam00000001419e4058;
    uStack_12c = uRam00000001419e405c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_88 = &local_e8;
    pplVar15 = &local_90;
    uVar13 = CONCAT44(uVar14,DAT_1419ff4f8);
    plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar13,pplVar15);
    if (plVar5 != &local_118) {
      local_138 = (undefined4)*plVar5;
      uStack_134 = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_130 = (undefined4)plVar5[1];
      uStack_12c = *(uint *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_138);
    }
    local_b8 = 0x20;
    iVar3 = FUN_140e851f0(&local_118,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar3 == 0) {
      local_b8 = 0x22;
      uVar6 = (**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419fcb48);
      FUN_140e87440(uVar6,DAT_141a019a8,0x80000000,&local_128,uVar13 & 0xffffffffffffff00,
                    (ulonglong)pplVar15 & 0xffffffffffffff00);
      if (&local_128 != param_3) {
        local_138 = (undefined4)local_128;
        uStack_134 = local_128._4_4_;
        uStack_130 = uStack_120;
        uStack_12c = uStack_11c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_138);
      }
      goto LAB_14032ee09;
    }
  }
  uVar14 = (undefined4)(uVar13 >> 0x20);
  local_b8 = 0x26;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_90 = &local_118;
  if ((param_4 < 1) || (plVar4 = (longlong *)*param_5, plVar4 != &local_e8)) {
    local_138 = (undefined4)*plVar4;
    uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_130 = (undefined4)plVar4[1];
    uStack_12c = *(uint *)((longlong)plVar4 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_88 = &local_e8;
  pplVar15 = &local_90;
  uVar13 = CONCAT44(uVar14,DAT_1419ff4f8);
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar13,pplVar15);
  if (plVar4 != &local_b0) {
    local_138 = (undefined4)*plVar4;
    uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_130 = (undefined4)plVar4[1];
    uStack_12c = *(uint *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_b0,&local_138);
    lVar9 = local_b0;
    local_res18 = local_a4;
  }
  if ((local_res18 & 0xffffff) == 3) {
    bVar11 = lVar9 == 0;
  }
  else {
    bVar11 = (local_res18 & 0xffffff) == 5;
  }
  if (bVar11) {
    uVar6 = (**(code **)(*DAT_141dde2c0 + 8))(DAT_141dde2c0,DAT_1419fcb48);
    FUN_140e87440(uVar6,DAT_141a019a8,0x80000000,&local_128,uVar13 & 0xffffffffffffff00,
                  (ulonglong)pplVar15 & 0xffffffffffffff00);
    uStack_fc = uStack_11c;
    uStack_100 = uStack_120;
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_108 = local_128;
    }
    else {
      FUN_1400419b0(&local_108,&local_128);
    }
    plVar4 = &local_108;
    bVar1 = true;
    bVar11 = false;
  }
  else {
    uStack_13c = local_res18;
    uStack_140 = local_a8;
    if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) == 0) {
      local_148 = lVar9;
    }
    else {
      FUN_1400419b0(&local_148,&local_b0);
    }
    plVar4 = &local_148;
    bVar1 = false;
    bVar11 = true;
  }
  if (plVar4 != param_3) {
    local_138 = (undefined4)*plVar4;
    uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_130 = (undefined4)plVar4[1];
    uStack_12c = *(uint *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((bVar11) && ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  if ((bVar1) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  uVar8 = local_158;
LAB_14032ee09:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

