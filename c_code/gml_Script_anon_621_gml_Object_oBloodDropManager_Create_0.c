// gml_Script_anon_621_gml_Object_oBloodDropManager_Create_0 @ 0x1406b2fb0

undefined8 *
gml_Script_anon_621_gml_Object_oBloodDropManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  double *pdVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  int iVar14;
  longlong **pplVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  code *pcVar19;
  ulonglong uVar20;
  ulonglong in_stack_fffffffffffffe10;
  undefined8 **ppuVar21;
  ulonglong uVar22;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined4 local_16c;
  undefined8 local_168 [2];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  uint local_f4;
  undefined8 local_f0;
  uint local_e4;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_110 = "gml_Script__collide@anon@4599@anon@621@gml_Object_oBloodDropManager_Create_0";
  local_118 = DAT_141dc7a50;
  local_108 = 0xcd;
  pcVar19 = FUN_140041b30;
  DAT_141dc7a50 = &local_118;
  _eh_vector_constructor_iterator_(&local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0xcf;
  local_60 = uVar5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar6 + 1);
  local_68 = puVar6;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_d8,puVar6);
  }
  FUN_140042560(&local_d8,uVar5);
  local_188 = local_d8;
  uStack_180 = uStack_d0;
  uStack_17c = uStack_cc;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_188);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_108 = 0xd1;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03178);
  uStack_1dc = 6;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar19 & 0xffffffffffffff00;
  local_1e8 = param_1;
  local_d8 = plVar7;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar13,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1a8,uVar13 & 0xffffffffffffff00,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = uStack_18c;
  uStack_1e0 = uStack_190;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_198);
  }
  FUN_1400460e0(&local_1e8,&local_f0);
  local_188 = local_1e8;
  uStack_180 = uStack_1e0;
  uStack_17c = uStack_1dc;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_188);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_c8 = &local_178;
  local_188 = local_1a8;
  uStack_180 = uStack_1a0;
  uStack_17c = uStack_19c;
  if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_188);
  local_c0 = local_168;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000102;
  local_188 = (longlong *)0x100000000000102;
  uStack_180 = uStack_1d0;
  uStack_17c = 0xf;
  if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_188);
  local_b8 = local_158;
  ppuVar21 = &local_c8;
  plVar10 = plVar7;
  uVar8 = FUN_140e63610(param_1,param_2,&local_1c8,3,plVar7,ppuVar21);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 != '\0') {
    local_108 = 0xd3;
    if ((local_e4 & 0xffffff) == 0) {
      uVar16 = (undefined4)local_f0;
    }
    else {
      uVar16 = FUN_140e4b060(&local_f0);
    }
    uVar17 = (undefined4)((ulonglong)plVar10 >> 0x20);
    uVar5 = FUN_140e79500(uVar16);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_108 = 0xd4;
    local_128 = uVar5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((local_e4 & 0xffffff) == 0) {
      uVar16 = (undefined4)local_f0;
    }
    else {
      uVar16 = FUN_140e4b060(&local_f0);
    }
    local_178 = FUN_140e78d00(uVar16);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_c8 = &local_178;
    ppuVar21 = &local_c8;
    plVar10 = (longlong *)CONCAT44(uVar17,DAT_141a08838);
    pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,1,plVar10,ppuVar21);
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar18 = *pdVar9;
    }
    else {
      dVar18 = (double)FUN_140e4b060(pdVar9);
    }
    iVar14 = (int)dVar18;
    if (0 < iVar14) {
      do {
        iVar14 = iVar14 + -1;
        local_108 = 0xd6;
        plVar7 = plVar10;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
          plVar7 = plVar10;
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03178);
        local_7c = 6;
        uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
        uVar13 = (ulonglong)plVar7 & 0xffffffffffffff00;
        local_d8 = plVar10;
        local_88 = param_1;
        FUN_140e87440(&local_88,DAT_1419fe0e8,0x80000000,&local_198,uVar13,uVar20);
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        local_6c = 6;
        local_78 = param_1;
        FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_1a8,uVar13 & 0xffffffffffffff00,
                      uVar20 & 0xffffffffffffff00);
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        uStack_1dc = uStack_18c;
        uStack_1e0 = uStack_190;
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_198;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_198);
        }
        FUN_1400460e0(&local_1e8,&local_128);
        local_1b8 = (undefined4)local_1e8;
        uStack_1b4 = local_1e8._4_4_;
        uStack_1b0 = uStack_1e0;
        uStack_1ac = uStack_1dc;
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1b8);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_c0 = local_168;
        local_1b8 = (undefined4)local_1a8;
        uStack_1b4 = local_1a8._4_4_;
        uStack_1b0 = uStack_1a0;
        uStack_1ac = uStack_19c;
        if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1b8);
        local_b8 = local_158;
        uStack_17c = 0xf;
        local_188 = (longlong *)0x100000000000102;
        local_1b8 = 0x102;
        uStack_1b4 = 0x1000000;
        uStack_1b0 = uStack_180;
        uStack_1ac = 0xf;
        if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1b8);
        local_b0 = local_148;
        ppuVar21 = &local_c0;
        uVar5 = FUN_140e63610(param_1,param_2,&local_138,3,plVar10,ppuVar21);
        cVar4 = FUN_140e491e0(uVar5);
        if (cVar4 != '\0') break;
        local_108 = 0xd7;
        uStack_1cc = 6;
        ppuVar21 = (undefined8 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
        plVar10 = (longlong *)((ulonglong)plVar10 & 0xffffffffffffff00);
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_98,plVar10,ppuVar21);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_1400460e0(&local_98,&local_128);
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
      } while (0 < iVar14);
      puVar6 = local_68;
    }
    local_108 = 0xd9;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0xbfe0000000000000;
    FUN_140042560(uVar5,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_108 = 0xda;
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x0;
    iVar14 = FUN_140e851f0(puVar11,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar14 < 1) {
      uStack_1dc = *(undefined4 *)((longlong)puVar11 + 0xc);
      uStack_1e0 = *(undefined4 *)(puVar11 + 1);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = (longlong *)*puVar11;
      }
      else {
        FUN_1400419b0(&local_1e8,puVar11);
      }
      pplVar15 = (longlong **)&local_1e8;
      bVar3 = false;
      bVar2 = true;
    }
    else {
      uStack_1cc = 0;
      local_1d8 = (longlong *)&DAT_bff0000000000000;
      pplVar15 = &local_1d8;
      bVar3 = true;
      bVar2 = false;
    }
    uVar16 = uStack_1cc;
    FUN_140e609c0(param_1);
    if (pplVar15 != pplVar12) {
      local_1b8 = *(undefined4 *)pplVar15;
      uStack_1b4 = *(undefined4 *)((longlong)pplVar15 + 4);
      uStack_1b0 = *(undefined4 *)(pplVar15 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pplVar15 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_1b8);
    }
    if ((bVar2) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1e8);
    }
    if ((bVar3) && ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140e60910(1);
    plVar7 = local_d8;
    uVar5 = local_60;
  }
  local_108 = 0xe0;
  uStack_1cc = 6;
  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  uVar13 = (ulonglong)plVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_98,uVar13,uVar20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar6);
  }
  FUN_140042560(&local_1e8,uVar5);
  FUN_1400460e0(&local_98,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
  local_108 = 0xe2;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar6 + 1);
  local_68 = puVar6;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar6);
  }
  FUN_140042560(&local_1e8,uVar5);
  local_1b8 = (undefined4)local_1e8;
  uStack_1b4 = local_1e8._4_4_;
  uStack_1b0 = uStack_1e0;
  uStack_1ac = uStack_1dc;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_1b8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_108 = 0xe4;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1cc = 6;
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar13,uVar20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1a8,uVar13 & 0xffffffffffffff00,
                uVar20 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1b8 = (undefined4)local_198;
  uStack_1b4 = local_198._4_4_;
  uStack_1b0 = uStack_190;
  uStack_1ac = uStack_18c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_1b8);
  local_c8 = &local_178;
  uStack_1dc = uStack_19c;
  uStack_1e0 = uStack_1a0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1a8);
  }
  FUN_1400460e0(&local_1e8,&local_100);
  local_1b8 = (undefined4)local_1e8;
  uStack_1b4 = local_1e8._4_4_;
  uStack_1b0 = uStack_1e0;
  uStack_1ac = uStack_1dc;
  if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1b8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_c0 = local_168;
  uStack_17c = 0xf;
  local_188 = (longlong *)0x100000000000102;
  local_1b8 = 0x102;
  uStack_1b4 = 0x1000000;
  uStack_1b0 = uStack_180;
  uStack_1ac = 0xf;
  if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1b8);
  local_b8 = local_158;
  ppuVar21 = &local_c8;
  uVar8 = FUN_140e63610(param_1,param_2,&local_1c8,3,plVar7,ppuVar21);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 != '\0') {
    local_108 = 0xe6;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar16 = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_d8 = plVar10;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a03178);
    if ((local_f4 & 0xffffff) == 0) {
      uVar17 = (undefined4)local_100;
    }
    else {
      uVar17 = FUN_140e4b060(&local_100);
    }
    uVar5 = FUN_140e79500(uVar17);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_108 = 0xe7;
    local_128 = uVar5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((local_f4 & 0xffffff) == 0) {
      uVar17 = (undefined4)local_100;
    }
    else {
      uVar17 = FUN_140e4b060(&local_100);
    }
    lVar1 = FUN_140e78d00(uVar17);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_c8 = &local_178;
    ppuVar21 = &local_c8;
    uVar13 = CONCAT44(uVar16,DAT_141a08838);
    local_178 = lVar1;
    pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar13,ppuVar21);
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar18 = *pdVar9;
    }
    else {
      dVar18 = (double)FUN_140e4b060(pdVar9);
    }
    iVar14 = (int)dVar18;
    if (0 < iVar14) {
      do {
        iVar14 = iVar14 + -1;
        local_108 = 0xe9;
        uVar20 = uVar13;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
          uVar20 = uVar13;
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        uVar13 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03178);
        uStack_1cc = 6;
        uVar22 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
        uVar20 = uVar20 & 0xffffffffffffff00;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar20,uVar22);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_6c = 6;
        local_78 = param_1;
        FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_1a8,uVar20 & 0xffffffffffffff00,
                      uVar22 & 0xffffffffffffff00);
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        local_1b8 = (undefined4)local_198;
        uStack_1b4 = local_198._4_4_;
        uStack_1b0 = uStack_190;
        uStack_1ac = uStack_18c;
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1b8);
        local_c0 = local_168;
        uStack_1dc = uStack_19c;
        uStack_1e0 = uStack_1a0;
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_1a8;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_1a8);
        }
        FUN_1400460e0(&local_1e8,&local_128);
        local_1b8 = (undefined4)local_1e8;
        uStack_1b4 = local_1e8._4_4_;
        uStack_1b0 = uStack_1e0;
        uStack_1ac = uStack_1dc;
        if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1b8);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_b8 = local_158;
        uStack_17c = 0xf;
        local_188 = (longlong *)0x100000000000102;
        local_1b8 = 0x102;
        uStack_1b4 = 0x1000000;
        uStack_1b0 = uStack_180;
        uStack_1ac = 0xf;
        if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1b8);
        local_b0 = local_148;
        ppuVar21 = &local_c0;
        uVar5 = FUN_140e63610(param_1,param_2,&local_138,3,uVar13,ppuVar21);
        cVar4 = FUN_140e491e0(uVar5);
        if (cVar4 != '\0') break;
        local_108 = 0xea;
        local_7c = 6;
        ppuVar21 = (undefined8 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
        uVar13 = uVar13 & 0xffffffffffffff00;
        local_88 = param_1;
        FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_a8,uVar13,ppuVar21);
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_1400460e0(&local_a8,&local_128);
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
      } while (0 < iVar14);
      puVar6 = local_68;
      plVar10 = local_d8;
    }
    uVar16 = (undefined4)(uVar13 >> 0x20);
    local_108 = 0xec;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (plVar10 != &local_178) {
      local_1b8 = (undefined4)*plVar10;
      uStack_1b4 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_1b0 = (undefined4)plVar10[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1b8);
    }
    local_c8 = &local_178;
    ppuVar21 = &local_c8;
    plVar7 = (longlong *)CONCAT44(uVar16,DAT_1419fd658);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1c8,1,plVar7,ppuVar21);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x0;
    iVar14 = FUN_140e851f0(uVar5,&local_1d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar14 == 0) {
      local_1d8 = (longlong *)FUN_140e794b0(0,0x4000000000000000);
      uStack_1cc = 0;
      pplVar15 = &local_1d8;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      uStack_1dc = *(undefined4 *)((longlong)puVar11 + 0xc);
      uStack_1e0 = *(undefined4 *)(puVar11 + 1);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = (longlong *)*puVar11;
      }
      else {
        FUN_1400419b0(&local_1e8,puVar11);
      }
      pplVar15 = (longlong **)&local_1e8;
      bVar3 = false;
      bVar2 = true;
    }
    uVar16 = uStack_1cc;
    FUN_140e609c0(param_1);
    if (pplVar15 != pplVar12) {
      local_1b8 = *(undefined4 *)pplVar15;
      uStack_1b4 = *(undefined4 *)((longlong)pplVar15 + 4);
      uStack_1b0 = *(undefined4 *)(pplVar15 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pplVar15 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar12);
      }
      FUN_140041b80(pplVar12,&local_1b8);
    }
    if ((bVar2) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1e8);
    }
    if ((bVar3) && ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140e60910(1);
    local_108 = 0xed;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0xbfefae147ae147ae;
    FUN_140042560(uVar5,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar5 = local_60;
  }
  local_108 = 0xf1;
  uStack_1cc = 6;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_a8,(ulonglong)plVar7 & 0xffffffffffffff00
                ,(ulonglong)ppuVar21 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar6);
  }
  FUN_140042560(&local_1e8,uVar5);
  FUN_1400460e0(&local_a8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

