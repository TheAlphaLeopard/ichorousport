// gml_Script_anon_34457_DefineTrinkets_TRINKETSINIT @ 0x14060eb70

undefined8 *
gml_Script_anon_34457_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 **ppuVar13;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90 [4];
  undefined4 local_80 [8];
  undefined4 *local_60;
  undefined4 *local_58;
  double *local_50;
  
  local_a0 = "gml_Script_anon@34085@DefineTrinkets@TRINKETSINIT";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x4ce;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cf0);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_cc = 0;
  uVar7 = 0;
  uVar8 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x4cf;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar1 = true;
  do {
    uVar12 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (!bVar1) {
      local_98 = 0x4cf;
      uVar2 = local_fc & 0xffffff;
      if (uVar2 == 0) {
LAB_14060ece4:
        local_108 = (double)CONCAT44(uVar8,uVar7) + 1.0;
      }
      else if (uVar2 == 1) {
        local_108 = (double)FUN_140e4b060(&local_108);
        local_108 = local_108 + 1.0;
        local_fc = 0;
      }
      else if (uVar2 == 7) {
        local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_108 = (double)((longlong)local_108 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_fc = 0;
          goto LAB_14060ece4;
        }
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
      }
    }
    bVar1 = false;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (puVar4 != local_90) {
      local_b8 = *puVar4;
      uStack_b4 = puVar4[1];
      uStack_b0 = puVar4[2];
      uStack_ac = puVar4[3];
      if ((1 << ((byte)local_90[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_b8);
    }
    local_60 = local_90;
    uVar10 = CONCAT44(uVar12,DAT_1419f5e98);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar10,&local_60);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar3 = FUN_140e851f0(&local_108,uVar5,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_a8;
      return param_3;
    }
    local_98 = 0x4d0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if (puVar4 != local_80) {
      local_b8 = *puVar4;
      uStack_b4 = puVar4[1];
      uStack_b0 = puVar4[2];
      uStack_ac = puVar4[3];
      if ((1 << ((byte)local_80[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_b8);
    }
    local_58 = local_80;
    local_50 = &local_108;
    ppuVar13 = &local_58;
    uVar11 = CONCAT44(uVar7,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar11,ppuVar13);
    if (puVar6 != &local_c8) {
      local_b8 = *(undefined4 *)puVar6;
      uStack_b4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_b8);
    }
    pcVar9 = (code *)(uVar11 & 0xffffffffffffff00);
    FUN_140e87440(&local_c8,DAT_1419f6238,0x80000000,&local_f8,pcVar9,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar2 = local_ec & 0xffffff;
    if (uVar2 == 0) {
LAB_14060ef26:
      local_f8 = local_f8 + 1.0;
    }
    else {
      if (uVar2 == 1) {
        local_f8 = (double)FUN_140e4b060(&local_f8);
        local_ec = 0;
        goto LAB_14060ef26;
      }
      if (uVar2 == 7) {
        local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_f8 = (double)((longlong)local_f8 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_ec = 0;
          goto LAB_14060ef26;
        }
        FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
      }
    }
    FUN_140e87930(&local_c8,DAT_1419f6238,0x80000000,&local_f8);
    uVar7 = SUB84(local_108,0);
    uVar8 = (undefined4)((ulonglong)local_108 >> 0x20);
  } while( true );
}

