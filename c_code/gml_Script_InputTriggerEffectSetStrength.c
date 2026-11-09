// gml_Script_InputTriggerEffectSetStrength @ 0x14036cd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputTriggerEffectSetStrength
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  ulonglong in_stack_fffffffffffffea0;
  double **ppdVar15;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  double *local_b0;
  double *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_d0 = "gml_Script_InputTriggerEffectSetPause";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 8;
  FUN_140041df0(local_58,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_13c = 0;
  local_148 = 0;
  local_7c = 0;
  local_88 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde770) &&
     (_Init_thread_header(&DAT_141dde770), DAT_141dde770 == -1)) {
    DAT_141dde768 = (longlong *)FUN_140e63aa0(DAT_1419f3978);
    _Init_thread_footer(&DAT_141dde770);
  }
  local_c8 = 8;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_c8 = 8;
    if ((int)local_58[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_50[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc13d == '\0') {
    FUN_140e64380(DAT_141dde768,"gml_Script_InputTriggerEffectSetPause");
    FUN_140e64380(param_1,"gml_Script_InputTriggerEffectSetPause");
  }
  local_c8 = 10;
  if (DAT_141ddc13d == '\0') {
    DAT_141ddc13d = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde768 + 0x10))(DAT_141dde768,DAT_141a026b8);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar13 = 0;
    uVar6 = gml_Script___InputVerbGroupsConfig(param_1,param_2,&local_148,0,0);
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_78,uVar13,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar13 >> 0x20);
    FUN_140e609c0(DAT_141dde768);
    if (&local_78 != puVar5) {
      local_158 = (double)local_78;
      uStack_150 = uStack_70;
      uStack_14c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    FUN_140e60910(1);
  }
  local_c8 = 6;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14036d054:
    local_158 = (double)*puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
    if ((double *)puVar5 != &local_128) goto LAB_14036d054;
  }
  local_b0 = &local_128;
  ppdVar15 = &local_b0;
  ppuVar14 = (undefined8 **)CONCAT44(uVar12,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,ppuVar14,ppdVar15);
  cVar2 = FUN_140e491e0(uVar6);
  uVar12 = 0;
  if (cVar2 == '\0') {
    local_c8 = 8;
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    uVar12 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((int)local_58[0] < 2) {
      pdVar7 = (double *)&DAT_1419df7b0;
LAB_14036d11f:
      local_158 = *pdVar7;
      uStack_150 = *(undefined4 *)(pdVar7 + 1);
      uStack_14c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      pdVar7 = (double *)local_50[1];
      if (pdVar7 != &local_118) goto LAB_14036d11f;
    }
    local_a8 = &local_118;
    local_158 = (double)CONCAT44(uRam0000000141dd18ac,_DAT_141dd18a8);
    uStack_150 = uRam0000000141dd18b0;
    uStack_14c = DAT_141dd18b4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_a0 = &local_108;
    ppdVar15 = &local_a8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c0,1,CONCAT44(uVar12,DAT_1419fdc58),ppdVar15);
    if (puVar5 != &local_f8) {
      local_158 = (double)*puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_158);
    }
    local_98 = &local_f8;
    local_158 = (double)CONCAT44(uRam0000000141dd18bc,_DAT_141dd18b8);
    uStack_150 = uRam0000000141dd18c0;
    uStack_14c = DAT_141dd18c4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_158);
    local_90 = local_e8;
    ppuVar14 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_88,3,ppuVar14);
    uVar12 = local_7c;
  }
  local_c8 = 0x11;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
  }
  uStack_14c = 0;
  local_158 = 1.0;
  uVar4 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar4 < 0x80000000) {
    local_c8 = 0x16;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = (double)CONCAT44(uRam0000000141dd18cc,_DAT_141dd18c8);
    uStack_150 = uRam0000000141dd18d0;
    uStack_14c = DAT_141dd18d4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_b0 = &local_128;
    if ((int)local_58[0] < 2) {
      pdVar7 = (double *)&DAT_1419df7b0;
LAB_14036d35d:
      local_158 = *pdVar7;
      uStack_150 = *(undefined4 *)(pdVar7 + 1);
      uStack_14c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      pdVar7 = (double *)local_50[1];
      if (pdVar7 != &local_118) goto LAB_14036d35d;
    }
    local_a8 = &local_118;
    local_158 = (double)CONCAT44(uRam0000000141dd189c,_DAT_141dd1898);
    uStack_150 = uRam0000000141dd18a0;
    uStack_14c = DAT_141dd18a4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_a0 = &local_108;
    local_158 = (double)CONCAT44(uRam00000001419e44c4,_DAT_1419e44c0);
    uStack_150 = uRam00000001419e44c8;
    uStack_14c = uRam00000001419e44cc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
    local_98 = &local_f8;
    local_158 = (double)CONCAT44(uRam0000000141dd18dc,_DAT_141dd18d8);
    uStack_150 = uRam0000000141dd18e0;
    uStack_14c = DAT_141dd18e4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_158);
    local_90 = local_e8;
    ppuVar14 = &local_b0;
    FUN_14008e020(param_1,param_2,&local_148,5,ppuVar14);
  }
  local_c8 = 0x1d;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
  }
  uStack_14c = 0;
  local_158 = 0.0;
  iVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (!(iVar3 == -2 || -1 < iVar3)) {
    local_c8 = 0x1d;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = (double)CONCAT44(uRam0000000141dd18cc,_DAT_141dd18c8);
    uStack_150 = uRam0000000141dd18d0;
    uStack_14c = DAT_141dd18d4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_b0 = &local_128;
    if ((int)local_58[0] < 2) {
      pdVar7 = (double *)&DAT_1419df7b0;
LAB_14036d567:
      local_158 = *pdVar7;
      uStack_150 = *(undefined4 *)(pdVar7 + 1);
      uStack_14c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      pdVar7 = (double *)local_50[1];
      if (pdVar7 != &local_118) goto LAB_14036d567;
    }
    local_a8 = &local_118;
    local_158 = (double)CONCAT44(uRam0000000141dd18ec,_DAT_141dd18e8);
    uStack_150 = uRam0000000141dd18f0;
    uStack_14c = DAT_141dd18f4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_a0 = &local_108;
    ppuVar14 = &local_b0;
    FUN_14008e020(param_1,param_2,&local_148,3,ppuVar14);
  }
  local_c8 = 0xe;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
  }
  uStack_14c = 0;
  local_158 = -3.0;
  iVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar3 == 0) {
    local_c8 = 0x10;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_138 = 0.0;
    local_c8 = 0x13;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if (((int)local_58[0] < 1) ||
       (puVar10 = (undefined8 *)*local_50, (double *)puVar10 != &local_128)) {
      local_158 = (double)*puVar10;
      uStack_150 = *(undefined4 *)(puVar10 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    local_b0 = &local_128;
    local_a8 = &local_138;
    gml_Script_InputTriggerEffectSetStrength(param_1,param_2,&local_148,2,&local_b0);
    local_c8 = 0x14;
    uVar4 = local_12c & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        local_138 = (double)FUN_140e4b060(&local_138);
        local_12c = 0;
      }
      else {
        if (uVar4 == 7) {
          local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          local_c8 = 0x17;
          goto LAB_14036d98e;
        }
        if (uVar4 == 10) {
          local_138 = (double)((longlong)local_138 + 1);
          local_c8 = 0x17;
          goto LAB_14036d98e;
        }
        if (uVar4 != 0xd) {
          FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          local_c8 = 0x17;
          goto LAB_14036d98e;
        }
        local_12c = 0;
      }
    }
    local_138 = local_138 + 1.0;
    local_c8 = 0x17;
    goto LAB_14036d98e;
  }
  local_c8 = 0x1a;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde768 + 8))(DAT_141dde768,DAT_141a026b8);
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
  }
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar9 = plVar8;
  }
  FUN_140e87440(plVar9,DAT_141a03dc8,0x80000000,&local_68,(ulonglong)ppuVar14 & 0xffffffffffffff00,
                (ulonglong)ppdVar15 & 0xffffffffffffff00);
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14036d8be:
    local_158 = (double)*puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_50;
    if ((double *)puVar5 != &local_128) goto LAB_14036d8be;
  }
  local_b0 = &local_128;
  if (1 < (int)local_58[0]) {
    puVar10 = (undefined8 *)local_50[1];
  }
  iVar3 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar6 = FUN_140069500(plVar8);
  FUN_140e63610(uVar6,param_2,&local_148,1,&local_68,&local_b0);
LAB_14036d98e:
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar10 = local_50;
    do {
      puVar5 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

