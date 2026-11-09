// gml_Script_PoisonDealDamage @ 0x14043a290

undefined8 *
gml_Script_PoisonDealDamage
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = "gml_Script_map_value";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x65;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_14043a310:
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
    if (param_4 < 5) goto LAB_14043a310;
    puVar1 = (undefined8 *)param_5[4];
  }
  local_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_60 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_68);
  }
  FUN_1400462a0(&local_68,puVar3);
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (2 < param_4) {
      puVar1 = (undefined8 *)param_5[2];
      goto LAB_14043a36b;
    }
  }
  puVar1 = &DAT_1419df7b0;
LAB_14043a36b:
  local_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_70 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_78);
  }
  FUN_1400462a0(&local_78,puVar3);
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar1 = &DAT_1419df7b0;
    }
    else {
      puVar1 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    puVar1 = (undefined8 *)*param_5;
  }
  local_8c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_90 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  FUN_1400462a0(&local_98,puVar3);
  local_9c = local_8c;
  local_a0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_a8 = local_98;
  }
  else {
    FUN_1400419b0(&local_a8,&local_98);
  }
  FUN_140046500(&local_a8,&local_78);
  local_ac = local_9c;
  local_b0 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_b8 = local_a8;
  }
  else {
    FUN_1400419b0(&local_b8,&local_a8);
  }
  FUN_140042560(&local_b8,&local_68);
  if (3 < param_4) {
    puVar2 = (undefined8 *)param_5[3];
  }
  uStack_7c = local_ac;
  uStack_80 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_88 = local_b8;
  }
  else {
    FUN_1400419b0(&local_88,&local_b8);
  }
  FUN_1400460e0(&local_88,puVar2);
  if (&local_88 != param_3) {
    local_38 = (undefined4)local_88;
    uStack_34 = local_88._4_4_;
    uStack_30 = uStack_80;
    uStack_2c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

