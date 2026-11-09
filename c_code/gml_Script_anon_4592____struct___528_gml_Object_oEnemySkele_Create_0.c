// gml_Script_anon_4592____struct___528_gml_Object_oEnemySkele_Create_0 @ 0x140a66aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4592____struct___528_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  undefined8 *puVar13;
  longlong **pplVar14;
  bool bVar15;
  undefined4 uVar16;
  longlong *plVar17;
  undefined8 **ppuVar18;
  ulonglong uVar19;
  longlong *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50 [3];
  
  local_170 = "gml_Script_anon@3612@___struct___527@gml_Object_oEnemySkele_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x97;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_1cc = 0xffffff;
  local_1d8 = (longlong *)0x0;
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_98 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_17c = 0;
  local_188 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x98;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar7 != &local_148) {
    local_208 = (longlong *)*puVar7;
    uStack_200 = *(undefined4 *)(puVar7 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_208);
  }
  local_88 = &local_148;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1e8,1,CONCAT44(uVar16,DAT_141a02ef8),&local_88);
  cVar5 = FUN_140e491e0(uVar8);
  if (cVar5 == '\0') {
    local_168 = 0x99;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar9 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_1c8,0,0);
    if (puVar9 != puVar7) {
      local_208 = (longlong *)*puVar9;
      uStack_200 = *(undefined4 *)(puVar9 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_208);
    }
    FUN_140e60910(1);
  }
  local_168 = 0x9b;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar17 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
  uStack_20c = 6;
  ppuVar18 = (undefined8 **)(uVar11 & 0xffffffffffffff00);
  uVar11 = (ulonglong)plVar17 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1b8,uVar11,ppuVar18);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_1ec = uStack_1cc;
  uStack_1f0 = uStack_1d0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_1d8);
  }
  FUN_1400462a0(&local_1f8,&local_1b8);
  if ((uStack_1ec & 0xffffff) == 0) {
    uVar16 = SUB84(local_1f8,0);
  }
  else {
    uVar16 = FUN_140e4b060(&local_1f8);
  }
  dVar1 = (double)FUN_140e78d00(uVar16);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (dVar1 < 96.0) {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    plVar17 = param_1;
    uVar11 = param_2;
    FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
    uStack_20c = 6;
    ppuVar18 = (undefined8 **)(uVar11 & 0xffffffffffffff00);
    uVar11 = (ulonglong)plVar17 & 0xffffffffffffff00;
    local_218 = param_1;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1b8,uVar11,ppuVar18);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_1ec = uStack_1cc;
    uStack_1f0 = uStack_1d0;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_1d8);
    }
    FUN_1400462a0(&local_1f8,&local_1b8);
    if ((uStack_1ec & 0xffffff) == 0) {
      uVar16 = SUB84(local_1f8,0);
    }
    else {
      uVar16 = FUN_140e4b060(&local_1f8);
    }
    local_218 = (longlong *)FUN_140e79500(uVar16);
    uStack_20c = 0;
    iVar6 = FUN_140e851f0(uVar10,&local_218,DAT_141955260,0);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar6 == 0) {
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
      ppuVar18 = (undefined8 **)0x0;
      uVar8 = FUN_140e63610(param_1,param_2,&local_1e8,0,uVar11,0);
      cVar5 = FUN_140e491e0(uVar8);
      if (cVar5 != '\0') {
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
        uStack_20c = 6;
        uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        local_218 = param_1;
        FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1b8,uVar11,uVar19);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uStack_20c = 6;
        local_218 = param_1;
        FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_198,uVar11 & 0xffffffffffffff00,
                      uVar19 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        plVar17 = param_1;
        FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
        uVar16 = (undefined4)((ulonglong)plVar17 >> 0x20);
        local_208 = local_1b8;
        uStack_200 = uStack_1b0;
        uStack_1fc = uStack_1ac;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_208);
        uStack_1ec = local_18c;
        uStack_1f0 = local_190;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_198;
          local_88 = &local_148;
        }
        else {
          local_88 = &local_148;
          FUN_1400419b0(&local_1f8,&local_198);
        }
        uStack_20c = 7;
        local_218 = (longlong *)CONCAT44(local_218._4_4_,0xc);
        FUN_1400462a0(&local_1f8,&local_218);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_208 = local_1f8;
        uStack_200 = uStack_1f0;
        uStack_1fc = uStack_1ec;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_208);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_80 = local_138;
        local_208 = local_1d8;
        uStack_200 = uStack_1d0;
        uStack_1fc = uStack_1cc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_208);
        local_78 = local_128;
        uStack_1ec = local_18c;
        uStack_1f0 = local_190;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_198;
        }
        else {
          FUN_1400419b0(&local_1f8,&local_198);
        }
        uStack_20c = 7;
        local_218 = (longlong *)CONCAT44(local_218._4_4_,0xc);
        FUN_1400462a0(&local_1f8,&local_218);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_208 = local_1f8;
        uStack_200 = uStack_1f0;
        uStack_1fc = uStack_1ec;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_208);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_70 = local_118;
        uStack_1fc = 0xf;
        local_208 = (longlong *)0x100000000000149;
        local_218 = (longlong *)0x100000000000149;
        uStack_210 = uStack_200;
        uStack_20c = 0xf;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_218);
        local_68 = local_108;
        local_208 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_200 = uRam00000001419df7c8;
        uStack_1fc = uRam00000001419df7cc;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_208);
        local_60 = local_f8;
        local_208 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_200 = uRam00000001419df7c8;
        uStack_1fc = uRam00000001419df7cc;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_208);
        local_58 = local_e8;
        ppuVar18 = &local_88;
        uVar11 = CONCAT44(uVar16,DAT_1419f60a8);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,7,uVar11,ppuVar18);
        cVar5 = FUN_140e491e0(uVar8);
        if (cVar5 == '\0') {
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
          ppuVar18 = (undefined8 **)0x0;
          uVar8 = FUN_140e63610(param_1,param_2,&local_188,0,uVar11,0);
          cVar5 = FUN_140e491e0(uVar8);
          if (cVar5 != '\0') {
            local_168 = 0x9c;
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_160);
            }
            local_160 = 0;
            local_158 = 0;
            local_154 = 5;
            uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
            FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_a8,uVar11 & 0xffffffffffffff00,
                          (ulonglong)ppuVar18 & 0xffffffffffffff00);
            local_208 = (longlong *)CONCAT44(uRam0000000141dd8edc,_DAT_141dd8ed8);
            uStack_200 = uRam0000000141dd8ee0;
            uStack_1fc = DAT_141dd8ee4;
            if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_d8);
            }
            FUN_140041b80(local_d8,&local_208);
            local_50[0] = local_d8;
            uVar8 = FUN_140069500(uVar8);
            FUN_140e63610(uVar8,param_2,&local_160,1,&local_a8,local_50);
            local_168 = 0x9d;
            goto LAB_140a68604;
          }
        }
      }
    }
  }
  local_168 = 0xa0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_20c = 6;
  uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1b8,uVar11,uVar19);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_20c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_198,uVar11,uVar19 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_1ec = *(uint *)((longlong)puVar7 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar7);
  }
  uStack_1fc = 7;
  local_208 = (longlong *)CONCAT44(local_208._4_4_,0x10);
  FUN_140042560(&local_1f8,&local_208);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_20c = uStack_1ec;
  uStack_210 = uStack_1f0;
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_218 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1f8);
  }
  uStack_1fc = 7;
  local_208 = (longlong *)CONCAT44(local_208._4_4_,2);
  FUN_140042560(&local_218,&local_208);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_19c = uStack_1ac;
  uStack_1a0 = uStack_1b0;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_1b8);
  }
  FUN_1400460e0(&local_1a8,&local_218);
  local_208 = local_1a8;
  uStack_200 = uStack_1a0;
  uStack_1fc = uStack_19c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_208);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_20c = local_18c;
  uStack_210 = local_190;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_218 = local_198;
    local_88 = &local_148;
  }
  else {
    local_88 = &local_148;
    FUN_1400419b0(&local_218,&local_198);
  }
  uStack_1fc = 7;
  local_208 = (longlong *)CONCAT44(local_208._4_4_,2);
  FUN_1400462a0(&local_218,&local_208);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = local_218;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_80 = local_138;
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x100000000000149;
  local_218 = (longlong *)0x100000000000149;
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_218);
  local_78 = local_128;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1e8,3,CONCAT44(uVar16,DAT_141a12628),&local_88);
  cVar5 = FUN_140e491e0(uVar8);
  if (cVar5 != '\0') {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    plVar17 = param_1;
    uVar11 = param_2;
    FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
    uStack_1fc = 6;
    local_208 = param_1;
    FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1b8,
                  (ulonglong)plVar17 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_1ec = uStack_1cc;
    uStack_1f0 = uStack_1d0;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_1d8);
    }
    FUN_1400462a0(&local_1f8,&local_1b8);
    if ((uStack_1ec & 0xffffff) == 0) {
      uVar16 = SUB84(local_1f8,0);
    }
    else {
      uVar16 = FUN_140e4b060(&local_1f8);
    }
    local_208 = (longlong *)FUN_140e79500(uVar16);
    uStack_1fc = 0;
    iVar6 = FUN_140e851f0(uVar10,&local_208,DAT_141955260,0);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar6 == 0) {
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f01f8);
      uVar19 = 0;
      uVar8 = FUN_140e63610(param_1,param_2,&local_1c8,0,uVar11,0);
      cVar5 = FUN_140e491e0(uVar8);
      if (cVar5 != '\0') {
        local_168 = 0xa4;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_a8,uVar11 & 0xffffffffffffff00,
                      uVar19 & 0xffffffffffffff00);
        local_208 = (longlong *)CONCAT44(uRam0000000141dd8f2c,_DAT_141dd8f28);
        uStack_200 = uRam0000000141dd8f30;
        uStack_1fc = DAT_141dd8f34;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_208);
        local_70 = local_118;
        uVar8 = FUN_140069500(uVar8);
        FUN_140e63610(uVar8,param_2,&local_188,1,&local_a8,&local_70);
        local_168 = 0xa5;
        goto LAB_140a68604;
      }
    }
  }
  local_168 = 0xa8;
  pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar17 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
  uStack_1fc = 6;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1b8,
                (ulonglong)plVar17 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  iVar6 = FUN_140e851f0(&local_1d8,&local_1b8,DAT_141955260,1);
  bVar15 = iVar6 == -2 || -1 < iVar6;
  if (bVar15) {
    uStack_1fc = 0;
    local_208 = (longlong *)0x3ff0000000000000;
    pplVar14 = (longlong **)&local_208;
  }
  else {
    uStack_20c = 0;
    local_218 = (longlong *)&DAT_bff0000000000000;
    pplVar14 = &local_218;
  }
  uVar4 = uStack_1fc;
  uVar3 = uStack_20c;
  FUN_140e609c0(param_1);
  if (pplVar14 != pplVar12) {
    local_1a8 = *pplVar14;
    uStack_1a0 = *(undefined4 *)(pplVar14 + 1);
    uStack_19c = *(undefined4 *)((longlong)pplVar14 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar12);
    }
    FUN_140041b80(pplVar12,&local_1a8);
  }
  if ((bVar15) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_208);
  }
  if ((iVar6 != -2 && -1 >= iVar6) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  FUN_140e60910(1);
  local_168 = 0xa9;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
  puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar7 != &local_148) {
    local_208 = (longlong *)*puVar7;
    uStack_200 = *(undefined4 *)(puVar7 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_208);
  }
  uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_210 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_218 = (longlong *)*puVar9;
    local_88 = &local_148;
  }
  else {
    local_88 = &local_148;
    FUN_1400419b0(&local_218,puVar9);
  }
  FUN_140042560(&local_218,uVar8);
  local_208 = local_218;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_80 = local_138;
  local_208 = (longlong *)CONCAT44(uRam00000001419eaf74,_DAT_1419eaf70);
  uStack_200 = uRam00000001419eaf78;
  uStack_1fc = uRam00000001419eaf7c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_208);
  local_78 = local_128;
  FUN_140e609c0(param_1);
  puVar9 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1e8,3,&local_88);
  if (puVar9 != puVar13) {
    local_208 = (longlong *)*puVar9;
    uStack_200 = *(undefined4 *)(puVar9 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    FUN_140041b80(puVar13,&local_208);
  }
  FUN_140e60910(1);
  local_168 = 0xaa;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar10 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_210 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_218 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_218,puVar9);
  }
  FUN_140042560(&local_218,local_98);
  FUN_1400460e0(uVar10,&local_218);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_168 = 0xab;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff178);
  uStack_1ec = *(uint *)((longlong)puVar7 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar7);
  }
  FUN_140046500(&local_1f8,uVar10);
  if ((uStack_1ec & 0xffffff) == 0) {
    uVar16 = SUB84(local_1f8,0);
  }
  else {
    uVar16 = FUN_140e4b060(&local_1f8);
  }
  dVar1 = (double)FUN_140e78d00(uVar16);
  local_218 = (longlong *)(dVar1 + 0.75);
  uStack_20c = 0;
  FUN_140042560(&local_218,local_98);
  local_208 = local_218;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b8);
  local_168 = 0xac;
  pplVar12 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uStack_1fc = 0;
  local_208 = (longlong *)0x0;
  iVar6 = FUN_140e851f0(uVar8,&local_208,DAT_141955260,0);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (iVar6 == 0) {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_20c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_210 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_218,puVar7);
    }
    pplVar14 = &local_218;
    bVar2 = false;
    bVar15 = true;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
    uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar7);
    }
    pplVar14 = &local_1a8;
    bVar2 = true;
    bVar15 = false;
  }
  FUN_140e609c0(param_1);
  if (pplVar14 != pplVar12) {
    local_208 = *pplVar14;
    uStack_200 = *(undefined4 *)(pplVar14 + 1);
    uStack_1fc = *(undefined4 *)((longlong)pplVar14 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar12);
    }
    FUN_140041b80(pplVar12,&local_208);
  }
  if ((bVar15) && ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  if ((bVar2) && ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e60910(1);
  local_168 = 0xae;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  uVar8 = FUN_140e63610(param_1,param_2,&local_1e8,0,uVar8,0);
  cVar5 = FUN_140e491e0(uVar8);
  if (cVar5 == '\0') {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_1fc = 0;
    local_208 = (longlong *)0x0;
    iVar6 = FUN_140e851f0(uVar8,&local_208,DAT_141955260,1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar6 < 1) goto LAB_140a68421;
    uStack_20c = 0xf;
    local_218 = (longlong *)0x1000001000002c6;
    pplVar12 = &local_218;
    bVar2 = true;
    bVar15 = false;
  }
  else {
LAB_140a68421:
    uStack_1fc = 0xf;
    local_208 = (longlong *)0x1000001000002c8;
    pplVar12 = (longlong **)&local_208;
    bVar2 = false;
    bVar15 = true;
  }
  uVar4 = uStack_1fc;
  uVar3 = uStack_20c;
  local_1a8 = *pplVar12;
  uStack_1a0 = *(undefined4 *)(pplVar12 + 1);
  uStack_19c = *(undefined4 *)((longlong)pplVar12 + 0xc);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1a8);
  if ((bVar15) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_208);
  }
  if ((bVar2) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
  local_168 = 0xb0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_1e8,0,uVar8,0);
  local_168 = 0xb1;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_1e8,0,uVar8,0);
  local_168 = 0xb2;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_1e8,0,uVar8,0);
LAB_140a68604:
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

