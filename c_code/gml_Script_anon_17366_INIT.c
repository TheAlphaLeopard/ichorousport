// gml_Script_anon_17366_INIT @ 0x1402e9ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_anon_17366_INIT(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_80 = "gml_Script_anon@13497@INIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x203;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x205;
  local_c8 = CONCAT44(uRam0000000141dcf1fc,_DAT_141dcf1f8);
  uStack_c0 = uRam0000000141dcf200;
  uStack_bc = DAT_141dcf204;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_c8);
  local_78 = 0x207;
  uStack_bc = DAT_141dcef34;
  uStack_c0 = DAT_141dcef30;
  if ((1 << ((byte)DAT_141dcef34 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dcef28;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dcef28);
  }
  iVar2 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar2 != 0) {
    local_78 = 0x208;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_c8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_c0 = DAT_1419df7b8;
    uStack_bc = DAT_1419df7bc;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_c8);
    local_40 = local_70;
    puVar4 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_b8,1,&local_40);
    if (puVar4 != &local_a8) {
      local_c8 = *puVar4;
      uStack_c0 = *(undefined4 *)(puVar4 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_c8);
    }
  }
  local_78 = 0x20a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_bc = DAT_141dcf1a4;
  uStack_c0 = DAT_141dcf1a0;
  if ((1 << ((byte)DAT_141dcf1a4 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dcf198;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dcf198);
  }
  uVar1 = uStack_bc;
  local_98 = (undefined4)local_c8;
  uStack_94 = local_c8._4_4_;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_98);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_40 = local_70;
  uStack_bc = DAT_141dceb14;
  uStack_c0 = DAT_141dceb10;
  if ((1 << ((byte)DAT_141dceb14 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dceb08;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dceb08);
  }
  uVar1 = uStack_bc;
  local_98 = (undefined4)local_c8;
  uStack_94 = local_c8._4_4_;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_98);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_38 = local_60;
  local_30 = &local_a8;
  puVar4 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_b8,3,&local_40);
  if (puVar4 != param_3) {
    local_98 = *(undefined4 *)puVar4;
    uStack_94 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_90 = *(undefined4 *)(puVar4 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

