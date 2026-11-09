// gml_Script_InputDistance @ 0x140326cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_InputDistance
                   (longlong *param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined4 uVar14;
  float fVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 uVar16;
  undefined4 uVar19;
  undefined1 **ppuVar17;
  double **ppdVar18;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  byte local_13c;
  double local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  double local_118;
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  double *local_d0;
  double *local_c8;
  undefined1 *local_c0;
  double *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  uint local_8c;
  double local_88;
  uint local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_f0 = "gml_Script_InputDirection";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 9;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_78,param_4,3,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_16c = 0;
  local_178 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde21c) &&
     (_Init_thread_header(&DAT_141dde21c), DAT_141dde21c == -1)) {
    DAT_141dde220 = (longlong *)FUN_140e63aa0(DAT_1419f1218);
    _Init_thread_footer(&DAT_141dde21c);
  }
  local_e8 = 9;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[2];
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_e8 = 9;
    if ((int)local_78[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
  }
  if (DAT_141ddc0e0 == '\0') {
    FUN_140e64380(DAT_141dde220,"gml_Script_InputDirection");
    FUN_140e64380(local_res8,"gml_Script_InputDirection");
  }
  local_e8 = 0xb;
  if (DAT_141ddc0e0 == '\0') {
    DAT_141ddc0e0 = '\x01';
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141dde220 + 0x10))(DAT_141dde220,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde220);
    uVar14 = 0;
    pdVar7 = (double *)gml_Script___InputTrace(local_res8,local_res10,&local_178,0,0);
    if (pdVar7 != pdVar6) {
      local_168 = *pdVar7;
      dStack_160 = pdVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_168);
    }
    FUN_140e60910(1);
  }
  local_e8 = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_78[0] < 3) {
    pdVar6 = (double *)&DAT_1419df7b0;
LAB_140326fa1:
    local_168 = *pdVar6;
    dStack_160 = pdVar6[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  else {
    pdVar6 = (double *)local_70[2];
    if (pdVar6 != &local_148) goto LAB_140326fa1;
  }
  local_d0 = &local_148;
  uVar16 = CONCAT44(uVar14,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_178,1,uVar16,&local_d0);
  uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  uVar14 = 0;
  if (cVar3 == '\0') {
    local_e8 = 9;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((int)local_78[0] < 3) {
      pdVar6 = (double *)&DAT_1419df7b0;
LAB_140327074:
      local_168 = *pdVar6;
      dStack_160 = pdVar6[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      pdVar6 = (double *)local_70[2];
      if (pdVar6 != &local_138) goto LAB_140327074;
    }
    local_c8 = &local_138;
    local_168 = _DAT_141dd0298;
    dStack_160 = (double)uRam0000000141dd02a0;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_c0 = local_128;
    pdVar6 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_e0,1,CONCAT44(uVar19,DAT_1419fdc58),
                           &local_c8);
    if (pdVar6 != &local_118) {
      local_168 = *pdVar6;
      dStack_160 = pdVar6[1];
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    local_b8 = &local_118;
    local_168 = _DAT_141dd0278;
    dStack_160 = dRam0000000141dd0280;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_b0 = local_108;
    ppuVar17 = &local_c0;
    FUN_14008e020(local_res8,local_res10,&local_a8,3,ppuVar17);
    uVar19 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
    uVar14 = local_9c;
  }
  bVar13 = (byte)uVar14;
  local_e8 = 0xf;
  if ((int)local_78[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[2];
  }
  dStack_160 = (double)((ulonglong)dStack_160 & 0xffffffff);
  local_168 = 1.0;
  uVar5 = FUN_140e851f0(puVar10,&local_168,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar5 < 0x80000000) {
    local_e8 = 0x14;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_168 = _DAT_141dd0288;
    dStack_160 = (double)uRam0000000141dd0290;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
    local_d0 = &local_148;
    if ((int)local_78[0] < 3) {
      pdVar6 = (double *)&DAT_1419df7b0;
LAB_1403272c0:
      local_168 = *pdVar6;
      dStack_160 = pdVar6[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      pdVar6 = (double *)local_70[2];
      if (pdVar6 != &local_138) goto LAB_1403272c0;
    }
    local_c8 = &local_138;
    local_168 = _DAT_141dd02b8;
    dStack_160 = (double)uRam0000000141dd02c0;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_c0 = local_128;
    local_168 = _DAT_1419e4010;
    dStack_160 = (double)uRam00000001419e4018;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
    local_b8 = &local_118;
    local_168 = _DAT_141dd02a8;
    dStack_160 = dRam0000000141dd02b0;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_b0 = local_108;
    ppdVar18 = &local_d0;
    FUN_14008e020(local_res8,local_res10,&local_178,5,ppdVar18);
    uVar19 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
  }
  local_e8 = 0x1c;
  if ((int)local_78[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[2];
  }
  dStack_160 = (double)((ulonglong)dStack_160 & 0xffffffff);
  local_168 = 0.0;
  iVar4 = FUN_140e851f0(puVar10,&local_168,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)dStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_e8 = 0x1c;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_158 = _DAT_141dd0288;
    dStack_150 = (double)uRam0000000141dd0290;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_158);
    local_d0 = &local_148;
    if ((int)local_78[0] < 3) {
      pdVar6 = (double *)&DAT_1419df7b0;
LAB_1403274cc:
      local_158 = *pdVar6;
      dStack_150 = pdVar6[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_158);
    }
    else {
      pdVar6 = (double *)local_70[2];
      if (pdVar6 != &local_138) goto LAB_1403274cc;
    }
    local_c8 = &local_138;
    local_158 = _DAT_141dd0268;
    dStack_150 = dRam0000000141dd0270;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_158);
    local_c0 = local_128;
    ppdVar18 = &local_d0;
    FUN_14008e020(local_res8,local_res10,&local_178,3,ppdVar18);
    uVar19 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
  }
  local_e8 = 0xf;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde220 + 8))(DAT_141dde220,DAT_141a026b8);
  if ((int)local_78[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_70[2];
  }
  iVar4 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_68,&local_res8,&local_res10,plVar9);
  if (iVar4 < 1) {
    FUN_140e63970(local_68,&local_res8,&local_res10);
  }
  else {
    local_e8 = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    FUN_140041c60(&local_148,puVar10);
    local_d0 = &local_148;
    uVar16 = CONCAT44(uVar19,DAT_141a014a8);
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_178,1,uVar16,&local_d0);
    uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 == '\0') {
      local_e8 = 9;
      if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      local_e0 = 0;
      local_d8 = 0;
      local_d4 = 5;
      if ((int)local_78[0] < 2) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)local_70[1];
      }
      FUN_140041c60(&local_138,puVar10);
      local_c8 = &local_138;
      local_158 = _DAT_141dd0238;
      dStack_150 = (double)uRam0000000141dd0240;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_c0 = local_128;
      uVar8 = FUN_140e634e0(local_res8,local_res10,&local_e0,1,CONCAT44(uVar19,DAT_1419fdc58),
                            &local_c8);
      FUN_140041c60(&local_118,uVar8);
      local_b8 = &local_118;
      local_158 = _DAT_141dd0278;
      dStack_150 = dRam0000000141dd0280;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_158);
      local_b0 = local_108;
      FUN_14008e020(local_res8,local_res10,&local_a8,3,&local_c0);
      uVar14 = local_9c;
    }
    bVar13 = (byte)uVar14;
    local_e8 = 0xf;
    plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
    if (((*(int *)((longlong)plVar9 + 0xc) != 2) || (*plVar9 == 0)) ||
       (*(int *)(*plVar9 + 0x24) == 0)) {
      local_e8 = 0x14;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_158 = _DAT_141dd0258;
      dStack_150 = (double)uRam0000000141dd0260;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_158);
      local_d0 = &local_148;
      if ((int)local_78[0] < 2) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)local_70[1];
      }
      FUN_140041c60(&local_138,puVar10);
      local_c8 = &local_138;
      local_158 = _DAT_141dd0248;
      dStack_150 = dRam0000000141dd0250;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_c0 = local_128;
      FUN_14008e020(local_res8,local_res10,&local_178,3,&local_d0);
    }
    local_e8 = 0x1c;
    iVar4 = 0;
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar4 = *(int *)(*plVar9 + 0x24);
    }
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    dStack_160 = (double)((ulonglong)dStack_160 & 0xffffffff);
    local_168 = (double)iVar4;
    uVar5 = FUN_140e851f0(puVar10,&local_168,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (uVar5 < 0x80000000) {
      local_e8 = 0x1c;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
      local_158 = _DAT_141dd0258;
      dStack_150 = (double)uRam0000000141dd0260;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_158);
      local_d0 = &local_148;
      if ((int)local_78[0] < 2) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)local_70[1];
      }
      FUN_140041c60(&local_138,puVar10);
      local_c8 = &local_138;
      local_158 = _DAT_141dd0228;
      dStack_150 = (double)uRam0000000141dd0230;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_c0 = local_128;
      iVar4 = 0;
      if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
        iVar4 = *(int *)(*plVar9 + 0x24);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_10c = 0;
      local_118 = (double)iVar4;
      local_b8 = &local_118;
      local_158 = _DAT_141dd02a8;
      dStack_150 = dRam0000000141dd02b0;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_158);
      local_b0 = local_108;
      FUN_14008e020(local_res8,local_res10,&local_178,5,&local_d0);
    }
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    dStack_160 = (double)((ulonglong)dStack_160 & 0xffffffff);
    local_168 = 0.0;
    iVar4 = FUN_140e851f0(puVar10,&local_168,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar4 != -2 && iVar4 < 0) {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_158 = _DAT_141dd0258;
      dStack_150 = (double)uRam0000000141dd0260;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_158);
      local_d0 = &local_148;
      if ((int)local_78[0] < 2) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)local_70[1];
      }
      FUN_140041c60(&local_138,puVar10);
      local_c8 = &local_138;
      local_158 = _DAT_141dd0268;
      dStack_150 = dRam0000000141dd0270;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_c0 = local_128;
      FUN_14008e020(local_res8,local_res10,&local_178,3,&local_d0);
    }
    local_e8 = 0x13;
    pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd638);
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    iVar4 = FUN_140e4a740(puVar10);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar2 = *pdVar6, dVar2 != 0.0)) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar2 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar2 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar6 != &local_88) {
      local_158 = *pdVar6;
      dStack_150 = pdVar6[1];
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_158);
    }
    local_e8 = 0x14;
    pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6b8);
    if ((int)local_78[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_70[1];
    }
    iVar4 = FUN_140e4a740(puVar10);
    if (((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 2) && (dVar2 = *pdVar6, dVar2 != 0.0)) {
      if ((iVar4 < 0) || (*(int *)((longlong)dVar2 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)((longlong)dVar2 + 0x24));
        pdVar6 = (double *)0x0;
      }
      else {
        pdVar6 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar6 != &local_98) {
      local_158 = *pdVar6;
      dStack_150 = pdVar6[1];
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_158);
    }
    local_e8 = 0x16;
    dStack_160 = (double)((ulonglong)dStack_160 & 0xffffffff);
    local_168 = 0.0;
    iVar4 = FUN_140e851f0(&local_88,&local_168,DAT_141955260,0);
    if ((1 << ((byte)((ulonglong)dStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar4 == 0) {
      dStack_160 = (double)((ulonglong)dStack_160 & 0xffffffff);
      local_168 = 0.0;
      iVar4 = FUN_140e851f0(&local_98,&local_168,DAT_141955260,0);
      if ((1 << ((byte)((ulonglong)dStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if (iVar4 == 0) {
        local_e8 = 0x16;
        if (0 < (int)local_78[0]) {
          puVar11 = (undefined8 *)*local_70;
        }
        FUN_140041c60(param_3,puVar11);
        goto LAB_140327f6c;
      }
    }
    local_e8 = 0x17;
    if ((local_8c & 0xffffff) != 0) {
      FUN_140e4b060(&local_98);
    }
    if ((local_7c & 0xffffff) != 0) {
      FUN_140e4b060(&local_88);
    }
    fVar15 = (float)FUN_140e793d0();
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = (double)fVar15;
  }
LAB_140327f6c:
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

