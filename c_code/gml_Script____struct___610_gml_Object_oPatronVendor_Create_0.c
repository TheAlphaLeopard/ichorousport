// gml_Script____struct___610_gml_Object_oPatronVendor_Create_0 @ 0x140bd5ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___610_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar9;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  uint local_fc;
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
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_c0 = "gml_Script_anon@8284@___struct___610@gml_Object_oPatronVendor_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x1d0;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_10c = 0;
  local_118 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x1d1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a0a968,0x80000000,&local_a0,uVar4,in_stack_fffffffffffffed0);
  uStack_11c = 0;
  local_128 = 0;
  iVar2 = FUN_140e851f0(&local_a0,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 != 0) {
    local_b8 = 0x1de;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a0a968,0x80000000,&local_a0,uVar4,in_stack_fffffffffffffed0);
    uStack_11c = 0;
    local_128 = 0x3ff0000000000000;
    iVar2 = FUN_140e851f0(&local_a0,&local_128,DAT_141955260,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar2 == 0) {
      local_b8 = 0x1e0;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_48,uVar4 & 0xffffffffffffff00,
                    in_stack_fffffffffffffed0 & 0xffffffffffffff00);
      local_d8 = _DAT_141dda288;
      uStack_d4 = uRam0000000141dda28c;
      uStack_d0 = uRam0000000141dda290;
      uStack_cc = DAT_141dda294;
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_d8);
      local_60 = local_90;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_118,1,&local_48,&local_60);
    }
    goto LAB_140bd64ea;
  }
  local_b8 = 0x1d3;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uVar8 = (undefined4)(uVar4 >> 0x20);
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_11c = 0xf;
  local_128 = 0x10000000000010c;
  local_d8 = 0x10c;
  uStack_d4 = 0x1000000;
  uStack_d0 = uStack_120;
  uStack_cc = 0xf;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_60 = local_90;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,&local_60);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') goto LAB_140bd64ea;
  local_b8 = 0x1d5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_11c = 0xf;
  local_128 = 0x100000200000007;
  local_d8 = 7;
  uStack_d4 = 0x1000002;
  uStack_d0 = uStack_120;
  uStack_cc = 0xf;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_58 = local_80;
  uVar7 = CONCAT44(uVar8,DAT_141a07888);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,&local_58);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0x1d6;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_11c = 0xf;
    local_128 = 0x100000200000007;
    local_d8 = 7;
    uStack_d4 = 0x1000002;
    uStack_d0 = uStack_120;
    uStack_cc = 0xf;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_d8);
    local_50 = local_70;
    FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar8,DAT_141a07788),&local_50);
  }
  local_b8 = 0x1d8;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fec98);
  local_d8 = _DAT_141dda2a8;
  uStack_d4 = uRam0000000141dda2ac;
  uStack_d0 = uRam0000000141dda2b0;
  uStack_cc = DAT_141dda2b4;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_60 = local_90;
  ppuVar9 = &local_60;
  FUN_140e63610(param_1,param_2,&local_118,1,uVar4,ppuVar9);
  local_b8 = 0x1d9;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar3,DAT_141a0a968,0x80000000,&local_108,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar5 = local_fc & 0xffffff;
  if (uVar5 == 0) {
LAB_140bd6354:
    local_108 = local_108 + 1.0;
  }
  else {
    if (uVar5 == 1) {
      local_108 = (double)FUN_140e4b060(&local_108);
      local_fc = 0;
      goto LAB_140bd6354;
    }
    if (uVar5 == 7) {
      local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
    }
    else if (uVar5 == 10) {
      local_108 = (double)((longlong)local_108 + 1);
    }
    else {
      if (uVar5 == 0xd) {
        local_fc = 0;
        goto LAB_140bd6354;
      }
      FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
    }
  }
  FUN_140e87930(uVar3,DAT_141a0a968,0x80000000,&local_108);
LAB_140bd64ea:
  local_b8 = 0x1e4;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0x3ff0000000000000;
  uStack_11c = 0xf;
  local_128 = 0x100000000000058;
  FUN_140e87930(&local_128,DAT_1419fefe8,0x80000000,&local_b0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

