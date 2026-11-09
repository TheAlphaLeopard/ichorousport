// gml_Object_oRunManager_Other_4 @ 0x140d49950

void gml_Object_oRunManager_Other_4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_d0 = "gml_Object_oRunManager_Alarm_3";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_c8 = 2;
  uStack_13c = 0xf;
  local_148 = 0x1000000000000ee;
  local_138 = 0xee;
  uStack_134 = 0x1000000;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_138);
  local_38 = local_70;
  ppuVar7 = &local_38;
  uVar5 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar5,ppuVar7);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 2;
  }
  else {
    local_c8 = 4;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd8e8);
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a1f090,0x80000000,&local_e8,uVar5,uVar8);
    uStack_13c = local_dc;
    uStack_140 = local_e0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_148 = local_e8;
    }
    else {
      FUN_1400419b0(&local_148,&local_e8);
    }
    uVar6 = uStack_13c;
    local_138 = (undefined4)local_148;
    uStack_134 = local_148._4_4_;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_138);
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 0xf;
    local_148 = 0x1000000000000ee;
    FUN_140e87930(&local_148,DAT_141a1f090,0x80000000,&local_80);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_c8 = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd8e8);
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5a58,0x80000000,&local_f8,uVar5,uVar8);
    uStack_13c = local_ec;
    uStack_140 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_148 = local_f8;
    }
    else {
      FUN_1400419b0(&local_148,&local_f8);
    }
    uVar6 = uStack_13c;
    local_138 = (undefined4)local_148;
    uStack_134 = local_148._4_4_;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_138);
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 0xf;
    local_148 = 0x1000000000000ee;
    FUN_140e87930(&local_148,DAT_1419f5a58,0x80000000,&local_90);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_c8 = 6;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd8e8);
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419ff9c8,0x80000000,&local_108,uVar5,uVar8);
    uStack_13c = local_fc;
    uStack_140 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_148 = local_108;
    }
    else {
      FUN_1400419b0(&local_148,&local_108);
    }
    uVar6 = uStack_13c;
    local_138 = (undefined4)local_148;
    uStack_134 = local_148._4_4_;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_138);
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 0xf;
    local_148 = 0x1000000000000ee;
    FUN_140e87930(&local_148,DAT_1419ff9c8,0x80000000,&local_a0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_c8 = 7;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd8e8);
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419ffcc8,0x80000000,&local_118,uVar5,uVar8);
    uStack_13c = local_10c;
    uStack_140 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_148 = local_118;
    }
    else {
      FUN_1400419b0(&local_148,&local_118);
    }
    uVar6 = uStack_13c;
    local_138 = (undefined4)local_148;
    uStack_134 = local_148._4_4_;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_138);
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 0xf;
    local_148 = 0x1000000000000ee;
    FUN_140e87930(&local_148,DAT_1419ffcc8,0x80000000,&local_b0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_c8 = 9;
    FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_c0);
    uStack_13c = 0xf;
    local_148 = 0x10000030000004a;
    iVar2 = FUN_140e851f0(&local_c0,&local_148,DAT_141955260,0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (iVar2 != 0) {
      FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_c0);
      uStack_13c = 0xf;
      local_148 = 0x100000300000004;
      iVar2 = FUN_140e851f0(&local_c0,&local_148,DAT_141955260,0);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar2 != 0) {
        local_c8 = 10;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        FUN_140e87440(uVar3,DAT_141a1f3f0,0x80000000,&local_48,uVar5 & 0xffffffffffffff00,
                      uVar8 & 0xffffffffffffff00);
        local_138 = (undefined4)local_48;
        uStack_134 = local_48._4_4_;
        uStack_130 = uStack_40;
        uStack_12c = uStack_3c;
        if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_70);
        }
        FUN_140041b80(local_70,&local_138);
        local_38 = local_70;
        local_138 = (undefined4)DAT_1419df7b0;
        uStack_134 = DAT_1419df7b0._4_4_;
        uStack_130 = DAT_1419df7b8;
        uStack_12c = DAT_1419df7bc;
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_138);
        local_30 = local_60;
        gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                  (param_1,param_2,&local_128,2,&local_38);
      }
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

