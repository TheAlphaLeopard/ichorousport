// gml_Script_MouseGuiY @ 0x1403b9890

undefined8 * gml_Script_MouseGuiY(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_60 = "gml_Script_MouseCenterInWindow";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xd;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x11;
  uVar2 = CONCAT44(uVar3,DAT_141a01008);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,0,uVar2,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_f8,puVar1);
  }
  uStack_dc = 0;
  local_e8 = 0x4000000000000000;
  FUN_140046500(&local_f8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uVar2 = CONCAT44(uVar3,DAT_141a56d80);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,0,uVar2,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_100 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_108,puVar1);
  }
  FUN_1400460e0(&local_108,&local_f8);
  local_e8 = local_108;
  uStack_e0 = uStack_100;
  uStack_dc = uStack_fc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_50 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_141a01018);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,0,uVar2,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_100 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_108,puVar1);
  }
  uStack_dc = 0;
  local_e8 = 0x4000000000000000;
  FUN_140046500(&local_108,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uVar2 = CONCAT44(uVar3,DAT_141a571b0);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,0,uVar2,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_f8,puVar1);
  }
  FUN_1400460e0(&local_f8,&local_108);
  local_e8 = local_f8;
  uStack_e0 = uStack_f0;
  uStack_dc = uStack_ec;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_48 = local_78;
  FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar3,DAT_1419f5548),&local_50);
  local_58 = 0x12;
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
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

