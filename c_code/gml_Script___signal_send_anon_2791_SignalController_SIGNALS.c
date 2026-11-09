// gml_Script___signal_send_anon_2791_SignalController_SIGNALS @ 0x1404a3160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___signal_send_anon_2791_SignalController_SIGNALS
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined1 auVar1 [12];
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  uint local_10c;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  byte local_ac;
  double local_a8;
  byte local_9c;
  double local_98;
  byte local_8c;
  double local_88;
  byte local_7c;
  double *local_78;
  double *local_70;
  double *local_68;
  double *local_60;
  
  local_f0 = "gml_Script___remove_listener_from_signal@anon@1472@SignalController@SIGNALS";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x33;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x34;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
  if (pdVar7 != &local_98) {
    local_138 = *pdVar7;
    uStack_130 = pdVar7[1];
    if ((1 << ((byte)_local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  local_68 = &local_98;
  if (param_4 < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
LAB_1404a32a5:
    local_138 = *pdVar8;
    uStack_130 = pdVar8[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  else {
    pdVar8 = (double *)param_5[1];
    if (pdVar8 != &local_88) goto LAB_1404a32a5;
  }
  local_60 = &local_88;
  uVar12 = CONCAT44(uVar13,DAT_1419fa238);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar12,&local_68);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar4 = FUN_140e491e0(uVar9);
  if (cVar4 == '\0') {
    local_e8 = 0x35;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    uVar9 = 7;
    goto LAB_1404a3792;
  }
  local_e8 = 0x37;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (pdVar7 != &local_b8) {
    local_138 = *pdVar7;
    uStack_130 = pdVar7[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  local_78 = &local_b8;
  if (param_4 < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_1404a33c1:
    local_138 = *pdVar7;
    uStack_130 = pdVar7[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  else {
    pdVar7 = (double *)param_5[1];
    if (pdVar7 != &local_a8) goto LAB_1404a33c1;
  }
  local_70 = &local_a8;
  uVar12 = CONCAT44(uVar13,DAT_141a01138);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar12,&local_78);
  uVar9 = extraout_XMM0_Qb;
  if (pdVar7 != &local_118) {
    local_138 = *pdVar7;
    uStack_130 = pdVar7[1];
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    uVar9 = extraout_XMM0_Qb_00;
  }
  local_e8 = 0x38;
  auVar1._4_8_ = uVar9;
  auVar1._0_4_ = local_138._4_4_;
  auVar11._0_8_ = auVar1._0_8_ << 0x20;
  auVar11._8_4_ = (undefined4)uStack_130;
  auVar11._12_4_ = 0xd;
  uStack_130 = auVar11._8_8_;
  local_138 = 0.0;
  local_c8 = 0;
  uStack_c0 = uStack_130;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_c8);
  local_e8 = 0x39;
  iVar6 = 0;
  if ((local_10c == 2) && (local_118 != 0.0)) {
    iVar6 = *(int *)((longlong)local_118 + 0x24);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)(iVar6 + -2);
  bVar2 = true;
  do {
    if (!bVar2) {
      local_e8 = 0x39;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419fa278);
      uStack_c0 = (double)((ulonglong)uStack_c0 & 0xffffffff);
      local_c8 = 0x4000000000000000;
      FUN_1400462a0(&local_108,&local_c8);
      if ((1 << ((byte)((ulonglong)uStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
    }
    bVar2 = false;
    uStack_130 = (double)((ulonglong)uStack_130 & 0xffffffff);
    local_138 = 0.0;
    uVar5 = FUN_140e851f0(&local_108,&local_138,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0x7fffffff < uVar5) goto LAB_1404a3744;
    local_e8 = 0x3a;
    if (param_4 < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*param_5;
    }
    iVar6 = FUN_140e4a740(&local_108);
    pdVar7 = (double *)0x0;
    if (((local_10c & 0xffffff) == 2) && (local_118 != 0.0)) {
      if ((iVar6 < 0) || (*(int *)((longlong)local_118 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                      *(undefined4 *)((longlong)local_118 + 0x24));
      }
      else {
        pdVar7 = (double *)((longlong)iVar6 * 0x10 + *(longlong *)((longlong)local_118 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar7 = &local_118;
    }
    iVar6 = FUN_140e851f0(pdVar7,puVar10,DAT_141955260,0);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  } while (iVar6 != 0);
  local_e8 = 0x3b;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_78 = &local_118;
  local_70 = &local_108;
  local_138 = (double)_DAT_1419e5f80;
  uStack_130 = (double)uRam00000001419e5f88;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_138);
  local_68 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar13,DAT_1419fd808),&local_78);
  local_e8 = 0x3c;
  local_138 = 1.0;
  uVar13 = SUB84(uStack_130,0);
  uStack_130 = (double)CONCAT44(0xd,uVar13);
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = (double)CONCAT44(0xd,uVar13);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_c8);
LAB_1404a3744:
  uVar9 = 5;
  local_e8 = 0x40;
  cVar4 = FUN_140e491e0(&local_e0);
  bVar3 = (byte)*(undefined4 *)((longlong)param_3 + 0xc);
  if (cVar4 == '\0') {
    local_e8 = 0x41;
    if ((1 << (bVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
  }
  else {
    local_e8 = 0x43;
    if ((1 << (bVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    uVar9 = 2;
  }
LAB_1404a3792:
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = uVar9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

