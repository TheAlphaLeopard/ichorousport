// gml_Script_anon_15555_DefineTrinkets_TRINKETSINIT @ 0x1405f25e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_15555_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_90 = "gml_Script_anon@15149@DefineTrinkets@TRINKETSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x260;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x262;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_e8,uVar8,0);
  uStack_10c = 0;
  local_118 = 0;
  iVar2 = FUN_140e851f0(&local_e8,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 0xd;
  if (iVar2 < 1) {
    local_f8 = 0;
  }
  else {
    local_f8 = 0x3ff0000000000000;
  }
  local_88 = 0x263;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a58110,0x80000000,&local_80,uVar8,0);
  iVar2 = FUN_140e851f0(&local_f8,&local_80,DAT_141955260,0);
  if (iVar2 != 0) {
    local_88 = 0x265;
    uStack_10c = 0xf;
    local_118 = 0x1000000000000ee;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_1419f5ba8,0x80000000,&local_a8,uVar8,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    cVar1 = FUN_140e491e0(&local_f8);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      uStack_10c = 0;
      local_118 = 0x3fe0000000000000;
      puVar5 = &local_118;
    }
    else {
      uStack_fc = 0;
      local_108 = 0x4000000000000000;
      puVar5 = &local_108;
    }
    FUN_140042560(&local_a8,puVar5);
    if ((bVar6) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_118);
    }
    if ((!bVar6) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_108);
    }
    uStack_fc = 0xf;
    local_108 = 0x1000000000000ee;
    FUN_140e87930(&local_108,DAT_1419f5ba8,0x80000000,&local_a8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_88 = 0x266;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    local_108 = local_f8;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_108);
    FUN_140e87930(uVar4,DAT_141a58110,0x80000000,&local_b8);
  }
  local_88 = 0x269;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_e8,uVar8 & 0xffffffffffffff00,0);
  uStack_10c = local_dc;
  uStack_110 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_118 = local_e8;
  }
  else {
    FUN_1400419b0(&local_118,&local_e8);
  }
  FUN_1400462a0(&local_118,uVar3);
  local_108 = local_118;
  uStack_100 = uStack_110;
  uStack_fc = uStack_10c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_108);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_50 = local_70;
  local_108 = CONCAT44(uRam0000000141dc6764,_DAT_141dc6760);
  uStack_100 = uRam0000000141dc6768;
  uStack_fc = uRam0000000141dc676c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_108);
  local_48 = local_60;
  puVar5 = (undefined8 *)FUN_140e79090(&local_d8,2,&local_50);
  if (puVar5 != &local_c8) {
    local_108 = *puVar5;
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_108);
  }
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_c8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

