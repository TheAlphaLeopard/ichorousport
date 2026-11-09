// gml_Script_InputGetHotswap @ 0x14032a7c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputGetHotswap
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  uint local_res18;
  ulonglong uVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  uint local_158;
  longlong local_154;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  longlong *local_78;
  longlong *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_b0 = "gml_Script_InputGetBindingName";
  local_b8 = DAT_141dc7a50;
  local_a8 = 0x7c;
  DAT_141dc7a50 = &local_b8;
  FUN_140041df0(local_58,param_4,3,param_5);
  uVar18 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_res18 = 0xffffff;
  local_bc = 0xffffff;
  lVar13 = 0;
  local_c8 = 0;
  local_158 = 0xffffff;
  local_cc = 0xffffff;
  lVar12 = 0;
  local_d8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_124 = 0;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde258) &&
     (_Init_thread_header(&DAT_141dde258), DAT_141dde258 == -1)) {
    DAT_141dde260 = (longlong *)FUN_140e63aa0(DAT_1419f1428);
    _Init_thread_footer(&DAT_141dde258);
  }
  local_a8 = 0x7c;
  plVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_50[2];
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_a8 = 0x7c;
    if ((int)local_58[0] < 3) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_50[2];
      if (puVar9 == (undefined8 *)&DAT_141dd03c8) goto LAB_14032a99b;
    }
    local_188 = CONCAT44(uRam0000000141dd03cc,_DAT_141dd03c8);
    uStack_180 = uRam0000000141dd03d0;
    uStack_17c = DAT_141dd03d4;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_188);
  }
LAB_14032a99b:
  if (DAT_141ddc0e4 == '\0') {
    FUN_140e64380(DAT_141dde260,"gml_Script_InputGetBindingName");
    FUN_140e64380(param_1,"gml_Script_InputGetBindingName");
  }
  local_a8 = 0x7e;
  if (DAT_141ddc0e4 == '\0') {
    DAT_141ddc0e4 = '\x01';
    plVar5 = (longlong *)(**(code **)(*DAT_141dde260 + 0x10))(DAT_141dde260,DAT_1419f13b8);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar16 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_168,0,0);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a02ec8,0x80000000,&local_88,uVar16 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe70);
    FUN_140e609c0(DAT_141dde260);
    if (&local_88 != plVar5) {
      local_188 = local_88;
      uStack_180 = uStack_80;
      uStack_17c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_188);
    }
    FUN_140e60910(1);
    plVar5 = (longlong *)(**(code **)(*DAT_141dde260 + 0x10))(DAT_141dde260,DAT_1419f13c8);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar16 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_178,0,0);
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a02e08,0x80000000,&local_98,uVar16,
                  in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar16 >> 0x20);
    FUN_140e609c0(DAT_141dde260);
    if (&local_98 != plVar5) {
      local_188 = local_98;
      uStack_180 = uStack_90;
      uStack_17c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_188);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x81;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_58[0] < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_14032abde:
    local_188 = *plVar5;
    uStack_180 = (undefined4)plVar5[1];
    uStack_17c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
  }
  else {
    plVar5 = (longlong *)*local_50;
    if (plVar5 != &local_118) goto LAB_14032abde;
  }
  local_78 = &local_118;
  uVar17 = CONCAT44(uVar18,DAT_1419fdbf8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar17,&local_78);
  uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_a8 = 0x81;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((int)local_58[0] < 1) {
      plVar5 = &DAT_1419df7b0;
LAB_14032aca0:
      local_188 = *plVar5;
      uStack_180 = (undefined4)plVar5[1];
      uStack_17c = *(uint *)((longlong)plVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_188);
    }
    else {
      plVar5 = (longlong *)*local_50;
      if (plVar5 != &local_108) goto LAB_14032aca0;
    }
    local_70 = &local_108;
    if ((int)local_58[0] < 1) {
      plVar5 = &DAT_1419df7b0;
    }
    else {
      plVar5 = (longlong *)*local_50;
    }
    uVar6 = CONCAT44(uVar18,DAT_1419fdc48);
    plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar6,&local_70);
    uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (plVar7 != plVar5) {
      local_188 = *plVar7;
      uStack_180 = (undefined4)plVar7[1];
      uStack_17c = *(uint *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_188);
    }
  }
  local_a8 = 0x83;
  if ((int)local_58[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_50[1];
  }
  cVar3 = FUN_140e491e0(puVar9);
  if (cVar3 == '\0') {
    local_a8 = 0x89;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    local_130 = 0;
    local_128 = 0;
    local_124 = 5;
    puVar8 = (undefined4 *)(**(code **)(*DAT_141dde260 + 8))(DAT_141dde260,DAT_1419f13c8);
    if (puVar8 != local_f8) {
      local_140 = *puVar8;
      uStack_13c = puVar8[1];
      uStack_138 = puVar8[2];
      uStack_134 = puVar8[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_140);
    }
    local_68 = local_f8;
    if ((int)local_58[0] < 1) {
      puVar9 = &DAT_1419df7b0;
LAB_14032b05d:
      local_140 = *(undefined4 *)puVar9;
      uStack_13c = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_138 = *(undefined4 *)(puVar9 + 1);
      uStack_134 = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_140);
    }
    else {
      puVar9 = (undefined8 *)*local_50;
      if (puVar9 != &local_e8) goto LAB_14032b05d;
    }
    local_60 = &local_e8;
    uVar6 = CONCAT44(uVar18,DAT_1419ff4f8);
    plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_130,2,uVar6,&local_68);
    uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (plVar5 != &local_d8) {
      local_140 = (undefined4)*plVar5;
      uStack_13c = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_138 = (undefined4)plVar5[1];
      uStack_134 = *(undefined4 *)((longlong)plVar5 + 0xc);
      FUN_140041b80(&local_d8,&local_140);
      local_158 = local_cc;
      lVar12 = local_d8;
    }
    if ((local_158 & 0xffffff) == 3) {
      bVar15 = lVar12 == 0;
    }
    else {
      bVar15 = (local_158 & 0xffffff) == 5;
    }
    if (bVar15) {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      if (((int)local_58[0] < 1) || (plVar11 = (longlong *)*local_50, plVar11 != &local_108)) {
        local_140 = (undefined4)*plVar11;
        uStack_13c = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_138 = (undefined4)plVar11[1];
        uStack_134 = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_140);
      }
      local_70 = &local_108;
      plVar11 = (longlong *)
                FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar18,DAT_141a087b8),&local_70)
      ;
      uStack_148 = *(uint *)((longlong)plVar11 + 0xc);
      uStack_14c = (int)plVar11[1];
      if ((1 << ((byte)*(uint *)((longlong)plVar11 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_154 = *plVar11;
      }
      else {
        FUN_1400419b0(&local_154,plVar11);
      }
      plVar11 = &local_154;
      bVar2 = true;
      bVar15 = false;
    }
    else {
      uStack_17c = local_158;
      uStack_180 = local_d0;
      if ((1 << ((byte)local_158 & 0x1f) & 0x46U) == 0) {
        local_188 = lVar12;
      }
      else {
        FUN_1400419b0(&local_188,&local_d8);
      }
      plVar11 = &local_188;
      bVar2 = false;
      bVar15 = true;
    }
    if (plVar11 != param_3) {
      local_140 = (undefined4)*plVar11;
      uStack_13c = *(undefined4 *)((longlong)plVar11 + 4);
      uStack_138 = (undefined4)plVar11[1];
      uStack_134 = *(undefined4 *)((longlong)plVar11 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_140);
    }
    if ((bVar15) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_188);
    }
    if ((bVar2) && ((1 << ((byte)uStack_148 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_154);
    }
    goto LAB_14032b2bc;
  }
  local_a8 = 0x85;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde260 + 8))(DAT_141dde260,DAT_1419f13b8);
  if (plVar5 != &local_118) {
    local_188 = *plVar5;
    uStack_180 = (undefined4)plVar5[1];
    uStack_17c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
  }
  local_78 = &local_118;
  if ((int)local_58[0] < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_14032ae09:
    local_188 = *plVar5;
    uStack_180 = (undefined4)plVar5[1];
    uStack_17c = *(uint *)((longlong)plVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_188);
  }
  else {
    plVar5 = (longlong *)*local_50;
    if (plVar5 != &local_108) goto LAB_14032ae09;
  }
  local_70 = &local_108;
  bVar2 = false;
  bVar15 = true;
  plVar5 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar18,DAT_1419ff4f8),&local_78);
  if (plVar5 == &local_c8) {
  }
  else {
    local_188 = *plVar5;
    uStack_180 = (undefined4)plVar5[1];
    uStack_17c = *(uint *)((longlong)plVar5 + 0xc);
    FUN_140041b80(&local_c8,&local_188);
    lVar13 = local_c8;
    local_res18 = local_bc;
  }
  if ((local_res18 & 0xffffff) == 3) {
    bVar14 = lVar13 == 0;
  }
  else {
    bVar14 = (local_res18 & 0xffffff) == 5;
  }
  if (bVar14) {
    if (2 < (int)local_58[0]) {
      plVar11 = (longlong *)local_50[2];
    }
    uStack_17c = *(uint *)((longlong)plVar11 + 0xc);
    uStack_180 = (int)plVar11[1];
    if ((1 << ((byte)*(uint *)((longlong)plVar11 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_188 = *plVar11;
    }
    else {
      FUN_1400419b0(&local_188,plVar11);
    }
    plVar11 = &local_188;
    bVar2 = true;
    bVar15 = false;
  }
  else {
    uStack_148 = local_res18;
    uStack_14c = local_c0;
    if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) == 0) {
      local_154 = lVar13;
    }
    else {
      FUN_1400419b0(&local_154,&local_c8);
    }
    plVar11 = &local_154;
  }
  if (plVar11 != param_3) {
    local_140 = (undefined4)*plVar11;
    uStack_13c = *(undefined4 *)((longlong)plVar11 + 4);
    uStack_138 = (undefined4)plVar11[1];
    uStack_134 = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_140);
  }
  if ((bVar15) && ((1 << ((byte)uStack_148 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_154);
  }
  if ((bVar2) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
LAB_14032b2bc:
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_158 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,4,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar9 = local_50;
    do {
      puVar1 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

