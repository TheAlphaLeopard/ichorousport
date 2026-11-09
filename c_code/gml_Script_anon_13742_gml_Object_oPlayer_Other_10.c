// gml_Script_anon_13742_gml_Object_oPlayer_Other_10 @ 0x140c73ed0

undefined8 *
gml_Script_anon_13742_gml_Object_oPlayer_Other_10
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

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
  ulonglong uVar14;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 local_90 [4];
  undefined4 local_80 [8];
  undefined4 *local_60;
  undefined4 *local_58;
  double *local_50;
  
  local_c0 = "gml_Script_anon@13317@gml_Object_oPlayer_Other_10";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x23e;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0.0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))();
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_dc = 0;
  uVar7 = 0;
  uVar8 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x240;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0.0;
  bVar1 = true;
  do {
    uVar12 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (!bVar1) {
      local_b8 = 0x240;
      uVar2 = local_10c & 0xffffff;
      if ((local_10c & 0xffffff) == 0) {
LAB_140c74054:
        local_118 = (double)CONCAT44(uVar8,uVar7) + 1.0;
      }
      else if (uVar2 == 1) {
        local_118 = (double)FUN_140e4b060(&local_118);
        local_118 = local_118 + 1.0;
        local_10c = 0;
      }
      else if (uVar2 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_10c = 0;
          goto LAB_140c74054;
        }
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
      }
    }
    bVar1 = false;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if (puVar4 != local_90) {
      local_d8 = *puVar4;
      uStack_d4 = puVar4[1];
      uStack_d0 = puVar4[2];
      uStack_cc = puVar4[3];
      if ((1 << ((byte)local_90[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_d8);
    }
    local_60 = local_90;
    uVar10 = CONCAT44(uVar12,DAT_1419f5e98);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar10,&local_60);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar3 = FUN_140e851f0(&local_118,uVar5,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_b8 = 0x248;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = &DAT_bff0000000000000;
      goto LAB_140c74327;
    }
    local_b8 = 0x242;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (puVar4 != local_80) {
      local_d8 = *puVar4;
      uStack_d4 = puVar4[1];
      uStack_d0 = puVar4[2];
      uStack_cc = puVar4[3];
      if ((1 << ((byte)local_80[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_d8);
    }
    local_58 = local_80;
    local_50 = &local_118;
    ppuVar13 = &local_58;
    uVar11 = CONCAT44(uVar7,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar11,ppuVar13);
    if (puVar6 != &local_108) {
      local_d8 = *(undefined4 *)puVar6;
      uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_d8);
    }
    local_b8 = 0x243;
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_108,DAT_141a0a8a8,0x80000000,&local_a0,uVar11,uVar14);
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    pcVar9 = (code *)(uVar11 & 0xffffffffffffff00);
    FUN_140e87440(puVar6,DAT_141a0a8a8,0x80000000,&local_b0,pcVar9,uVar14 & 0xffffffffffffff00);
    iVar3 = FUN_140e851f0(&local_a0,&local_b0,DAT_141955260,0);
    if (iVar3 == 0) {
      local_b8 = 0x244;
      if (&local_108 != param_3) {
        local_d8 = (undefined4)local_108;
        uStack_d4 = local_108._4_4_;
        uStack_d0 = uStack_100;
        uStack_cc = uStack_fc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_d8);
      }
LAB_140c74327:
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_c8;
      return param_3;
    }
    uVar7 = SUB84(local_118,0);
    uVar8 = (undefined4)((ulonglong)local_118 >> 0x20);
  } while( true );
}

