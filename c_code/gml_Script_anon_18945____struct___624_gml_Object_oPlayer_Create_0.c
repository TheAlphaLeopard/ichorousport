// gml_Script_anon_18945____struct___624_gml_Object_oPlayer_Create_0 @ 0x140bec8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_18945____struct___624_gml_Object_oPlayer_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 *local_res8;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar9;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_a0 = "gml_Script_anon@18178@___struct___624@gml_Object_oPlayer_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x397;
  FUN_140041df0(local_58,param_4,1,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x397;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_98 = 0x397;
    uStack_fc = 6;
    in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
    pcVar6 = (code *)((ulonglong)pcVar6 & 0xffffffffffffff00);
    local_108 = param_1;
    FUN_140e87440(&local_108,DAT_141a0a818,0x80000000,&local_78,pcVar6,in_stack_fffffffffffffef0);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((int)local_58[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_50;
      if (&local_78 == puVar2) goto LAB_140beca83;
    }
    local_108 = local_78;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
LAB_140beca83:
  local_98 = 0x398;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 6;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_b8,uVar7,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_b8;
  uStack_100 = uStack_b0;
  uStack_fc = uStack_ac;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_res8 = local_d8;
  ppuVar9 = &local_res8;
  uVar7 = CONCAT44(uVar8,DAT_141a09fe8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar7,ppuVar9);
  if (puVar2 != &local_c8) {
    local_108 = *puVar2;
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_108);
  }
  local_98 = 0x399;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_b8,uVar7,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_b8;
  uStack_100 = uStack_b0;
  uStack_fc = uStack_ac;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_res8 = local_d8;
  if (0 < (int)local_58[0]) {
    puVar5 = (undefined8 *)*local_50;
  }
  ppuVar9 = &local_res8;
  uVar7 = CONCAT44(uVar8,DAT_141a0a068);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar7,ppuVar9);
  uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_100 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_108,puVar2);
  }
  FUN_140042560(&local_108,puVar5);
  local_68 = (undefined4)local_108;
  uStack_64 = local_108._4_4_;
  uStack_60 = uStack_100;
  uStack_5c = uStack_fc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_68);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_98 = 0x39a;
  uStack_fc = 0;
  local_108 = 0;
  iVar1 = FUN_140e851f0(&local_c8,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar1 == 0) {
    local_98 = 0x39b;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar8 = (undefined4)(uVar7 >> 0x20);
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_68 = _DAT_141dc7470;
    uStack_64 = uRam0000000141dc7474;
    uStack_60 = uRam0000000141dc7478;
    uStack_5c = uRam0000000141dc747c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_68);
    local_res8 = local_d8;
    ppuVar9 = &local_res8;
    uVar7 = CONCAT44(uVar8,DAT_141a0a0d8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar7,ppuVar9);
    uStack_fc = local_dc;
    uStack_100 = local_e0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_108 = local_e8;
    }
    else {
      FUN_1400419b0(&local_108,&local_e8);
    }
    FUN_140046500(&local_108,uVar3);
    local_68 = (undefined4)local_108;
    uStack_64 = local_108._4_4_;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_68);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  local_98 = 0x39d;
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0cfc8,0x80000000,&local_90,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_1400460e0(&local_90,&local_e8);
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_90);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,1,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

