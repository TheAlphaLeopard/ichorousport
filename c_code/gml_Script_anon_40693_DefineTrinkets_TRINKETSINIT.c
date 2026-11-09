// gml_Script_anon_40693_DefineTrinkets_TRINKETSINIT @ 0x1406183b0

undefined8 *
gml_Script_anon_40693_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_res18 [2];
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 **ppuVar6;
  ulonglong uVar7;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
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
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  
  local_d0 = "gml_Script_anon@40203@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x597;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_48,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x598;
  uStack_130._4_4_ = 0xf;
  local_138 = 0x1000000000000ee;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(&local_138,DAT_141a57250,0x80000000,&local_68,uVar4,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_130._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_68,DAT_1419f6278,0x80000000,&local_78,uVar4,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_138 = local_78;
  uStack_130 = CONCAT44(uStack_6c,uStack_70);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_138);
  local_c8 = 0x599;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_res18[0] = &local_118;
  ppuVar6 = local_res18;
  uVar4 = CONCAT44(uVar5,DAT_141a02ef8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_1419ff888,0x80000000,&local_90,uVar4,uVar7);
    cVar1 = FUN_140e491e0(&local_90);
    if (cVar1 != '\0') {
      local_c8 = 0x59b;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      local_138 = local_118;
      uStack_130 = CONCAT44(uStack_10c,uStack_110);
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_138);
      FUN_140e87930(uVar2,DAT_1419ffd98,0x80000000,&local_a0);
      local_c8 = 0x59c;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      FUN_140e87440(uVar2,DAT_1419ffe48,0x80000000,&local_e8,uVar4 & 0xffffffffffffff00,
                    uVar7 & 0xffffffffffffff00);
      uStack_130._0_4_ = local_e0;
      uStack_130._4_4_ = local_dc;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
        local_138 = local_e8;
      }
      else {
        FUN_1400419b0(&local_138,&local_e8);
      }
      uVar5 = uStack_130._4_4_;
      local_58 = local_138;
      uStack_50 = CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_58);
      if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e87930(uVar2,DAT_1419ffdf8,0x80000000,&local_b0);
      local_c8 = 0x59d;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = 0;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      FUN_140e87930(uVar2,DAT_1419ff838,0x80000000,&local_f8);
      local_c8 = 0x59e;
      uStack_130 = CONCAT44(0xd,(undefined4)uStack_130);
      local_138 = 0;
      local_58 = 0;
      uStack_50 = uStack_130;
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_58);
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      FUN_140e87930(uVar2,DAT_1419ff7e8,0x80000000,&local_c0);
      local_c8 = 0x59f;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = 0xc010000000000000;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      FUN_140e87930(uVar2,DAT_1419ffc78,0x80000000,&local_108);
      goto LAB_140618891;
    }
  }
  local_c8 = 0x599;
LAB_140618891:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_48,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

