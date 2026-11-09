// gml_Object_oBloodRain_Step_0 @ 0x1406e57a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodRain_Step_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined8 uVar9;
  double *pdVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  double dVar13;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar14;
  undefined4 uVar18;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  double **in_stack_fffffffffffffd50;
  longlong *plVar19;
  double local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  uint local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  double local_260;
  uint local_254;
  double local_248;
  undefined8 uStack_240;
  longlong local_238;
  double local_228;
  undefined4 local_21c;
  undefined1 local_218 [12];
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  undefined8 local_1e8;
  double dStack_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  double *local_1a8;
  undefined1 *local_1a0;
  undefined8 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
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
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_270 = "gml_Object_oBloodPullManager_Step_0";
  local_268 = 0;
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_228,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_254 = 0xffffff;
  local_260 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_268 = 0x2d;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1b980);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_268 = 0x2f;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1ac = 0;
    local_1b8 = 0;
    local_268 = 0x30;
    uStack_29c = 0xf;
    local_2a8 = 7.291122019556438e-304;
    iVar2 = FUN_140e63cb0(&local_248,&local_res8,&local_res10,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if (0 < iVar2) {
      do {
        local_268 = 0x31;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04128);
        local_27c = *(uint *)((longlong)puVar7 + 0xc);
        local_280 = *(undefined4 *)(puVar7 + 1);
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
          local_288 = *puVar7;
        }
        else {
          FUN_1400419b0(&local_288,puVar7);
        }
        local_res18 = 1;
        uStack_29c = 7;
        local_2a8 = (double)CONCAT44(local_2a8._4_4_,1);
        FUN_1400462a0(&local_288,&local_2a8);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_1400460e0(&local_1b8,&local_288);
        local_res18 = 0;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        cVar1 = FUN_140e643f0(&local_248,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_248,&local_res8,&local_res10);
    local_268 = 0x32;
    uStack_29c = 0xf;
    local_2a8 = 7.29112201955644e-304;
    iVar2 = FUN_140e63cb0(&local_1e8,&local_res8,&local_res10,&local_2a8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if (0 < iVar2) {
      do {
        local_268 = 0x34;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04268);
        uStack_29c = 0;
        local_2a8 = -4.0;
        iVar2 = FUN_140e851f0(uVar6,&local_2a8,DAT_141955260,0);
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if (iVar2 == 0) {
          local_268 = 0x35;
          FUN_140162d40(&local_1b8,3);
        }
        cVar1 = FUN_140e643f0(&local_1e8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_1e8,&local_res8,&local_res10);
    local_268 = 0x38;
    uStack_29c = 0xf;
    local_2a8 = 7.291122019556822e-304;
    uVar17 = (ulonglong)in_stack_fffffffffffffd50 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_2a8,DAT_1419ffbe8,0x80000000,&local_178,uVar12,uVar17);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    uStack_29c = 0xf;
    local_2a8 = 7.291122019556822e-304;
    in_stack_fffffffffffffd50 = (double **)(uVar17 & 0xffffffffffffff00);
    pcVar14 = (code *)(uVar12 & 0xffffffffffffff00);
    FUN_140e87440(&local_2a8,DAT_1419ffca8,0x80000000,&local_e8,pcVar14,in_stack_fffffffffffffd50);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_27c = local_16c;
    local_280 = local_170;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_288 = local_178;
    }
    else {
      FUN_1400419b0(&local_288,&local_178);
    }
    local_res18 = 2;
    FUN_1400460e0(&local_288,&local_1b8);
    uVar3 = FUN_140e851f0(&local_288,&local_e8,DAT_141955260,1);
    local_res18 = 0;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if (uVar3 < 0x80000000) {
      local_268 = 0x39;
      if (local_1d8 != 0) {
        FUN_140e4cd60();
        local_1d8 = 0;
      }
      if (local_238 != 0) {
        FUN_140e4cd60();
      }
      goto LAB_1406e6c35;
    }
    if (local_1d8 != 0) {
      FUN_140e4cd60();
      local_1d8 = 0;
    }
    if (local_238 != 0) {
      FUN_140e4cd60();
    }
  }
  local_268 = 0x3c;
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  local_254 = 0;
  local_260 = 1.0;
  local_268 = 0x3e;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1b950);
  uStack_29c = 0;
  local_2a8 = 0.0;
  iVar2 = FUN_140e851f0(uVar6,&local_2a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if (0 < iVar2) {
    local_268 = 0x40;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1b950);
    uVar18 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1b750);
    uStack_29c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    uStack_2a0 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
      local_2a8 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_2a8,pdVar8);
    }
    local_res18 = 4;
    FUN_140046500(&local_2a8,uVar6);
    local_27c = 0;
    local_288 = 0x3ff0000000000000;
    local_res18 = 0xc;
    FUN_1400462a0(&local_288,&local_2a8);
    if ((local_27c & 0xffffff) == 0) {
      uVar6 = local_288;
    }
    else {
      uVar6 = FUN_140e4b060(&local_288);
    }
    uVar6 = FUN_140e78ec0(uVar6,0,0x3ff0000000000000);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_res18 = 4;
    local_188 = uVar6;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_res18 = 0;
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_268 = 0x41;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04358);
    local_248 = _DAT_1419e79b0;
    uStack_240 = (double)uRam00000001419e79b8;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_248);
    local_1a8 = &local_228;
    local_248 = _DAT_1419e79c0;
    uStack_240 = dRam00000001419e79c8;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_248);
    local_1a0 = local_218;
    local_198 = &local_188;
    FUN_140e609c0(local_res8);
    uVar15 = CONCAT44(uVar18,DAT_141a00c58);
    uVar9 = FUN_140e634e0(local_res8,local_res10,&local_298,3,uVar15,&local_1a8);
    uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
    FUN_1400460e0(uVar6,uVar9);
    FUN_140e60910(1);
    local_268 = 0x42;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04358);
    if (pdVar8 != &local_228) {
      local_248 = *pdVar8;
      uStack_240 = pdVar8[1];
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_248);
    }
    local_1a8 = &local_228;
    uVar9 = CONCAT44(uVar18,DAT_1419fe728);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_298,1,uVar9,&local_1a8);
    uVar18 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (pdVar8 != &local_260) {
      local_248 = *pdVar8;
      uStack_240 = pdVar8[1];
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      FUN_140041b80(&local_260,&local_248);
    }
    local_268 = 0x43;
    FUN_140e609c0(local_res8);
    FUN_1400462a0(uVar6,&local_260);
    FUN_140e60910(1);
    local_268 = 0x44;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04298);
    local_248 = _DAT_1419e79b0;
    uStack_240 = (double)uRam00000001419e79b8;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_248);
    local_1a8 = &local_228;
    local_248 = _DAT_1419e79c0;
    uStack_240 = dRam00000001419e79c8;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_248);
    local_1a0 = local_218;
    local_198 = &local_188;
    FUN_140e609c0(local_res8);
    in_stack_fffffffffffffd50 = &local_1a8;
    pcVar14 = (code *)CONCAT44(uVar18,DAT_141a00c58);
    pdVar10 = (double *)
              FUN_140e634e0(local_res8,local_res10,&local_298,3,pcVar14,in_stack_fffffffffffffd50);
    if (pdVar10 != pdVar8) {
      local_248 = *pdVar10;
      uStack_240 = pdVar10[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_248);
    }
    FUN_140e60910(1);
    local_268 = 0x45;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1b950);
    pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1b950);
    local_248 = _DAT_1419e79b0;
    uStack_240 = (double)uRam00000001419e79b8;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_248);
    local_1a8 = &local_228;
    uStack_29c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    uStack_2a0 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
      local_2a8 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_2a8,pdVar8);
    }
    local_res18 = 0x10;
    FUN_1400462a0(&local_2a8,uVar5);
    uStack_240 = (double)CONCAT44(uStack_29c,uStack_2a0);
    local_248 = local_2a8;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_248);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_1a0 = local_218;
    FUN_140e609c0(local_res8);
    pdVar8 = (double *)FUN_140e79090(&local_298,2,&local_1a8);
    if (pdVar8 != pdVar10) {
      local_248 = *pdVar8;
      uStack_240 = pdVar8[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      FUN_140041b80(pdVar10,&local_248);
    }
    FUN_140e60910(1);
  }
  local_268 = 0x48;
  if ((local_254 & 0xffffff) == 0) {
    dVar13 = local_260;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_260);
  }
  uVar12 = (ulonglong)dVar13;
  uVar3 = (uint)uVar12;
  while (0 < (int)uVar3) {
    uVar3 = (int)uVar12 - 1;
    uVar12 = (ulonglong)uVar3;
    local_268 = 0x4a;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1b9e0);
    local_27c = 0xf;
    local_288 = 0x10000000000001a;
    dVar13 = (double)FUN_140e4b060(&local_288);
    iVar2 = FUN_140edd1e0(local_res8,local_res10,(int)dVar13);
    uStack_29c = 0;
    local_2a8 = (double)iVar2;
    uVar4 = FUN_140e851f0(&local_2a8,uVar5,DAT_141955260,1);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if (uVar4 < 0x80000000) {
      local_268 = 0x4a;
      break;
    }
    local_268 = 0x4c;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_cc = 0xf;
    local_d8 = 0x100000000000014;
    FUN_140e87440(&local_d8,DAT_141a03a48,0x80000000,&local_f8,
                  (ulonglong)pcVar14 & 0xffffffffffffff00,
                  (ulonglong)in_stack_fffffffffffffd50 & 0xffffffffffffff00);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_bc = 0xf;
    local_c8 = 0x1000000000000ee;
    FUN_140e87170(&local_c8,DAT_1419fe0e8,0x80000000,&local_108,local_res8,local_res10);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_ac = 0xf;
    local_b8 = 0x1000000000000ee;
    FUN_140e87170(&local_b8,DAT_1419fe158,0x80000000,&local_118,local_res8,local_res10);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    dStack_1e0 = (double)CONCAT44(uStack_fc,uStack_100);
    local_1e8 = local_108;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_1e8);
    local_1a8 = &local_228;
    dStack_1e0 = (double)CONCAT44(uStack_10c,uStack_110);
    local_1e8 = local_118;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_1e8);
    local_1a0 = local_218;
    local_9c = 0xf;
    local_a8 = 0x100000000000014;
    uVar5 = FUN_140069500(&local_a8);
    puVar7 = (undefined8 *)FUN_140e63610(uVar5,local_res10,&local_298,2,&local_f8,&local_1a8);
    if (puVar7 != &local_1c8) {
      local_1e8 = *puVar7;
      dStack_1e0 = (double)puVar7[1];
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_1e8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_268 = 0x4d;
    local_8c = 0;
    local_98 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_1c8,&local_98,DAT_141955260,0);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar2 == 0) {
      local_268 = 0x4d;
      break;
    }
    local_268 = 0x4f;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    FUN_140e87170(&local_1c8,DAT_1419fe0e8,0x80000000,&local_128,local_res8,local_res10);
    plVar16 = local_res8;
    plVar19 = local_res10;
    FUN_140e87170(&local_1c8,DAT_1419fe158,0x80000000,&local_138,local_res8,local_res10);
    local_7c = 6;
    local_88 = local_res8;
    uVar17 = (ulonglong)plVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_88,DAT_141a1b910,0x80000000,&local_148,uVar17,
                  (ulonglong)plVar19 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar17 >> 0x20);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    dStack_1e0 = (double)CONCAT44(uStack_11c,uStack_120);
    local_1e8 = local_128;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_1e8);
    local_1a8 = &local_228;
    dStack_1e0 = (double)CONCAT44(uStack_12c,uStack_130);
    local_1e8 = local_138;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_1e8);
    local_1a0 = local_218;
    dStack_1e0 = (double)CONCAT44(uStack_13c,uStack_140);
    local_1e8 = local_148;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_1e8);
    local_198 = &local_208;
    uStack_240 = (double)CONCAT44(0xf,(undefined4)uStack_240);
    local_248 = 7.29112201955644e-304;
    local_1e8 = 0x10000000000001a;
    dStack_1e0 = uStack_240;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_1e8);
    local_190 = local_1f8;
    in_stack_fffffffffffffd50 = &local_1a8;
    pcVar14 = (code *)CONCAT44(uVar18,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_298,4,pcVar14,in_stack_fffffffffffffd50);
    iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
    if (0 < iVar2) {
      do {
        local_268 = 0x51;
        in_stack_fffffffffffffd50 =
             (double **)((ulonglong)in_stack_fffffffffffffd50 & 0xffffffffffffff00);
        pcVar14 = (code *)((ulonglong)pcVar14 & 0xffffffffffffff00);
        FUN_140e87440(&local_1c8,DAT_141a03788,0x80000000,&local_158,pcVar14,
                      in_stack_fffffffffffffd50);
        dStack_1e0 = (double)CONCAT44(uStack_14c,uStack_150);
        local_1e8 = local_158;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1e8);
        FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_168);
        local_268 = 0x52;
        puVar7 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f290);
        puVar11 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f290);
        FUN_140e609c0(local_res8);
        if (puVar7 != puVar11) {
          local_1e8 = *puVar7;
          dStack_1e0 = (double)puVar7[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar11);
          }
          FUN_140041b80(puVar11,&local_1e8);
        }
        FUN_140e60910(1);
        local_268 = 0x53;
        puVar7 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a04298);
        puVar11 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04298);
        FUN_140e609c0(local_res8);
        if (puVar7 != puVar11) {
          local_1e8 = *puVar7;
          dStack_1e0 = (double)puVar7[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar11);
          }
          FUN_140041b80(puVar11,&local_1e8);
        }
        FUN_140e60910(1);
        cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  }
LAB_1406e6c35:
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return;
}

