// gml_Script_anon_27634_DefineTrinkets_TRINKETSINIT @ 0x1406049d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_27634_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  longlong *plVar9;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar11;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_d0 = "gml_Script_anon@27077@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x3fe;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x3ff;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_b8,uVar8,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar8 >> 0x20);
  local_108 = local_b8;
  uStack_100 = uStack_b0;
  uStack_fc = uStack_ac;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_108);
  local_90 = local_68;
  ppuVar11 = &local_90;
  uVar8 = CONCAT44(uVar10,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar8,ppuVar11);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x3ff;
    goto LAB_140605008;
  }
  local_c8 = 0x400;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_b8,uVar8,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar8 >> 0x20);
  local_108 = local_b8;
  uStack_100 = uStack_b0;
  uStack_fc = uStack_ac;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_108);
  local_98 = &local_78;
  local_108 = CONCAT44(uRam0000000141dd4b5c,_DAT_141dd4b58);
  uStack_100 = uRam0000000141dd4b60;
  uStack_fc = DAT_141dd4b64;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_108);
  local_90 = local_68;
  ppuVar12 = &local_98;
  uVar8 = CONCAT44(uVar10,DAT_141a56cf0);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,2,uVar8,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x400;
    goto LAB_140605008;
  }
  local_c8 = 0x401;
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f4e0,0x80000000,&local_b8,uVar8,uVar13);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_141a1f0d0,0x80000000,&local_38,uVar8,uVar13 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar8 >> 0x20);
  local_108 = local_38;
  uStack_100 = uStack_30;
  uStack_fc = uStack_2c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_108);
  local_c8 = 0x402;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_98 = &local_a8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar10,DAT_141a02ef8),&local_98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x402;
    goto LAB_140605008;
  }
  local_c8 = 0x403;
  plVar9 = param_1;
  FUN_140e87170(&local_a8,DAT_141a1f580,0x80000000,&local_48,param_1,param_2);
  uStack_fc = 0xf;
  local_108 = 0x1000000000000ee;
  iVar2 = FUN_140e851f0(&local_48,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 != 0) {
    local_c8 = 0x403;
    goto LAB_140605008;
  }
  local_c8 = 0x404;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  param_2 = param_2 & 0xffffffffffffff00;
  uVar8 = (ulonglong)plVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ffe48,0x80000000,&local_58,uVar8,param_2);
  uStack_fc = 0;
  local_108 = 0x4008000000000000;
  uVar3 = FUN_140e851f0(&local_58,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (uVar3 < 0x80000000) {
    local_c8 = 0x404;
    goto LAB_140605008;
  }
  local_c8 = 0x405;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  param_2 = param_2 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ffe48,0x80000000,&local_f8,uVar8,param_2);
  uVar3 = local_ec & 0xffffff;
  if (uVar3 == 0) {
LAB_140604f3d:
    local_f8 = local_f8 + 1.0;
  }
  else {
    if (uVar3 == 1) {
      local_f8 = (double)FUN_140e4b060(&local_f8);
      local_ec = 0;
      goto LAB_140604f3d;
    }
    if (uVar3 == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_f8 = (double)((longlong)local_f8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_ec = 0;
        goto LAB_140604f3d;
      }
      FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
    }
  }
  FUN_140e87930(uVar4,DAT_1419ffe48,0x80000000,&local_f8);
  local_c8 = 0x406;
  uStack_fc = 0xf;
  local_108 = 0x1000000000000ee;
  FUN_140e87440(&local_108,DAT_1419ffd78,0x80000000,&local_88,uVar8 & 0xffffffffffffff00,
                param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140162d40(&local_88,4);
  uStack_fc = 0xf;
  local_108 = 0x1000000000000ee;
  FUN_140e87930(&local_108,DAT_1419ffd78,0x80000000,&local_88);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
LAB_140605008:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

