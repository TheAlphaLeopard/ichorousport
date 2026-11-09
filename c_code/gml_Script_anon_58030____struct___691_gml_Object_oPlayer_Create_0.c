// gml_Script_anon_58030____struct___691_gml_Object_oPlayer_Create_0 @ 0x140c4a2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_58030____struct___691_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 **ppuVar17;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [12];
  byte local_194;
  undefined8 local_190;
  byte local_184;
  undefined1 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
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
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80 [12];
  byte local_74;
  
  local_1c0 = "gml_Script_anon@57141@___struct___690@gml_Object_oPlayer_Create_0";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0xbec;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_1a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar8 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f8a68);
  uStack_10c = 0xffffff;
  local_118 = 0;
  uVar9 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_164 = 0xffffff;
  local_170 = 0;
  local_88 = uVar9;
  pplVar10 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0xbee;
  local_1d8 = CONCAT44(uRam0000000141dda57c,_DAT_141dda578);
  uStack_1d0 = uRam0000000141dda580;
  uStack_1cc = DAT_141dda584;
  if ((1 << (local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a0);
  }
  FUN_140041b80(local_1a0,&local_1d8);
  local_180 = local_1a0;
  uVar16 = CONCAT44(uVar15,DAT_141a57f40);
  uVar11 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar16,&local_180);
  uVar15 = (undefined4)((ulonglong)uVar16 >> 0x20);
  cVar6 = FUN_140e491e0(uVar11);
  if (cVar6 != '\0') {
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    local_160 = 0;
    local_158 = 0;
    local_154 = 5;
    if (puVar8 != &local_190) {
      local_1d8 = *puVar8;
      uStack_1d0 = *(undefined4 *)(puVar8 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      FUN_140041b80(&local_190,&local_1d8);
    }
    local_178 = &local_190;
    ppuVar17 = &local_178;
    uVar14 = CONCAT44(uVar15,DAT_1419fcb88);
    uVar11 = FUN_140e634e0(param_1,param_2,&local_160,1,uVar14,ppuVar17);
    cVar6 = FUN_140e491e0(uVar11);
    if (cVar6 != '\0') {
      local_1b8 = 0xbf0;
      pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b98);
      uStack_1dc = 0xd;
      local_1e8 = (longlong *)0x3ff0000000000000;
      if (&local_1e8 != pplVar12) {
        local_1d8 = 0x3ff0000000000000;
        uStack_1d0 = uStack_1e0;
        uStack_1cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar12);
        }
        FUN_140041b80(pplVar12,&local_1d8);
      }
      local_1b8 = 0xbf1;
      puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8388);
      FUN_140e87440(puVar8,DAT_1419f85c8,0x80000000,&local_118,uVar14 & 0xffffffffffffff00,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      FUN_140e609c0(param_1);
      if (&local_118 != puVar13) {
        local_1d8 = local_118;
        uStack_1d0 = uStack_110;
        uStack_1cc = uStack_10c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar13);
        }
        FUN_140041b80(puVar13,&local_1d8);
      }
      FUN_140e60910(1);
      local_1b8 = 0xbf2;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f86d8);
      local_1d8 = CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
      uStack_1d0 = DAT_141dda670;
      uStack_1cc = DAT_141dda674;
      if ((1 << (local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a0);
      }
      FUN_140041b80(local_1a0,&local_1d8);
      local_180 = local_1a0;
      FUN_140e63610(param_1,param_2,&local_1f8,1,uVar11,&local_180);
    }
  }
  local_1b8 = 0xbf4;
  FUN_140e609c0(DAT_141a729d8);
  if (puVar8 != &DAT_1419df7b0) {
    local_1d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1d0 = DAT_1419df7b8;
    uStack_1cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1d8);
  }
  FUN_140e60910(1);
  local_1b8 = 0xbf6;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar11 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_1a4 = *(undefined4 *)((longlong)puVar8 + 0xc);
  local_1a8 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
    local_1b0 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_1b0,puVar8);
  }
  FUN_140042560(&local_1b0,uVar9);
  FUN_1400460e0(uVar11,&local_1b0);
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1b8 = 0xbf9;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1d0 = DAT_1419df7b8;
  uStack_1cc = DAT_1419df7bc;
  if ((1 << (local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a0);
  }
  FUN_140041b80(local_1a0,&local_1d8);
  local_180 = local_1a0;
  local_1d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1d0 = DAT_1419df7b8;
  uStack_1cc = DAT_1419df7bc;
  if ((1 << (local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_1d8);
  local_178 = &local_190;
  uVar9 = gml_Script_animcurve_lerp(param_1,param_2,&local_1f8,2,&local_180);
  cVar6 = FUN_140e491e0(uVar9);
  if (cVar6 != '\0') {
    local_1b8 = 0xbfb;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_164 = 0;
    local_170 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_170);
  }
  local_1b8 = 0xbff;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  local_1d8 = CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
  uStack_1d0 = uRam00000001419ecdb8;
  uStack_1cc = uRam00000001419ecdbc;
  if ((1 << (local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a0);
  }
  FUN_140041b80(local_1a0,&local_1d8);
  local_180 = local_1a0;
  ppuVar18 = &local_180;
  uVar9 = FUN_140e63610(param_1,param_2,&local_1f8,1,puVar8,ppuVar18);
  cVar6 = FUN_140e491e0(uVar9);
  if (cVar6 != '\0') {
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    local_1a4 = 0;
    local_1b0 = (longlong *)0x0;
    iVar7 = FUN_140e851f0(uVar9,&local_1b0,DAT_141955260,1);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    if (0 < iVar7) {
      local_1b8 = 0xc01;
      uStack_1dc = 0xd;
      local_1e8 = (longlong *)0x3ff0000000000000;
      if (&local_1e8 != pplVar10) {
        local_1d8 = 0x3ff0000000000000;
        uStack_1d0 = uStack_1e0;
        uStack_1cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar10);
        }
        FUN_140041b80(pplVar10,&local_1d8);
      }
      local_1b8 = 0xc02;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar9,DAT_141a55540,0x80000000,&local_b8,(ulonglong)puVar8 & 0xffffffffffffff00,
                    (ulonglong)ppuVar18 & 0xffffffffffffff00);
      local_1d8 = CONCAT44(DAT_141dda818._4_4_,(undefined4)DAT_141dda818);
      uStack_1d0 = DAT_141dda820;
      uStack_1cc = DAT_141dda824;
      if ((1 << (local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a0);
      }
      FUN_140041b80(local_1a0,&local_1d8);
      local_180 = local_1a0;
      uVar9 = FUN_140069500(uVar9);
      ppuVar18 = &local_180;
      puVar8 = &local_b8;
      FUN_140e63610(uVar9,param_2,&local_1f8,1,puVar8,ppuVar18);
    }
  }
  local_1b8 = 0xc06;
  puVar13 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
    uVar15 = (undefined4)*puVar13;
  }
  else {
    uVar15 = FUN_140e4b060(puVar13);
  }
  dVar1 = (double)FUN_140e79500(uVar15);
  if (dVar1 == 0.0) {
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_c8);
    local_1a4 = 6;
    ppuVar18 = (undefined1 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
    puVar8 = (undefined8 *)((ulonglong)puVar8 & 0xffffffffffffff00);
    local_1b0 = param_1;
    FUN_140e87440(&local_1b0,DAT_1419fe0e8,0x80000000,&local_d8,puVar8,ppuVar18);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    uVar9 = FUN_140081e90(&local_1d8,&local_c8,0x4000000000000000);
    puVar13 = (undefined8 *)FUN_140046450(local_80,uVar9,&local_d8);
    if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
      uVar15 = (undefined4)*puVar13;
    }
    else {
      uVar15 = FUN_140e4b060(puVar13);
    }
    plVar2 = (longlong *)FUN_140e79500(uVar15);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_8c = 0;
    pplVar12 = &local_98;
    bVar4 = false;
    bVar3 = true;
    local_98 = plVar2;
  }
  else {
    if ((*(uint *)((longlong)puVar13 + 0xc) & 0xffffff) == 0) {
      uVar15 = (undefined4)*puVar13;
    }
    else {
      uVar15 = FUN_140e4b060(puVar13);
    }
    local_1e8 = (longlong *)FUN_140e79500(uVar15);
    uStack_1dc = 0;
    pplVar12 = &local_1e8;
    bVar4 = true;
    bVar3 = false;
  }
  uVar5 = local_8c;
  uVar15 = uStack_1dc;
  FUN_140e609c0(param_1);
  if (pplVar12 != pplVar10) {
    local_a8 = *(undefined4 *)pplVar12;
    uStack_a4 = *(undefined4 *)((longlong)pplVar12 + 4);
    uStack_a0 = *(undefined4 *)(pplVar12 + 1);
    uStack_9c = *(undefined4 *)((longlong)pplVar12 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar10);
    }
    FUN_140041b80(pplVar10,&local_a8);
  }
  if ((bVar3) && ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_98);
  }
  if ((bVar4) && ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  local_1b8 = 0xc07;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x0;
  iVar7 = FUN_140e851f0(uVar9,&local_1e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (iVar7 == 0) {
    local_1b8 = 0xc08;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = 0x3ff0000000000000;
  }
  local_1b8 = 0xc0a;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar9,DAT_141a0a848,0x80000000,&local_e8,(ulonglong)puVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar18 & 0xffffffffffffff00);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x4034000000000000;
  iVar7 = FUN_140e851f0(&local_e8,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar7) {
    local_1b8 = 0xc0b;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8198);
    FUN_140e63610(param_1,param_2,&local_1f8,0,uVar9,0);
  }
  local_1b8 = 0xc0d;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_1f8,0,uVar9,0);
  local_1b8 = 0xc0f;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar14 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar19 = 0;
  FUN_140e63610(param_1,param_2,&local_1f8,0,uVar14,0);
  local_1b8 = 0xc11;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x0;
  iVar7 = FUN_140e851f0(uVar9,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar7) {
    uStack_1dc = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_141a0a728,0x80000000,&local_f8,uVar14,uVar19);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x100000100000411;
    iVar7 = FUN_140e851f0(&local_f8,&local_1e8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if (iVar7 == 0) {
      local_1b8 = 0xc13;
      uStack_1cc = 0xf;
      local_1d8 = 0x100000100000406;
      local_a8 = 0x406;
      uStack_a4 = 0x1000001;
      uStack_a0 = uStack_1d0;
      uStack_9c = 0xf;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_a8);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_140);
      local_1b8 = 0xc14;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      local_144 = 0;
      local_150 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_150);
      local_1b8 = 0xc15;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      local_164 = 0;
      local_170 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_170);
      local_1b8 = 0xc16;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
      FUN_140e87440(uVar9,DAT_1419f7b28,0x80000000,&local_108,uVar14 & 0xffffffffffffff00,
                    uVar19 & 0xffffffffffffff00);
      local_a8 = (undefined4)DAT_141dda668;
      uStack_a4 = DAT_141dda668._4_4_;
      uStack_a0 = DAT_141dda670;
      uStack_9c = DAT_141dda674;
      if ((1 << (local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a0);
      }
      FUN_140041b80(local_1a0,&local_a8);
      local_180 = local_1a0;
      uVar9 = FUN_140069500(uVar9);
      FUN_140e63610(uVar9,param_2,&local_1f8,1,&local_108,&local_180);
      local_1b8 = 0xc17;
      goto LAB_140c4b2f0;
    }
  }
  local_1b8 = 0xc1b;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar9,DAT_141a0a848,0x80000000,&local_130,uVar14 & 0xffffffffffffff00,
                uVar19 & 0xffffffffffffff00);
  FUN_1400460e0(&local_130,local_88);
  FUN_140e87930(uVar9,DAT_141a0a848,0x80000000,&local_130);
LAB_140c4b2f0:
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_1a0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

