// gml_Script_anon_606_gml_Object_oGiveOffering_Draw_64 @ 0x140af6af0

undefined8 *
gml_Script_anon_606_gml_Object_oGiveOffering_Draw_64
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong *puVar13;
  undefined4 uVar14;
  code *pcVar15;
  ulonglong in_stack_fffffffffffffe60;
  uint **ppuVar16;
  ulonglong uVar17;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 local_16c;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  uint local_e8 [2];
  undefined8 *local_e0;
  undefined8 local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8 [3];
  undefined4 local_bc;
  ulonglong local_b8;
  undefined4 local_ac;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *local_68;
  ulonglong *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 **local_48;
  
  local_140 = "gml_Script_anon@1167@gml_Object_oGiveOffering_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x39;
  bVar3 = false;
  bVar2 = true;
  FUN_140041df0(local_e8,param_4,2,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  puVar6 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  local_124 = 0xffffff;
  local_130 = 0;
  puVar7 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  uVar12 = local_e8[0];
  local_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0xffffff;
  local_178 = (undefined1 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x39;
  puVar13 = &DAT_1419df7b0;
  if ((int)local_e8[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_e0;
  }
  iVar5 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_138 = 0x39;
    if ((int)uVar12 < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_e0;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = 0x401c000000000000;
    uVar12 = local_e8[0];
  }
  if ((int)uVar12 < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_e0[1];
  }
  iVar5 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    uStack_15c = 0xf;
    local_168 = 0x100000000000106;
    FUN_140e87440(&local_168,DAT_141a57ae0,0x80000000,&local_d8,
                  (ulonglong)pcVar15 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((int)uVar12 < 2) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)local_e0[1];
      if (&local_d8 == puVar11) goto LAB_140af6d5c;
    }
    local_188 = (uint)local_d8;
    uStack_184 = local_d8._4_4_;
    uStack_180 = uStack_d0;
    uStack_17c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_188);
  }
LAB_140af6d5c:
  local_138 = 0x3b;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3368);
  if (puVar6 != local_c8) {
    local_188 = *puVar6;
    uStack_184 = puVar6[1];
    uStack_180 = puVar6[2];
    uStack_17c = puVar6[3];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_188);
  }
  local_68 = local_c8;
  puVar6 = (uint *)FUN_140e63610(param_1,param_2,&local_198,1,uVar8,&local_68);
  if (puVar6 != (uint *)&local_130) {
    local_188 = *puVar6;
    uStack_184 = puVar6[1];
    uStack_180 = puVar6[2];
    uStack_17c = puVar6[3];
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_188);
  }
  local_138 = 0x3c;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (puVar7 != local_c8) {
    local_188 = *puVar7;
    uStack_184 = puVar7[1];
    uStack_180 = puVar7[2];
    uStack_17c = puVar7[3];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_188);
  }
  local_68 = local_c8;
  puVar6 = (uint *)FUN_140e63610(param_1,param_2,&local_198,1,uVar8,&local_68);
  uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar6 != (uint *)&local_158) {
    local_188 = *puVar6;
    uStack_184 = puVar6[1];
    uStack_180 = puVar6[2];
    uStack_17c = puVar6[3];
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  local_138 = 0x3d;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uVar12 = local_e8[0];
  local_16c = 0;
  local_178 = &DAT_bff0000000000000;
  local_138 = 0x3e;
  if ((int)local_e8[0] < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_e0[1];
  }
  cVar4 = FUN_140e491e0(puVar11);
  if (cVar4 != '\0') {
    local_138 = 0x40;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3368);
    if (puVar7 != local_c8) {
      local_188 = *puVar7;
      uStack_184 = puVar7[1];
      uStack_180 = puVar7[2];
      uStack_17c = puVar7[3];
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_188);
    }
    ppuVar16 = &local_68;
    local_68 = local_c8;
    ppuVar10 = (undefined1 **)FUN_140e63610(param_1,param_2,&local_198,1,uVar9,ppuVar16);
    if (ppuVar10 != &local_178) {
      local_188 = *(uint *)ppuVar10;
      uStack_184 = *(uint *)((longlong)ppuVar10 + 4);
      uStack_180 = *(uint *)(ppuVar10 + 1);
      uStack_17c = *(uint *)((longlong)ppuVar10 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_188);
    }
    local_138 = 0x41;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_141a0a8a8,0x80000000,&local_f8,uVar9,uVar17);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_158,DAT_141a0a8a8,0x80000000,&local_108,uVar9,uVar17 & 0xffffffffffffff00);
    iVar5 = FUN_140e851f0(&local_f8,&local_108,DAT_141955260,0);
    uVar12 = local_e8[0];
    while (uVar14 = (undefined4)(uVar9 >> 0x20), iVar5 == 0) {
      local_138 = 0x43;
      local_e8[0] = uVar12;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3368);
      if (puVar7 != local_c8) {
        local_188 = *puVar7;
        uStack_184 = puVar7[1];
        uStack_180 = puVar7[2];
        uStack_17c = puVar7[3];
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_188);
      }
      ppuVar16 = &local_68;
      local_68 = local_c8;
      ppuVar10 = (undefined1 **)FUN_140e63610(param_1,param_2,&local_198,1,uVar9,ppuVar16);
      if (ppuVar10 != &local_178) {
        local_188 = *(uint *)ppuVar10;
        uStack_184 = *(uint *)((longlong)ppuVar10 + 4);
        uStack_180 = *(uint *)(ppuVar10 + 1);
        uStack_17c = *(uint *)((longlong)ppuVar10 + 0xc);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_188);
      }
      uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_178,DAT_141a0a8a8,0x80000000,&local_f8,uVar9,uVar17);
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_141a0a8a8,0x80000000,&local_108,uVar9,uVar17 & 0xffffffffffffff00
                   );
      iVar5 = FUN_140e851f0(&local_f8,&local_108,DAT_141955260,0);
      uVar12 = local_e8[0];
    }
  }
  local_138 = 0x47;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_188 = DAT_1419f5b58 & 0xffffff;
  uStack_184 = (int)(DAT_1419f5b58 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_184 == 0xf) {
    uStack_184 = 0x4000004;
  }
  else {
    uStack_184 = uStack_184 | 0x1000000;
  }
  uStack_15c = 0xf;
  local_168 = CONCAT44(uStack_184,DAT_1419f5b58) & 0xffffffff00ffffff;
  uStack_180 = uStack_160;
  uStack_17c = 0xf;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_188);
  if ((int)uVar12 < 2) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_e0[1];
  }
  local_68 = local_c8;
  cVar4 = FUN_140e491e0(puVar11);
  if (cVar4 == '\0') {
    if (0 < (int)uVar12) {
      puVar13 = (ulonglong *)*local_e0;
    }
    uStack_15c = *(undefined4 *)((longlong)puVar13 + 0xc);
    uStack_160 = (int)puVar13[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar13;
    }
    else {
      FUN_1400419b0(&local_168,puVar13);
    }
    puVar13 = &local_168;
  }
  else {
    if (0 < (int)uVar12) {
      puVar13 = (ulonglong *)*local_e0;
    }
    puVar13 = (ulonglong *)FUN_140087a30(&local_188,puVar13,2);
    bVar3 = true;
    bVar2 = false;
    if (puVar13 == &local_b8) goto LAB_140af73aa;
  }
  local_78 = (undefined4)*puVar13;
  uStack_74 = *(undefined4 *)((longlong)puVar13 + 4);
  uStack_70 = (undefined4)puVar13[1];
  uStack_6c = *(undefined4 *)((longlong)puVar13 + 0xc);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_78);
LAB_140af73aa:
  if ((bVar2) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  if ((bVar3) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
  local_60 = &local_b8;
  local_58 = &local_130;
  local_50 = &local_158;
  local_48 = &local_178;
  puVar11 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,&local_198,5,CONCAT44(uVar14,DAT_1419fd6d8),&local_68);
  uVar14 = 0xffffff;
  if (puVar11 != &local_118) {
    local_78 = *(undefined4 *)puVar11;
    uStack_74 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_70 = *(undefined4 *)(puVar11 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar11 + 0xc);
    FUN_140041b80(&local_118,&local_78);
    uVar14 = uStack_10c;
  }
  local_138 = 0x4a;
  if (&local_118 != param_3) {
    local_78 = (undefined4)local_118;
    uStack_74 = local_118._4_4_;
    uStack_70 = uStack_110;
    uStack_6c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,5,FUN_140041b30);
  if (0 < (int)uVar12) {
    uVar9 = (ulonglong)uVar12;
    puVar11 = local_e0;
    do {
      puVar1 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_e0);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

