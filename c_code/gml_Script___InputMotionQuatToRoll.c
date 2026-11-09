// gml_Script___InputMotionQuatToRoll @ 0x1400ba0c0

undefined8 *
gml_Script___InputMotionQuatToRoll
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 *local_58 [4];
  
  local_e0 = "gml_Script___InputMotionQuatToPitch";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 8;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 10;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (2 < param_4) {
      puVar1 = (undefined8 *)param_5[2];
      goto LAB_1400ba189;
    }
  }
  puVar1 = &DAT_1419df7b0;
LAB_1400ba189:
  uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_120 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  FUN_140042560(&local_128,puVar2);
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (3 < param_4) {
      puVar3 = (undefined8 *)param_5[3];
    }
  }
  local_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_130 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_138,puVar3);
  }
  FUN_140042560(&local_138,puVar2);
  local_fc = local_12c;
  local_100 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_108 = local_138;
  }
  else {
    FUN_1400419b0(&local_108,&local_138);
  }
  FUN_1400462a0(&local_108,&local_128);
  local_10c = 0;
  local_118 = 0x4000000000000000;
  FUN_140042560(&local_118,&local_108);
  if ((local_10c & 0xffffff) == 0) {
    uVar4 = (undefined4)local_118;
  }
  else {
    uVar4 = FUN_140e4b060(&local_118);
  }
  local_88 = FUN_140e78ec0(uVar4,&DAT_bff0000000000000,0x3ff0000000000000);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_58[0] = &local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar5,DAT_141a01e18),local_58);
  if (puVar3 != param_3) {
    local_128 = *puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

