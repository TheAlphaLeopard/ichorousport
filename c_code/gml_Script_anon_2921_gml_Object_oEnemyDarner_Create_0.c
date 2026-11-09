// gml_Script_anon_2921_gml_Object_oEnemyDarner_Create_0 @ 0x140998310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2921_gml_Object_oEnemyDarner_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 *local_res8;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar11;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_90 = "gml_Script_anon@2164@BodyPart@gml_Object_oEnemyDarner_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x69;
  FUN_140041df0(local_58,param_4,1,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x69;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x69;
    uStack_fc = 6;
    in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
    pcVar8 = (code *)((ulonglong)pcVar8 & 0xffffffffffffff00);
    local_108 = param_1;
    FUN_140e87440(&local_108,DAT_141a0a818,0x80000000,&local_68,pcVar8,in_stack_fffffffffffffef0);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((int)local_58[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_50;
      if (&local_68 == puVar3) goto LAB_1409984e4;
    }
    local_e8 = (undefined4)local_68;
    uStack_e4 = local_68._4_4_;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
LAB_1409984e4:
  local_88 = 0x6a;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 6;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_a8,uVar9,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = uStack_a0;
  uStack_dc = uStack_9c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_e8);
  local_res8 = local_c8;
  ppuVar11 = &local_res8;
  uVar9 = CONCAT44(uVar10,DAT_141a09fe8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar9,ppuVar11);
  if (puVar3 != &local_b8) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  local_88 = 0x6b;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_a8,uVar9,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = uStack_a0;
  uStack_dc = uStack_9c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_e8);
  local_res8 = local_c8;
  if (0 < (int)local_58[0]) {
    puVar7 = (undefined8 *)*local_50;
  }
  ppuVar11 = &local_res8;
  uVar9 = CONCAT44(uVar10,DAT_141a0a068);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar9,ppuVar11);
  uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_100 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_108,puVar3);
  }
  FUN_140042560(&local_108,puVar7);
  local_e8 = (undefined4)local_108;
  uStack_e4 = local_108._4_4_;
  uStack_e0 = uStack_100;
  uStack_dc = uStack_fc;
  FUN_140041b80(&local_d8,&local_e8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_88 = 0x6c;
  uStack_fc = 0;
  local_108 = 0;
  iVar1 = FUN_140e851f0(&local_b8,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar1 == 0) {
    local_88 = 0x6d;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar10 = (undefined4)(uVar9 >> 0x20);
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_e8 = _DAT_141dc6e90;
    uStack_e4 = uRam0000000141dc6e94;
    uStack_e0 = uRam0000000141dc6e98;
    uStack_dc = uRam0000000141dc6e9c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
    local_res8 = local_c8;
    ppuVar11 = &local_res8;
    uVar9 = CONCAT44(uVar10,DAT_141a0a0d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar9,ppuVar11);
    uStack_fc = local_cc;
    uStack_100 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_108 = local_d8;
      FUN_140046500(&local_108,uVar4);
      local_e8 = (undefined4)local_108;
      uStack_e4 = local_108._4_4_;
      uStack_e0 = uStack_100;
      uStack_dc = uStack_fc;
    }
    else {
      FUN_1400419b0(&local_108,&local_d8);
      FUN_140046500(&local_108,uVar4);
      local_e8 = (undefined4)local_108;
      uStack_e4 = local_108._4_4_;
      uStack_e0 = uStack_100;
      uStack_dc = uStack_fc;
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  local_88 = 0x6f;
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0cfc8,0x80000000,&local_80,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = local_cc;
  uStack_100 = local_d0;
  uVar5 = 1 << ((byte)local_cc & 0x1f) & 0x46;
  if (uVar5 == 0) {
    local_108 = local_d8;
  }
  else {
    FUN_1400419b0(&local_108,&local_d8);
  }
  FUN_140042560(&local_108,uVar2);
  FUN_1400460e0(&local_80,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_80);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if (uVar5 != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,1,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar3 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

