// gml_Script_get_name_anon_1212_ImguiWindow_DebugPanelFuncs @ 0x140266d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_name_anon_1212_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,double param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  double dVar13;
  ulonglong uVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  longlong *local_res8;
  double local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar19;
  undefined4 uVar20;
  double **in_stack_fffffffffffffdc0;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  double local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  double local_1b8 [2];
  double local_1a8;
  undefined4 local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  uint local_168 [2];
  undefined8 *local_160;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  double *local_128;
  double *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  double local_100;
  undefined4 local_f8;
  uint local_f4;
  double local_f0;
  undefined4 local_e8;
  uint local_e4;
  longlong *local_e0;
  undefined4 local_d4;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res20 = 0;
  local_1e0 = "gml_Script_DebugPanel";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_168,param_4,3,param_5);
  pcVar19 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = 0.0;
  local_1c8 = 0xffffff;
  local_e4 = 0xffffff;
  dVar13 = 0.0;
  local_f0 = 0.0;
  local_1d0 = 0xffffff;
  local_f4 = 0xffffff;
  dVar15 = 0.0;
  local_100 = 0.0;
  local_1cc = 0xffffff;
  local_13c = 0xffffff;
  local_148 = 0.0;
  uVar16 = 0xffffff;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_22c = 0;
  local_238 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddcd0) &&
     (_Init_thread_header(&DAT_141dddcd0), DAT_141dddcd0 == -1)) {
    DAT_141dddd20 = FUN_140e63aa0(DAT_141a56e70);
    _Init_thread_footer(&DAT_141dddcd0);
  }
  puVar1 = local_160;
  uVar11 = local_168[0];
  local_1d8 = 10;
  puVar12 = &DAT_1419df7b0;
  if ((int)local_168[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_160;
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar4 == 0) &&
     ((local_1d8 = 10, (int)uVar11 < 1 ||
      (puVar12 = (undefined8 *)*puVar1, puVar12 != (undefined8 *)&DAT_141dce278)))) {
    local_228 = _DAT_141dce278;
    uStack_220 = dRam0000000141dce280;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    FUN_140041b80(puVar12,&local_228);
  }
  plVar7 = &DAT_1419df7b0;
  if ((int)uVar11 < 2) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)puVar1[1];
  }
  iVar4 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    FUN_140e645a0(&local_218,&LAB_140266b20,local_res8);
    if (((int)uVar11 < 2) || (plVar7 = (longlong *)puVar1[1], &local_218 != (double *)plVar7)) {
      uStack_220 = (double)CONCAT44(uStack_20c,uStack_210);
      local_228 = local_218;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar7);
      }
      FUN_140041b80(plVar7,&local_228);
    }
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  pdVar9 = (double *)&DAT_1419df7b0;
  if ((int)uVar11 < 3) {
    puVar12 = &DAT_1419df7b0;
  }
  else {
    puVar12 = (undefined8 *)puVar1[2];
  }
  iVar4 = FUN_140e851f0(puVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if (2 < (int)uVar11) {
      pdVar9 = (double *)puVar1[2];
    }
    in_stack_fffffffffffffdc0 = (double **)0x0;
    pcVar19 = (code *)CONCAT44((int)((ulonglong)pcVar19 >> 0x20),DAT_1419fd6d8);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,0,pcVar19,0);
    if (pdVar5 != pdVar9) {
      local_228 = *pdVar5;
      uStack_220 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar9);
      }
      FUN_140041b80(pdVar9,&local_228);
    }
  }
  FUN_140e643a0(local_res8,DAT_141dddd20);
  local_1d8 = 0xb;
  uStack_20c = 0xd;
  local_218 = 0.0;
  cVar3 = FUN_140e491e0(&local_218);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (cVar3 != '\0') {
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uVar20 = (undefined4)((ulonglong)pcVar19 >> 0x20);
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uStack_220 = (double)CONCAT44(0xf,(undefined4)uStack_220);
    local_228 = 7.291122019556595e-304;
    local_c8 = 7.291122019556595e-304;
    dStack_c0 = uStack_220;
    if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_c8);
    local_128 = local_1b8;
    in_stack_fffffffffffffdc0 = &local_128;
    pcVar19 = (code *)CONCAT44(uVar20,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_238,1,pcVar19,in_stack_fffffffffffffdc0);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') {
      local_1d8 = 0xc;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uVar20 = (undefined4)((ulonglong)pcVar19 >> 0x20);
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_228 = _DAT_141dc6390;
      uStack_220 = dRam0000000141dc6398;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_228);
      local_120 = &local_1a8;
      local_228 = _DAT_141dc6390;
      uStack_220 = dRam0000000141dc6398;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_228);
      local_118 = local_198;
      local_228 = _DAT_141dc6390;
      uStack_220 = dRam0000000141dc6398;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_228);
      local_110 = local_188;
      uStack_220 = (double)CONCAT44(0xf,(undefined4)uStack_220);
      local_228 = 7.291122019556595e-304;
      local_c8 = 7.291122019556595e-304;
      dStack_c0 = uStack_220;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_c8);
      local_108 = local_178;
      in_stack_fffffffffffffdc0 = &local_120;
      pcVar19 = (code *)CONCAT44(uVar20,DAT_141a02e88);
      FUN_140e634e0(local_res8,local_res10,&local_138,4,pcVar19,in_stack_fffffffffffffdc0);
    }
  }
  local_1d8 = 0xf;
  plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56d50);
  uStack_20c = 6;
  local_218 = local_res10;
  FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_b8,
                (ulonglong)pcVar19 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140e609c0(local_res8);
  if (&local_b8 != (double *)plVar7) {
    uStack_220 = (double)CONCAT44(uStack_ac,uStack_b0);
    local_228 = local_b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_228);
  }
  FUN_140e60910(1);
  local_1d8 = 0x10;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56d50);
  plVar7 = local_res8;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 6;
  local_e0 = plVar7;
  uVar8 = FUN_140e5c910();
  FUN_140e42c10(uVar8,plVar7);
  FUN_140e87930(uVar6,DAT_141a57040,0x80000000,&local_e0);
  local_1d8 = 0x11;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56d50);
  plVar7 = local_res8;
  FUN_140e87170(uVar6,DAT_141a1f580,0x80000000,&local_a8,local_res8,local_res10);
  uVar20 = (undefined4)((ulonglong)plVar7 >> 0x20);
  uStack_220 = (double)CONCAT44(uStack_9c,uStack_a0);
  local_228 = local_a8;
  if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
  local_128 = local_1b8;
  local_228 = _DAT_141dce288;
  uStack_220 = (double)uRam0000000141dce290;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_228);
  local_120 = &local_1a8;
  local_228 = _DAT_141dc6390;
  uStack_220 = dRam0000000141dc6398;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_228);
  local_118 = local_198;
  uVar6 = CONCAT44(uVar20,DAT_141a570a0);
  FUN_140e634e0(local_res8,local_res10,&local_238,3,uVar6,&local_128);
  uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_1d8 = 0x13;
  pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57050);
  FUN_140e609c0(local_res8);
  uVar11 = local_168[0];
  if ((int)local_168[0] < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*puVar1;
  }
  if (pdVar5 != pdVar9) {
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar9);
    }
    FUN_140041b80(pdVar9,&local_228);
  }
  FUN_140e60910(1);
  local_1d8 = 0x14;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57270);
  if ((int)uVar11 < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1402676f7:
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_228);
  }
  else {
    pdVar5 = (double *)local_160[2];
    if (pdVar5 != local_1b8) goto LAB_1402676f7;
  }
  iVar4 = DAT_141a57270;
  local_128 = local_1b8;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = (double)iVar4;
  local_120 = &local_1a8;
  uVar6 = CONCAT44(uVar20,DAT_141a035d8);
  pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_128);
  uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar5 != &local_f0) {
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    FUN_140041b80(&local_f0,&local_228);
    local_1c8 = local_e4;
    dVar13 = local_f0;
  }
  if ((local_1c8 & 0xffffff) == 3) {
    bVar18 = dVar13 == 0.0;
  }
  else {
    bVar18 = (local_1c8 & 0xffffff) == 5;
  }
  if (bVar18) {
    uStack_20c = 10;
    local_218 = 0.0;
    pdVar5 = &local_218;
    uVar11 = 1;
  }
  else {
    uStack_200 = local_e8;
    uStack_1fc = local_1c8;
    if ((1 << ((byte)local_1c8 & 0x1f) & 0x46U) == 0) {
      local_208 = dVar13;
    }
    else {
      FUN_1400419b0(&local_208,&local_f0);
    }
    pdVar5 = &local_208;
    uVar11 = 2;
  }
  uVar17 = uStack_20c;
  local_res20 = uVar11;
  FUN_140e609c0(local_res8);
  if (pdVar5 != pdVar9) {
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar9);
    }
    FUN_140041b80(pdVar9,&local_228);
  }
  if ((uVar11 & 2) != 0) {
    uVar11 = uVar11 & 0xfffffffd;
    local_res20 = uVar11;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
  }
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffe;
    local_res20 = uVar11;
    if ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  FUN_140e60910(1);
  local_1d8 = 0x15;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57010);
  if ((int)local_168[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_160[2];
    if (pdVar5 == local_1b8) goto LAB_140267981;
  }
  local_228 = *pdVar5;
  uStack_220 = pdVar5[1];
  if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
LAB_140267981:
  iVar4 = DAT_141a57010;
  local_128 = local_1b8;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = (double)iVar4;
  local_120 = &local_1a8;
  uVar6 = CONCAT44(uVar20,DAT_141a035d8);
  pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_128);
  uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar5 != &local_100) {
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    FUN_140041b80(&local_100,&local_228);
    local_1d0 = local_f4;
    dVar15 = local_100;
  }
  uVar17 = local_1d0;
  if ((local_1d0 & 0xffffff) == 3) {
    bVar18 = dVar15 == 0.0;
  }
  else {
    bVar18 = (local_1d0 & 0xffffff) == 5;
  }
  if (bVar18) {
    uStack_20c = 0xd;
    local_218 = 0.0;
    pdVar5 = &local_218;
    uVar11 = uVar11 | 4;
  }
  else {
    uStack_200 = local_f8;
    uStack_1fc = local_1d0;
    if ((1 << ((byte)local_1d0 & 0x1f) & 0x46U) == 0) {
      local_208 = dVar15;
    }
    else {
      FUN_1400419b0(&local_208,&local_100);
    }
    pdVar5 = &local_208;
    uVar11 = uVar11 | 8;
  }
  uVar2 = uStack_20c;
  local_res20 = uVar11;
  FUN_140e609c0(local_res8);
  if (pdVar5 != pdVar9) {
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar9);
    }
    FUN_140041b80(pdVar9,&local_228);
  }
  if ((uVar11 & 8) != 0) {
    uVar11 = uVar11 & 0xfffffff7;
    local_res20 = uVar11;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
  }
  if ((uVar11 & 4) != 0) {
    uVar11 = uVar11 & 0xfffffffb;
    local_res20 = uVar11;
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  FUN_140e60910(1);
  local_1d8 = 0x16;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57010);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_1d8 = 0x16;
    puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57010);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar12);
    }
    *(undefined4 *)((longlong)puVar12 + 0xc) = 10;
    *puVar12 = 2;
  }
  local_1d8 = 0x18;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57250);
  FUN_140e609c0(local_res8);
  uVar6 = CONCAT44(uVar20,DAT_1419fd6d8);
  pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,0,uVar6,0);
  if (pdVar5 != pdVar9) {
    local_228 = *pdVar5;
    uStack_220 = pdVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar9);
    }
    FUN_140041b80(pdVar9,&local_228);
  }
  FUN_140e60910(1);
  local_1d8 = 0x19;
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  iVar4 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar8);
  if (0 < iVar4) {
    do {
      uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_1d8 = 0x1a;
      pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56d70);
      FUN_140e609c0(local_res8);
      puVar12 = local_160;
      if ((int)local_168[0] < 2) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)local_160[1];
      }
      if (pdVar5 != pdVar9) {
        local_1f8 = *pdVar5;
        dStack_1f0 = pdVar5[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar9);
        }
        FUN_140041b80(pdVar9,&local_1f8);
      }
      FUN_140e60910(1);
      local_1d8 = 0x1b;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a571a0);
      FUN_140e609c0(local_res8);
      uVar6 = CONCAT44(uVar20,DAT_1419fd6d8);
      pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,0,uVar6,0);
      if (pdVar5 != pdVar9) {
        local_1f8 = *pdVar5;
        dStack_1f0 = pdVar5[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar9);
        }
        FUN_140041b80(pdVar9,&local_1f8);
      }
      FUN_140e60910(1);
      local_1d8 = 0x1c;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a571a0);
      iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10);
      if (0 < iVar4) {
        uVar17 = local_1cc;
        do {
          uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_1d8 = 0x1d;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56fb0);
          if ((int)local_168[0] < 3) {
            pdVar5 = (double *)&DAT_1419df7b0;
LAB_140267e96:
            local_1f8 = *pdVar5;
            dStack_1f0 = pdVar5[1];
            if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_1f8);
          }
          else {
            pdVar5 = (double *)puVar12[2];
            if (pdVar5 != local_1b8) goto LAB_140267e96;
          }
          iVar4 = DAT_141a56fb0;
          local_128 = local_1b8;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_19c = 0;
          local_1a8 = (double)iVar4;
          local_120 = &local_1a8;
          uVar6 = CONCAT44(uVar20,DAT_141a035d8);
          pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_128);
          uVar20 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (pdVar5 != &local_148) {
            local_1f8 = *pdVar5;
            dStack_1f0 = pdVar5[1];
            if ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_1f8);
            uVar17 = local_13c;
          }
          if ((uVar17 & 0xffffff) == 3) {
            if (local_148 == 0.0) goto LAB_140267fc5;
LAB_140267f8f:
            uStack_200 = local_140;
            uStack_1fc = uVar17;
            if ((1 << ((byte)uVar17 & 0x1f) & 0x46U) == 0) {
              local_208 = local_148;
            }
            else {
              FUN_1400419b0(&local_208,&local_148);
            }
            pdVar5 = &local_208;
            uVar11 = uVar11 | 0x20;
          }
          else {
            if ((uVar17 & 0xffffff) != 5) goto LAB_140267f8f;
LAB_140267fc5:
            dStack_c0 = (double)((ulonglong)dStack_c0 & 0xffffffff);
            local_c8 = 0.0;
            pdVar5 = &local_c8;
            uVar11 = uVar11 | 0x10;
          }
          local_res20 = uVar11;
          FUN_140e609c0(local_res8);
          if (pdVar5 != pdVar9) {
            local_1f8 = *pdVar5;
            dStack_1f0 = pdVar5[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar9);
            }
            FUN_140041b80(pdVar9,&local_1f8);
          }
          if ((uVar11 & 0x20) != 0) {
            uVar11 = uVar11 & 0xffffffdf;
            local_res20 = uVar11;
            if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
          }
          if ((uVar11 & 0x10) != 0) {
            uVar11 = uVar11 & 0xffffffef;
            local_res20 = uVar11;
            if ((1 << ((byte)((ulonglong)dStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
          }
          FUN_140e60910(1);
          local_1d8 = 0x1e;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a571e0);
          if ((int)local_168[0] < 3) {
            pdVar5 = (double *)&DAT_1419df7b0;
LAB_140268102:
            local_1f8 = *pdVar5;
            dStack_1f0 = pdVar5[1];
            if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_1f8);
          }
          else {
            pdVar5 = (double *)puVar12[2];
            if (pdVar5 != local_1b8) goto LAB_140268102;
          }
          iVar4 = DAT_141a56e40;
          local_128 = local_1b8;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_19c = 0;
          local_1a8 = (double)iVar4;
          local_120 = &local_1a8;
          uVar6 = CONCAT44(uVar20,DAT_141a035d8);
          pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_128);
          if (pdVar5 != &local_158) {
            local_1f8 = *pdVar5;
            dStack_1f0 = pdVar5[1];
            if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            FUN_140041b80(&local_158,&local_1f8);
            uVar16 = local_14c;
          }
          if ((uVar16 & 0xffffff) == 3) {
            if (local_158 == 0.0) goto LAB_140268231;
LAB_1402681fb:
            uStack_210 = local_150;
            uStack_20c = uVar16;
            if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) == 0) {
              local_218 = local_158;
            }
            else {
              FUN_1400419b0(&local_218,&local_158);
            }
            pdVar5 = &local_218;
            uVar11 = uVar11 | 0x80;
          }
          else {
            if ((uVar16 & 0xffffff) != 5) goto LAB_1402681fb;
LAB_140268231:
            uStack_220 = (double)CONCAT44(10,(undefined4)uStack_220);
            local_228 = 1.58101006669199e-322;
            pdVar5 = &local_228;
            uVar11 = uVar11 | 0x40;
          }
          local_res20 = uVar11;
          FUN_140e609c0(local_res8);
          if (pdVar5 != pdVar9) {
            local_1f8 = *pdVar5;
            dStack_1f0 = pdVar5[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar9);
            }
            FUN_140041b80(pdVar9,&local_1f8);
          }
          if ((char)uVar11 < '\0') {
            uVar11 = uVar11 & 0xffffff7f;
            local_res20 = uVar11;
            if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
          }
          if ((uVar11 & 0x40) != 0) {
            uVar11 = uVar11 & 0xffffffbf;
            local_res20 = uVar11;
            if ((1 << ((byte)((ulonglong)uStack_220 >> 0x20) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
          }
          FUN_140e60910(1);
          cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
        } while (cVar3 != '\0');
        local_1cc = uVar17;
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      if (local_68 != 0) {
        FUN_140e4cd60();
      }
      cVar3 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar3 != '\0');
    uVar17 = local_1d0;
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  local_1d8 = 0x22;
  plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56d40);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_228,gml_Script_anon_945_DebugPanel_DebugPanelFuncs,local_res8);
  if (&local_228 != (double *)plVar7) {
    local_1f8 = local_228;
    dStack_1f0 = uStack_220;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_1f8);
  }
  if ((1 << ((byte)((ulonglong)uStack_220 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140e60910(1);
  local_1d8 = 0x23;
  plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a570f0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_228,gml_Script_set_name_anon_1131_ImguiWindow_DebugPanelFuncs,local_res8);
  if (&local_228 != (double *)plVar7) {
    local_1f8 = local_228;
    dStack_1f0 = uStack_220;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_1f8);
  }
  if ((1 << ((byte)((ulonglong)uStack_220 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140e60910(1);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_1c8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_1b8,0x10,5,FUN_140041b30);
  if (0 < (int)local_168[0]) {
    uVar14 = (ulonglong)local_168[0];
    puVar12 = local_160;
    do {
      puVar1 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_140e4cd60(local_160);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return local_res18;
}

