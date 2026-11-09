// gml_Script_round_n @ 0x140259f10

undefined8 *
gml_Script_round_n(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20 [2];
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_154;
  uint local_150 [2];
  undefined8 *local_148;
  undefined1 local_140 [12];
  byte local_134;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  uint *local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [96];
  undefined1 local_78 [56];
  
  local_res18 = 0;
  local_170 = "gml_Script_lerp_smooth";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20[0] = param_4;
  FUN_140041df0(local_150,param_4,4,param_5);
  uVar5 = (ulonglong)local_150[0];
  local_res20[0] = local_150[0];
  param_5 = local_148;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 5;
  puVar4 = &DAT_1419df7b0;
  if ((int)local_res20[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[3];
  }
  iVar1 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_168 = 5;
    if ((int)local_res20[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3f847ae147ae147b;
  }
  local_168 = 6;
  if ((int)local_res20[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  if ((int)local_res20[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_17c = *(uint *)((longlong)puVar2 + 0xc);
  local_180 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_188);
  }
  local_res18 = 4;
  FUN_1400462a0(&local_188,puVar6);
  if ((int)local_res20[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[3];
  }
  if ((local_17c & 0xffffff) == 0) {
    uVar7 = (undefined4)local_188;
  }
  else {
    uVar7 = FUN_140e4b060(&local_188);
  }
  local_198 = FUN_140e78d00(uVar7);
  uStack_18c = 0;
  iVar1 = FUN_140e851f0(&local_198,puVar6,DAT_141955260,1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar1 == -2 || 0 < iVar1) {
    local_130 = &local_160;
    local_128 = local_d8;
    local_120 = &param_5;
    local_118 = local_res20;
    local_110 = local_78;
    local_108 = &local_res8;
    local_100 = &local_res10;
    puVar4 = (undefined8 *)FUN_14025a370(&local_130,local_140);
    uVar3 = 6;
  }
  else {
    if (1 < (int)local_res20[0]) {
      puVar4 = (undefined8 *)param_5[1];
    }
    uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_190 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_198 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_198,puVar4);
    }
    puVar4 = &local_198;
    uVar3 = 5;
  }
  local_res18 = uVar3;
  if (puVar4 != param_3) {
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if (((uVar3 & 2) != 0) &&
     (uVar3 = uVar3 & 0xfffffffd, local_res18 = uVar3, (1 << (local_134 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(local_140);
  }
  if (((uVar3 & 1) != 0) &&
     (local_res18 = uVar3 & 0xfffffffe, (1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  if (0 < (int)local_150[0]) {
    puVar4 = local_148;
    do {
      puVar6 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_148);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

