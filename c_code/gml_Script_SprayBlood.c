// gml_Script_SprayBlood @ 0x1402340d0

undefined8 *
gml_Script_SprayBlood
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_bias";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 7;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar4 = (undefined4)*puVar2;
  }
  else {
    uVar4 = FUN_140e4b060();
  }
  uVar1 = FUN_140e78ec0(uVar4,0x3ddb7cdfd9d7bdbb,0x3fefffffff768fa1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_48 = 8;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_5c = 0;
  local_68 = 0x3ff0000000000000;
  local_88 = uVar1;
  FUN_1400462a0(&local_68,puVar2);
  local_8c = 0;
  local_98 = 0x3ff0000000000000;
  FUN_140046500(&local_98,&local_88);
  local_ac = local_8c;
  local_b0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_b8 = local_98;
  }
  else {
    FUN_1400419b0(&local_b8,&local_98);
  }
  uStack_cc = 7;
  local_d8 = 2;
  FUN_1400462a0(&local_b8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_bc = local_ac;
  local_c0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_c8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_b8);
  }
  FUN_140042560(&local_c8,&local_68);
  local_6c = local_bc;
  local_70 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_78 = local_c8;
  }
  else {
    FUN_1400419b0(&local_78,&local_c8);
  }
  uStack_cc = 7;
  local_d8 = 1;
  FUN_1400460e0(&local_78,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_a8,puVar3);
  }
  FUN_140046500(&local_a8,&local_78);
  if (&local_a8 != param_3) {
    local_d8 = (undefined4)local_a8;
    uStack_d4 = local_a8._4_4_;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

