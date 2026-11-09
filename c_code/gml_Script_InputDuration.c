// gml_Script_InputDuration @ 0x1403281a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputDuration
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined4 uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 uVar15;
  undefined4 uVar18;
  undefined1 **ppuVar16;
  double **ppdVar17;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  double *local_d8;
  double *local_d0;
  undefined1 *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_98 = "gml_Script_InputDistance";
  local_a0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a0;
  local_90 = 8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_78,param_4,2,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_14c = 0;
  local_158 = 0;
  local_7c = 0;
  local_88 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde228) &&
     (_Init_thread_header(&DAT_141dde228), DAT_141dde228 == -1)) {
    DAT_141dde230 = (longlong *)FUN_140e63aa0(DAT_1419f1358);
    _Init_thread_footer(&DAT_141dde228);
  }
  local_90 = 8;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[1];
  }
  iVar3 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_90 = 8;
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
  }
  if (DAT_141ddc0e1 == '\0') {
    FUN_140e64380(DAT_141dde230,"gml_Script_InputDistance");
    FUN_140e64380(local_res8,"gml_Script_InputDistance");
  }
  local_90 = 10;
  if (DAT_141ddc0e1 == '\0') {
    DAT_141ddc0e1 = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    pdVar5 = (double *)(**(code **)(*DAT_141dde230 + 0x10))(DAT_141dde230,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde230);
    uVar14 = 0;
    pdVar6 = (double *)gml_Script___InputTrace(local_res8,local_res10,&local_158,0,0);
    if (pdVar6 != pdVar5) {
      local_148 = *pdVar6;
      dStack_140 = pdVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_148);
    }
    FUN_140e60910(1);
  }
  local_90 = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_78[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140328471:
    local_148 = *pdVar5;
    dStack_140 = pdVar5[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    pdVar5 = (double *)local_70[1];
    if (pdVar5 != &local_128) goto LAB_140328471;
  }
  local_d8 = &local_128;
  uVar15 = CONCAT44(uVar14,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar15,&local_d8);
  uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  uVar14 = 0;
  if (cVar2 == '\0') {
    local_90 = 9;
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((int)local_78[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_140328545:
      local_148 = *pdVar5;
      dStack_140 = pdVar5[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      pdVar5 = (double *)local_70[1];
      if (pdVar5 != &local_118) goto LAB_140328545;
    }
    local_d0 = &local_118;
    local_148 = _DAT_141dd0308;
    dStack_140 = (double)uRam0000000141dd0310;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_c8 = local_108;
    pdVar5 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_b0,1,CONCAT44(uVar18,DAT_1419fdc58),
                           &local_d0);
    if (pdVar5 != &local_f8) {
      local_148 = *pdVar5;
      dStack_140 = pdVar5[1];
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_c0 = &local_f8;
    local_148 = _DAT_141dd0358;
    dStack_140 = dRam0000000141dd0360;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_b8 = local_e8;
    ppuVar16 = &local_c8;
    FUN_14008e020(local_res8,local_res10,&local_88,3,ppuVar16);
    uVar18 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    uVar14 = local_7c;
  }
  bVar13 = (byte)uVar14;
  local_90 = 0x10;
  if ((int)local_78[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[1];
  }
  dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
  local_148 = 1.0;
  uVar4 = FUN_140e851f0(puVar10,&local_148,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar4 < 0x80000000) {
    local_90 = 0x12;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = _DAT_141dd02f8;
    dStack_140 = (double)uRam0000000141dd0300;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_d8 = &local_128;
    if ((int)local_78[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_140328793:
      local_148 = *pdVar5;
      dStack_140 = pdVar5[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      pdVar5 = (double *)local_70[1];
      if (pdVar5 != &local_118) goto LAB_140328793;
    }
    local_d0 = &local_118;
    local_148 = _DAT_141dd0328;
    dStack_140 = (double)uRam0000000141dd0330;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_c8 = local_108;
    local_148 = _DAT_1419e4020;
    dStack_140 = (double)uRam00000001419e4028;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_c0 = &local_f8;
    local_148 = _DAT_141dd02e8;
    dStack_140 = dRam0000000141dd02f0;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_b8 = local_e8;
    ppdVar17 = &local_d8;
    FUN_14008e020(local_res8,local_res10,&local_158,5,ppdVar17);
    uVar18 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
  }
  local_90 = 0x17;
  if ((int)local_78[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[1];
  }
  dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
  local_148 = 0.0;
  iVar3 = FUN_140e851f0(puVar10,&local_148,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140328a40;
  local_90 = 0x17;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_138 = _DAT_141dd02f8;
  dStack_130 = (double)uRam0000000141dd0300;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_138);
  local_d8 = &local_128;
  if ((int)local_78[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1403289a1:
    local_138 = *pdVar5;
    dStack_130 = pdVar5[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    pdVar5 = (double *)local_70[1];
    if (pdVar5 != &local_118) goto LAB_1403289a1;
  }
  local_d0 = &local_118;
  local_138 = _DAT_141dd0348;
  dStack_130 = dRam0000000141dd0350;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_c8 = local_108;
  ppdVar17 = &local_d8;
  FUN_14008e020(local_res8,local_res10,&local_158,3,ppdVar17);
  uVar18 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
LAB_140328a40:
  local_90 = 0xe;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde230 + 8))(DAT_141dde230,DAT_141a026b8);
  if ((int)local_78[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[1];
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
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,plVar8);
  if (iVar3 < 1) {
    FUN_140e63970(local_68,&local_res8,&local_res10);
  }
  else {
    local_90 = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    FUN_140041c60(&local_128,puVar10);
    local_d8 = &local_128;
    uVar15 = CONCAT44(uVar18,DAT_141a014a8);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar15,&local_d8);
    uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 == '\0') {
      local_90 = 10;
      if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      local_88 = 0;
      local_80 = 0;
      local_7c = 5;
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0;
      local_a4 = 5;
      if ((int)local_78[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar10);
      local_d0 = &local_118;
      local_138 = _DAT_141dd0338;
      dStack_130 = (double)uRam0000000141dd0340;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_c8 = local_108;
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_b0,1,CONCAT44(uVar18,DAT_1419fdc58),
                            &local_d0);
      FUN_140041c60(&local_f8,uVar7);
      local_c0 = &local_f8;
      local_138 = _DAT_141dd0358;
      dStack_130 = dRam0000000141dd0360;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_138);
      local_b8 = local_e8;
      ppuVar16 = &local_c8;
      FUN_14008e020(local_res8,local_res10,&local_88,3,ppuVar16);
      uVar18 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
      uVar14 = local_7c;
    }
    bVar13 = (byte)uVar14;
    local_90 = 0x10;
    plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
    if (((*(int *)((longlong)plVar8 + 0xc) != 2) || (*plVar8 == 0)) ||
       (*(int *)(*plVar8 + 0x24) == 0)) {
      local_90 = 0x12;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      local_138 = _DAT_141dd02c8;
      dStack_130 = (double)uRam0000000141dd02d0;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
      local_d8 = &local_128;
      if ((int)local_78[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar10);
      local_d0 = &local_118;
      local_138 = _DAT_141dd02d8;
      dStack_130 = dRam0000000141dd02e0;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_c8 = local_108;
      ppdVar17 = &local_d8;
      FUN_14008e020(local_res8,local_res10,&local_158,3,ppdVar17);
      uVar18 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
    }
    local_90 = 0x17;
    iVar3 = 0;
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar3 = *(int *)(*plVar8 + 0x24);
    }
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
    local_148 = (double)iVar3;
    uVar4 = FUN_140e851f0(puVar10,&local_148,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (uVar4 < 0x80000000) {
      local_90 = 0x17;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
      local_138 = _DAT_141dd02c8;
      dStack_130 = (double)uRam0000000141dd02d0;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
      local_d8 = &local_128;
      if ((int)local_78[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar10);
      local_d0 = &local_118;
      local_138 = _DAT_141dd0318;
      dStack_130 = (double)uRam0000000141dd0320;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_c8 = local_108;
      iVar3 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar3 = *(int *)(*plVar8 + 0x24);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = (double)iVar3;
      local_c0 = &local_f8;
      local_138 = _DAT_141dd02e8;
      dStack_130 = dRam0000000141dd02f0;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_138);
      local_b8 = local_e8;
      ppdVar17 = &local_d8;
      FUN_14008e020(local_res8,local_res10,&local_158,5,ppdVar17);
      uVar18 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
    }
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
    local_148 = 0.0;
    iVar3 = FUN_140e851f0(puVar10,&local_148,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      local_138 = _DAT_141dd02c8;
      dStack_130 = (double)uRam0000000141dd02d0;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
      local_d8 = &local_128;
      if ((int)local_78[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar10);
      local_d0 = &local_118;
      local_138 = _DAT_141dd0348;
      dStack_130 = dRam0000000141dd0350;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_c8 = local_108;
      ppdVar17 = &local_d8;
      FUN_14008e020(local_res8,local_res10,&local_158,3,ppdVar17);
      uVar18 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
    }
    local_90 = 0x12;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
    plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6b8);
    local_138 = _DAT_141dc6450;
    dStack_130 = dRam0000000141dc6458;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_138);
    local_d8 = &local_128;
    local_138 = _DAT_141dc6450;
    dStack_130 = dRam0000000141dc6458;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_d0 = &local_118;
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    iVar3 = FUN_140e4a740(puVar10);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
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
    }
    FUN_140041c60(local_108,plVar9);
    local_c8 = local_108;
    if (0 < (int)local_78[0]) {
      puVar11 = (undefined8 *)*local_70;
    }
    iVar3 = FUN_140e4a740(puVar11);
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
    FUN_140041c60(&local_f8,plVar8);
    local_c0 = &local_f8;
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_158,4,CONCAT44(uVar18,DAT_1419fd548),
                          &local_d8);
    param_3 = local_res18;
    FUN_140041c60(local_res18,uVar7);
  }
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar11 = local_70;
    do {
      puVar10 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_a0;
  return param_3;
}

