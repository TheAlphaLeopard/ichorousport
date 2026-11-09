// gml_Script_anon_26715_DefineTrinkets_TRINKETSINIT @ 0x140603130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_26715_DefineTrinkets_TRINKETSINIT
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_80 = "gml_Script_anon@25748@DefineTrinkets@TRINKETSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x3da;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x3db;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f4e0,0x80000000,&local_98,uVar7,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_f8 = (undefined4)local_98;
  uStack_f4 = local_98._4_4_;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_b0 = local_d8;
  ppuVar9 = &local_b0;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_78 = 0x3db;
  }
  else {
    local_78 = 0x3dc;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar4,DAT_141a1f4e0,0x80000000,&local_98,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar7 = param_1;
    uVar10 = param_2;
    FUN_140e87170(&local_98,DAT_141a1f580,0x80000000,&local_50,param_1,param_2);
    uStack_10c = 0xf;
    local_118 = 0x1000000000000ee;
    iVar2 = FUN_140e851f0(&local_50,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar2 == 0) {
      local_78 = 0x3dd;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*param_5;
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(puVar4,DAT_1419f5a88,0x80000000,&local_a8,uVar7,uVar10 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar7 >> 0x20);
      local_f8 = (undefined4)local_a8;
      uStack_f4 = local_a8._4_4_;
      uStack_f0 = uStack_a0;
      uStack_ec = uStack_9c;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_f8);
      local_b8 = local_e8;
      local_f8 = _DAT_141dd4c98;
      uStack_f4 = uRam0000000141dd4c9c;
      uStack_f0 = uRam0000000141dd4ca0;
      uStack_ec = DAT_141dd4ca4;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_f8);
      local_b0 = local_d8;
      ppuVar9 = &local_b8;
      uVar7 = CONCAT44(uVar8,DAT_1419fcba8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar7,ppuVar9);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        local_78 = 0x3dd;
      }
      else {
        local_78 = 0x3de;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        if (param_4 < 1) {
          puVar4 = &DAT_1419df7b0;
        }
        else {
          puVar4 = (undefined8 *)*param_5;
        }
        uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_60,uVar7,uVar10);
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(&local_60,DAT_1419f62b8,0x80000000,&local_70,uVar7,uVar10);
        if (0 < param_4) {
          puVar5 = (undefined8 *)*param_5;
        }
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(puVar5,DAT_1419f5a88,0x80000000,&local_a8,uVar7,uVar10);
        FUN_140e87440(&local_a8,DAT_1419ffe38,0x80000000,&local_c8,uVar7 & 0xffffffffffffff00,
                      uVar10 & 0xffffffffffffff00);
        local_f8 = _DAT_141dc6760;
        uStack_f4 = uRam0000000141dc6764;
        uStack_f0 = uRam0000000141dc6768;
        uStack_ec = uRam0000000141dc676c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_f8);
        local_b8 = local_e8;
        uStack_10c = local_bc;
        uStack_110 = local_c0;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
          local_118 = local_c8;
        }
        else {
          FUN_1400419b0(&local_118,&local_c8);
        }
        uStack_ec = 7;
        local_f8 = 1;
        FUN_1400462a0(&local_118,&local_f8);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_f8 = (undefined4)local_118;
        uStack_f4 = local_118._4_4_;
        uStack_f0 = uStack_110;
        uStack_ec = uStack_10c;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_f8);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_b0 = local_d8;
        uVar3 = FUN_140e79090(&local_108,2,&local_b8);
        uStack_10c = 0;
        local_118 = 0x4014000000000000;
        FUN_140042560(&local_118,uVar3);
        FUN_1400460e0(&local_70,&local_118);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140e87930(&local_60,DAT_1419f62b8,0x80000000,&local_70);
      }
    }
    else {
      local_78 = 0x3dc;
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

