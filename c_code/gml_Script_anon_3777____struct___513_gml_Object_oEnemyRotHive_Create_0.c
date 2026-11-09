// gml_Script_anon_3777____struct___513_gml_Object_oEnemyRotHive_Create_0 @ 0x140a33610

undefined8 *
gml_Script_anon_3777____struct___513_gml_Object_oEnemyRotHive_Create_0
          (undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  double dVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffe30;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined1 *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 *local_90;
  undefined4 local_84;
  
  local_150 = "gml_Script_anon@1480@gml_Object_oEnemyRotHive_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x48;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = (undefined1 *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (undefined1 *)0x0;
  local_19c = 0xffffff;
  local_1a8 = (undefined1 *)0x0;
  uStack_18c = 0xffffff;
  local_198 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x49;
  uStack_1bc = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_168,uVar11,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_178,uVar11,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_138 = local_168;
  uStack_130 = uStack_160;
  uStack_12c = uStack_15c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_138);
  local_b8 = local_128;
  local_138 = local_178;
  uStack_130 = uStack_170;
  uStack_12c = uStack_16c;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_138);
  local_b0 = local_118;
  uStack_1ac = 0xf;
  local_1b8 = (undefined1 *)0x100000000000149;
  local_138 = (undefined1 *)0x100000000000149;
  uStack_130 = uStack_1b0;
  uStack_12c = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_a8 = local_108;
  ppuVar13 = &local_b8;
  uVar11 = CONCAT44(uVar12,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_188,3,uVar11,ppuVar13);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_148 = 0x49;
  }
  else {
    local_148 = 0x4b;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_19c = 0;
    local_1a8 = &DAT_bff0000000000000;
    local_148 = 0x4c;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 0;
    local_198 = 0.0;
    bVar5 = true;
    do {
      if (!bVar5) {
        local_148 = 0x4c;
        FUN_140162d40(&local_198,0xf);
      }
      bVar5 = false;
      local_94 = 0;
      local_a0 = 0x4076800000000000;
      iVar2 = FUN_140e851f0(&local_198,&local_a0,DAT_141955260,1);
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if (iVar2 == -2 || -1 < iVar2) goto LAB_140a33cc3;
      local_148 = 0x4e;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      local_84 = 6;
      uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_90 = param_1;
      FUN_140e87440(&local_90,DAT_1419fe0e8,0x80000000,&local_168,uVar11,uVar14);
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      uStack_1ac = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar11,
                    uVar14 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      dVar7 = local_198;
      if ((uStack_18c & 0xffffff) != 0) {
        dVar7 = (double)FUN_140e4b060(&local_198);
      }
      fVar6 = (float)FUN_140e78f90(0x40800000,(float)dVar7);
      uStack_ec = uStack_15c;
      uStack_f0 = uStack_160;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
        local_f8 = local_168;
      }
      else {
        FUN_1400419b0(&local_f8,&local_168);
      }
      FUN_140162c50(&local_f8,(double)fVar6);
      local_e8 = (undefined4)local_f8;
      uStack_e4 = local_f8._4_4_;
      uStack_e0 = uStack_f0;
      uStack_dc = uStack_ec;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_e8);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_b8 = local_128;
      dVar7 = local_198;
      if ((uStack_18c & 0xffffff) != 0) {
        dVar7 = (double)FUN_140e4b060(&local_198);
      }
      fVar6 = (float)FUN_140e79010(0x40800000,(float)dVar7);
      uStack_1bc = uStack_16c;
      uStack_1c0 = uStack_170;
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_178;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_178);
      }
      FUN_140162c50(&local_1c8,(double)fVar6);
      local_e8 = (undefined4)local_1c8;
      uStack_e4 = local_1c8._4_4_;
      uStack_e0 = uStack_1c0;
      uStack_dc = uStack_1bc;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_e8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_b0 = local_118;
      uStack_12c = 0xf;
      local_138 = (undefined1 *)0x100000000000149;
      local_e8 = 0x149;
      uStack_e4 = 0x1000000;
      uStack_e0 = uStack_130;
      uStack_dc = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_e8);
      local_a8 = local_108;
      ppuVar13 = &local_b8;
      uVar11 = CONCAT44(uVar12,DAT_141a12628);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_188,3,uVar11,ppuVar13);
      cVar1 = FUN_140e491e0(uVar4);
    } while (cVar1 != '\0');
    local_148 = 0x50;
    local_e8 = (undefined4)local_198;
    uStack_e4 = local_198._4_4_;
    uStack_e0 = uStack_190;
    uStack_dc = uStack_18c;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_e8);
LAB_140a33cc3:
    local_148 = 0x55;
    uStack_1ac = 0;
    local_1b8 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_1a8,&local_1b8,DAT_141955260,0);
    bVar5 = iVar2 == 0;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (!bVar5) {
      local_148 = 0x57;
      uStack_1ac = 6;
      uVar14 = CONCAT71((int7)((ulonglong)ppuVar13 >> 8),bVar5);
      uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar5);
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_c8,uVar11,uVar14);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_1bc = 0;
      local_1c8 = (undefined1 *)0x4000000000000000;
      FUN_140042560(&local_1c8,uVar3);
      puVar8 = local_1a8;
      if ((local_19c & 0xffffff) != 0) {
        puVar8 = (undefined1 *)FUN_140e4b060(&local_1a8);
      }
      dVar7 = (double)local_1c8;
      if ((uStack_1bc & 0xffffff) != 0) {
        dVar7 = (double)FUN_140e4b060(&local_1c8);
      }
      fVar6 = (float)FUN_140e78f90((float)dVar7,(float)(double)puVar8);
      FUN_140162c50(&local_c8,(double)fVar6);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c8);
      local_148 = 0x58;
      uStack_1ac = 6;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_d8,uVar11 & 0xffffffffffffff00,
                    uVar14 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_1bc = 0;
      local_1c8 = (undefined1 *)0x4000000000000000;
      FUN_140042560(&local_1c8,uVar3);
      puVar8 = local_1a8;
      if ((local_19c & 0xffffff) != 0) {
        puVar8 = (undefined1 *)FUN_140e4b060(&local_1a8);
      }
      puVar9 = local_1c8;
      if ((uStack_1bc & 0xffffff) != 0) {
        puVar9 = (undefined1 *)FUN_140e4b060(&local_1c8);
      }
      fVar6 = (float)FUN_140e79010((float)(double)puVar9,(float)(double)puVar8);
      FUN_140162c50(&local_d8,(double)fVar6);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d8);
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

