// gml_Script_InputXYNewest @ 0x140388ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputXYNewest
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
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined4 uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 uVar14;
  undefined4 uVar17;
  undefined1 **ppuVar15;
  double **ppdVar16;
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
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  double *local_b0;
  undefined1 *local_a8;
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
  
  local_98 = "gml_Script_InputX";
  local_a0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a0;
  local_90 = 8;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_78,param_4,2,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_14c = 0;
  local_158 = 0;
  local_7c = 0;
  local_88 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde978) &&
     (_Init_thread_header(&DAT_141dde978), DAT_141dde978 == -1)) {
    DAT_141dde970 = (longlong *)FUN_140e63aa0(DAT_1419f44f8);
    _Init_thread_footer(&DAT_141dde978);
  }
  local_90 = 8;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_70[1];
  }
  iVar3 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_90 = 8;
    if ((int)local_78[0] < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_70[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if (DAT_141ddc161 == '\0') {
    FUN_140e64380(DAT_141dde970,"gml_Script_InputX");
    FUN_140e64380(local_res8,"gml_Script_InputX");
  }
  local_90 = 10;
  if (DAT_141ddc161 == '\0') {
    DAT_141ddc161 = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    pdVar5 = (double *)(**(code **)(*DAT_141dde970 + 0x10))(DAT_141dde970,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde970);
    uVar13 = 0;
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
LAB_1403891ab:
    local_148 = *pdVar5;
    dStack_140 = pdVar5[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    pdVar5 = (double *)local_70[1];
    if (pdVar5 != &local_128) goto LAB_1403891ab;
  }
  local_c8 = &local_128;
  uVar14 = CONCAT44(uVar13,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar14,&local_c8);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  uVar13 = 0;
  if (cVar2 == '\0') {
    local_90 = 8;
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_78[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_14038927e:
      local_148 = *pdVar5;
      dStack_140 = pdVar5[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      pdVar5 = (double *)local_70[1];
      if (pdVar5 != &local_118) goto LAB_14038927e;
    }
    local_c0 = &local_118;
    local_148 = _DAT_141dd2178;
    dStack_140 = (double)uRam0000000141dd2180;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_b8 = local_108;
    pdVar5 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_d8,1,CONCAT44(uVar17,DAT_1419fdc58),
                           &local_c0);
    if (pdVar5 != &local_f8) {
      local_148 = *pdVar5;
      dStack_140 = pdVar5[1];
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_b0 = &local_f8;
    local_148 = _DAT_141dd2148;
    dStack_140 = dRam0000000141dd2150;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_a8 = local_e8;
    ppuVar15 = &local_b8;
    FUN_14008e020(local_res8,local_res10,&local_88,3,ppuVar15);
    uVar17 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
    uVar13 = local_7c;
  }
  bVar12 = (byte)uVar13;
  local_90 = 0x10;
  if ((int)local_78[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_70[1];
  }
  dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
  local_148 = 1.0;
  uVar4 = FUN_140e851f0(puVar9,&local_148,DAT_141955260,1);
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
    local_148 = _DAT_141dd2168;
    dStack_140 = (double)uRam0000000141dd2170;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_c8 = &local_128;
    if ((int)local_78[0] < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_1403894ca:
      local_148 = *pdVar5;
      dStack_140 = pdVar5[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      pdVar5 = (double *)local_70[1];
      if (pdVar5 != &local_118) goto LAB_1403894ca;
    }
    local_c0 = &local_118;
    local_148 = _DAT_141dd2158;
    dStack_140 = (double)uRam0000000141dd2160;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_b8 = local_108;
    local_148 = _DAT_1419e4620;
    dStack_140 = (double)uRam00000001419e4628;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_b0 = &local_f8;
    local_148 = _DAT_141dd2138;
    dStack_140 = dRam0000000141dd2140;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_a8 = local_e8;
    ppdVar16 = &local_c8;
    FUN_14008e020(local_res8,local_res10,&local_158,5,ppdVar16);
    uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
  }
  local_90 = 0x17;
  if ((int)local_78[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_70[1];
  }
  dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
  local_148 = 0.0;
  iVar3 = FUN_140e851f0(puVar9,&local_148,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140389775;
  local_90 = 0x17;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_138 = _DAT_141dd2168;
  dStack_130 = (double)uRam0000000141dd2170;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_138);
  local_c8 = &local_128;
  if ((int)local_78[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1403896d6:
    local_138 = *pdVar5;
    dStack_130 = pdVar5[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    pdVar5 = (double *)local_70[1];
    if (pdVar5 != &local_118) goto LAB_1403896d6;
  }
  local_c0 = &local_118;
  local_138 = _DAT_141dd2128;
  dStack_130 = dRam0000000141dd2130;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_b8 = local_108;
  ppdVar16 = &local_c8;
  FUN_14008e020(local_res8,local_res10,&local_158,3,ppdVar16);
  uVar17 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
LAB_140389775:
  local_90 = 0xe;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde970 + 8))(DAT_141dde970,DAT_141a026b8);
  if ((int)local_78[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_70[1];
  }
  iVar3 = FUN_140e4a740(puVar9);
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
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_70;
    }
    FUN_140041c60(&local_128,puVar9);
    local_c8 = &local_128;
    uVar14 = CONCAT44(uVar17,DAT_141a014a8);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar14,&local_c8);
    uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 == '\0') {
      local_90 = 10;
      if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      local_88 = 0;
      local_80 = 0;
      local_7c = 5;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if ((int)local_78[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar9);
      local_c0 = &local_118;
      local_138 = _DAT_141dd20e8;
      dStack_130 = (double)uRam0000000141dd20f0;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_b8 = local_108;
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_d8,1,CONCAT44(uVar17,DAT_1419fdc58),
                            &local_c0);
      FUN_140041c60(&local_f8,uVar7);
      local_b0 = &local_f8;
      local_138 = _DAT_141dd2148;
      dStack_130 = dRam0000000141dd2150;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_138);
      local_a8 = local_e8;
      FUN_14008e020(local_res8,local_res10,&local_88,3,&local_b8);
      uVar13 = local_7c;
    }
    bVar12 = (byte)uVar13;
    local_90 = 0x10;
    plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
    if (((*(int *)((longlong)plVar8 + 0xc) != 2) || (*plVar8 == 0)) ||
       (*(int *)(*plVar8 + 0x24) == 0)) {
      local_90 = 0x17;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      local_138 = _DAT_141dd2108;
      dStack_130 = (double)uRam0000000141dd2110;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
      local_c8 = &local_128;
      if ((int)local_78[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar9);
      local_c0 = &local_118;
      local_138 = _DAT_141dd2118;
      dStack_130 = dRam0000000141dd2120;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_b8 = local_108;
      FUN_14008e020(local_res8,local_res10,&local_158,3,&local_c8);
    }
    local_90 = 0x17;
    iVar3 = 0;
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar3 = *(int *)(*plVar8 + 0x24);
    }
    if ((int)local_78[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_70;
    }
    dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
    local_148 = (double)iVar3;
    uVar4 = FUN_140e851f0(puVar9,&local_148,DAT_141955260,1);
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
      local_138 = _DAT_141dd2108;
      dStack_130 = (double)uRam0000000141dd2110;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
      local_c8 = &local_128;
      if ((int)local_78[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar9);
      local_c0 = &local_118;
      local_138 = _DAT_141dd20f8;
      dStack_130 = (double)uRam0000000141dd2100;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_b8 = local_108;
      iVar3 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar3 = *(int *)(*plVar8 + 0x24);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = (double)iVar3;
      local_b0 = &local_f8;
      local_138 = _DAT_141dd2138;
      dStack_130 = dRam0000000141dd2140;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_138);
      local_a8 = local_e8;
      FUN_14008e020(local_res8,local_res10,&local_158,5,&local_c8);
    }
    if ((int)local_78[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_70;
    }
    dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff);
    local_148 = 0.0;
    iVar3 = FUN_140e851f0(puVar9,&local_148,DAT_141955260,1);
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
      local_138 = _DAT_141dd2108;
      dStack_130 = (double)uRam0000000141dd2110;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
      local_c8 = &local_128;
      if ((int)local_78[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_70;
      }
      FUN_140041c60(&local_118,puVar9);
      local_c0 = &local_118;
      local_138 = _DAT_141dd2128;
      dStack_130 = dRam0000000141dd2130;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_b8 = local_108;
      FUN_14008e020(local_res8,local_res10,&local_158,3,&local_c8);
    }
    local_90 = 0x12;
    plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
    if (0 < (int)local_78[0]) {
      puVar10 = (undefined8 *)*local_70;
    }
    iVar3 = FUN_140e4a740(puVar10);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        FUN_140041c60(param_3,0);
      }
      else {
        FUN_140041c60(param_3,(longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      FUN_140041c60(param_3,plVar8);
    }
  }
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar10 = local_70;
    do {
      puVar9 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_a0;
  return param_3;
}

