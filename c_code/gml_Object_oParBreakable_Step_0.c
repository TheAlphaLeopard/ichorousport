// gml_Object_oParBreakable_Step_0 @ 0x140b9f0e0

void gml_Object_oParBreakable_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffec0;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_e0 = "gml_Object_oParBreakable_Alarm_3";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_d8 = 2;
  uStack_12c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_108,uVar7,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_118,uVar7,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = local_fc;
  uStack_130 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_138 = local_108;
  }
  else {
    FUN_1400419b0(&local_138,&local_108);
  }
  uStack_11c = 7;
  local_128 = (longlong *)CONCAT44(local_128._4_4_,4);
  FUN_1400460e0(&local_138,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_138;
  uStack_120 = uStack_130;
  uStack_11c = uStack_12c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_58 = local_b8;
  uStack_12c = local_10c;
  uStack_130 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_138 = local_118;
  }
  else {
    FUN_1400419b0(&local_138,&local_118);
  }
  uStack_11c = 7;
  local_128 = (longlong *)CONCAT44(local_128._4_4_,8);
  FUN_1400462a0(&local_138,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_138;
  uStack_120 = uStack_130;
  uStack_11c = uStack_12c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_50 = local_a8;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000000000149;
  local_138 = (longlong *)0x100000000000149;
  uStack_130 = uStack_120;
  uStack_12c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_138);
  local_48 = local_98;
  ppuVar9 = &local_58;
  uVar7 = CONCAT44(uVar8,DAT_141a10408);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_d0,3,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_11c = 6;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_108,uVar7,uVar10);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_11c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_118,uVar7,uVar10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_12c = local_fc;
    uStack_130 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_138 = local_108;
    }
    else {
      FUN_1400419b0(&local_138,&local_108);
    }
    uStack_11c = 7;
    local_128 = (longlong *)CONCAT44(local_128._4_4_,4);
    FUN_1400462a0(&local_138,&local_128);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = local_138;
    uStack_120 = uStack_130;
    uStack_11c = uStack_12c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_128);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_40 = local_88;
    uStack_12c = local_10c;
    uStack_130 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_138 = local_118;
    }
    else {
      FUN_1400419b0(&local_138,&local_118);
    }
    uStack_11c = 7;
    local_128 = (longlong *)CONCAT44(local_128._4_4_,8);
    FUN_1400462a0(&local_138,&local_128);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = local_138;
    uStack_120 = uStack_130;
    uStack_11c = uStack_12c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_38 = local_78;
    uStack_11c = 0xf;
    local_128 = (longlong *)0x100000000000149;
    local_138 = (longlong *)0x100000000000149;
    uStack_130 = uStack_120;
    uStack_12c = 0xf;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_138);
    local_30 = local_68;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar8,DAT_141a10408),&local_40);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') goto LAB_140b9f756;
  }
  local_d8 = 3;
  FUN_140edd0e0(param_1,param_2,0,0);
LAB_140b9f756:
  local_d8 = 5;
  uStack_12c = DAT_141dda064;
  uStack_130 = DAT_141dda060;
  if ((1 << ((byte)DAT_141dda064 & 0x1f) & 0x46U) == 0) {
    local_138 = DAT_141dda058;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dda058);
  }
  iVar2 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_d8 = 6;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f78);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

