// gml_Object_oOfferingManager_Other_4 @ 0x140b86dc0

undefined8 *
gml_Object_oOfferingManager_Other_4
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  ulonglong in_stack_fffffffffffffe60;
  undefined4 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8 [4];
  undefined4 local_98 [8];
  undefined4 *local_78;
  undefined4 *local_70;
  undefined8 *local_68;
  
  local_130 = "gml_Script_anon@4593@gml_Object_oOfferingManager_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0xad;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = (undefined1 *)0x0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0.0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  local_17c = 0xffffff;
  local_188 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_15c = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0xaf;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a0a8a8,0x80000000,&local_b8,uVar11,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  local_f8 = local_b8;
  uStack_f0 = uStack_b0;
  uStack_ec = uStack_ac;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_f8);
  local_128 = 0xb1;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 0;
  local_198 = 0.0;
  bVar1 = true;
  do {
    uVar13 = (undefined4)(uVar11 >> 0x20);
    if (!bVar1) {
      local_128 = 0xb1;
      uVar2 = uStack_18c & 0xffffff;
      if (uVar2 == 0) {
LAB_140b86fef:
        local_198 = (double)CONCAT44(uVar9,uVar8) + 1.0;
      }
      else if (uVar2 == 1) {
        local_198 = (double)FUN_140e4b060(&local_198);
        local_198 = local_198 + 1.0;
        uStack_18c = 0;
      }
      else if (uVar2 == 7) {
        local_198 = (double)CONCAT44(local_198._4_4_,(int)local_198 + 1);
      }
      else if (uVar2 == 10) {
        local_198 = (double)((longlong)local_198 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          uStack_18c = 0;
          goto LAB_140b86fef;
        }
        FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
      }
    }
    bVar1 = false;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if (puVar4 != local_a8) {
      local_158 = *puVar4;
      uStack_154 = puVar4[1];
      uStack_150 = puVar4[2];
      uStack_14c = puVar4[3];
      if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_158);
    }
    local_78 = local_a8;
    uVar12 = CONCAT44(uVar13,DAT_1419f5e98);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar12,&local_78);
    uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar3 = FUN_140e851f0(&local_198,uVar5,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_128 = 0xba;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = &DAT_bff0000000000000;
      goto LAB_140b873b2;
    }
    local_128 = 0xb3;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if (puVar4 != local_98) {
      local_158 = *puVar4;
      uStack_154 = puVar4[1];
      uStack_150 = puVar4[2];
      uStack_14c = puVar4[3];
      if ((1 << ((byte)local_98[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_158);
    }
    local_70 = local_98;
    local_68 = &local_198;
    ppuVar14 = &local_70;
    uVar11 = CONCAT44(uVar8,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar11,ppuVar14);
    if (puVar6 != &local_188) {
      local_158 = *(undefined4 *)puVar6;
      uStack_154 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_158);
    }
    local_128 = 0xb4;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419f5d58,0x80000000,&local_c8,uVar11,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_c8,DAT_141a0a8a8,0x80000000,&local_d8,uVar11,uVar15);
    local_158 = (undefined4)local_d8;
    uStack_154 = local_d8._4_4_;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_158);
    local_128 = 0xb6;
    iVar3 = FUN_140e851f0(&local_110,&local_148,DAT_141955260,0);
    if (iVar3 == 0) {
LAB_140b87341:
      local_128 = 0xb7;
      if (&local_198 != param_3) {
        local_158 = (int)local_198;
        uStack_154 = local_198._4_4_;
        uStack_150 = uStack_190;
        uStack_14c = uStack_18c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_158);
      }
LAB_140b873b2:
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_138;
      return param_3;
    }
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419f5ea8,0x80000000,&local_120,uVar11,uVar15 & 0xffffffffffffff00)
    ;
    uStack_ec = 0;
    local_f8 = &DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(&local_120,&local_f8,DAT_141955260,0);
    bVar7 = iVar3 == 0;
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (!bVar7) {
      uVar5 = CONCAT71((int7)(uVar11 >> 8),bVar7);
      FUN_140e87440(&local_188,DAT_1419f5ea8,0x80000000,&local_120,uVar5,bVar7);
      uVar11 = CONCAT71((int7)((ulonglong)uVar5 >> 8),bVar7);
      FUN_140e87440(&local_120,DAT_141a0a8a8,0x80000000,&local_e8,uVar11,bVar7);
      iVar3 = FUN_140e851f0(&local_e8,&local_148,DAT_141955260,0);
      if (iVar3 == 0) goto LAB_140b87341;
    }
    uVar8 = SUB84(local_198,0);
    uVar9 = (undefined4)((ulonglong)local_198 >> 0x20);
  } while( true );
}

