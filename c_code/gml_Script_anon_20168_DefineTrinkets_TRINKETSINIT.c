// gml_Script_anon_20168_DefineTrinkets_TRINKETSINIT @ 0x1405f90d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_20168_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 **ppuVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_f0 = "gml_Script_anon@19558@DefineTrinkets@TRINKETSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x310;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x311;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a0a7d8,0x80000000,&local_118,uVar4,in_stack_fffffffffffffec0);
  uStack_12c = 0;
  local_138 = 0;
  iVar1 = FUN_140e851f0(&local_118,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar1 == 0) {
    local_e8 = 0x311;
  }
  else {
    local_e8 = 0x313;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_78,uVar4,in_stack_fffffffffffffec0);
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_78,DAT_1419f62b8,0x80000000,&local_88,uVar4,in_stack_fffffffffffffec0);
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a0a7d8,0x80000000,&local_118,uVar4,in_stack_fffffffffffffec0);
    uStack_12c = local_10c;
    uStack_130 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_138 = local_118;
    }
    else {
      FUN_1400419b0(&local_138,&local_118);
    }
    FUN_1400460e0(&local_88,&local_138);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140e87930(&local_78,DAT_1419f62b8,0x80000000,&local_88);
    local_e8 = 0x314;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uStack_12c = 0xf;
    local_138 = 0x1000000000000ee;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_138,DAT_1419ffd78,0x80000000,&local_98,uVar4,in_stack_fffffffffffffec0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140e87440(uVar2,DAT_141a0a7d8,0x80000000,&local_118,uVar4 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uStack_12c = local_10c;
    uStack_130 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_138 = local_118;
    }
    else {
      FUN_1400419b0(&local_138,&local_118);
    }
    FUN_1400462a0(&local_98,&local_138);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 0xf;
    local_138 = 0x1000000000000ee;
    FUN_140e87930(&local_138,DAT_1419ffd78,0x80000000,&local_98);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_e8 = 0x315;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_108 = 0;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    FUN_140e87930(uVar2,DAT_141a0a7d8,0x80000000,&local_108);
    local_e8 = 0x316;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = CONCAT44(uRam00000001419e6ba4,_DAT_1419e6ba0);
    uStack_130 = uRam00000001419e6ba8;
    uStack_12c = uRam00000001419e6bac;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_58 = local_d8;
    local_138 = CONCAT44(uRam00000001419e6ba4,_DAT_1419e6ba0);
    uStack_130 = uRam00000001419e6ba8;
    uStack_12c = uRam00000001419e6bac;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_50 = local_c8;
    local_138 = CONCAT44(uRam00000001419e6b14,_DAT_1419e6b10);
    uStack_130 = uRam00000001419e6b18;
    uStack_12c = uRam00000001419e6b1c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
    local_48 = local_b8;
    local_138 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_130 = uRam00000001419df7c8;
    uStack_12c = uRam00000001419df7cc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_138);
    local_40 = local_a8;
    ppuVar5 = &local_58;
    FUN_14044e5b0(param_1,param_2,&local_128,4,ppuVar5);
    uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
    local_e8 = 0x317;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_12c = 0xf;
    local_138 = 0x10000020000009d;
    local_68 = 0x9d;
    uStack_64 = 0x1000002;
    uStack_60 = uStack_130;
    uStack_5c = 0xf;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_68);
    local_58 = local_d8;
    local_68 = _DAT_1419e6ac0;
    uStack_64 = uRam00000001419e6ac4;
    uStack_60 = uRam00000001419e6ac8;
    uStack_5c = uRam00000001419e6acc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_68);
    local_50 = local_c8;
    local_68 = _DAT_1419df7a0;
    uStack_64 = uRam00000001419df7a4;
    uStack_60 = uRam00000001419df7a8;
    uStack_5c = uRam00000001419df7ac;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_68);
    local_48 = local_b8;
    FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar6,DAT_141a0a2e8),&local_58);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

