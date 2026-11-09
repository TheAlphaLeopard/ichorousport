// gml_Object_oSidearmPedistal_Alarm_0 @ 0x140d82870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSidearmPedistal_Alarm_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  double *pdVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong **pplVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong *local_res8;
  ulonglong local_res10;
  uint local_res18;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double **ppdVar19;
  undefined8 **ppuVar20;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  longlong *local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  byte local_144;
  double local_140;
  undefined4 local_134;
  undefined8 local_130 [2];
  undefined8 local_120;
  undefined4 local_114;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong local_b8;
  int local_ac;
  undefined8 *local_a8;
  double *local_a0;
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_res18 = 0;
  local_1b0 = "gml_Object_oSidearmPedistal_Create_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  uVar13 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_150,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_174 = 0xffffff;
  local_180 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_154 = 0xffffff;
  local_160 = (longlong *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  uVar10 = 2;
  local_1a8 = 2;
  FUN_140e98b30(local_res8,local_res10);
  local_1a8 = 4;
  local_1d8 = (longlong *)0x3ff0000000000000;
  uStack_1d0 = (longlong *)CONCAT44(0xd,(undefined4)uStack_1d0);
  local_1e8 = (longlong *)0x3ff0000000000000;
  uStack_1e0 = CONCAT44(0xd,(undefined4)uStack_1d0);
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  FUN_140041b80(&local_180,&local_1e8);
  local_1a8 = 6;
  uStack_1e0 = CONCAT44(0xf,(undefined4)uStack_1e0);
  local_1e8 = (longlong *)0x1000000000000ff;
  iVar2 = FUN_140e63cb0(local_90,&local_res8,&local_res10,&local_1e8);
  if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar2) {
    do {
      local_1a8 = 8;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b10);
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5eb8);
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_e8,local_res8,local_res10);
      plVar16 = local_res8;
      uVar18 = local_res10;
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_f8,local_res8,local_res10);
      if ((local_ec & 0xffffff) == 0) {
        uVar13 = (undefined4)local_f8;
        uVar14 = (undefined4)((ulonglong)local_f8 >> 0x20);
      }
      else {
        uVar5 = FUN_140e4b060(&local_f8);
        uVar13 = (undefined4)uVar5;
        uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      if ((local_dc & 0xffffff) == 0) {
        uVar12 = (undefined4)local_e8;
        uVar15 = (undefined4)((ulonglong)local_e8 >> 0x20);
      }
      else {
        uVar5 = FUN_140e4b060(&local_e8);
        uVar12 = (undefined4)uVar5;
        uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      uVar3 = FUN_140e4a740(uVar4);
      puVar6 = (undefined8 *)
               FUN_140ea8b20(&local_1c8,uVar3,(longlong)(double)CONCAT44(uVar15,uVar12),
                             (longlong)(double)CONCAT44(uVar14,uVar13));
      if (puVar6 != &local_170) {
        local_1e8 = (longlong *)*puVar6;
        uStack_1e0 = puVar6[1];
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_1e8);
      }
      local_1a8 = 9;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      local_1a0 = 0;
      local_198 = 0;
      local_194 = 5;
      uVar17 = (ulonglong)plVar16 & 0xffffffffffffff00;
      FUN_140e87440(&local_170,DAT_141a57c20,0x80000000,&local_108,uVar17,
                    uVar18 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar17 >> 0x20);
      uStack_1e0 = CONCAT44(uStack_fc,uStack_100);
      local_1e8 = local_108;
      if ((1 << ((byte)_local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      FUN_140041b80(&local_150,&local_1e8);
      iVar2 = DAT_141a57cb0;
      local_a8 = &local_150;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_134 = 0;
      local_140 = (double)iVar2;
      local_a0 = &local_140;
      uVar4 = CONCAT44(uVar13,DAT_141a035d8);
      puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a0,2,uVar4,&local_a8);
      uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (puVar6 != local_130) {
        local_1e8 = (longlong *)*puVar6;
        uStack_1e0 = puVar6[1];
        if ((1 << ((byte)local_130[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_130);
        }
        FUN_140041b80(local_130,&local_1e8);
      }
      local_98 = local_130;
      ppuVar20 = &local_98;
      uVar18 = CONCAT44(uVar13,DAT_1419fdc08);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,uVar18,ppuVar20);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_1a8 = 10;
        uVar17 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_170,DAT_141a57c20,0x80000000,&local_108,uVar18,uVar17);
        uVar18 = uVar18 & 0xffffffffffffff00;
        FUN_140e87440(&local_108,DAT_141a57cb0,0x80000000,&local_b8,uVar18,
                      uVar17 & 0xffffffffffffff00);
        if (((local_ac == 2) && (local_b8 != 0)) && (*(int *)(local_b8 + 0x24) != 0)) {
          local_1a8 = 0xc;
          local_1d8 = (longlong *)0x0;
          uVar13 = SUB84(uStack_1d0,0);
          uStack_1d0 = (longlong *)CONCAT44(0xd,uVar13);
          local_1e8 = (longlong *)0x0;
          uStack_1e0 = CONCAT44(0xd,uVar13);
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          FUN_140041b80(&local_180,&local_1e8);
        }
        else {
          local_1a8 = 10;
        }
      }
      else {
        local_1a8 = 9;
      }
      uVar13 = (undefined4)(uVar18 >> 0x20);
      cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
  local_1a8 = 0x10;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
  cVar1 = FUN_140e491e0(&local_180);
  if (cVar1 == '\0') {
    local_184 = 0;
    local_190 = (longlong *)&DAT_bff0000000000000;
    pplVar11 = &local_190;
    local_res18 = 2;
  }
  else {
    uVar13 = 0;
    puVar6 = (undefined8 *)gml_GlobalScript_AMBIANCEINIT(local_res8,local_res10,&local_1c8,0,0);
    uStack_1e0 = puVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1e8 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_1e8,puVar6);
    }
    pplVar11 = &local_1e8;
    uVar10 = 1;
    local_res18 = 1;
  }
  uVar14 = local_184;
  FUN_140e609c0(local_res8);
  if (pplVar11 != pplVar7) {
    local_1d8 = *pplVar11;
    uStack_1d0 = pplVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1d8);
  }
  if (((uVar10 & 2) != 0) &&
     (uVar10 = uVar10 & 0xfffffffd, local_res18 = uVar10, (1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)
     ) {
    FUN_140041a50(&local_190);
  }
  if (((uVar10 & 1) != 0) &&
     (uVar10 = uVar10 & 0xfffffffe, local_res18 = uVar10,
     (1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  local_1a8 = 0x11;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
  if (puVar6 != &local_150) {
    local_1d8 = (longlong *)*puVar6;
    uStack_1d0 = (longlong *)puVar6[1];
    if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_1d8);
  }
  local_a8 = &local_150;
  ppuVar20 = &local_a8;
  uVar18 = CONCAT44(uVar13,DAT_1419fcb88);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,uVar18,ppuVar20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_1a8 = 0x13;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    uVar13 = (undefined4)(uVar18 >> 0x20);
    local_1a0 = 0;
    local_198 = 0;
    local_194 = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
    if (pdVar8 != &local_140) {
      local_1d8 = (longlong *)*pdVar8;
      uStack_1d0 = (longlong *)pdVar8[1];
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_1d8);
    }
    local_a0 = &local_140;
    FUN_140e609c0(local_res8);
    ppdVar19 = &local_a0;
    uVar18 = CONCAT44(uVar13,DAT_1419fd0c8);
    puVar9 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a0,1,uVar18,ppdVar19);
    if (puVar9 != puVar6) {
      local_1d8 = (longlong *)*puVar9;
      uStack_1d0 = (longlong *)puVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1d8);
    }
    FUN_140e60910(1);
    local_1a8 = 0x14;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a918);
    ppuVar20 = (undefined8 **)((ulonglong)ppdVar19 & 0xffffffffffffff00);
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a0a918,0x80000000,&local_c8,uVar18,ppuVar20);
    FUN_1400460e0(&local_c8,uVar5);
    FUN_140e87930(uVar4,DAT_141a0a918,0x80000000,&local_c8);
  }
  local_1a8 = 0x16;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56bc0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x403e000000000000;
  local_1a8 = 0x18;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x3fc999999999999a;
  local_1a8 = 0x19;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x3fc999999999999a;
  local_1a8 = 0x1b;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56b90);
  local_1d8 = _DAT_141ddb7d8;
  uStack_1d0 = (longlong *)uRam0000000141ddb7e0;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  FUN_140041b80(&local_120,&local_1d8);
  FUN_140e87930(uVar4,DAT_141a0a8a8,0x80000000,&local_120);
  local_1a8 = 0x1d;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff578);
  uStack_1d0 = (longlong *)CONCAT44(0xd,(undefined4)uStack_1d0);
  local_1d8 = (longlong *)0x0;
  if (&local_1d8 != pplVar7) {
    local_1e8 = (longlong *)0x0;
    uStack_1e0 = (ulonglong)uStack_1d0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1e8);
  }
  local_1a8 = 0x1e;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff588);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_1a8 = 0x20;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff568);
  uStack_1e0._4_4_ = 6;
  local_1e8 = local_res8;
  uVar17 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_141a0a728,0x80000000,&local_d8,uVar18,uVar17);
  if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e609c0(local_res8);
  if (&local_d8 != pplVar7) {
    uStack_1d0 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
    local_1d8 = local_d8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1d8);
  }
  FUN_140e60910(1);
  local_1a8 = 0x21;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff598);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0xc03c000000000000;
  local_1a8 = 0x22;
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56be0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x4038000000000000;
  local_1a8 = 0x23;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a065f8);
  uStack_1e0._4_4_ = 6;
  local_1e8 = local_res8;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_160,uVar18 & 0xffffffffffffff00,
                uVar17 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e609c0(local_res8);
  local_184 = local_154;
  local_188 = local_158;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
    local_190 = local_160;
  }
  else {
    FUN_1400419b0(&local_190,&local_160);
  }
  local_res18 = uVar10 | 4;
  uStack_1d0 = (longlong *)((ulonglong)uStack_1d0 & 0xffffffff);
  local_1d8 = (longlong *)0x4059000000000000;
  FUN_140046500(&local_190,&local_1d8);
  if ((1 << ((byte)((ulonglong)uStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uVar13 = FUN_140e79480();
  uStack_1e0 = CONCAT44(local_184,local_188);
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_190;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_190);
  }
  local_res18 = uVar10 | 0xc;
  FUN_140162c50(&local_1e8,uVar13);
  if (&local_1e8 != pplVar7) {
    local_1d8 = local_1e8;
    uStack_1d0 = (longlong *)uStack_1e0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1d8);
  }
  local_res18 = uVar10 | 4;
  if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140e60910(1);
  local_1a8 = 0x25;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56ba0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_1d8,gml_Object_oSidearmPedistal_Step_0,local_res8);
  if (&local_1d8 != pplVar7) {
    local_1e8 = local_1d8;
    uStack_1e0 = (ulonglong)uStack_1d0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1e8);
  }
  if ((1 << ((byte)((ulonglong)uStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e60910(1);
  if (local_80 != 0) {
    FUN_140e4cd60();
    local_80 = 0;
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  _eh_vector_destructor_iterator_(&local_150,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

