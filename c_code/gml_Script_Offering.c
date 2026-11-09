// gml_Script_Offering @ 0x1403bf050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_Offering(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  longlong **pplVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  double *pdVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  code *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong in_stack_fffffffffffffda0;
  ulonglong uVar21;
  double **ppdVar22;
  ulonglong uVar23;
  longlong ***ppplVar24;
  undefined8 uVar25;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  double local_1e0;
  uint local_1d4;
  double local_1d0;
  undefined4 local_1c4;
  double local_1c0;
  uint local_1b4;
  double local_1b0;
  uint local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  double local_190;
  uint local_184;
  undefined8 *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  double local_158;
  byte local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  double *local_118;
  longlong **local_110;
  undefined1 *local_108;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  
  local_1f0 = "gml_Script_anon@829@Offering@OFFERINGSINIT";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_1f8;
  local_1e8 = 0x1b;
  FUN_140041df0(local_a8,param_4,4,param_5);
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_158,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0.0;
  local_1b4 = 0xffffff;
  local_1c0 = 0.0;
  local_22c = 0;
  local_238 = 0;
  local_1fc = 0;
  local_208 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x1b;
  pdVar10 = (double *)&DAT_1419df7b0;
  uVar9 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_1e8 = 0x1b;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    pcVar18 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6048);
    in_stack_fffffffffffffda0 = 0;
    puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_238,0,pcVar18,0);
    uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_210 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = (undefined8 *)*puVar4;
    }
    else {
      FUN_1400419b0(&local_218,puVar4);
    }
    uStack_21c = 7;
    local_228 = (longlong *)CONCAT44(local_228._4_4_,3);
    FUN_140042560(&local_218,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((int)local_a8[0] < 3) {
      ppuVar8 = (undefined8 **)&DAT_1419df7b0;
LAB_1403bf318:
      local_228 = local_218;
      uStack_220 = uStack_210;
      uStack_21c = uStack_20c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar8);
      }
      FUN_140041b80(ppuVar8,&local_228);
    }
    else {
      ppuVar8 = (undefined8 **)local_a0[2];
      if (&local_218 != ppuVar8) goto LAB_1403bf318;
    }
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  if ((int)local_a8[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[3];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_a8[0] < 4) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_a0[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  local_1e8 = 0x1d;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ca8);
  FUN_140e87440(uVar5,DAT_141a0a928,0x80000000,&local_b8,(ulonglong)pcVar18 & 0xffffffffffffff00,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  uVar5 = FUN_140069500(uVar5);
  uVar21 = 0;
  puVar4 = &local_b8;
  pdVar6 = (double *)FUN_140e63610(uVar5,param_2,&local_238,0,puVar4,0);
  if (pdVar6 != &local_190) {
    local_228 = (longlong *)*pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_228);
  }
  local_1e8 = 0x1e;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5d58);
  FUN_140e87440(uVar5,DAT_141a0a928,0x80000000,&local_c8,(ulonglong)puVar4 & 0xffffffffffffff00,
                uVar21 & 0xffffffffffffff00);
  uVar5 = FUN_140069500(uVar5);
  ppdVar22 = (double **)0x0;
  pdVar6 = (double *)FUN_140e63610(uVar5,param_2,&local_238,0,&local_c8,0);
  if (pdVar6 != &local_1e0) {
    local_228 = (longlong *)*pdVar6;
    uStack_220 = *(undefined4 *)(pdVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    FUN_140041b80(&local_1e0,&local_228);
  }
  local_1e8 = 0x1f;
  bVar11 = false;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar21 = 0;
  uVar5 = gml_Script_anon_5864_add_offering_OFFERINGSINIT(param_1,param_2,&local_238,0,0);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uVar19 = (undefined4)(uVar21 >> 0x20);
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((double *)puVar3 != &local_158) {
      local_228 = (longlong *)*puVar3;
      uStack_220 = *(undefined4 *)(puVar3 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_228);
    }
    local_118 = &local_158;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 6;
    local_148 = param_1;
    uVar5 = FUN_140e5c910();
    FUN_140e42c10(uVar5,param_1);
    local_110 = &local_148;
    ppdVar22 = &local_118;
    uVar21 = CONCAT44(uVar19,DAT_141a573f0);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,uVar21,ppdVar22);
    uStack_21c = 0;
    local_228 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar5,&local_228,DAT_141955260,0);
    bVar11 = iVar2 == 0;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  local_194 = 0xd;
  if (bVar11) {
    local_1a0 = 0x3ff0000000000000;
  }
  else {
    local_1a0 = 0;
  }
  local_1e8 = 0x20;
  cVar1 = FUN_140e491e0(&local_1a0);
  if (cVar1 != '\0') {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5d58);
    ppdVar22 = (double **)((ulonglong)ppdVar22 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_141a0a8a8,0x80000000,&local_d8,uVar21 & 0xffffffffffffff00,ppdVar22);
    uStack_20c = DAT_141dd28c4;
    uStack_210 = DAT_141dd28c0;
    if ((1 << ((byte)DAT_141dd28c4 & 0x1f) & 0x46U) == 0) {
      local_218 = DAT_141dd28b8;
    }
    else {
      FUN_1400419b0(&local_218,&DAT_141dd28b8);
    }
    iVar2 = FUN_140e851f0(&local_d8,&local_218,DAT_141955260,0);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (iVar2 != 0) {
      local_1e8 = 0x21;
      uStack_21c = 0xf;
      local_228 = (undefined8 *)0x10000010000020c;
      local_218 = (undefined8 *)0x10000010000020c;
      uStack_210 = uStack_220;
      uStack_20c = 0xf;
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      FUN_140041b80(&local_1e0,&local_218);
    }
  }
  uVar19 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
  local_1e8 = 0x23;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000010000002b;
  local_218 = (undefined8 *)0x10000010000002b;
  uStack_210 = uStack_220;
  uStack_20c = 0xf;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_218);
  local_118 = &local_158;
  if ((int)local_a8[0] < 3) {
    pplVar7 = (longlong **)&DAT_1419df7b0;
  }
  else {
    pplVar7 = (longlong **)local_a0[2];
    if (pplVar7 == &local_148) goto LAB_1403bf92a;
  }
  local_228 = *pplVar7;
  uStack_220 = *(undefined4 *)(pplVar7 + 1);
  uStack_21c = *(undefined4 *)((longlong)pplVar7 + 0xc);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_228);
LAB_1403bf92a:
  local_110 = &local_148;
  local_228 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_220 = uRam00000001419df7a8;
  uStack_21c = uRam00000001419df7ac;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_228);
  local_108 = local_138;
  ppdVar22 = &local_118;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_238,3,ppdVar22);
  uVar20 = (undefined4)((ulonglong)ppdVar22 >> 0x20);
  local_1e8 = 0x25;
  if ((int)local_a8[0] < 4) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_a0[3];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar6;
  }
  else {
    dVar12 = (double)FUN_140e4b060();
  }
  if ((int)local_a8[0] < 4) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_a0[3];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar6;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  if ((int)local_a8[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_a0[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar6;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  if ((int)local_a8[0] < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)*local_a0;
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar6;
  }
  else {
    dVar15 = (double)FUN_140e4b060();
  }
  dVar16 = local_190;
  if ((local_184 & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_190);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar16,0,(float)dVar15,CONCAT44(uVar20,(float)dVar14),
                CONCAT44(uVar19,(float)dVar13),(float)dVar12,0,0xffffff,0x3f800000);
  local_1e8 = 0x27;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar21 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6048);
  uVar23 = 0;
  uVar5 = FUN_140e63610(param_1,param_2,&local_238,0,uVar21,0);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1e8 = 0x35;
    if ((int)local_a8[0] < 4) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[3];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar6;
    }
    else {
      dVar12 = (double)FUN_140e4b060();
    }
    uVar19 = (undefined4)(uVar21 >> 0x20);
    uVar20 = (undefined4)(uVar23 >> 0x20);
    if ((int)local_a8[0] < 4) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[3];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar6;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 2) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[1];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar6;
    }
    else {
      dVar14 = (double)FUN_140e4b060();
    }
    if (0 < (int)local_a8[0]) {
      pdVar10 = (double *)*local_a0;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar10;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar10);
    }
    if ((local_1d4 & 0xffffff) == 0) {
      dVar16 = local_1e0;
    }
    else {
      dVar16 = (double)FUN_140e4b060(&local_1e0);
    }
    uVar17 = 0;
  }
  else {
    local_1e8 = 0x29;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ea8);
    FUN_140e87440(uVar5,DAT_141a0a928,0x80000000,&local_e8,uVar21 & 0xffffffffffffff00,
                  uVar23 & 0xffffffffffffff00);
    uVar5 = FUN_140069500(uVar5);
    uVar21 = 0;
    puVar3 = &local_e8;
    puVar4 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_208,0,puVar3,0);
    if ((double *)puVar4 != &local_1d0) {
      local_228 = (longlong *)*puVar4;
      uStack_220 = *(undefined4 *)(puVar4 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      FUN_140041b80(&local_1d0,&local_228);
    }
    local_1e8 = 0x2a;
    cVar1 = FUN_140e491e0(&local_1a0);
    if (cVar1 != '\0') {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ea8);
      puVar3 = (undefined8 *)((ulonglong)puVar3 & 0xffffffffffffff00);
      FUN_140e87440(uVar5,DAT_141a0a8a8,0x80000000,&local_f8,puVar3,uVar21 & 0xffffffffffffff00);
      uStack_20c = DAT_141dd28c4;
      uStack_210 = DAT_141dd28c0;
      if ((1 << ((byte)DAT_141dd28c4 & 0x1f) & 0x46U) == 0) {
        local_218 = DAT_141dd28b8;
      }
      else {
        FUN_1400419b0(&local_218,&DAT_141dd28b8);
      }
      iVar2 = FUN_140e851f0(&local_f8,&local_218,DAT_141955260,0);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if (iVar2 != 0) {
        local_1e8 = 0x2b;
        uStack_21c = 0xf;
        local_228 = (longlong *)0x10000010000020c;
        local_218 = (undefined8 *)0x10000010000020c;
        uStack_210 = uStack_220;
        uStack_20c = 0xf;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        FUN_140041b80(&local_1d0,&local_218);
      }
    }
    uVar19 = (undefined4)((ulonglong)puVar3 >> 0x20);
    local_1e8 = 0x2d;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_118 = &local_1e0;
    uStack_21c = DAT_141dd2604;
    uStack_220 = DAT_141dd2600;
    if ((1 << ((byte)DAT_141dd2604 & 0x1f) & 0x46U) == 0) {
      local_228 = (longlong *)DAT_141dd25f8;
    }
    else {
      FUN_1400419b0(&local_228,&DAT_141dd25f8);
    }
    uVar5 = CONCAT44(uVar19,DAT_141a089e8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar5,&local_118);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_210 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = (undefined8 *)*puVar3;
    }
    else {
      FUN_1400419b0(&local_218,puVar3);
    }
    FUN_1400460e0(&local_218,&local_228);
    local_178 = local_218;
    uStack_170 = (char *)CONCAT44(uStack_20c,uStack_210);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_110 = &local_148;
    uVar5 = CONCAT44(uVar19,DAT_141a086f8);
    pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,&local_110);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar6 != &local_1b0) {
      local_178 = (undefined8 *)*pdVar6;
      uStack_170 = (char *)pdVar6[1];
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      FUN_140041b80(&local_1b0,&local_178);
    }
    local_1e8 = 0x2e;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_118 = &local_1d0;
    uStack_21c = DAT_141dd2604;
    uStack_220 = DAT_141dd2600;
    if ((1 << ((byte)DAT_141dd2604 & 0x1f) & 0x46U) == 0) {
      local_228 = (longlong *)DAT_141dd25f8;
    }
    else {
      FUN_1400419b0(&local_228,&DAT_141dd25f8);
    }
    uVar5 = CONCAT44(uVar19,DAT_141a089e8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar5,&local_118);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_210 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = (undefined8 *)*puVar3;
    }
    else {
      FUN_1400419b0(&local_218,puVar3);
    }
    FUN_1400460e0(&local_218,&local_228);
    local_178 = local_218;
    uStack_170 = (char *)CONCAT44(uStack_20c,uStack_210);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_110 = &local_148;
    ppplVar24 = &local_110;
    uVar5 = CONCAT44(uVar19,DAT_141a086f8);
    pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,ppplVar24);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar20 = (undefined4)((ulonglong)ppplVar24 >> 0x20);
    if (pdVar6 != &local_1c0) {
      local_178 = (undefined8 *)*pdVar6;
      uStack_170 = (char *)pdVar6[1];
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      FUN_140041b80(&local_1c0,&local_178);
    }
    local_1e8 = 0x30;
    if ((int)local_a8[0] < 4) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[3];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar6;
    }
    else {
      dVar12 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 4) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[3];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar6;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 2) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[1];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar6;
    }
    else {
      dVar14 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 1) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)*local_a0;
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar6;
    }
    else {
      dVar15 = (double)FUN_140e4b060();
    }
    dVar16 = local_1b0;
    if ((local_1a4 & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_1b0);
    }
    uVar25 = CONCAT44(uVar20,(float)dVar13);
    uVar5 = CONCAT44(uVar19,(float)dVar14);
    FUN_140ec5dd0(param_1,(longlong)dVar16,0,(float)dVar15,uVar5,uVar25,(float)dVar12,0,0xffffff,
                  0x3f800000);
    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar20 = (undefined4)((ulonglong)uVar25 >> 0x20);
    local_1e8 = 0x31;
    if ((int)local_a8[0] < 4) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[3];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar6;
    }
    else {
      dVar12 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 4) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[3];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar6;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 2) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)local_a0[1];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar6;
    }
    else {
      dVar14 = (double)FUN_140e4b060();
    }
    if (0 < (int)local_a8[0]) {
      pdVar10 = (double *)*local_a0;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar10;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar10);
    }
    if ((local_1b4 & 0xffffff) == 0) {
      uVar17 = 0x3f800000;
      dVar16 = local_1c0;
    }
    else {
      dVar16 = (double)FUN_140e4b060(&local_1c0);
      uVar17 = 0x3f800000;
    }
  }
  FUN_140ec5dd0(param_1,(longlong)dVar16,uVar17,(float)dVar15,CONCAT44(uVar19,(float)dVar14),
                CONCAT44(uVar20,(float)dVar13),(float)dVar12,0,0xffffff,0x3f800000);
  local_1e8 = 0x37;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_230 = 0;
  uStack_170 = "gml_Script_pal_swap_reset";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_22c = 5;
  local_238 = 0;
  local_168 = 0x71;
  iVar2 = FUN_140ec9d80();
  if (iVar2 != -1) {
    local_168 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = (undefined8 **)local_178;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,4,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar3 = local_a0;
    do {
      puVar4 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 **)local_1f8;
  return param_3;
}

