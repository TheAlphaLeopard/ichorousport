// gml_Script___InputMotionQuatToYaw @ 0x1400ba550

undefined8 *
gml_Script___InputMotionQuatToYaw
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [64];
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_f0 = "gml_Script___InputMotionQuatToRoll";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 8;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 10;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
    if (param_4 < 2) {
      puVar1 = &DAT_1419df7b0;
    }
    else {
      puVar1 = (undefined8 *)param_5[1];
    }
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
    puVar1 = (undefined8 *)param_5[1];
  }
  local_13c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_140 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_148);
  }
  FUN_140042560(&local_148,puVar2);
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (3 < param_4) {
      puVar1 = (undefined8 *)param_5[3];
      goto LAB_1400ba684;
    }
  }
  puVar1 = &DAT_1419df7b0;
LAB_1400ba684:
  local_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_160 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_168);
  }
  FUN_140042560(&local_168,puVar2);
  local_14c = local_15c;
  local_150 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_158 = local_168;
  }
  else {
    FUN_1400419b0(&local_158,&local_168);
  }
  FUN_1400460e0(&local_158,&local_148);
  uStack_12c = 0;
  local_138 = 0x4000000000000000;
  FUN_140042560(&local_138,&local_158);
  local_128 = local_138;
  uStack_120 = uStack_130;
  uStack_11c = uStack_12c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_150 = *(undefined4 *)(puVar2 + 1);
  local_58 = local_98;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_158);
  }
  FUN_140042560(&local_158,puVar2);
  if (0 < param_4) {
    puVar3 = (undefined8 *)*param_5;
  }
  local_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_160 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_168,puVar3);
  }
  FUN_140042560(&local_168,puVar3);
  local_13c = local_15c;
  local_140 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_148 = local_168;
  }
  else {
    FUN_1400419b0(&local_148,&local_168);
  }
  FUN_1400460e0(&local_148,&local_158);
  uStack_11c = 0;
  local_128 = 0x4000000000000000;
  FUN_140042560(&local_128,&local_148);
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  FUN_1400462a0(&local_138,&local_128);
  local_108 = (undefined4)local_138;
  uStack_104 = local_138._4_4_;
  uStack_100 = uStack_130;
  uStack_fc = uStack_12c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_50 = local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_118,2,CONCAT44(uVar4,DAT_141a01e78),&local_58);
  if (puVar3 != param_3) {
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

