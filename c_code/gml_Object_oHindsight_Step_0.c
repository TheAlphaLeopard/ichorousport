// gml_Object_oHindsight_Step_0 @ 0x140b05420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oHindsight_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  ulonglong uVar17;
  undefined1 **ppuVar18;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  double local_180;
  uint local_174;
  double local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  double local_128;
  byte local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double *local_a8;
  double *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  double *local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  undefined4 local_64;
  longlong *local_60;
  undefined4 local_54;
  
  local_190 = "gml_Object_oHemangiomaEye_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  pdVar5 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_188 = 3;
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1fc = 0;
    local_208 = 0;
    iVar2 = FUN_140e851f0(pdVar5,&local_208,DAT_141955260,0);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar2 != 0) {
      local_188 = 5;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      FUN_140e609c0(param_1);
      FUN_1400460e0(uVar4,pdVar5);
      FUN_140e60910(1);
      local_188 = 7;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3518);
      uVar3 = FUN_140e851f0(uVar4,uVar6,DAT_141955260,1);
      if (uVar3 < 0x80000000) {
        local_188 = 9;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3528);
        uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (pdVar7 != &local_168) {
          local_1a8 = *pdVar7;
          uStack_1a0 = *(undefined4 *)(pdVar7 + 1);
          uStack_19c = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_1a8);
        }
        local_a8 = &local_168;
        if (pdVar5 != &local_158) {
          local_1a8 = *pdVar5;
          uStack_1a0 = *(undefined4 *)(pdVar5 + 1);
          uStack_19c = *(undefined4 *)((longlong)pdVar5 + 0xc);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_1a8);
        }
        local_a0 = &local_158;
        FUN_140e609c0(param_1);
        uVar15 = CONCAT44(uVar16,DAT_1419fa0f8);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar15,&local_a8);
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        FUN_140042560(uVar6,uVar8);
        FUN_140e60910(1);
        local_188 = 10;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
        uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
        uStack_210 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_218,puVar9);
        }
        FUN_140042560(&local_218,pdVar5);
        FUN_1400460e0(uVar6,&local_218);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
      }
      local_188 = 0xe;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3538);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
      uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
      uStack_210 = *(undefined4 *)(puVar9 + 1);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
        local_218 = *puVar9;
      }
      else {
        FUN_1400419b0(&local_218,puVar9);
      }
      FUN_140042560(&local_218,pdVar5);
      FUN_1400460e0(uVar6,&local_218);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_188 = 0x10;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
        uVar13 = (undefined4)*puVar9;
      }
      else {
        uVar13 = FUN_140e4b060(puVar9);
      }
      local_168 = (double)FUN_140e78d00(uVar13);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_a8 = &local_168;
      if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
        uVar13 = (undefined4)*puVar10;
      }
      else {
        uVar13 = FUN_140e4b060(puVar10);
      }
      local_158 = (double)FUN_140e78d00(uVar13);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_14c = 0;
      local_a0 = &local_158;
      puVar9 = (undefined8 *)FUN_140e79090(&local_1d8,2,&local_a8);
      local_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
      local_1e0 = *(undefined4 *)(puVar9 + 1);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = *puVar9;
      }
      else {
        FUN_1400419b0(&local_1e8,puVar9);
      }
      FUN_140042560(&local_1e8,pdVar5);
      uStack_20c = local_1dc;
      uStack_210 = local_1e0;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
        local_218 = local_1e8;
      }
      else {
        FUN_1400419b0(&local_218,&local_1e8);
      }
      local_1fc = 0;
      local_208 = 0x4008000000000000;
      FUN_140046500(&local_218,&local_208);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_1a8 = (double)local_218;
      uStack_1a0 = uStack_210;
      uStack_19c = uStack_20c;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1a8);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1a8 = (double)CONCAT44(uRam00000001419eba54,_DAT_1419eba50);
      uStack_1a0 = uRam00000001419eba58;
      uStack_19c = uRam00000001419eba5c;
      local_98 = local_148;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1a8);
      local_90 = local_138;
      ppuVar18 = &local_98;
      uVar11 = CONCAT44(uVar16,DAT_141a08838);
      pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar11,ppuVar18);
      if (pdVar7 != &local_128) {
        local_1a8 = *pdVar7;
        uStack_1a0 = *(undefined4 *)(pdVar7 + 1);
        uStack_19c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1a8);
      }
      local_88 = &local_128;
      pdVar7 = (double *)FUN_140e79090(&local_1f8,2,&local_90);
      if (pdVar7 != &local_180) {
        local_1a8 = *pdVar7;
        uStack_1a0 = *(undefined4 *)(pdVar7 + 1);
        uStack_19c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_1a8);
      }
      local_188 = 0x12;
      dVar14 = local_180;
      if ((local_174 & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_180);
      }
      uVar12 = (ulonglong)dVar14;
      uVar3 = (uint)uVar12;
      do {
        if ((int)uVar3 < 1) {
          local_188 = 0x20;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
          uVar3 = FUN_140e851f0(uVar4,uVar6,DAT_141955260,1);
          if (0x7fffffff < uVar3) {
            (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
            local_1ac = 6;
            local_1b8 = param_1;
            FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_f8,uVar11 & 0xffffffffffffff00,
                          (ulonglong)ppuVar18 & 0xffffffffffffff00);
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_118);
            local_1fc = local_10c;
            local_200 = local_110;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
              local_208 = local_118;
            }
            else {
              FUN_1400419b0(&local_208,&local_118);
            }
            local_1ac = 7;
            local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,0x40);
            FUN_1400460e0(&local_208,&local_1b8);
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            iVar2 = FUN_140e851f0(&local_f8,&local_208,DAT_141955260,1);
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            if (iVar2 < 1) goto LAB_140b062d0;
          }
          local_188 = 0x21;
          FUN_140edd0e0(param_1,param_2,0,0);
          goto LAB_140b062d0;
        }
        uVar3 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar3;
        local_188 = 0x14;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        local_74 = 6;
        uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        local_80 = param_1;
        FUN_140e87440(&local_80,DAT_1419fe0e8,0x80000000,&local_d8,uVar11,uVar17);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        local_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
        local_1e0 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
          local_1e8 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_1e8,puVar9);
        }
        FUN_140042560(&local_1e8,pdVar5);
        local_fc = local_1dc;
        local_100 = local_1e0;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
          local_108 = local_1e8;
        }
        else {
          FUN_1400419b0(&local_108,&local_1e8);
        }
        FUN_140046500(&local_108,&local_180);
        FUN_1400460e0(&local_d8,&local_108);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d8);
        local_188 = 0x15;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
        local_64 = 6;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        local_70 = param_1;
        FUN_140e87440(&local_70,DAT_1419fe158,0x80000000,&local_e8,uVar11,uVar17);
        if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
        uStack_210 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_218,puVar9);
        }
        FUN_140042560(&local_218,pdVar5);
        local_1fc = uStack_20c;
        local_200 = uStack_210;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_208 = local_218;
        }
        else {
          FUN_1400419b0(&local_208,&local_218);
        }
        FUN_140046500(&local_208,&local_180);
        FUN_1400460e0(&local_e8,&local_208);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e8);
        local_188 = 0x17;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        local_54 = 6;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        local_60 = param_1;
        FUN_140e87440(&local_60,DAT_1419fe0e8,0x80000000,&local_c8,uVar11,uVar17);
        if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_60);
        }
        local_1ac = 6;
        uVar11 = uVar11 & 0xffffffffffffff00;
        local_1b8 = param_1;
        FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_f8,uVar11,
                      uVar17 & 0xffffffffffffff00);
        uVar16 = (undefined4)(uVar11 >> 0x20);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_b8 = (undefined4)local_c8;
        uStack_b4 = local_c8._4_4_;
        uStack_b0 = uStack_c0;
        uStack_ac = uStack_bc;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_b8);
        local_a8 = &local_168;
        local_b8 = (undefined4)local_f8;
        uStack_b4 = local_f8._4_4_;
        uStack_b0 = uStack_f0;
        uStack_ac = uStack_ec;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_b8);
        local_a0 = &local_158;
        uStack_19c = 0xf;
        local_1a8 = 7.29112201955693e-304;
        local_b8 = 0x149;
        uStack_b4 = 0x1000000;
        uStack_b0 = uStack_1a0;
        uStack_ac = 0xf;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_b8);
        local_98 = local_148;
        uVar6 = FUN_140e634e0(param_1,param_2,&local_1f8,3,CONCAT44(uVar16,DAT_141a12628),&local_a8)
        ;
        cVar1 = FUN_140e491e0(uVar6);
        if (cVar1 != '\0') break;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
        ppuVar18 = (undefined1 **)0x0;
        uVar6 = FUN_140e63610(param_1,param_2,&local_1c8,0,uVar11,0);
        cVar1 = FUN_140e491e0(uVar6);
      } while (cVar1 == '\0');
      local_188 = 0x19;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3548);
      FUN_140e63610(param_1,param_2,&local_1d8,0,uVar4,0);
      local_188 = 0x1a;
      goto LAB_140b062d0;
    }
  }
  local_188 = 3;
LAB_140b062d0:
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

