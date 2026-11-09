// gml_Script_rolled_list_clear @ 0x1405e1b90

undefined8 *
gml_Script_rolled_list_clear
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
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
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [32];
  undefined8 local_68;
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 *local_38;
  undefined1 *local_30;
  
  local_a0 = "gml_Script_rolled_list_blocked";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x6d;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x6f;
  uVar3 = 0;
  puVar1 = (undefined8 *)gml_Script_rolled_list_blocked(param_1,param_2,&local_d8,0,0);
  if (puVar1 != &local_68) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_f8);
  }
  local_38 = &local_68;
  uStack_ec = DAT_141dd4de4;
  uStack_f0 = DAT_141dd4de0;
  if ((1 << ((byte)DAT_141dd4de4 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141dd4dd8;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141dd4dd8);
  }
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_100 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_108);
  }
  FUN_1400460e0(&local_108,&local_f8);
  if (1 < param_4) {
    puVar1 = (undefined8 *)param_5[1];
  }
  uStack_dc = local_fc;
  uStack_e0 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_108;
  }
  else {
    FUN_1400419b0(&local_e8,&local_108);
  }
  FUN_1400460e0(&local_e8,puVar1);
  local_b8 = (undefined4)local_e8;
  uStack_b4 = local_e8._4_4_;
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_b8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_30 = local_58;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar3,DAT_1419fcba8),&local_38);
  if (puVar1 != param_3) {
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

