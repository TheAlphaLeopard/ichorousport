// gml_Script_anon_2473_gml_Object_oEnemyDamsel_Create_0 @ 0x140977910

undefined8 *
gml_Script_anon_2473_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 **ppuVar7;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined1 *local_48;
  longlong **local_40;
  undefined1 *local_38;
  
  local_b0 = "gml_Script_anon@1968@gml_Object_oEnemyDamsel_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x61;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x62;
  uStack_10c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar5,in_stack_fffffffffffffee0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  uStack_8c = uStack_ec;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_98);
  local_a8 = 99;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f06b8);
  uStack_10c = 6;
  ppuVar7 = (undefined1 **)(in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar5,ppuVar7);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_10c = uStack_ec;
  uStack_110 = uStack_f0;
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_118 = local_f8;
  }
  else {
    FUN_1400419b0(&local_118,&local_f8);
  }
  FUN_1400460e0(&local_118,uVar3);
  local_98 = local_118;
  uStack_90 = uStack_110;
  uStack_8c = uStack_10c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_98);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_a8 = 100;
  do {
    iVar2 = FUN_140e851f0(&local_108,&local_d8,DAT_141955260,1);
    if ((iVar2 == -2) || (-1 < iVar2)) {
      local_a8 = 0x69;
      uStack_10c = 6;
      local_118 = param_1;
      FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar5 & 0xffffffffffffff00,
                    (ulonglong)ppuVar7 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (&local_f8 != param_3) {
        local_c8 = (undefined4)local_f8;
        uStack_c4 = local_f8._4_4_;
        uStack_c0 = uStack_f0;
        uStack_bc = uStack_ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_c8);
      }
LAB_140977e3d:
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_b8;
      return param_3;
    }
    local_a8 = 0x66;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uStack_10c = 6;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_88,uVar5,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_48 = local_78;
    local_40 = &local_108;
    uStack_8c = 0xf;
    local_98 = (longlong *)0x100000000000149;
    local_c8 = 0x149;
    uStack_c4 = 0x1000000;
    uStack_c0 = uStack_90;
    uStack_bc = 0xf;
    if ((1 << (local_58[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_c8);
    local_38 = local_58;
    uVar5 = CONCAT44(uVar6,DAT_141a10408);
    ppuVar7 = &local_48;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,3,uVar5,&local_48);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_a8 = 0x66;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0668);
      uStack_10c = local_fc;
      uStack_110 = local_100;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
        local_118 = local_108;
      }
      else {
        FUN_1400419b0(&local_118,&local_108);
      }
      FUN_1400462a0(&local_118,uVar3);
      if (&local_118 != param_3) {
        local_c8 = (undefined4)local_118;
        uStack_c4 = local_118._4_4_;
        uStack_c0 = uStack_110;
        uStack_bc = uStack_10c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_c8);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      goto LAB_140977e3d;
    }
    local_a8 = 0x67;
    FUN_140162d40(&local_108,4);
  } while( true );
}

