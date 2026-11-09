// gml_Script_anon_1953_gml_Object_oBossGrub_Create_0 @ 0x140790c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1953_gml_Object_oBossGrub_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar15;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
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
  char *local_e0;
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  longlong *local_80;
  undefined4 local_74;
  undefined8 local_70;
  
  local_e0 = "gml_Script_anon@282@gml_Object_oBossGrub_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x16;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_198,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x18;
  local_70 = uVar6;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_108,uVar13,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_118,uVar13,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = uStack_fc;
  uStack_1d0 = uStack_100;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_108;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_108);
  }
  FUN_1400460e0(&local_1d8,puVar7);
  local_138 = local_1d8;
  uStack_130 = uStack_1d0;
  uStack_12c = uStack_1cc;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_138);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_d0 = local_198;
  local_138 = local_118;
  uStack_130 = uStack_110;
  uStack_12c = uStack_10c;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_138);
  local_c8 = local_188;
  uStack_1ac = 0xf;
  local_1b8 = (longlong *)0x100000000000149;
  local_138 = (longlong *)0x100000000000149;
  uStack_130 = uStack_1b0;
  uStack_12c = 0xf;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_138);
  local_c0 = local_178;
  ppuVar14 = &local_d0;
  uVar13 = CONCAT44(uVar11,DAT_141a12628);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar13,ppuVar14);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 != '\0') {
    local_d8 = 0x1a;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar7;
    }
    else {
      uVar11 = FUN_140e4b060(puVar7);
    }
    uVar6 = FUN_140e79500(uVar11);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_d8 = 0x1b;
    local_f8 = uVar6;
    while( true ) {
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_74 = 6;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_80 = param_1;
      FUN_140e87440(&local_80,DAT_1419fe0e8,0x80000000,&local_108,uVar13,uVar15);
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      uStack_11c = 6;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_128 = param_1;
      FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_118,uVar13,
                    uVar15 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      uStack_1cc = uStack_fc;
      uStack_1d0 = uStack_100;
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_108;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_108);
      }
      FUN_1400460e0(&local_1d8,&local_f8);
      local_1c8 = (undefined4)local_1d8;
      uStack_1c4 = local_1d8._4_4_;
      uStack_1c0 = uStack_1d0;
      uStack_1bc = uStack_1cc;
      if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_1c8);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_d0 = local_198;
      local_1c8 = (undefined4)local_118;
      uStack_1c4 = local_118._4_4_;
      uStack_1c0 = uStack_110;
      uStack_1bc = uStack_10c;
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1c8);
      local_c8 = local_188;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x100000000000149;
      local_1c8 = 0x149;
      uStack_1c4 = 0x1000000;
      uStack_1c0 = uStack_130;
      uStack_1bc = 0xf;
      if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
      local_c0 = local_178;
      ppuVar14 = &local_d0;
      uVar13 = CONCAT44(uVar11,DAT_141a12628);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar13,ppuVar14);
      cVar4 = FUN_140e491e0(uVar6);
      if (cVar4 != '\0') break;
      local_d8 = 0x1d;
      uStack_1ac = 6;
      ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_90,uVar13,ppuVar14);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_1400460e0(&local_90,&local_f8);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_90);
    }
    local_d8 = 0x1f;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    local_1c8 = _DAT_1419e81b0;
    uStack_1c4 = uRam00000001419e81b4;
    uStack_1c0 = uRam00000001419e81b8;
    uStack_1bc = uRam00000001419e81bc;
    if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1c8);
    local_d0 = local_198;
    local_1c8 = _DAT_1419e8150;
    uStack_1c4 = uRam00000001419e8154;
    uStack_1c0 = uRam00000001419e8158;
    uStack_1bc = uRam00000001419e815c;
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_c8 = local_188;
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar7;
    }
    else {
      uVar11 = FUN_140e4b060(puVar7);
    }
    dVar2 = (double)FUN_140e79500(uVar11);
    bVar1 = dVar2 != 1.0;
    if (bVar1) {
      uStack_1ac = 0;
      local_1b8 = (longlong *)0x4066800000000000;
      pplVar9 = &local_1b8;
    }
    else {
      uStack_11c = 0;
      local_128 = (longlong *)0x0;
      pplVar9 = &local_128;
    }
    uVar3 = uStack_11c;
    uVar11 = uStack_1ac;
    local_1c8 = *(undefined4 *)pplVar9;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar9 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar9 + 0xc);
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    if ((bVar1) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1b8);
    }
    if ((!bVar1) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_128);
    }
    local_c0 = local_178;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_b8 = local_168;
    ppuVar14 = &local_d0;
    FUN_14044e5b0(param_1,param_2,&local_1a8,4,ppuVar14);
    uVar11 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_d8 = 0x20;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_12c = 0xf;
    local_138 = (longlong *)0x10000020000016a;
    local_1c8 = 0x16a;
    uStack_1c4 = 0x1000002;
    uStack_1c0 = uStack_130;
    uStack_1bc = 0xf;
    if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1c8);
    local_d0 = local_198;
    local_1c8 = _DAT_1419e8190;
    uStack_1c4 = uRam00000001419e8194;
    uStack_1c0 = uRam00000001419e8198;
    uStack_1bc = uRam00000001419e819c;
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_c8 = local_188;
    local_1c8 = _DAT_1419df7a0;
    uStack_1c4 = uRam00000001419df7a4;
    uStack_1c0 = uRam00000001419df7a8;
    uStack_1bc = uRam00000001419df7ac;
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    local_c0 = local_178;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_b8 = local_168;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1c8);
    local_b0 = local_158;
    local_148 = FUN_140e794b0(0,0x3ff4000000000000);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_a8 = &local_148;
    ppuVar14 = &local_d0;
    uVar13 = CONCAT44(uVar11,DAT_141a0a2e8);
    FUN_140e634e0(param_1,param_2,&local_1a8,6,uVar13,ppuVar14);
    local_d8 = 0x21;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_1ac = 0;
    local_1b8 = (longlong *)0xbfefae147ae147ae;
    FUN_140042560(uVar6,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uVar6 = local_70;
  }
  local_d8 = 0x27;
  uStack_1ac = 6;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_90,uVar13,uVar15);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1cc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_1d0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar7);
  }
  FUN_140042560(&local_1d8,uVar6);
  FUN_1400460e0(&local_90,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_90);
  local_d8 = 0x29;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_1ac = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_108,uVar13,uVar15);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1ac = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_118,uVar13,uVar15 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1c8 = (undefined4)local_108;
  uStack_1c4 = local_108._4_4_;
  uStack_1c0 = uStack_100;
  uStack_1bc = uStack_fc;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1c8);
  local_d0 = local_198;
  uStack_1cc = uStack_10c;
  uStack_1d0 = uStack_110;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_118;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_118);
  }
  FUN_1400460e0(&local_1d8,puVar7);
  local_1c8 = (undefined4)local_1d8;
  uStack_1c4 = local_1d8._4_4_;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = uStack_1cc;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_c8 = local_188;
  uStack_12c = 0xf;
  local_138 = (longlong *)0x100000000000149;
  local_1c8 = 0x149;
  uStack_1c4 = 0x1000000;
  uStack_1c0 = uStack_130;
  uStack_1bc = 0xf;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_c0 = local_178;
  ppuVar14 = &local_d0;
  uVar13 = CONCAT44(uVar11,DAT_141a12628);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar13,ppuVar14);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 != '\0') {
    local_d8 = 0x2b;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar7;
    }
    else {
      uVar11 = FUN_140e4b060(puVar7);
    }
    uVar6 = FUN_140e79500(uVar11);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_d8 = 0x2c;
    local_f8 = uVar6;
    while( true ) {
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uStack_1ac = 6;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_108,uVar13,uVar15);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_11c = 6;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_128 = param_1;
      FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_118,uVar13,
                    uVar15 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_1c8 = (undefined4)local_108;
      uStack_1c4 = local_108._4_4_;
      uStack_1c0 = uStack_100;
      uStack_1bc = uStack_fc;
      if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_1c8);
      local_d0 = local_198;
      uStack_1cc = uStack_10c;
      uStack_1d0 = uStack_110;
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_118;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_118);
      }
      FUN_1400460e0(&local_1d8,&local_f8);
      local_1c8 = (undefined4)local_1d8;
      uStack_1c4 = local_1d8._4_4_;
      uStack_1c0 = uStack_1d0;
      uStack_1bc = uStack_1cc;
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1c8);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_c8 = local_188;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x100000000000149;
      local_1c8 = 0x149;
      uStack_1c4 = 0x1000000;
      uStack_1c0 = uStack_130;
      uStack_1bc = 0xf;
      if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
      local_c0 = local_178;
      ppuVar14 = &local_d0;
      uVar13 = CONCAT44(uVar11,DAT_141a12628);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar13,ppuVar14);
      cVar4 = FUN_140e491e0(uVar6);
      if (cVar4 != '\0') break;
      local_d8 = 0x2e;
      local_74 = 6;
      ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_80 = param_1;
      FUN_140e87440(&local_80,DAT_1419fe158,0x80000000,&local_a0,uVar13,ppuVar14);
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_1400460e0(&local_a0,&local_f8);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
    }
    local_d8 = 0x30;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    local_1c8 = _DAT_1419e81b0;
    uStack_1c4 = uRam00000001419e81b4;
    uStack_1c0 = uRam00000001419e81b8;
    uStack_1bc = uRam00000001419e81bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1c8);
    local_d0 = local_198;
    local_1c8 = _DAT_1419e8150;
    uStack_1c4 = uRam00000001419e8154;
    uStack_1c0 = uRam00000001419e8158;
    uStack_1bc = uRam00000001419e815c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_c8 = local_188;
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar7;
    }
    else {
      uVar11 = FUN_140e4b060(puVar7);
    }
    dVar2 = (double)FUN_140e79500(uVar11);
    bVar1 = dVar2 != 1.0;
    if (bVar1) {
      uStack_1ac = 0;
      local_1b8 = (longlong *)0x4056800000000000;
      pplVar9 = &local_1b8;
    }
    else {
      uStack_11c = 0;
      local_128 = (longlong *)0x4070e00000000000;
      pplVar9 = &local_128;
    }
    uVar3 = uStack_11c;
    uVar11 = uStack_1ac;
    local_1c8 = *(undefined4 *)pplVar9;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar9 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar9 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    if ((bVar1) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1b8);
    }
    if ((!bVar1) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_128);
    }
    local_c0 = local_178;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_b8 = local_168;
    ppuVar14 = &local_d0;
    FUN_14044e5b0(param_1,param_2,&local_1a8,4,ppuVar14);
    uVar11 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_d8 = 0x31;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_12c = 0xf;
    local_138 = (longlong *)0x10000020000016a;
    local_1c8 = 0x16a;
    uStack_1c4 = 0x1000002;
    uStack_1c0 = uStack_130;
    uStack_1bc = 0xf;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1c8);
    local_d0 = local_198;
    local_1c8 = _DAT_1419e8190;
    uStack_1c4 = uRam00000001419e8194;
    uStack_1c0 = uRam00000001419e8198;
    uStack_1bc = uRam00000001419e819c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_c8 = local_188;
    local_1c8 = _DAT_1419df7a0;
    uStack_1c4 = uRam00000001419df7a4;
    uStack_1c0 = uRam00000001419df7a8;
    uStack_1bc = uRam00000001419df7ac;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    local_c0 = local_178;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_b8 = local_168;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1c8);
    local_b0 = local_158;
    uVar6 = FUN_140e794b0(0,0x3ff4000000000000);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_a8 = &local_148;
    ppuVar14 = &local_d0;
    uVar13 = CONCAT44(uVar11,DAT_141a0a2e8);
    local_148 = uVar6;
    FUN_140e634e0(param_1,param_2,&local_1a8,6,uVar13,ppuVar14);
    local_d8 = 0x33;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdab8);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdaf8);
    iVar5 = FUN_140e851f0(uVar6,uVar8,DAT_141955260,1);
    if (iVar5 == -2 || 0 < iVar5) {
      local_d8 = 0x3a;
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      *puVar10 = 0;
    }
    else {
      local_d8 = 0x35;
      uVar6 = (**(code **)(*param_1 + 0x10))();
      uStack_1ac = 0;
      local_1b8 = (longlong *)0xbfefae147ae147ae;
      FUN_140042560(uVar6,&local_1b8);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_d8 = 0x36;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdab8);
      FUN_140046040(uVar6);
    }
    uVar6 = local_70;
  }
  local_d8 = 0x40;
  uStack_1ac = 6;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_a0,uVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1cc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_1d0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar7);
  }
  FUN_140042560(&local_1d8,uVar6);
  FUN_1400460e0(&local_a0,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

