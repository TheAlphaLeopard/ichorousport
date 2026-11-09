// gml_Script_anon_39924_DefineTrinkets_TRINKETSINIT @ 0x1406178d0

undefined8 *
gml_Script_anon_39924_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar6;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_b0 = "gml_Script_anon@39571@DefineTrinkets@TRINKETSINIT";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x581;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_90,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x582;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  FUN_140e87440(uVar3,DAT_1419ff978,0x80000000,&local_a0,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  cVar1 = FUN_140e491e0(&local_a0);
  if (cVar1 == '\0') {
    local_a8 = 0x583;
    local_c8 = 0x3ff0000000000000;
    uStack_bc = 0xd;
    local_118 = 0x3ff0000000000000;
    uStack_110 = uStack_c0;
    uStack_10c = 0xd;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    FUN_140e87930(uVar3,DAT_1419ff978,0x80000000,&local_d8);
    local_a8 = 0x585;
    uStack_10c = 0xf;
    local_118 = 0x100000000000106;
    iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (0 < iVar2) {
      do {
        local_a8 = 0x587;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ffca8);
        uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_e0 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
          local_e8 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_e8,puVar4);
        }
        local_res18 = 1;
        uStack_bc = 0;
        local_c8 = 0x4008000000000000;
        FUN_140046500(&local_e8,&local_c8);
        if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        local_78 = (undefined4)local_e8;
        uStack_74 = local_e8._4_4_;
        uStack_70 = uStack_e0;
        uStack_6c = uStack_dc;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_78);
        local_res18 = 0;
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_a8 = 0x588;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ffbe8);
        iVar2 = FUN_140e851f0(uVar3,&local_108,DAT_141955260,1);
        if (iVar2 != -2 && iVar2 < 0) {
          local_a8 = 0x588;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 5;
          uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ffbe8);
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ffdb8);
          uStack_10c = local_fc;
          uStack_110 = local_100;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
            local_118 = local_108;
          }
          else {
            FUN_1400419b0(&local_118,&local_108);
          }
          local_res18 = 2;
          FUN_1400462a0(&local_118,uVar3);
          local_78 = (undefined4)local_118;
          uStack_74 = local_118._4_4_;
          uStack_70 = uStack_110;
          uStack_6c = uStack_10c;
          if ((1 << (local_90[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_90);
          }
          FUN_140041b80(local_90,&local_78);
          local_res18 = 0;
          if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_80 = local_90;
          FUN_140e63610(local_res8,local_res10,&local_f8,1,uVar5,&local_80);
        }
        cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_68,&local_res8,&local_res10);
    if (local_58 != 0) {
      FUN_140e4cd60();
      local_58 = 0;
    }
  }
  else {
    local_a8 = 0x582;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

