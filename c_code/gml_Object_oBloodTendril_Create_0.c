// gml_Object_oBloodTendril_Create_0 @ 0x1406e9670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodTendril_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint uVar12;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  undefined4 uVar16;
  undefined1 **ppuVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_res18 = 0;
  local_1c0 = "gml_Object_oBloodSplat_Step_0";
  local_1b8 = 0;
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  uVar16 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_188,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_1cc = 0xffffff;
  local_1d8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b8 = 4;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd588);
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000000000001b;
  local_218 = (longlong *)0x10000000000001b;
  uStack_210 = uStack_220;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_218);
  local_f8 = &local_188;
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,CONCAT44(uVar16,DAT_141a02ef8),&local_f8
                       );
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    uStack_20c = 0;
    local_218 = (longlong *)0x3fc999999999999a;
    pplVar8 = &local_218;
    uVar12 = 2;
    local_res18 = 2;
  }
  else {
    uStack_1fc = 0;
    local_208 = (longlong *)0x3f947ae147ae147b;
    pplVar8 = &local_208;
    uVar12 = 1;
    local_res18 = 1;
  }
  uVar2 = uStack_1fc;
  uVar16 = uStack_20c;
  local_228 = *pplVar8;
  uStack_220 = *(undefined4 *)(pplVar8 + 1);
  uStack_21c = *(undefined4 *)((longlong)pplVar8 + 0xc);
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_228);
  if ((uVar12 & 2) != 0) {
    uVar12 = uVar12 & 0xfffffffd;
    local_res18 = uVar12;
    if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 & 0xfffffffe;
    local_res18 = uVar12;
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
  }
  local_f0 = local_178;
  ppuVar13 = &local_f0;
  FUN_140e63610(local_res8,local_res10,&local_1e8,1,uVar6,ppuVar13);
  local_1b8 = 5;
  uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b48);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar7,uVar5);
  FUN_140e60910(1);
  local_1b8 = 7;
  uStack_20c = 6;
  local_218 = local_res8;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a0a778,0x80000000,&local_a0,uVar6,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_20c = 0;
  local_218 = (longlong *)0x4056800000000000;
  iVar4 = FUN_140e851f0(&local_a0,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar4 == 0) {
    local_1b8 = 9;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b48);
    if (puVar9 != &local_188) {
      local_228 = (longlong *)*puVar9;
      uStack_220 = *(undefined4 *)(puVar9 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_228);
    }
    local_f8 = &local_188;
    local_228 = (longlong *)CONCAT44(uRam0000000141dc68f4,_DAT_141dc68f0);
    uStack_220 = uRam0000000141dc68f8;
    uStack_21c = uRam0000000141dc68fc;
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_228);
    local_f0 = local_178;
    uVar5 = CONCAT44(uVar16,DAT_141a0a0d8);
    puVar9 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar5,&local_f0);
    uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_210 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_218,puVar9);
    }
    local_res18 = uVar12 | 4;
    uStack_21c = 0;
    local_228 = (longlong *)0x4012000000000000;
    FUN_140042560(&local_218,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    ppuVar14 = &local_f8;
    ppuVar13 = (undefined1 **)CONCAT44(uVar16,DAT_1419fe728);
    puVar9 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1e8,1,ppuVar13,ppuVar14);
    uStack_1fc = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_200 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_208 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_208,puVar9);
    }
    local_res18 = uVar12 | 0xc;
    FUN_140046880(&local_208,&local_218);
    uStack_21c = 0;
    local_228 = (longlong *)0x0;
    iVar4 = FUN_140e851f0(&local_208,&local_228,DAT_141955260,0);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_res18 = uVar12 | 4;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (iVar4 == 0) {
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b48);
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a043c8);
      iVar4 = FUN_140e851f0(uVar5,uVar7,DAT_141955260,1);
      if ((iVar4 != -2) && (-1 < iVar4)) {
        local_1b8 = 0xb;
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        local_1a0 = 0;
        local_198 = 0;
        local_194 = 5;
        local_228 = (longlong *)CONCAT44(uRam00000001419e7a44,_DAT_1419e7a40);
        uStack_220 = uRam00000001419e7a48;
        uStack_21c = uRam00000001419e7a4c;
        if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_228);
        local_e8 = local_168;
        ppuVar13 = &local_e8;
        uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_1a0,1,ppuVar13);
        cVar3 = FUN_140e491e0(uVar5);
        if (cVar3 == '\0') {
          local_1b8 = 0x14;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a043c8);
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b48);
          FUN_140e609c0(local_res8);
          if (puVar9 != puVar10) {
            local_228 = (longlong *)*puVar9;
            uStack_220 = *(undefined4 *)(puVar9 + 1);
            uStack_21c = *(undefined4 *)((longlong)puVar9 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_228);
          }
          FUN_140e60910(1);
        }
        else {
          local_1b8 = 0xd;
          if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b0);
          }
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a4 = 5;
          uStack_21c = 6;
          local_228 = local_res8;
          uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          uVar6 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1d8,uVar6,uVar15);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          uStack_21c = 6;
          local_228 = local_res8;
          uVar15 = uVar15 & 0xffffffffffffff00;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_228,DAT_141a0f938,0x80000000,&local_108,uVar6,uVar15);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          uStack_21c = 6;
          local_228 = local_res8;
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_118,uVar6,
                        uVar15 & 0xffffffffffffff00);
          uVar16 = (undefined4)(uVar6 >> 0x20);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_208 = (longlong *)FUN_140e794b0(0,0);
          uStack_1fc = 0;
          local_res18 = uVar12 | 0x10;
          FUN_140042560(&local_208,&local_108);
          uStack_20c = local_1cc;
          uStack_210 = local_1d0;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
            local_218 = local_1d8;
          }
          else {
            FUN_1400419b0(&local_218,&local_1d8);
          }
          local_res18 = uVar12 | 0x30;
          FUN_1400460e0(&local_218,&local_208);
          local_228 = local_218;
          uStack_220 = uStack_210;
          uStack_21c = uStack_20c;
          if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_228);
          local_res18 = uVar12 | 0x10;
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_228 = (longlong *)local_118;
          uStack_220 = uStack_110;
          uStack_21c = uStack_10c;
          local_e0 = &local_158;
          if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_228);
          local_d8 = local_148;
          local_228 = (longlong *)CONCAT44(uRam0000000141dd5edc,_DAT_141dd5ed8);
          uStack_220 = uRam0000000141dd5ee0;
          uStack_21c = DAT_141dd5ee4;
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_228);
          local_d0 = local_138;
          uStack_21c = 0xf;
          local_228 = (longlong *)0x100000000000017;
          local_218 = (longlong *)0x100000000000017;
          uStack_210 = uStack_220;
          uStack_20c = 0xf;
          if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_218);
          local_c8 = local_128;
          ppuVar14 = &local_e0;
          ppuVar13 = (undefined1 **)CONCAT44(uVar16,DAT_141a0a7c8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b0,4,ppuVar13,ppuVar14);
          iVar4 = FUN_140e63cb0(local_90,&local_res8,&local_res10,uVar5);
          if (0 < iVar4) {
            do {
              local_1b8 = 0xf;
              puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar9);
              }
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
              *puVar9 = 0x3fa999999999999a;
              cVar3 = FUN_140e643f0(local_90,&local_res8,&local_res10);
            } while (cVar3 != '\0');
          }
          FUN_140e63970(local_90,&local_res8,&local_res10);
          if (local_80 != 0) {
            FUN_140e4cd60();
          }
        }
      }
    }
    local_1b8 = 0x17;
    uStack_21c = 0xf;
    local_228 = (longlong *)0x100000000000058;
    uVar6 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_228,DAT_1419f75b8,0x80000000,&local_b0,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00,uVar6);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    uStack_21c = 0;
    local_228 = (longlong *)0x0;
    iVar4 = FUN_140e851f0(&local_b0,&local_228,DAT_141955260,1);
    bVar11 = 0 < iVar4;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if (!bVar11) {
      uStack_21c = 0xf;
      local_228 = (longlong *)0x100000000000058;
      uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar11);
      FUN_140e87440(&local_228,DAT_1419f7568,0x80000000,&local_c0,bVar11,uVar6);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      uStack_21c = 0;
      local_228 = (longlong *)0x0;
      iVar4 = FUN_140e851f0(&local_c0,&local_228,DAT_141955260,1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar4 < 1) goto LAB_1406ea866;
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_228 = (longlong *)CONCAT44(uRam00000001419e7a54,_DAT_1419e7a50);
    uStack_220 = uRam00000001419e7a58;
    uStack_21c = uRam00000001419e7a5c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_228);
    local_f8 = &local_188;
    ppuVar14 = &local_f8;
    uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_1e8,1,ppuVar14);
    cVar3 = FUN_140e491e0(uVar5);
    if (cVar3 != '\0') {
      uStack_21c = 0xf;
      local_228 = (longlong *)0x100000000000017;
      dVar1 = (double)FUN_140e4b060(&local_228);
      iVar4 = FUN_140edd1e0(local_res8,local_res10,(int)dVar1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar4 < 0x4b) {
        local_1b8 = 0x19;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uStack_21c = 6;
        local_228 = local_res8;
        uVar6 = uVar6 & 0xffffffffffffff00;
        uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1d8,uVar15,uVar6);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_21c = 6;
        local_228 = local_res8;
        uVar6 = uVar6 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_228,DAT_141a0f938,0x80000000,&local_108,uVar15,uVar6);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_21c = 6;
        local_228 = local_res8;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_118,uVar15,
                      uVar6 & 0xffffffffffffff00);
        uVar16 = (undefined4)(uVar15 >> 0x20);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_208 = (longlong *)FUN_140e794b0(0,0);
        uStack_1fc = 0;
        local_res18 = uVar12 | 0x40;
        FUN_140042560(&local_208,&local_108);
        uStack_20c = local_1cc;
        uStack_210 = local_1d0;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
          local_218 = local_1d8;
        }
        else {
          FUN_1400419b0(&local_218,&local_1d8);
        }
        local_res18 = uVar12 | 0xc0;
        FUN_1400460e0(&local_218,&local_208);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_228);
        local_res18 = uVar12 | 0x40;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_f0 = local_178;
        local_228 = (longlong *)local_118;
        uStack_220 = uStack_110;
        uStack_21c = uStack_10c;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_228);
        local_e8 = local_168;
        local_228 = (longlong *)CONCAT44(uRam0000000141dd5edc,_DAT_141dd5ed8);
        uStack_220 = uRam0000000141dd5ee0;
        uStack_21c = DAT_141dd5ee4;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_228);
        uStack_21c = 0xf;
        local_228 = (longlong *)0x100000000000017;
        local_218 = (longlong *)0x100000000000017;
        uStack_210 = uStack_220;
        uStack_20c = 0xf;
        local_e0 = &local_158;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_218);
        local_d8 = local_148;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,CONCAT44(uVar16,DAT_141a0a7c8),
                              &local_f0);
        iVar4 = FUN_140e63cb0(local_90,&local_res8,&local_res10,uVar5);
        if (0 < iVar4) {
          do {
            local_1b8 = 0x1b;
            puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            *puVar9 = 0x3f9eb851eb851eb8;
            local_1b8 = 0x1c;
            puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
            uVar5 = FUN_140e794b0(0x9999999a,0x33333333);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            *puVar9 = uVar5;
            cVar3 = FUN_140e643f0(local_90,&local_res8,&local_res10);
          } while (cVar3 != '\0');
        }
        FUN_140e63970(local_90,&local_res8,&local_res10);
        if (local_80 != 0) {
          FUN_140e4cd60();
        }
      }
    }
  }
LAB_1406ea866:
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return;
}

