// gml_Object_oParChest_Create_0 @ 0x140b9f8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParChest_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  ulonglong in_stack_fffffffffffffdf0;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined4 local_128 [3];
  byte local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_res18 = 0;
  local_1b0 = "gml_Object_oParBreakable_Step_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_168,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_17c = 0xffffff;
  local_188 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uVar9 = 2;
  local_1a8 = 2;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
  uStack_1fc = 6;
  local_208 = local_res8;
  in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_90,uVar13,in_stack_fffffffffffffdf0);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  iVar3 = FUN_140e851f0(&local_90,uVar5,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1a8 = 4;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
    uStack_1fc = 0;
    local_208 = (longlong *)0x0;
    iVar3 = FUN_140e851f0(uVar5,&local_208,DAT_141955260,1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uVar4 = 1 << ((byte)local_1ec & 0x1f);
    if (iVar3 == -2 || 0 < iVar3) {
      local_1a8 = 0x17;
      if ((uVar4 & 0x46) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uStack_1fc = 6;
      local_208 = local_res8;
      in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_f8,uVar13,in_stack_fffffffffffffdf0);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uStack_1fc = 6;
      local_208 = local_res8;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_188,uVar13,
                    in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_1e8 = (undefined4)local_f8;
      uStack_1e4 = local_f8._4_4_;
      uStack_1e0 = uStack_f0;
      uStack_1dc = uStack_ec;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1e8);
      local_d8 = &local_168;
      local_1e8 = (undefined4)local_188;
      uStack_1e4 = local_188._4_4_;
      uStack_1e0 = uStack_180;
      uStack_1dc = uStack_17c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1e8);
      local_d0 = local_158;
      uStack_1fc = 0xf;
      local_208 = (longlong *)0x10000000000009d;
      local_1e8 = 0x9d;
      uStack_1e4 = 0x1000000;
      uStack_1e0 = uStack_200;
      uStack_1dc = 0xf;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1e8);
      local_c8 = local_148;
      ppuVar14 = &local_d8;
      puVar6 = (undefined8 *)
               FUN_140e634e0(local_res8,local_res10,&local_1f8,3,CONCAT44(uVar11,DAT_141a124c8),
                             ppuVar14);
      if (puVar6 != &local_108) {
        local_1e8 = *(undefined4 *)puVar6;
        uStack_1e4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_1e0 = *(undefined4 *)(puVar6 + 1);
        uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1e8);
      }
      local_1a8 = 0x18;
      uStack_1fc = 0;
      local_208 = (longlong *)0xc010000000000000;
      iVar3 = FUN_140e851f0(&local_108,&local_208,DAT_141955260,0);
      bVar10 = iVar3 == 0;
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if (!bVar10) {
        ppuVar14 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar14 >> 8),bVar10);
        FUN_140e87440(&local_108,DAT_141a1f230,0x80000000,&local_b0,bVar10,ppuVar14);
        if ((local_a4 & 0xffffff) == 0) {
          uVar11 = (undefined4)local_b0;
        }
        else {
          uVar11 = FUN_140e4b060(&local_b0);
        }
        dVar1 = (double)FUN_140e78d00(uVar11);
        if (DAT_141955260 < dVar1 - 0.5) {
          local_1a8 = 0x19;
          if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a0);
          }
          local_194 = 0;
          local_1a0 = 0x3ff0000000000000;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1a0);
        }
      }
      local_1a8 = 0x1b;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      local_1e8 = (undefined4)DAT_1419df7b0;
      uStack_1e4 = DAT_1419df7b0._4_4_;
      uStack_1e0 = DAT_1419df7b8;
      uStack_1dc = DAT_1419df7bc;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1e8);
      local_d8 = &local_168;
      local_1e8 = (undefined4)DAT_1419df7b0;
      uStack_1e4 = DAT_1419df7b0._4_4_;
      uStack_1e0 = DAT_1419df7b8;
      uStack_1dc = DAT_1419df7bc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1e8);
      local_d0 = local_158;
      ppuVar15 = &local_d8;
      uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_1f8,2,ppuVar15);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 != '\0') {
        local_1a8 = 0x1d;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_dc = 0;
        local_e8 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_e8);
        local_1a8 = 0x1e;
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        local_194 = 0;
        local_1a0 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1a0);
      }
      local_1a8 = 0x22;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uStack_1fc = 6;
      local_208 = local_res8;
      uVar17 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar13 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
      FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_f8,uVar13,uVar17);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uStack_1fc = 6;
      local_208 = local_res8;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_188,uVar13,
                    uVar17 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_1e8 = (undefined4)local_f8;
      uStack_1e4 = local_f8._4_4_;
      uStack_1e0 = uStack_f0;
      uStack_1dc = uStack_ec;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1e8);
      local_d8 = &local_168;
      local_1e8 = (undefined4)local_188;
      uStack_1e4 = local_188._4_4_;
      uStack_1e0 = uStack_180;
      uStack_1dc = uStack_17c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1e8);
      local_d0 = local_158;
      uStack_1fc = 0xf;
      local_208 = (longlong *)0x100000000000005;
      local_1e8 = 5;
      uStack_1e4 = 0x1000000;
      uStack_1e0 = uStack_200;
      uStack_1dc = 0xf;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1e8);
      local_c8 = local_148;
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1f8,3,CONCAT44(uVar11,DAT_141a12628),
                            &local_d8);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 != '\0') {
        local_1a8 = 0x23;
        uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
        uStack_1fc = 0;
        local_208 = (longlong *)0x3ff0000000000000;
        FUN_1400462a0(uVar5,&local_208);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
      }
    }
    else {
      local_1a8 = 5;
      if ((uVar4 & 0x46) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uVar11 = (undefined4)(uVar13 >> 0x20);
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
      if (puVar6 != &local_168) {
        local_208 = (longlong *)*puVar6;
        uStack_200 = *(undefined4 *)(puVar6 + 1);
        uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_208);
      }
      local_d8 = &local_168;
      uStack_1fc = DAT_141dda074;
      uStack_200 = DAT_141dda070;
      if ((1 << ((byte)DAT_141dda074 & 0x1f) & 0x46U) == 0) {
        local_208 = DAT_141dda068;
      }
      else {
        FUN_1400419b0(&local_208,&DAT_141dda068);
      }
      uVar5 = CONCAT44(uVar11,DAT_141a089e8);
      puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1c8,1,uVar5,&local_d8);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
        local_1d8 = (longlong *)*puVar6;
      }
      else {
        FUN_1400419b0(&local_1d8,puVar6);
      }
      local_res18 = 4;
      FUN_1400460e0(&local_1d8,&local_208);
      local_1e8 = (undefined4)local_1d8;
      uStack_1e4 = local_1d8._4_4_;
      uStack_1e0 = uStack_1d0;
      uStack_1dc = uStack_1cc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1e8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_d0 = local_158;
      ppuVar16 = &local_d0;
      pplVar7 = (longlong **)
                FUN_140e634e0(local_res8,local_res10,&local_1f8,1,CONCAT44(uVar11,DAT_141a086f8),
                              ppuVar16);
      if (pplVar7 != &local_178) {
        local_1e8 = *(undefined4 *)pplVar7;
        uStack_1e4 = *(undefined4 *)((longlong)pplVar7 + 4);
        uStack_1e0 = *(undefined4 *)(pplVar7 + 1);
        uStack_1dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1e8);
      }
      local_1a8 = 6;
      uStack_1fc = 0;
      local_208 = (longlong *)&DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(&local_178,&local_208,DAT_141955260,0);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if (iVar3 == 0) {
        uStack_1cc = 0xf;
        local_1d8 = (longlong *)0x10000010000011b;
        pplVar7 = (longlong **)&local_1d8;
        uVar9 = 1;
        local_res18 = 1;
      }
      else {
        uStack_1fc = local_16c;
        uStack_200 = local_170;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
          local_208 = local_178;
        }
        else {
          FUN_1400419b0(&local_208,&local_178);
        }
        pplVar7 = &local_208;
        local_res18 = 2;
      }
      uVar11 = uStack_1cc;
      local_1e8 = *(undefined4 *)pplVar7;
      uStack_1e4 = *(undefined4 *)((longlong)pplVar7 + 4);
      uStack_1e0 = *(undefined4 *)(pplVar7 + 1);
      uStack_1dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_1e8);
      if (((uVar9 & 2) != 0) &&
         (uVar9 = uVar9 & 0xfffffffd, local_res18 = uVar9,
         (1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_208);
      }
      if (((uVar9 & 1) != 0) &&
         (uVar9 = uVar9 & 0xfffffffe, local_res18 = uVar9, (1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0
         )) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_a0);
      local_1a8 = 8;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a09f78);
      if (puVar6 != &local_168) {
        local_1e8 = *(undefined4 *)puVar6;
        uStack_1e4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_1e0 = *(undefined4 *)(puVar6 + 1);
        uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1e8);
      }
      local_d8 = &local_168;
      ppuVar14 = &local_d8;
      uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_1f8,1,ppuVar14);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 != '\0') {
        local_1a8 = 9;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f56a8);
        uStack_1fc = 6;
        local_208 = local_res8;
        uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_f8,uVar13,uVar17);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        uStack_1fc = 6;
        local_208 = local_res8;
        FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_188,uVar13 & 0xffffffffffffff00,
                      uVar17 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1e8 = (undefined4)local_f8;
        uStack_1e4 = local_f8._4_4_;
        uStack_1e0 = uStack_f0;
        uStack_1dc = uStack_ec;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1e8);
        local_d0 = local_158;
        uStack_1cc = uStack_17c;
        uStack_1d0 = uStack_180;
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
          local_1d8 = local_188;
        }
        else {
          FUN_1400419b0(&local_1d8,&local_188);
        }
        local_res18 = uVar9 | 8;
        uStack_1fc = 7;
        local_208 = (longlong *)CONCAT44(local_208._4_4_,8);
        FUN_1400462a0(&local_1d8,&local_208);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1e8 = (undefined4)local_1d8;
        uStack_1e4 = local_1d8._4_4_;
        uStack_1e0 = uStack_1d0;
        uStack_1dc = uStack_1cc;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1e8);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_c8 = local_148;
        local_1e8 = _DAT_141dda078;
        uStack_1e4 = uRam0000000141dda07c;
        uStack_1e0 = uRam0000000141dda080;
        uStack_1dc = DAT_141dda084;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1e8);
        local_c0 = local_138;
        puVar8 = (undefined4 *)FUN_140e63610(local_res8,local_res10,&local_118,0,uVar5,0);
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar8 != local_128) {
          local_1e8 = *puVar8;
          uStack_1e4 = puVar8[1];
          uStack_1e0 = puVar8[2];
          uStack_1dc = puVar8[3];
          if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_1e8);
        }
        local_b8 = local_128;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,CONCAT44(uVar11,DAT_141a0a7c8),
                              &local_d0);
        iVar3 = FUN_140e63cb0(local_80,&local_res8,&local_res10,uVar5);
        if (0 < iVar3) {
          do {
            local_1a8 = 0xb;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            *puVar6 = 0xc000000000000000;
            cVar2 = FUN_140e643f0(local_80,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_80,&local_res8,&local_res10);
        if (local_70 != 0) {
          FUN_140e4cd60();
        }
      }
      local_1a8 = 0x12;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09f88);
      FUN_140e63610(local_res8,local_res10,&local_1f8,0,uVar5,0);
      local_1a8 = 0x13;
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

