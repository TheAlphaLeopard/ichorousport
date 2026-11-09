// gml_Script_anon_215_gml_Object_oEnemyCage_Create_0 @ 0x140928b10

void gml_Script_anon_215_gml_Object_oEnemyCage_Create_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 **ppuVar11;
  undefined4 uVar16;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  double local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  double local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  double local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  double local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_1c0 = "gml_Object_oElectric_Step_0";
  local_1b8 = 0;
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0.0;
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  uStack_18c = 0xffffff;
  local_198 = 0.0;
  uStack_19c = 0xffffff;
  local_1a8 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1b8 = 2;
  local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_208);
  local_98 = &local_118;
  local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_208);
  local_90 = &local_108;
  ppuVar11 = &local_98;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_1f8,2,ppuVar11);
  uVar16 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_1b8 = 4;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_1b8 = 5;
    goto LAB_1409296f9;
  }
  local_1b8 = 8;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efd08);
  if (puVar5 != &local_118) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_208);
  }
  local_98 = &local_118;
  uVar12 = CONCAT44(uVar16,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar12,&local_98);
  uVar16 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ffd18);
    if (puVar5 != &local_108) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_208);
    }
    local_90 = &local_108;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,1,CONCAT44(uVar16,DAT_141a02ef8),&local_90);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_1b8 = 0xd;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ffd18);
      FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
      local_208 = (longlong *)local_a8;
      uStack_200 = uStack_a0;
      uStack_1fc = uStack_9c;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_208);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_128);
      local_1b8 = 0xe;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ffd18);
      plVar13 = param_1;
      uVar15 = param_2;
      FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
      local_208 = (longlong *)local_b8;
      uStack_200 = uStack_b0;
      uStack_1fc = uStack_ac;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_208);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_138);
      local_1b8 = 0x11;
      uStack_1fc = 6;
      uVar15 = uVar15 & 0xffffffffffffff00;
      uVar14 = (ulonglong)plVar13 & 0xffffffffffffff00;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_178,uVar14,uVar15);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uStack_1fc = 6;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_188,uVar14 & 0xffffffffffffff00,
                    uVar15 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419efd08);
      FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_198,param_1,param_2);
      plVar13 = param_1;
      uVar15 = param_2;
      FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_1a8,param_1,param_2);
      dVar7 = local_1a8;
      if ((uStack_19c & 0xffffff) != 0) {
        dVar7 = (double)FUN_140e4b060(&local_1a8);
      }
      dVar8 = local_198;
      if ((uStack_18c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_198);
      }
      dVar9 = local_188;
      if ((uStack_17c & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_188);
      }
      dVar10 = local_178;
      if ((uStack_16c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_178);
      }
      fVar6 = (float)FUN_140e793d0((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = (double)fVar6;
      FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_168);
      local_1b8 = 0x12;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      uStack_1fc = 6;
      uVar15 = uVar15 & 0xffffffffffffff00;
      uVar14 = (ulonglong)plVar13 & 0xffffffffffffff00;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_178,uVar14,uVar15);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uStack_1fc = 6;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_188,uVar14 & 0xffffffffffffff00,
                    uVar15 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419efd08);
      FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_198,param_1,param_2);
      plVar13 = param_1;
      uVar15 = param_2;
      FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_1a8,param_1,param_2);
      local_208 = (longlong *)local_178;
      uStack_200 = uStack_170;
      uStack_1fc = uStack_16c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_208);
      local_98 = &local_118;
      local_208 = (longlong *)local_188;
      uStack_200 = uStack_180;
      uStack_1fc = uStack_17c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_208);
      local_90 = &local_108;
      local_208 = (longlong *)local_198;
      uStack_200 = uStack_190;
      uStack_1fc = uStack_18c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_208);
      local_88 = local_f8;
      local_208 = (longlong *)local_1a8;
      uStack_200 = uStack_1a0;
      uStack_1fc = uStack_19c;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_208);
      local_80 = local_e8;
      uStack_1fc = 6;
      uVar14 = (ulonglong)plVar13 & 0xffffffffffffff00;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_c8,uVar14,uVar15 & 0xffffffffffffff00
                   );
      uVar16 = (undefined4)(uVar14 >> 0x20);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = (longlong *)local_c8;
      uStack_200 = uStack_c0;
      uStack_1fc = uStack_bc;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_208);
      local_78[0] = local_d8;
      uVar12 = CONCAT44(uVar16,DAT_141a047c8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar12,local_78);
      ppuVar11 = &local_98;
      uVar15 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),DAT_1419fd548);
      puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar15,ppuVar11);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
        local_208 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_208,puVar5);
      }
      FUN_140046500(&local_208,uVar4);
      local_68 = (undefined4)local_208;
      uStack_64 = local_208._4_4_;
      uStack_60 = uStack_200;
      uStack_5c = uStack_1fc;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_68);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_148);
      local_1b8 = 0x15;
      uStack_1fc = 6;
      uVar14 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_208 = param_1;
      FUN_140e87440(&local_208,DAT_141a0a778,0x80000000,&local_158,uVar15,uVar14);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uStack_1fc = 0;
      local_208 = (longlong *)0x4070e00000000000;
      iVar2 = FUN_140e851f0(&local_158,&local_208,DAT_141955260,1);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if (iVar2 == -2 || 0 < iVar2) {
LAB_1409296c8:
        local_1b8 = 0x18;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uVar3 = 0x3ff00000;
      }
      else {
        uStack_1fc = 6;
        local_208 = param_1;
        FUN_140e87440(&local_208,DAT_141a0a778,0x80000000,&local_158,uVar15 & 0xffffffffffffff00,
                      uVar14 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        uStack_1fc = 0;
        local_208 = (longlong *)0x4056800000000000;
        uVar3 = FUN_140e851f0(&local_158,&local_208,DAT_141955260,1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (0x7fffffff < uVar3) goto LAB_1409296c8;
        local_1b8 = 0x16;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uVar3 = 0xbff00000;
      }
      local_1cc = 0;
      local_1d8 = (ulonglong)uVar3 << 0x20;
      FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_1d8);
      goto LAB_1409296f9;
    }
  }
  local_1b8 = 10;
LAB_1409296f9:
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return;
}

