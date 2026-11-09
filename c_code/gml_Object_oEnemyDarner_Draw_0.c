// gml_Object_oEnemyDarner_Draw_0 @ 0x1409b94c0

void gml_Object_oEnemyDarner_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  float fVar7;
  double dVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  code *pcVar11;
  undefined4 uVar13;
  undefined8 *puVar12;
  ulonglong in_stack_fffffffffffffe10;
  ulonglong uVar14;
  undefined4 **ppuVar15;
  ulonglong uVar16;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 *local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [16];
  longlong *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  longlong *local_80;
  undefined4 local_74;
  
  local_190 = "gml_Object_oEnemyDarner_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_168,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (undefined1 *)0x0;
  uStack_19c = 0xffffff;
  local_1a8 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_188 = 2;
  FUN_140e98b30(param_1,param_2);
  local_188 = 4;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uStack_1cc = 6;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar16 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_128,uVar16,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_138,uVar16,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_118 = local_128;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_118);
  local_f8 = local_168;
  local_118 = local_138;
  uStack_110 = uStack_130;
  uStack_10c = uStack_12c;
  if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_118);
  local_f0 = local_158;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000000000149;
  local_118 = (longlong *)0x100000000000149;
  uStack_110 = uStack_1c0;
  uStack_10c = 0xf;
  if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_118);
  local_e8 = local_148;
  ppuVar15 = &local_f8;
  uVar16 = CONCAT44(uVar13,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar16,ppuVar15);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_188 = 6;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1ac = 0;
    local_1b8 = &DAT_bff0000000000000;
    local_188 = 7;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 0;
    local_1a8 = 0.0;
    bVar6 = true;
    do {
      if (!bVar6) {
        local_188 = 7;
        FUN_140162d40(&local_1a8,0xf);
      }
      bVar6 = false;
      local_84 = 0;
      local_90 = 0x4076800000000000;
      iVar2 = FUN_140e851f0(&local_1a8,&local_90,DAT_141955260,1);
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if (iVar2 == -2 || -1 < iVar2) goto LAB_1409b9bde;
      local_188 = 9;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_74 = 6;
      uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
      uVar16 = uVar16 & 0xffffffffffffff00;
      local_80 = param_1;
      FUN_140e87440(&local_80,DAT_1419fe0e8,0x80000000,&local_128,uVar16,uVar14);
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      uStack_1bc = 6;
      uVar16 = uVar16 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_138,uVar16,
                    uVar14 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar16 >> 0x20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      dVar8 = local_1a8;
      if ((uStack_19c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_1a8);
      }
      fVar7 = (float)FUN_140e78f90(0x40800000,(float)dVar8);
      uStack_fc = uStack_11c;
      uStack_100 = uStack_120;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
        local_108 = local_128;
      }
      else {
        FUN_1400419b0(&local_108,&local_128);
      }
      FUN_140162c50(&local_108,(double)fVar7);
      local_178 = (undefined4)local_108;
      uStack_174 = local_108._4_4_;
      uStack_170 = uStack_100;
      uStack_16c = uStack_fc;
      if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_178);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_f8 = local_168;
      dVar8 = local_1a8;
      if ((uStack_19c & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_1a8);
      }
      fVar7 = (float)FUN_140e79010(0x40800000,(float)dVar8);
      uStack_1cc = uStack_12c;
      uStack_1d0 = uStack_130;
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_138;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_138);
      }
      FUN_140162c50(&local_1d8,(double)fVar7);
      local_178 = (undefined4)local_1d8;
      uStack_174 = local_1d8._4_4_;
      uStack_170 = uStack_1d0;
      uStack_16c = uStack_1cc;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_178);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_f0 = local_158;
      uStack_10c = 0xf;
      local_118 = (longlong *)0x100000000000149;
      local_178 = 0x149;
      uStack_174 = 0x1000000;
      uStack_170 = uStack_110;
      uStack_16c = 0xf;
      if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_178);
      local_e8 = local_148;
      ppuVar15 = &local_f8;
      uVar16 = CONCAT44(uVar13,DAT_141a12628);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar16,ppuVar15);
      cVar1 = FUN_140e491e0(uVar4);
    } while (cVar1 != '\0');
    local_188 = 0xb;
    local_178 = (undefined4)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = uStack_1a0;
    uStack_16c = uStack_19c;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_178);
LAB_1409b9bde:
    local_188 = 0xf;
    uStack_1bc = 0;
    local_1c8 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_1b8,&local_1c8,DAT_141955260,0);
    bVar6 = iVar2 == 0;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if (!bVar6) {
      local_188 = 0x11;
      uStack_1bc = 6;
      uVar14 = CONCAT71((int7)((ulonglong)ppuVar15 >> 8),bVar6);
      uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar6);
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_d0,uVar16,uVar14);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1cc = 0;
      local_1d8 = (longlong *)0x4000000000000000;
      FUN_140042560(&local_1d8,uVar3);
      puVar9 = local_1b8;
      if ((local_1ac & 0xffffff) != 0) {
        puVar9 = (undefined1 *)FUN_140e4b060(&local_1b8);
      }
      dVar8 = (double)local_1d8;
      if ((uStack_1cc & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_1d8);
      }
      fVar7 = (float)FUN_140e78f90((float)dVar8,(float)(double)puVar9);
      FUN_140162c50(&local_d0,(double)fVar7);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d0);
      local_188 = 0x12;
      uStack_1bc = 6;
      ppuVar15 = (undefined4 **)(uVar14 & 0xffffffffffffff00);
      uVar16 = uVar16 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_e0,uVar16,ppuVar15);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1cc = 0;
      local_1d8 = (longlong *)0x4000000000000000;
      FUN_140042560(&local_1d8,uVar3);
      puVar9 = local_1b8;
      if ((local_1ac & 0xffffff) != 0) {
        puVar9 = (undefined1 *)FUN_140e4b060(&local_1b8);
      }
      plVar10 = local_1d8;
      if ((uStack_1cc & 0xffffff) != 0) {
        plVar10 = (longlong *)FUN_140e4b060(&local_1d8);
      }
      fVar7 = (float)FUN_140e79010((float)(double)plVar10,(float)(double)puVar9);
      FUN_140162c50(&local_e0,(double)fVar7);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e0);
    }
  }
  local_188 = 0x16;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0c88);
  FUN_140e87440(uVar3,DAT_141a570f0,0x80000000,&local_a0,uVar16 & 0xffffffffffffff00,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  uVar16 = 0;
  puVar12 = &local_a0;
  FUN_140e63610(uVar3,param_2,&local_1e8,0,puVar12,0);
  local_188 = 0x17;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0c68);
  FUN_140e87440(uVar3,DAT_141a570f0,0x80000000,&local_b0,(ulonglong)puVar12 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  uVar16 = 0;
  puVar12 = &local_b0;
  FUN_140e63610(uVar3,param_2,&local_1e8,0,puVar12,0);
  local_188 = 0x18;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0d48);
  FUN_140e87440(uVar3,DAT_141a570f0,0x80000000,&local_c0,(ulonglong)puVar12 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  puVar12 = &local_c0;
  FUN_140e63610(uVar3,param_2,&local_1e8,0,puVar12,0);
  uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
  local_188 = 0x19;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  if (puVar5 != local_168) {
    local_178 = *puVar5;
    uStack_174 = puVar5[1];
    uStack_170 = puVar5[2];
    uStack_16c = puVar5[3];
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_178);
  }
  local_f8 = local_168;
  FUN_140e645a0(&local_1c8,gml_Object_oEnemyDarner_CleanUp_0,param_1);
  local_178 = (undefined4)local_1c8;
  uStack_174 = local_1c8._4_4_;
  uStack_170 = uStack_1c0;
  uStack_16c = uStack_1bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_178);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_f0 = local_158;
  FUN_140e634e0(param_1,param_2,&local_1e8,2,CONCAT44(uVar13,DAT_141a01f58),&local_f8);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

